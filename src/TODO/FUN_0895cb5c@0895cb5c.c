#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895cb5c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  FUN_089a5408(0x40800000,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4),
               param_1 + (uint)*(ushort *)(param_1 + 0x5176) * 0x28 + 0x78,3);
  return;
}

