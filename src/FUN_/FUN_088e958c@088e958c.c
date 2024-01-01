#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e958c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  iVar3 = FUN_088e7364(param_1,0);
  if (iVar3 == 0) {
    switch(*(undefined4 *)(param_1 + 0x3a8)) {
    case 0:
      iVar3 = FUN_088e1948();
      FUN_088e5bec(param_1,0x29,1,1);
      *(undefined4 *)(param_1 + 0x3a8) = 1;
      *(undefined4 *)(param_1 + 0x3b0) = 0x1e;
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined *)(*(int *)(param_1 + 0x418) + 0x25) = 0;
      *(undefined4 *)(param_1 + 0x440) = in_V72;
      *(undefined4 *)(param_1 + 0x444) = in_V76;
      *(undefined4 *)(param_1 + 0x448) = in_V7A;
      *(undefined4 *)(param_1 + 0x44c) = in_V7E;
      iVar3 = *(int *)(iVar3 + 0x418);
      uVar5 = *(undefined4 *)(iVar3 + 0x164);
      uVar1 = *(undefined4 *)(iVar3 + 0x168);
      uVar2 = *(undefined4 *)(iVar3 + 0x16c);
      *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(iVar3 + 0x160);
      *(undefined4 *)(param_1 + 0x444) = uVar5;
      *(undefined4 *)(param_1 + 0x448) = uVar1;
      *(undefined4 *)(param_1 + 0x44c) = uVar2;
      break;
    case 1:
      iVar3 = *(int *)(param_1 + 0x3b0) + -1;
      *(int *)(param_1 + 0x3b0) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x3a8) = 2;
      }
      break;
    case 2:
      uVar5 = atan2f(*(float *)(param_1 + 0x448) - *(float *)(param_1 + 0x28),
                     *(float *)(param_1 + 0x440) - *(float *)(param_1 + 0x20));
      fVar6 = (float)FUN_088defe8(uVar5,0x3f800000,0x3e0efa35,param_1);
      if (fVar6 * fVar6 < 0.01) {
        FUN_088def24(0x3e4ccccd,param_1,0xb,0,0);
      }
      else {
        FUN_088def24(0x3e4ccccd,param_1,8,0,0);
        *(undefined4 *)(param_1 + 0x3a8) = 3;
      }
      break;
    case 3:
      iVar3 = (**(code **)(*(int *)(param_1 + 0x14) + 0x94))
                        (0x3f000000,0x41400000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x90)
                         ,param_1 + 0x440,0,0);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x3a8) = 4;
      }
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x3b0) = 2;
      *(undefined4 *)(param_1 + 0x3a8) = 5;
      break;
    case 5:
      FUN_088def24(0x3e4ccccd,param_1,0xd,0,0);
      *(undefined4 *)(param_1 + 0x3a8) = 6;
      *(int *)(param_1 + 0x3b0) = *(int *)(param_1 + 0x3b0) + -1;
    case 6:
      if (*(char *)(param_1 + 0xb0) != '\0') {
        if (*(int *)(param_1 + 0x3b0) < 1) {
          FUN_088def24(0x3e4ccccd,param_1,0,0,0);
          *(undefined4 *)(param_1 + 0x3a8) = 7;
        }
        else {
          FUN_088def24(0,param_1,0,0,1);
          *(undefined4 *)(param_1 + 0x3a8) = 5;
        }
      }
      break;
    case 7:
      uVar5 = atan2f(*(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x28),
                     *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 0x20));
      fVar6 = (float)FUN_088defe8(uVar5,0x3f800000,0x3e0efa35,param_1);
      if (fVar6 * fVar6 < 0.01) {
        FUN_088def24(0x3e4ccccd,param_1,0xb,0,0);
      }
      else {
        FUN_088def24(0x3e4ccccd,param_1,8,0,0);
        *(undefined4 *)(param_1 + 0x3a8) = 8;
      }
      break;
    case 8:
      iVar3 = (**(code **)(*(int *)(param_1 + 0x14) + 0x94))
                        (0x3f000000,0,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x90),
                         param_1 + 0x3d0,0,0);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x3a8) = 9;
      }
      break;
    case 9:
      fVar6 = (float)FUN_088defe8(*(undefined4 *)(param_1 + 0x414),0x3f800000,0x3e0efa35,param_1);
      if (fVar6 * fVar6 < 0.01) {
        *(undefined4 *)(param_1 + 0x3b0) = 0x1e;
        *(undefined4 *)(param_1 + 0x3a8) = 10;
        FUN_088def24(0x3e4ccccd,param_1,0,0,0);
      }
      else {
        FUN_088def24(0x3e4ccccd,param_1,8,0,0);
      }
      break;
    case 10:
      if (*(int *)(param_1 + 0x3b0) == 0) {
        FUN_088e5bec(param_1,0x29,0,1);
        *(undefined *)(*(int *)(param_1 + 0x418) + 0x25) = 1;
        *(undefined4 *)(param_1 + 0x3a0) = 0;
        *(undefined4 *)(param_1 + 0x3a8) = 0;
      }
      else {
        uVar4 = *(int *)(param_1 + 0x3b0) - 1;
        *(uint *)(param_1 + 0x3b0) = uVar4;
        if ((int)uVar4 < 0) {
          uVar4 = -(uVar4 & 1);
        }
        else {
          uVar4 = uVar4 & 1;
        }
        FUN_088e60a8((float)uVar4,param_1,0x29);
      }
    }
  }
  return;
}

