#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089506bc(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      return;
    }
    iVar2 = FUN_0890ad3c();
    if (iVar2 != 0) {
      return;
    }
    FUN_089c8734(0,0x1a,1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  else if (1 < iVar2) {
    if (2 < iVar2) {
      return;
    }
    FUN_089c87e4(0);
    FUN_089c879c(0x3f800000,0);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    return;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = **(int **)(param_1 + 0x1c);
  bVar1 = false;
  if ((*(byte *)(iVar2 + 2) & 0x10) == 0) {
    if ((*(byte *)(iVar2 + 2) & 0x40) == 0) {
      if (((int)*(char *)(iVar2 + 2) & 0x80U) == 0) {
        if ((*(byte *)(iVar2 + 2) & 0x20) == 0) {
          if ((*(byte *)(iVar2 + 5) & 0x20) != 0) {
            uVar4 = *(undefined4 *)(iVar3 + 0x90);
            goto LAB_089508ac;
          }
          if ((*(byte *)(iVar2 + 9) & 0x10) == 0) {
            if (((int)*(char *)(iVar2 + 9) & 0x80U) == 0) {
              if ((*(byte *)(iVar2 + 3) & 0x40) == 0) {
                if ((*(byte *)(iVar2 + 4) & 8) == 0) {
                  uVar4 = *(undefined4 *)(iVar3 + 0x90);
                  goto LAB_089508ac;
                }
                bVar1 = true;
              }
              else {
                *(float *)(iVar3 + 0x9c) = *(float *)(iVar3 + 0x9c) + 0.01745329;
              }
            }
            else {
              *(float *)(iVar3 + 0x90) = *(float *)(iVar3 + 0x90) - 0.01;
              *(float *)(iVar3 + 0x94) = *(float *)(iVar3 + 0x94) - 0.01;
            }
          }
          else {
            *(float *)(iVar3 + 0x90) = *(float *)(iVar3 + 0x90) + 0.01;
            *(float *)(iVar3 + 0x94) = *(float *)(iVar3 + 0x94) + 0.01;
          }
        }
        else {
          *(float *)(iVar3 + 0x60) = *(float *)(iVar3 + 0x60) + 1.0;
        }
      }
      else {
        *(float *)(iVar3 + 0x60) = *(float *)(iVar3 + 0x60) + -1.0;
      }
    }
    else {
      *(float *)(iVar3 + 100) = *(float *)(iVar3 + 100) + 1.0;
    }
  }
  else {
    *(float *)(iVar3 + 100) = *(float *)(iVar3 + 100) + -1.0;
  }
  uVar4 = *(undefined4 *)(iVar3 + 0x90);
LAB_089508ac:
  FUN_089f4954(uVar4,*(undefined4 *)(iVar3 + 0x94),*(undefined4 *)(iVar3 + 0x9c),iVar3,0);
  if (bVar1) {
    FUN_0890a598(param_1,0);
    iVar2 = DONE_NotZero_DAT_08AC5874();
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x2c);
    }
    else {
      uVar4 = DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar4,0,0,0);
      iVar2 = *(int *)(param_1 + 0x2c);
    }
    *(int *)(param_1 + 0x2c) = iVar2 + 1;
  }
  return;
}

