#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0892ebd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(iVar1 + 8) & 0x10) != 0) {
    iVar1 = (int)*(char *)(param_1 + 0x74);
    if (iVar1 < 10) {
      *(char *)(param_1 + 0x74) = (char)((uint)((iVar1 + 10) * 0x1000000) >> 0x18);
      return 1;
    }
    *(char *)(param_1 + 0x74) = (char)((uint)((iVar1 + -10) * 0x1000000) >> 0x18);
    return 1;
  }
  if ((*(byte *)(iVar1 + 8) & 0x40) != 0) {
    iVar1 = (int)*(char *)(param_1 + 0x74);
    if (iVar1 < 10) {
      *(char *)(param_1 + 0x74) = (char)((uint)((iVar1 + 10) * 0x1000000) >> 0x18);
      return 1;
    }
    *(char *)(param_1 + 0x74) = (char)((uint)((iVar1 + -10) * 0x1000000) >> 0x18);
    return 1;
  }
  if (((int)*(char *)(iVar1 + 8) & 0x80U) != 0) {
    iVar1 = (int)*(char *)(param_1 + 0x74);
    if (iVar1 % 10 == 0) {
      *(char *)(param_1 + 0x74) = (char)((uint)((iVar1 + 9) * 0x1000000) >> 0x18);
      return 1;
    }
    *(char *)(param_1 + 0x74) = (char)((uint)((iVar1 + -1) * 0x1000000) >> 0x18);
    return 1;
  }
  if ((*(byte *)(iVar1 + 8) & 0x20) != 0) {
    iVar1 = (int)*(char *)(param_1 + 0x74);
    if (iVar1 % 10 == 9) {
      *(char *)(param_1 + 0x74) = (char)((uint)((iVar1 + -9) * 0x1000000) >> 0x18);
      return 1;
    }
    *(char *)(param_1 + 0x74) = (char)((uint)((iVar1 + 1) * 0x1000000) >> 0x18);
    return 1;
  }
  return 0;
}

