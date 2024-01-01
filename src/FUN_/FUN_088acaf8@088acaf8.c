#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088acaf8(int param_1,int param_2)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_V7D;
  
  if (*(int *)(param_1 + 0x164) == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar3 = FUN_089d7d74(0x40,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x164) = uVar3;
    memset_jak(uVar3,0,0x40);
    *(undefined4 *)(param_1 + 700) = 0;
    iVar4 = *(int *)(param_1 + 700);
  }
  else {
    iVar4 = *(int *)(param_1 + 700);
  }
  if (iVar4 < 0x10) {
    iVar4 = *(int *)(param_1 + 700);
    *(int *)(param_1 + 700) = iVar4 + 1;
    *(int *)(*(int *)(param_1 + 0x164) + iVar4 * 4) = param_2;
    if (*(int *)(param_1 + 0x218) == 0x1b) {
      auVar1 = vscl_t(*(undefined (*) [12])(param_2 + 0x70),0x3f19999a);
      *(int *)*(undefined (*) [12])(param_2 + 0x70) = auVar1._0_4_;
      *(int *)(param_2 + 0x74) = auVar1._4_4_;
      *(int *)(param_2 + 0x78) = auVar1._8_4_;
      *(undefined4 *)(param_2 + 0x7c) = in_V7D;
    }
  }
  return;
}

