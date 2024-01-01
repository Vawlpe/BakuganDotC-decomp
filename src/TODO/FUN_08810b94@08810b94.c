#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08810b94(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = FUN_089c9da8();
  iVar2 = FUN_089c9da8(param_1);
  fVar6 = (float)FUN_089c9e3c(param_1);
  fVar7 = (float)FUN_089c9e3c(param_1);
  FUN_089c9e3c(param_1);
  FUN_089c9e3c(param_1);
  iVar3 = 0;
  if ((DAT_08abd530 != (int *)0x0) && (iVar3 = *DAT_08abd530, iVar3 != 0)) {
    iVar4 = *(int *)(iVar3 + 0x18);
    for (iVar5 = *(int *)(iVar3 + 4); (iVar4 != iVar2 && (iVar5 != 0)); iVar5 = *(int *)(iVar5 + 4))
    {
      iVar4 = *(int *)(iVar5 + 0x18);
      iVar3 = iVar5;
    }
  }
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      if (fVar6 <= 0.0) {
        FUN_088a5b0c((int)fVar7);
      }
      else {
        FUN_088a5644((int)fVar7,0);
      }
    }
  }
  else if ((iVar1 < 2) && (iVar3 != 0)) {
    if (fVar6 <= 0.0) {
      *(undefined *)(iVar3 + 0x38) = 0;
    }
    else {
      *(undefined *)(iVar3 + 0x38) = 1;
    }
  }
  return 0;
}

