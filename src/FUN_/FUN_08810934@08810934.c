#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08810934(undefined4 param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  sVar1 = FUN_089c9d1c();
  uVar2 = FUN_089c9d1c(param_1);
  uVar2 = FUN_088ab618(uVar2,(int)sVar1);
  iVar3 = FUN_089c9da8(param_1);
  fVar5 = (float)FUN_089c9e3c(param_1);
  FUN_089c9e3c(param_1);
  FUN_089c9e3c(param_1);
  FUN_089c9e3c(param_1);
  iVar4 = FUN_088acd4c(uVar2);
  if (((iVar4 != 0) && (iVar3 == 0)) &&
     (iVar3 = (**(code **)(*(int *)(iVar4 + 0x14) + 0x8c))
                        (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x88)), iVar3 != 0)) {
    if (fVar5 <= 0.0) {
      FUN_088a2780(iVar4);
    }
    else {
      FUN_088a25f4(iVar4);
    }
  }
  return 0;
}

