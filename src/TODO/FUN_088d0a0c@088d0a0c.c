#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d0a0c(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_30;
  float local_2c [2];
  
  local_30 = 0.0;
  local_2c[0] = 0.0;
  FUN_088d0998(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x20),
               *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x28),param_1,&local_30,local_2c);
  fVar1 = local_2c[0];
  fVar4 = local_30;
  fVar5 = *(float *)(**(int **)(param_1 + 0x1c) + 0x60);
  fVar3 = (float)FUN_089f4944();
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x60) = fVar5 + fVar3 * 0.5 + fVar4;
  fVar3 = *(float *)(**(int **)(param_1 + 0x1c) + 100);
  fVar4 = (float)FUN_089f494c();
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100) = fVar3 + fVar4 * 0.5 + fVar1;
  fVar4 = (float)atan2f(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4));
  fVar4 = fVar4 + 3.141593;
  if (3.141593 < fVar4) {
    fVar4 = fVar4 - 6.283185;
  }
  else if (fVar4 <= -3.141593) {
    fVar4 = fVar4 + 6.283185;
  }
  FUN_089f4954(0x3f800000,0x3f800000,fVar4,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xffffffdf;
  return;
}

