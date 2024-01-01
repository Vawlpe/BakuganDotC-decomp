#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08810a34(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  iVar1 = FUN_089c9da8();
  fVar5 = (float)FUN_089c9e3c(param_1);
  fVar6 = (float)FUN_089c9e3c(param_1);
  uVar7 = FUN_089c9e3c(param_1);
  uVar8 = FUN_089c9e3c(param_1);
  iVar9 = (int)fVar6;
  iVar2 = 0;
  if ((DAT_08abd628 != (int *)0x0) && (iVar2 = *DAT_08abd628, iVar2 != 0)) {
    iVar3 = *(int *)(iVar2 + 0x50);
    for (iVar4 = *(int *)(iVar2 + 4); (iVar3 != iVar9 && (iVar4 != 0)); iVar4 = *(int *)(iVar4 + 4))
    {
      iVar3 = *(int *)(iVar4 + 0x50);
      iVar2 = iVar4;
    }
  }
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      if (fVar5 <= 0.0) {
        FUN_088b3e94(0,uVar8,iVar9);
      }
      else {
        FUN_088b3b84(iVar9);
      }
    }
  }
  else if (iVar1 < 2) {
    if (fVar5 <= 0.0) {
      uVar7 = FUN_0884b268();
      FUN_0884dd94(uVar7);
    }
    else if (iVar2 != 0) {
      FUN_088b3ee8(uVar7,uVar8,0x42200000);
    }
  }
  return 0;
}

