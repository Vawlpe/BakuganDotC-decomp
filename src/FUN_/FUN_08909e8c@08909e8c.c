#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08909e8c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0xb0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  param_3 = param_3 * 4;
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089f840c(iVar2,param_2,param_1 + 0x54);
    iVar3 = iVar2;
  }
  *(int *)(*(int *)(param_1 + 0x50) + param_3) = iVar3;
  iVar3 = FUN_089f89cc(*(undefined4 *)(*(int *)(param_1 + 0x50) + param_3),0);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar3 + 0x34);
    if (*(int *)(iVar3 + 0x1c) != 0) {
      *(uint *)(param_1 + 100) = (uint)*(ushort *)(*(int *)(iVar3 + 0x1c) + 0xc);
      FUN_089f8918(*(undefined4 *)(*(int *)(param_1 + 0x50) + param_3),0);
    }
  }
  return;
}

