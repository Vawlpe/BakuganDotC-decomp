#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c3a0c(int *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  FUN_089bb728(param_1[1]);
  iVar4 = *param_1;
  iVar3 = param_1[10];
  if (iVar3 != 0) {
    param_1[9] = 0;
    param_1[10] = 0;
  }
  FUN_089bb790(param_1[1]);
  if (iVar3 == 0) {
    iVar3 = FUN_089c4814(iVar4);
    if (iVar3 == 0) {
      *(undefined *)((int)param_1 + 0xc9) = 0;
      if (iVar4 == 0) {
        FUN_089c45b8(0,0);
      }
      else {
        FUN_089c45b8(iVar4,5);
      }
    }
    else {
      bVar2 = false;
      if ((iVar4 != 0) && (9999 < param_1[0x2c])) {
        bVar2 = true;
      }
      if (bVar2) {
        uVar1 = FUN_089c59f0();
        fVar5 = (float)FUN_089c5dfc(uVar1);
        fVar5 = fVar5 * 0.8;
      }
      else {
        uVar1 = FUN_089c59f0();
        fVar5 = (float)FUN_089c5d9c(uVar1);
      }
      uVar1 = FUN_089c487c(iVar4);
      FUN_089c4ce4(fVar5,uVar1);
      uVar1 = FUN_089c487c(iVar4);
      FUN_089c4d24(uVar1,100,0);
      if (iVar4 == 0) {
        uVar1 = FUN_089c487c(0);
        FUN_089c4af8(uVar1,0);
      }
      uVar1 = FUN_089c487c(iVar4);
      FUN_089c4bdc(uVar1,param_1[0x2b],param_1[3],param_1[4]);
      FUN_089bb728(param_1[1]);
      if ((param_1[9] == 4) && (param_1[10] == 0)) {
        param_1[10] = param_1[10] + 1;
      }
      FUN_089bb790(param_1[1]);
    }
  }
  return;
}

