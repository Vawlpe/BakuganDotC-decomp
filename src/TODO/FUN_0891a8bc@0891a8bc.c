#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x0891a90c)

void FUN_0891a8bc(int param_1)

{
  (&DAT_08b00bdc)[(int)(*(uint *)(&DAT_08a9bde8 + *(char *)(param_1 + 0x74) * 4) & 0xffff) >> 5] =
       (&DAT_08b00bdc)
       [(int)(*(uint *)(&DAT_08a9bde8 + *(char *)(param_1 + 0x74) * 4) & 0xffff) >> 5] |
       1 << (*(uint *)(&DAT_08a9bde8 + *(char *)(param_1 + 0x74) * 4) & 0x1f);
  DAT_08b00c50 = DAT_08b00c50 | 1;
  return;
}

