#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088acaf8(int param_1,int param_2)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined *ptr;
  int iVar3;
  undefined4 in_V7D;
  
  if (*(int *)(param_1 + 0x164) == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    ptr = (undefined *)FUN_089d7d74(0x40,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    *(undefined **)(param_1 + 0x164) = ptr;
    memset_jak(ptr,0,0x40);
    *(undefined4 *)(param_1 + 700) = 0;
    iVar3 = *(int *)(param_1 + 700);
  }
  else {
    iVar3 = *(int *)(param_1 + 700);
  }
  if (iVar3 < 0x10) {
    iVar3 = *(int *)(param_1 + 700);
    *(int *)(param_1 + 700) = iVar3 + 1;
    *(int *)(*(int *)(param_1 + 0x164) + iVar3 * 4) = param_2;
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

