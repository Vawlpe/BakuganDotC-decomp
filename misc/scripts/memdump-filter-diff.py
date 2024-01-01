"""
A python script to filter out constantly changing values from memdumps
Essentially for each scenario we recursively "anti-diff" (filter) the
    dumps together, then take those filtered dumps and perform a diff,
    and preety-print the final diff for the user
"""

import itertools
import time
import sys
import os
import numpy as np


# Basic 1d array diff
def diff(a, b):
    return np.choose(np.equal(a, b), [[a, b], np.array([0x0101], dtype=np.uint16)])


# Oposite of `diff`, essentially filters out changes
def anti_diff(a, b):
    return np.choose(np.not_equal(a, b), [a, np.array([0x0101], dtype=np.uint16)])


# Recursively filter all the files in one scenario together
# (Opens the files 2 at a time to avoid memory usage issues)
def recursive_anti_diff_files(*paths):
    remaining = list(paths)
    while len(remaining) > 1:
        a = remaining.pop()
        b = remaining.pop()
        a = np.fromfile(a, dtype=np.uint8) if type(a) is str else a
        b = np.fromfile(b, dtype=np.uint8) if type(b) is str else b
        remaining.append(anti_diff(a, b))
    return remaining[0]


# Performs all the necessary steps to get the final diff
def magic_diff(a, b):
    filt_a = recursive_anti_diff_files(*a)
    filt_b = recursive_anti_diff_files(*b)
    return diff(filt_a, filt_b)


# Splits the cli arg list into the 2 scenarios
def parse_argv(argv):
    if len(argv) == 3:
        return [[e.path for e in os.scandir(argv[1]) if e.is_file()],
         [e.path for e in os.scandir(argv[2]) if e.is_file()]]
    elif len(argv) < 6:
        print("Usage: main.py <scenarioA1> <scenarioA2> [scenarioAX...] \"|\" <scenarioB1> <scenarioB2> [scenarioBX...]")
        print("     : main.py <dirScenarioA> <dirScenarioB>")
        exit(0)
    else:
        return [list(group) for k, group in itertools.groupby(argv[1:], lambda x: x=="|") if not k]


# Preety-print the final diff
def print_diff(a, b):
    def f(n):
        return f"{n:02X}" if n != 0x101 else "XX"

    def f16(l):
        return f"{f(l[0])} {f(l[1])} {f(l[2])} {f(l[3])} {f(l[4])} {f(l[5])} {f(l[6])} {f(l[7])}    {f(l[8])} {f(l[9])} {f(l[10])} {f(l[11])} {f(l[12])} {f(l[13])} {f(l[14])} {f(l[15])}"

    last_printed_index = 0
    for i in range(0, resA.size, 16):
        win_a = resA[i:i + 16]
        win_b = resB[i:i + 16]

        if np.equal(win_a, win_b).all() and np.equal(win_a, np.array([0x0101], dtype=np.uint16)).all():
            continue

        if i - last_printed_index > 16:
            print("...")
        last_printed_index = i

        print(f"{i:08X}   |   {f16(win_a)}   |   {f16(win_b)}")


# Entry Point
if __name__ == '__main__':
    scenarios = parse_argv(sys.argv)

    tic = time.perf_counter()
    result = magic_diff(scenarios[0], scenarios[1])
    toc = time.perf_counter()
    print(f"Time elapsed: {toc - tic:0.4f}\n")

    resA, resB = np.split(result, 2, 0)
    resA, resB = *resA, *resB

    print_diff(resA, resB)
