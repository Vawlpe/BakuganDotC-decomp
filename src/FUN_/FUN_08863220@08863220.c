#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08863220(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  
  if (0 < *(int *)(param_1 + 0x198)) {
    iVar1 = FUN_088871a0(param_1,param_2);
    if (iVar1 == 0) {
      fVar2 = *(float *)(param_1 + 0x650);
      goto LAB_08863290;
    }
    *(float *)(param_1 + 0x650) =
         (float)(int)*(short *)(iVar1 + 2) * 0.01 * *(float *)(param_1 + 0x650);
  }
  fVar2 = *(float *)(param_1 + 0x650);
LAB_08863290:
  if (fVar2 < 0.1) {
    *(undefined4 *)(param_1 + 0x650) = 0x3dcccccd;
  }
  return;
}

