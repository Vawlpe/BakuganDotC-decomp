#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0886ab40(int param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x5ac) + *(int *)(param_1 + 0x5b4) * 4);
  uVar4 = 0xffffffff;
  *(uint *)(param_1 + 0x5bc) = param_2;
  if (iVar5 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  if (param_2 < 5) {
    if (param_2 == 1) {
      uVar4 = (uint)*(short *)(iVar5 + 6);
    }
    else {
      if (param_2 == 2) {
        sVar2 = *(short *)(iVar5 + 8);
      }
      else {
        if (param_2 == 3) {
          uVar4 = (uint)*(short *)(iVar5 + 10);
          goto LAB_0886abfc;
        }
        if (param_2 == 4) {
          uVar4 = (*(short *)(iVar5 + 10) + 1) * 0x10000 >> 0x10;
          goto LAB_0886abfc;
        }
        uVar4 = (uint)*(short *)(iVar5 + 4);
        if (uVar4 != 0xffffffff) goto LAB_0886abfc;
        *(undefined4 *)(param_1 + 0x5bc) = 2;
        sVar2 = *(short *)(iVar5 + 8);
      }
      uVar4 = (uint)sVar2;
      if (uVar4 != 0xffffffff) {
        uVar4 = (int)*(short *)(iVar5 + 8) & 0xfff;
        *(uint *)(param_1 + 0x5d0) = ((int)*(short *)(iVar5 + 8) & 0xf000U) >> 0xc;
      }
    }
  }
LAB_0886abfc:
  if (uVar4 == 0xffffffff) {
    return 0;
  }
  uVar3 = 0;
  if ((param_2 == 1) || (0 < *(int *)(param_1 + 0x5d0))) {
    uVar3 = 1;
    cVar1 = *(char *)(param_1 + 0xb0);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xb0);
  }
  if (cVar1 == '\0') {
    uVar6 = 0x3dcccccd;
  }
  else {
    uVar6 = 0x3cf5c28f;
  }
  FUN_088608d8(uVar6,param_1,uVar4,uVar3,0);
  return 1;
}

