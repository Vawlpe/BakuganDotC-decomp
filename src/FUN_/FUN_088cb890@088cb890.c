#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cb890(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_089bfa40(100);
    if (iVar1 == 0) {
      fVar3 = *(float *)(param_1 + 0x74);
    }
    else {
      iVar1 = FUN_089bf2d4(iVar1,2);
      if (iVar1 != 0) {
        return;
      }
      fVar3 = *(float *)(param_1 + 0x74);
    }
    fVar3 = DAT_08abea14 + fVar3;
    uVar2 = FUN_089f2178(fVar3);
    FUN_088cabf8(param_1,uVar2);
    FUN_088cad5c(param_1,uVar2);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x10),uVar2);
    if (*(int *)(param_1 + 0x208) != 0) {
      uVar2 = FUN_089f2178(fVar3 - 1.0);
      FUN_089f5084(*(undefined4 *)(param_1 + 0x208),uVar2);
    }
  }
  return;
}

