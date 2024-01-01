#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895918c(int param_1)

{
  int iVar1;
  
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5162) * 4));
  FUN_089a51fc(0x3f800000,0x3f800000,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5162) * 4));
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516e) * 4));
  FUN_089a51fc(0x3f800000,0x3f800000,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516e) * 4));
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x51aa) * 4));
  FUN_089a51fc(0x3f800000,0x3f800000,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x51aa) * 4));
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x51fa) * 4));
  FUN_089a51fc(0x3f800000,0x3f800000,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x51fa) * 4));
  iVar1 = *(int *)(param_1 + 0x1c);
  *(float *)(param_1 + 0x5158) =
       *(float *)(*(int *)(iVar1 + (uint)*(ushort *)(param_1 + 0x5162) * 4) + 100) -
       *(float *)(*(int *)(iVar1 + (uint)*(ushort *)(param_1 + 0x516e) * 4) + 100);
  *(float *)(param_1 + 0x515c) =
       *(float *)(*(int *)(iVar1 + (uint)*(ushort *)(param_1 + 0x51aa) * 4) + 100) -
       *(float *)(*(int *)(iVar1 + (uint)*(ushort *)(param_1 + 0x51fa) * 4) + 100);
  return;
}

