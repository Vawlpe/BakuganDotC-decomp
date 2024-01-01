#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899b858(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x10bc);
  if (fVar1 < 1.0) {
    fVar1 = fVar1 + 0.1;
    *(float *)(param_1 + 0x10bc) = fVar1;
  }
  fVar1 = fVar1 * 0.2 + 1.0;
  if (1.2 < fVar1) {
    fVar1 = 1.2;
  }
  FUN_089a51fc(fVar1,fVar1,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109c) * 4));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109c) * 4) + 0x68) =
       0xc3fa0000;
  FUN_089a51fc(fVar1,fVar1,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109c) * 4 + 0x20));
  *(undefined4 *)
   (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109c) * 4 + 0x20) + 0x68) = 0xc3fa8000
  ;
  FUN_089a51fc(fVar1,fVar1,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 0x68) = 0xc3fb0000;
  *(undefined4 *)
   (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109c) * 4 + 0x40) + 0x68) = 0xc3fb8000
  ;
  *(undefined4 *)
   (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109c) * 4 + 0xa8) + 0x68) = 0xc3fb8000
  ;
  return;
}

