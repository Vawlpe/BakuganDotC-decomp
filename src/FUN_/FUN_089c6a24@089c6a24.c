#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089c6a24(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  
  iVar2 = 0;
  while (*(int *)(param_1 + 0x1d0) != 0) {
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x20;
    if (0x1f < iVar2) {
      return -1;
    }
  }
  *(int *)(param_1 + 0x1d0) = param_3;
  *(undefined2 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = param_2;
  *(undefined4 *)(param_1 + 0x1e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
  uVar1 = *(undefined4 *)(DAT_08ac5870 + 8);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(DAT_08ac5870 + 4);
  *(undefined4 *)(param_1 + 0x1ec) = uVar1;
  if ((param_3 >> 0x1c & 7U) == 4) {
    fVar3 = (float)FUN_089c5dfc();
    iVar4 = (int)(fVar3 * 127.0);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if (0x7f < iVar4) {
      iVar4 = 0x7f;
    }
    *(char *)(param_1 + 0x1ea) = (char)iVar4;
    *(char *)(param_1 + 0x1e8) = (char)iVar4;
  }
  if ((param_3 >> 0x1b & 1U) == 0) {
    return iVar2;
  }
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined *)(param_1 + 0x1ea) = 0;
  *(undefined *)(param_1 + 0x1e8) = 0;
  return iVar2;
}

