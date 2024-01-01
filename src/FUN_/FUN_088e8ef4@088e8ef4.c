#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e8ef4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  
  iVar1 = FUN_088e7364(param_1,0);
  if (iVar1 == 0) {
    switch(*(undefined4 *)(param_1 + 0x3a8)) {
    case 0:
      FUN_088e5bec(param_1,0x29,1,1);
      *(undefined4 *)(param_1 + 0x3a8) = 1;
      (**(code **)(*(int *)(param_1 + 0x14) + 0x174))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x170),0);
      *(undefined4 *)(param_1 + 0x450) = 1;
      *(undefined4 *)(param_1 + 0x3b0) = 0x1e;
      break;
    case 1:
      if (*(int *)(param_1 + 0x3b0) == 0) {
        *(undefined4 *)(param_1 + 0x3a8) = 2;
      }
      else {
        *(int *)(param_1 + 0x3b0) = *(int *)(param_1 + 0x3b0) + -1;
      }
      break;
    case 2:
      uVar3 = atan2f(*(float *)(param_1 + 0x3c8) - *(float *)(param_1 + 0x28),
                     *(float *)(param_1 + 0x3c0) - *(float *)(param_1 + 0x20));
      fVar4 = (float)FUN_088defe8(uVar3,0x3f800000,0x3d8efa35,param_1);
      if (fVar4 * fVar4 < 0.01) {
        *(undefined4 *)(param_1 + 0x3a8) = 3;
        FUN_088def24(0x3e4ccccd,param_1,0xb,0,0);
        *(undefined4 *)(param_1 + 0x3b0) = 0x3c;
      }
      else {
        FUN_088def24(0x3e4ccccd,param_1,8,0,0);
      }
      break;
    case 3:
      if (*(int *)(param_1 + 0x3b0) == 0) {
        *(undefined4 *)(param_1 + 0x3a8) = 5;
        FUN_088def24(0x3e4ccccd,param_1,0,1,0);
        *(undefined4 *)(param_1 + 0x3b0) = 0x1e;
      }
      else {
        *(int *)(param_1 + 0x3b0) = *(int *)(param_1 + 0x3b0) + -1;
      }
      break;
    case 5:
      if (*(int *)(param_1 + 0x3b0) == 0) {
        *(undefined4 *)(param_1 + 0x3a8) = 6;
        FUN_088e5bec(param_1,0x29,0,1);
      }
      else {
        uVar2 = *(int *)(param_1 + 0x3b0) - 1;
        *(uint *)(param_1 + 0x3b0) = uVar2;
        if ((int)uVar2 < 0) {
          uVar2 = -(uVar2 & 1);
        }
        else {
          uVar2 = uVar2 & 1;
        }
        FUN_088e60a8((float)uVar2,param_1,0x29);
      }
      break;
    case 6:
      iVar1 = (**(code **)(*(int *)(param_1 + 0x14) + 0x94))
                        (0x3f800000,0x40400000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x90)
                         ,param_1 + 0x3d0,0,0);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x3a8) = 7;
      }
      break;
    case 7:
      fVar4 = (float)FUN_088defe8(*(undefined4 *)(param_1 + 0x414),0x3f800000,0x3d8efa35,param_1);
      if (fVar4 * fVar4 < 0.01) {
        *(undefined4 *)(param_1 + 0x3a8) = 8;
      }
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x3a0) = 0;
      *(undefined4 *)(param_1 + 0x3a8) = 0;
      *(undefined *)(param_1 + 0x400) = 0;
      (**(code **)(*(int *)(param_1 + 0x14) + 0x174))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x170),1);
      *(undefined4 *)(param_1 + 0x450) = 0;
    }
  }
  return;
}

