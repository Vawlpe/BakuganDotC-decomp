#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088afc3c(int param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  
  uVar3 = *(uint *)(param_1 + 800);
  if (6 < uVar3) {
    return;
  }
  iVar4 = (int)(uVar3 * 4) >> 2;
  switch(uVar3) {
  case 0:
    *(int *)(param_1 + 800) = iVar4 + 1;
  case 1:
    FUN_089df8a4(param_1);
    iVar4 = *(int *)(param_1 + 0x130);
    *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar4 + 0xa8) = *(undefined4 *)(param_1 + 0x48);
    if ((*(char *)(param_1 + 0xb0) != '\0') ||
       (iVar4 = FUN_089df684(0x3f7d70a4,param_1), iVar4 != 0)) {
      *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 1;
    }
    break;
  case 2:
    *(undefined2 *)(param_1 + 0x32c) = 300;
    iVar5 = *(int *)(*(int *)(param_1 + 0x130) + 0x14);
    if (iVar5 != 0) {
      FUN_08a1473c(iVar5,*(undefined2 *)(*(int *)(param_1 + 0x130) + 0x20));
      iVar4 = *(int *)(param_1 + 800);
    }
    *(int *)(param_1 + 800) = iVar4 + 1;
    sVar1 = *(short *)(param_1 + 0x32c);
    goto LAB_088afd14;
  case 3:
    sVar1 = *(short *)(param_1 + 0x32c);
LAB_088afd14:
    if (sVar1 == 0) {
      *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 1;
    }
    else {
      *(short *)(param_1 + 0x32c) = sVar1 + -1;
    }
    break;
  case 4:
    uVar2 = *(ushort *)(param_1 + 0x32c);
    if (uVar2 == 0x20) {
      *(undefined4 *)(param_1 + 0x338) = 0x3f800000;
      *(int *)(param_1 + 800) = iVar4 + 1;
    }
    else {
      if ((uVar2 & 2) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x338) = uVar7;
      *(ushort *)(param_1 + 0x32c) = uVar2 + 1;
    }
    break;
  case 5:
    fVar6 = *(float *)(param_1 + 0x338) - 0.05;
    *(float *)(param_1 + 0x338) = fVar6;
    if (fVar6 <= 0.0) {
      *(undefined4 *)(param_1 + 0x338) = 0;
      *(int *)(param_1 + 800) = iVar4 + 1;
    }
    break;
  case 6:
    FUN_089de940(param_1,0);
    *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 1;
  }
  return;
}

