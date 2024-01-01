#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880fde8(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar1 = FUN_089c9d1c();
  puVar2 = (undefined4 *)FUN_089c9ed8(param_1,2);
  uVar7 = *puVar2;
  uVar8 = FUN_089c9e3c(param_1);
  uVar9 = FUN_089c9e3c(param_1);
  uVar10 = FUN_089c9e3c(param_1);
  iVar3 = FUN_089c9d1c(param_1);
  FUN_089c9e3c(param_1);
  FUN_089c9e3c(param_1);
  FUN_089c9e3c(param_1);
  FUN_089c9e3c(param_1);
  iVar4 = FUN_08860188(uVar7);
  iVar5 = FUN_088660e0();
  iVar6 = FUN_0884b248();
  if ((iVar6 != 0) && (iVar5 != 0)) {
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        uVar7 = FUN_0884b268();
        FUN_0884dd94(uVar7);
      }
    }
    else if (((1 < iVar1) && (iVar1 < 3)) && (iVar4 != 0)) {
      uVar7 = FUN_0884b268();
      FUN_0884dcb0(uVar8,uVar9,uVar10,uVar7,iVar4,iVar3 != 0,0,0);
    }
  }
  return 0;
}

