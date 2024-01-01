#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a00534(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  
  uVar1 = FUN_089c9da8();
  puVar2 = (undefined4 *)FUN_089c9ed8(param_1,2);
  uVar3 = FUN_089c9e94(param_1);
  uVar4 = FUN_089c9da8(param_1);
  iVar5 = FUN_089c9da8(param_1);
  uVar6 = FUN_089c9da8(param_1);
  uVar7 = FUN_089c9da8(param_1);
  uVar8 = FUN_089c9da8(param_1);
  uVar9 = FUN_089c9da8(param_1);
  uVar10 = FUN_089c9da8(param_1);
  uVar11 = FUN_089c9da8(param_1);
  iVar12 = FUN_089ee198();
  if (iVar12 == 0) {
    FUN_089ee16c();
    uVar13 = 0xffffffff;
    uVar1 = 2;
  }
  else {
    uVar13 = 0xffffffff;
    switch(uVar1) {
    case 0:
      uVar1 = FUN_089ee1d0();
      uVar13 = FUN_089ee5b0(uVar1,uVar4);
      break;
    case 1:
      uVar1 = FUN_089ee1d0();
      uVar13 = FUN_089ee4b0(uVar1,uVar3,iVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
      break;
    case 2:
      uVar1 = FUN_089ee1d0();
      FUN_089ee628(uVar1,uVar4,iVar5 != 0);
      uVar13 = 1;
      break;
    case 3:
      uVar1 = FUN_089ee1d0();
      uVar13 = FUN_089ee688(uVar1,uVar4,iVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
      break;
    case 4:
      uVar1 = FUN_089ee1d0();
      uVar13 = FUN_089ee80c(uVar1,uVar4,iVar5,uVar6,uVar7);
      break;
    case 5:
      uVar1 = FUN_089ee1d0();
      uVar13 = FUN_089ee860(uVar1,uVar4,uVar8,uVar9,uVar10,uVar11);
      break;
    case 6:
      uVar1 = FUN_089ee1d0();
      uVar13 = FUN_089ee918(uVar1,uVar4,iVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
      break;
    case 7:
      uVar1 = FUN_089ee1d0();
      uVar13 = FUN_089ee9fc(uVar1,uVar4,iVar5,uVar6,uVar7);
      break;
    case 8:
      uVar1 = FUN_089ee1d0();
      uVar13 = FUN_089eea74(uVar1,uVar4,uVar8,uVar9,uVar10,uVar11);
    }
    uVar1 = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = uVar13;
  }
  return uVar1;
}

