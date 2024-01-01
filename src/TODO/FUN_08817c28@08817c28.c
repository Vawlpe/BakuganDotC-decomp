#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08817c28(int param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = (uint)*(byte *)(param_1 + *param_2);
  if (uVar1 == 0) {
    return -1;
  }
  *param_2 = *param_2 + 1;
  if (uVar1 == 10) {
    return -3;
  }
  if (uVar1 == 1) {
    return -4;
  }
  uVar2 = (uint)*(byte *)(param_1 + *param_2);
  *param_3 = 0x41400000;
  if ((0xa0 < uVar1) && (uVar1 < 0xe0)) {
    *param_3 = 0x40c00000;
    return uVar1 - 0x41;
  }
  if (uVar1 < 0x81) {
    *param_3 = 0x40c00000;
    return uVar1 - 0x20;
  }
  if (uVar2 != 0) {
    *param_2 = *param_2 + 1;
    if (uVar2 < 0x20) {
      return -2;
    }
    if (((0x87 < uVar1) && (uVar1 < 0x98)) && ((uVar2 == 0xfc || (uVar2 == 0x9e)))) {
      pbVar4 = &DAT_08ab0170;
      uVar6 = 0;
      do {
        if ((*pbVar4 == uVar1) && (pbVar4[1] == uVar2)) {
          return ((int)uVar6 >> 1) + 0x5e8;
        }
        uVar7 = uVar6 + 2;
        pbVar4 = &DAT_08ab0172 + uVar6;
        uVar6 = uVar7;
      } while (uVar7 < 0x3e);
    }
    if (0xdf < uVar1) {
      uVar1 = uVar1 - 0x40;
    }
    if (0x7f < uVar2) {
      uVar2 = uVar2 - 1;
    }
    if ((int)uVar2 < 0x9e) {
      iVar5 = uVar1 * 2 + -0x102;
      iVar3 = uVar2 - 0x40;
    }
    else {
      iVar5 = uVar1 * 2 + -0x101;
      iVar3 = uVar2 - 0x9e;
    }
    return iVar5 * 0x5d + iVar3 + 0xbd;
  }
  return -1;
}

