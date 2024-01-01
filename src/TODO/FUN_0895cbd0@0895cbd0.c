#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0895cbd0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_089a91a0(0x40800000,0x40400000,0x41000000,0,
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4),
                       param_1 + (uint)*(ushort *)(param_1 + 0x5176) * 0x28 + 0x78,3);
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4);
  if (0.6 < *(float *)(iVar2 + 0xbc)) {
    *(undefined4 *)(iVar2 + 0xbc) = 0x3f19999a;
  }
  return iVar1 != 0;
}

