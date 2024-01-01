#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d0d48(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float local_20;
  float local_1c;
  
  local_20 = 0.0;
  local_1c = 0.0;
  FUN_088d0998(*param_2,param_2[2],param_1,&local_20,&local_1c);
  iVar1 = param_3 * 4;
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x60) =
       *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x60) - local_20;
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 100) =
       *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100) - local_1c;
  if (param_3 != 0xe) {
    fVar2 = (float)atan2f(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4));
    FUN_089f4954(0x3f800000,0x3f800000,(fVar2 + 3.141593) - 1.570796,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1),0);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
  }
  return;
}

