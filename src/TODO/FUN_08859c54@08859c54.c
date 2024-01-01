#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08859c54(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_088247dc(DAT_08abd5b0,0xffffffff,param_1,2);
  iVar2 = *(int *)(param_1 + 0x6d0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x20c);
  }
  else {
    (**(code **)(*(int *)(iVar2 + 0x20) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 8),3);
    *(undefined4 *)(param_1 + 0x6d0) = 0;
    iVar2 = *(int *)(param_1 + 0x20c);
  }
  *(undefined4 *)(iVar2 + 0x148) = 0;
  *(uint *)(iVar2 + 0x130) = *(uint *)(iVar2 + 0x130) & 0xfffffffe;
  *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
       *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) & 0xffffffbf;
  *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
       *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) & 0xfffffffb;
  iVar2 = _DONE_NotZero_DAT_08AC5874();
  if (iVar2 != 0) {
    uVar1 = _DONE_Get_DAT_08AC5874();
    FUN_089c6350(uVar1,0x200261,0,0);
  }
  return;
}

