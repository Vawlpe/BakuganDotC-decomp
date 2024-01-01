#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08805408(int param_1,int param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_089d9680();
  if (iVar1 != 0) {
    FUN_089e0860(*(undefined4 *)(param_1 + 0x98));
    uVar2 = FUN_089d9674();
    FUN_089d9914(uVar2,"editman_mot.gmo");
    uVar2 = FUN_089d9674();
    uVar2 = FUN_089d9c84(uVar2,*(undefined4 *)(PTR_DAT_08ab9d1c + param_2 * 8 + 4));
    *(undefined4 *)(param_1 + 0xa0) = uVar2;
    FUN_089df400(0x3e4ccccd,*(undefined4 *)(param_1 + 0x98),uVar2,param_3);
  }
  return;
}

