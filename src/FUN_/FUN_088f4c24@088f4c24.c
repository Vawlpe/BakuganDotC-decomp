#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088f4c24(int param_1)

{
  if (*(char *)(param_1 + 0xcb) != '\0') {
    *(char *)(param_1 + 0xcb) = *(char *)(param_1 + 0xcb) + -1;
    return (int)*(char *)(param_1 + (uint)*(byte *)(param_1 + 0xcb) + 0x89);
  }
  return -1;
}

