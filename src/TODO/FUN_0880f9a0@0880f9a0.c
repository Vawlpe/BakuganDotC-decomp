#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880f9a0(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  
  iVar2 = FUN_089c9d1c();
  sVar1 = FUN_089c9d1c(param_1);
  fVar9 = (float)FUN_089c9e3c(param_1);
  fVar10 = (float)FUN_089c9e3c(param_1);
  uVar11 = FUN_089c9e3c(param_1);
  iVar3 = FUN_089c9d1c(param_1);
  FUN_089c9e3c(param_1);
  FUN_089c9e3c(param_1);
  FUN_089c9e3c(param_1);
  FUN_089c9e3c(param_1);
  uVar4 = FUN_08855008((int)sVar1);
  iVar5 = FUN_08860188(uVar4);
  iVar6 = FUN_088660e0();
  iVar7 = FUN_0884b248();
  if ((iVar7 != 0) && (iVar6 != 0)) {
    if (iVar2 < 1) {
      if (-1 < iVar2) {
        uVar4 = FUN_0884b268();
        FUN_0884dd94(uVar4);
      }
    }
    else if (((1 < iVar2) && (iVar2 < 3)) && (iVar5 != 0)) {
      fVar12 = *(float *)(iVar5 + 0x40);
      if (fVar12 < 0.8) {
        fVar8 = 0.8;
      }
      else {
        fVar8 = 1.2;
        if (fVar12 <= 1.2) {
          fVar8 = fVar12;
        }
      }
      uVar4 = FUN_0884b268();
      FUN_0884dcb0(fVar9 * fVar8,fVar10 * fVar8,uVar11,uVar4,iVar5,iVar3 != 0,0,0);
      iVar2 = FUN_0884b268();
      if (*(int *)(DAT_08ac58c4 + 4) == 10) {
        *(undefined4 *)(iVar2 + 0x414) = 0x3fc90fdb;
        *(undefined4 *)(iVar2 + 0x41c) = 0xc3480000;
      }
    }
  }
  return 0;
}

