#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ddf98(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    if ((*(ushort *)(param_2 + 2) & 0x400) != 0) {
      FUN_089de140(param_1,param_2,param_3);
    }
    uVar2 = (uint)*(ushort *)(param_2 + 0x20);
    if (uVar2 != 0) {
      uVar1 = (uint)*(short *)(param_2 + 0x22);
      if (((int)uVar1 < 0) || ((int)uVar2 < (int)uVar1)) {
        iVar3 = *(int *)(param_2 + 0x14);
      }
      else {
        iVar3 = *(int *)(param_2 + 0x14);
        uVar2 = uVar1;
      }
      iVar3 = iVar3 + uVar2 * 0x30;
      if (*(float *)(iVar3 + 0x20) < 1.0) {
        FUN_089de084(param_1,param_2,iVar3,param_3);
        FUN_089de1e0(param_1,param_2,param_3);
      }
      else {
        FUN_089e1430(param_1,0x3f800000,param_2,iVar3,param_3);
      }
    }
  }
  return;
}

