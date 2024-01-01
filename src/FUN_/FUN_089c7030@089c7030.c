#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c7030(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = false;
  FUN_089bb728(*(undefined4 *)(param_1 + 0x8bd4));
  FUN_089c8270(param_1);
  FUN_089bb790(*(undefined4 *)(param_1 + 0x8bd4));
  iVar2 = FUN_089d5814();
  if (iVar2 != 0) {
    uVar3 = FUN_089d5830();
    iVar2 = FUN_089d6150(uVar3);
    if (iVar2 != 0) {
      bVar1 = true;
    }
  }
  iVar2 = FUN_089c4814(0);
  if (iVar2 != 0) {
    if (bVar1) {
      uVar3 = FUN_089c487c(0);
      iVar2 = FUN_089c4ac0(uVar3);
      if (iVar2 != 6) {
        uVar3 = FUN_089c487c(0);
        FUN_089c4af8(uVar3,6);
      }
    }
    else {
      uVar3 = FUN_089c487c(0);
      iVar2 = FUN_089c4ac0(uVar3);
      if (iVar2 == 6) {
        uVar3 = FUN_089c487c(0);
        FUN_089c4af8(uVar3,0);
      }
    }
  }
  return;
}

