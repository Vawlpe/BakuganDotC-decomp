#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e7c5c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x3a8);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      if (*(char *)(DAT_08abf710 + 0x88) != '\0') {
        *(undefined *)(DAT_08abf710 + 0x88) = 0;
      }
      iVar1 = *(int *)(param_1 + 0x14);
      if ((*(int *)(DAT_08ac58c4 + 4) == 0x14) || (*(int *)(DAT_08ac58c4 + 4) == 5)) {
        iVar1 = (**(code **)(iVar1 + 0x94))
                          (*(float *)(param_1 + 0x410) * 1.5,0x40c00000,
                           param_1 + *(short *)(iVar1 + 0x90),param_1 + 0x3d0,0,1);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0x3a8) = 1;
        }
      }
      else {
        iVar1 = (**(code **)(iVar1 + 0x94))
                          (*(float *)(param_1 + 0x410),0x40000000,param_1 + *(short *)(iVar1 + 0x90)
                           ,param_1 + 0x3d0,0,0);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0x3a8) = 1;
        }
      }
    }
  }
  else if (iVar1 < 2) {
    fVar3 = (float)FUN_088defe8(*(undefined4 *)(param_1 + 0x414),0x3f800000,0x3d0efa35,param_1);
    if (fVar3 * fVar3 < 0.01) {
      *(undefined4 *)(param_1 + 0x3a8) = 2;
    }
    if ((0x4d < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 0x51)) {
      uVar2 = 9;
      if (fVar3 < 0.0) {
        uVar2 = 10;
      }
      FUN_088def24(0x3e4ccccd,param_1,uVar2,1,0);
    }
  }
  else if (iVar1 < 3) {
    *(undefined4 *)(param_1 + 0x3a0) = 0;
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    (**(code **)(*(int *)(param_1 + 0x14) + 0x174))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x170),1);
  }
  return;
}

