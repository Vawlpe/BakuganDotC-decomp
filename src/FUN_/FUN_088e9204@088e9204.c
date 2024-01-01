#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e9204(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  
  iVar1 = FUN_088e7364(param_1,0);
  if (iVar1 == 0) {
    uVar2 = *(uint *)(param_1 + 0x3a8);
    if (uVar2 < 6) {
      if (uVar2 == 1) {
        if (*(int *)(param_1 + 0x3b0) == 0) {
          FUN_088e5bec(param_1,0x2a,0,1);
          *(undefined4 *)(param_1 + 0x3a8) = 2;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x3b0) + -1;
          *(int *)(param_1 + 0x3b0) = iVar1;
          if (iVar1 == 0x32) {
            FUN_088e5bec(param_1,0x2a,1,1);
          }
        }
      }
      else if (uVar2 == 2) {
        uVar3 = atan2f(*(float *)(param_1 + 0x3c8) - *(float *)(param_1 + 0x28),
                       *(float *)(param_1 + 0x3c0) - *(float *)(param_1 + 0x20));
        fVar4 = (float)FUN_088defe8(uVar3,0x3f800000,*(undefined4 *)(param_1 + 0x424),param_1);
        if (fVar4 * fVar4 < 0.01) {
          *(undefined4 *)(param_1 + 0x3a8) = 3;
        }
        else if (fVar4 < 0.0) {
          FUN_088def24(0x3e4ccccd,param_1,10,1,0);
        }
        else {
          FUN_088def24(0x3e4ccccd,param_1,9,1,0);
        }
      }
      else if (uVar2 == 3) {
        FUN_088def24(0x3e4ccccd,param_1,0,0,0);
        *(undefined4 *)(param_1 + 0x3a8) = 4;
        *(undefined4 *)(param_1 + 0x3b0) = 0x46;
      }
      else if (uVar2 == 4) {
        if (*(int *)(param_1 + 0x3b0) == 0) {
          FUN_088e5bec(param_1,0x2a,0,1);
          *(undefined4 *)(param_1 + 0x3a8) = 5;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x3b0) + -1;
          *(int *)(param_1 + 0x3b0) = iVar1;
          if (iVar1 == 0x32) {
            FUN_088e5bec(param_1,0x2a,1,1);
          }
        }
      }
      else if (uVar2 == 5) {
        fVar4 = (float)FUN_088defe8(*(undefined4 *)(param_1 + 0x414),0x3f800000,
                                    *(undefined4 *)(param_1 + 0x424),param_1);
        if (fVar4 * fVar4 < 0.01) {
          *(undefined4 *)(param_1 + 0x3a0) = 0;
          *(undefined4 *)(param_1 + 0x3a8) = 0;
        }
        else if (fVar4 < 0.0) {
          FUN_088def24(0x3e4ccccd,param_1,10,1,0);
        }
        else {
          FUN_088def24(0x3e4ccccd,param_1,9,1,0);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x3a8) = 1;
        *(undefined4 *)(param_1 + 0x3b0) = 0x46;
        FUN_088def24(0x3e4ccccd,param_1,0,0,0);
      }
    }
  }
  return;
}

