#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880ff3c(undefined4 param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  uVar1 = FUN_089c9d1c();
  sVar2 = FUN_089c9d1c(param_1);
  iVar12 = (int)sVar2;
  sVar2 = FUN_089c9d1c(param_1);
  iVar11 = (int)sVar2;
  sVar2 = FUN_089c9d1c(param_1);
  iVar10 = (int)sVar2;
  sVar2 = FUN_089c9d1c(param_1);
  sVar3 = FUN_089c9d1c(param_1);
  iVar9 = (int)sVar3;
  sVar3 = FUN_089c9d1c(param_1);
  iVar8 = (int)sVar3;
  sVar3 = FUN_089c9d1c(param_1);
  iVar7 = (int)sVar3;
  sVar3 = FUN_089c9d1c(param_1);
  iVar6 = (int)sVar3;
  iVar4 = FUN_0882c13c();
  if (((iVar4 != 0) && (uVar1 < 5)) && (uVar1 != 1)) {
    if (uVar1 == 2) {
      uVar5 = FUN_0882c15c();
      FUN_0882c7e4(uVar5,iVar12,iVar11,iVar10,(int)sVar2,iVar9,iVar8,iVar7,1,iVar6);
    }
    else if (uVar1 == 3) {
      uVar5 = FUN_0882c15c();
      FUN_0882c7e4(uVar5,iVar12,iVar11,iVar10,0xffffffff,iVar9,iVar8,iVar7,0,iVar6);
    }
    else if (uVar1 == 4) {
      uVar5 = FUN_0882c15c();
      FUN_0882cfa0(uVar5,iVar11);
    }
    else {
      uVar5 = FUN_0882c15c();
      FUN_0882c7e4(uVar5,iVar12,iVar11,iVar10,(int)sVar2,iVar9,iVar8,iVar7,0,iVar6);
    }
  }
  return 0;
}

