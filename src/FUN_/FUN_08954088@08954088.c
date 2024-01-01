#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08954088(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0xa40);
  if (fVar3 < 1.0) {
    fVar3 = fVar3 + 0.2;
    *(float *)(param_1 + 0xa40) = fVar3;
  }
  fVar3 = fVar3 * 0.01999998 + 1.0;
  if (1.02 < fVar3) {
    fVar3 = 1.02;
  }
  iVar2 = 0xb;
  iVar1 = FUN_0880d354();
  if (iVar1 != 0) {
    iVar2 = 0xe;
  }
  FUN_089a51fc(fVar3,fVar3,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + (iVar2 + *(char *)(param_1 + 0xa44)) * 4))
  ;
  *(undefined4 *)
   (*(int *)(*(int *)(param_1 + 0x1c) + (iVar2 + *(char *)(param_1 + 0xa44)) * 4) + 0x68) =
       0xc3480000;
  FUN_089a51fc(fVar3,fVar3,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xa44) * 4 + 0x44));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xa44) * 4 + 0x44) + 0x68)
       = 0xc3490000;
  FUN_089a51fc(fVar3,fVar3,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x54));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x54) + 0x68) = 0xc34a0000;
  return;
}

