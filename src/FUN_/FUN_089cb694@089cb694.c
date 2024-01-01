#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cb694(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  iVar1 = FUN_089c9d1c();
  uVar2 = FUN_089c9d1c(param_1);
  puVar5 = (undefined4 *)0x0;
  iVar4 = -1;
  if (iVar1 == 0) {
    iVar4 = FUN_089c9d1c(param_1);
  }
  else {
    puVar5 = (undefined4 *)FUN_089c9ed8(param_1,2);
  }
  iVar3 = FUN_089bfa40(uVar2);
  switch(iVar1) {
  case 0:
    if (iVar4 < 1) {
      FUN_089bf6e8(uVar2,100);
    }
    else {
      FUN_089bf6e8(uVar2,iVar4);
    }
    break;
  case 1:
    FUN_089bf850(uVar2);
    break;
  case 2:
    iVar1 = FUN_089bf93c(uVar2,1);
    if (iVar1 == 1) {
      uVar6 = 2;
    }
    break;
  case 3:
    *puVar5 = 0;
    if ((iVar3 != 0) && (iVar1 = FUN_089bf2d4(iVar3,1), iVar1 != 0)) {
      *puVar5 = 1;
    }
    break;
  case 4:
    if (iVar3 != 0) {
      FUN_089bf2f0(iVar3,1);
    }
    break;
  case 5:
    if (iVar3 != 0) {
      FUN_089bf300(iVar3,1);
    }
    break;
  case 6:
    *puVar5 = 0;
    if ((iVar3 != 0) && (iVar1 = FUN_089bf2d4(iVar3,2), iVar1 != 0)) {
      *puVar5 = 1;
    }
    break;
  case 7:
    if (iVar3 != 0) {
      FUN_089bf2f0(iVar3,2);
    }
    break;
  case 8:
    if (iVar3 != 0) {
      FUN_089bf300(iVar3,2);
    }
  }
  return uVar6;
}

