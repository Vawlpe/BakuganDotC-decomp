#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08906af0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((uint)*(ushort *)(param_2 + 0x18) == *(uint *)(param_1 + 0x30)) {
    if (((*(short *)(param_2 + 0x1a) == 0) &&
        (iVar1 = FUN_089068d0(param_1,*(undefined2 *)(param_2 + 0x2a)), iVar1 != -1)) &&
       (iVar2 = _DONE_NotZero_DAT_08AC5874(), iVar2 != 0)) {
      uVar3 = _DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar3,iVar1,0,0);
    }
    if (param_2 != 0) {
      (**(code **)(*(int *)(param_2 + 0x14) + 0xc))
                (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 8),3);
    }
  }
  return;
}

