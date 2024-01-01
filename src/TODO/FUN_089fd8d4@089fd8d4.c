#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fd8d4(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined auStack_50 [68];
  
  uVar3 = *param_1;
  if (uVar3 < 5) {
    if (uVar3 == 1) {
      if ((param_1[1] != 0) && (iVar2 = FUN_089fbbe0(), iVar2 != 0)) {
        FUN_089bd9b4(auStack_50);
        uVar1 = FUN_089fbcb8(param_1[1]);
        FUN_089bda04(auStack_50,uVar1,0,1,1);
        *param_1 = 0;
        iVar2 = FUN_089fdaa4(param_1,auStack_50,0);
        if (iVar2 == 0) {
          *param_1 = 1;
        }
        FUN_089bdc4c(auStack_50,2);
      }
    }
    else if (uVar3 == 3) {
      uVar1 = FUN_089fce94();
      iVar2 = FUN_089fd3f4(uVar1,param_1[1],0);
      if (iVar2 == 0) {
        uVar1 = FUN_089fce94();
        FUN_089fd560(uVar1,param_1);
        param_1[1] = 0;
        *param_1 = 4;
      }
    }
    else if (uVar3 == 4) {
      uVar1 = FUN_089fce94();
      iVar2 = FUN_089fd3f4(uVar1,param_1,0);
      if (iVar2 == 0) {
        *param_1 = 0;
      }
    }
  }
  return;
}

