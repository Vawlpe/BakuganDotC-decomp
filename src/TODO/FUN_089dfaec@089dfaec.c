#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dfaec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xe0) = param_2;
  *(undefined4 *)(param_1 + 0xe4) = param_3;
  FUN_089e1a48();
  FUN_089daaf4(param_2);
  FUN_089daad0(*(undefined4 *)(param_1 + 0xe0));
  FUN_08a198dc(*(undefined4 *)(param_1 + 0x130),param_2,param_3,0);
  FUN_089e1eb8(param_1);
  FUN_089dfddc(param_1,DAT_08ac5c34,0);
  FUN_08a15740(*(undefined4 *)(param_1 + 0x130),0xffff);
  FUN_08a158d8(*(undefined4 *)(param_1 + 0x130),0xffff,0xfcff);
  FUN_08a15924(*(undefined4 *)(param_1 + 0x130),4,4);
  FUN_08a15924(*(undefined4 *)(param_1 + 0x130),1,0);
  FUN_08a15a20(0,*(undefined4 *)(param_1 + 0x130),0);
  FUN_089ddf7c(0,*(undefined4 *)(param_1 + 0x130));
  if (*(short *)(*(int *)(param_1 + 0x130) + 0x18) == 0) {
    iVar1 = *(int *)(param_1 + 0xf4);
  }
  else {
    FUN_08a1667c();
    iVar1 = *(int *)(param_1 + 0xf4);
  }
  if (0 < iVar1) {
    FUN_089e0860(param_1);
  }
  return;
}

