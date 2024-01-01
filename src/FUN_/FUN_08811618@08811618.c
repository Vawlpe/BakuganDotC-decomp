#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08811618(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_089c9da8();
  uVar2 = FUN_089c9d1c(param_1);
  iVar3 = FUN_089bfa40(0x2738);
  iVar4 = FUN_089c9b48(0x20,DAT_08ac58c8);
  if (iVar4 != 0) {
    return 0;
  }
  iVar4 = FUN_0884b248();
  if ((iVar4 != 0) && (iVar4 = FUN_0884b268(), *(char *)(iVar4 + 0x55c) != '\0')) {
    return 0;
  }
  if (iVar1 == 0) {
    uVar5 = 2;
    if (iVar3 == 0) {
      iVar1 = FUN_089c4814(0xffffffff);
      if (iVar1 != 0) {
        FUN_089bf6e8(0x2738,100);
      }
    }
    else {
      iVar1 = FUN_089d6790(uVar2);
      if (iVar1 != 0) {
        uVar5 = 0;
      }
    }
  }
  else {
    uVar5 = 0;
    if (iVar3 != 0) {
      uVar5 = 2;
      iVar1 = FUN_089d67f8();
      if (iVar1 != 0) {
        FUN_089bf7a8(iVar3,1);
      }
    }
  }
  return uVar5;
}

