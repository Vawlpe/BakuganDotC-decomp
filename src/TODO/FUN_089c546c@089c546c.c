#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c546c(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  
  uVar8 = 1;
  bVar2 = false;
  if ((*(char *)(param_1 + 1) == '\0') &&
     (iVar3 = FUN_089c2b48(param_1[4]), *(char *)(iVar3 + 0xc4) != '\0')) {
    FUN_089c4b54(param_1);
  }
  uVar4 = FUN_089c2b48(param_1[4]);
  iVar3 = FUN_089c3920(uVar4);
  if (iVar3 != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(param_1 + 1) == '\0') {
      FUN_089bb728(*param_1);
      iVar3 = param_1[3];
      param_1[2] = iVar3;
      if ((iVar3 == 2) || (iVar3 == 6)) {
        bVar1 = false;
        iVar6 = param_1[7];
        iVar3 = _DONE_Get_DAT_08AC5874();
        puVar9 = (undefined *)(iVar6 + *(int *)(iVar3 + 4) * param_1[8]);
        iVar3 = FUN_089d5814();
        if (iVar3 != 0) {
          uVar8 = FUN_089d5830();
          iVar3 = FUN_089d6150(uVar8);
          if ((iVar3 != 0) && (iVar3 = FUN_089d5830(), *(char *)(iVar3 + 0x44) != '\0')) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          uVar8 = FUN_089d5830();
          puVar5 = (undefined4 *)_DONE_Get_DAT_08AC5874();
          FUN_089d5e7c(uVar8,puVar9,*puVar5);
          iVar3 = param_1[9];
        }
        else {
          iVar3 = _DONE_Get_DAT_08AC5874();
          memset_jak(puVar9,0,*(int *)(iVar3 + 4));
          iVar3 = param_1[9];
        }
        param_1[9] = iVar3 + 1;
      }
      else if (*(char *)(param_1 + 0x39) == '\0') {
        iVar10 = param_1[7];
        iVar3 = _DONE_Get_DAT_08AC5874();
        iVar6 = *(int *)(iVar3 + 4);
        iVar7 = param_1[8];
        iVar3 = _DONE_Get_DAT_08AC5874();
        memset_jak((undefined *)(iVar10 + iVar6 * iVar7),0,*(int *)(iVar3 + 4));
        param_1[9] = param_1[9] + 1;
      }
      else {
        iVar3 = FUN_089c4fac(param_1);
        if (iVar3 == 0) {
          if (param_1[4] != 0) {
            FUN_089c4c9c(param_1);
            *(undefined *)(param_1 + 0x39) = 0;
          }
          bVar2 = true;
          *(undefined *)(param_1 + 0x39) = 0;
          FUN_089c4d24(param_1,0,0);
        }
      }
      uVar8 = 1;
      FUN_089bb790(*param_1);
      FUN_089c5258(param_1);
    }
    else {
      zz_sceDisplayWaitVblankStartCB();
      if (*(char *)((int)param_1 + 5) == '\0') {
        uVar4 = param_1[4];
        while (iVar3 = FUN_08a23e24(uVar4), 0 < iVar3) {
          zz_sceDisplayWaitVblankStartCB();
          uVar4 = param_1[4];
        }
        FUN_089bb728(*param_1);
        puVar9 = (undefined *)param_1[7];
        iVar3 = _DONE_Get_DAT_08AC5874();
        memset_jak(puVar9,0,*(int *)(iVar3 + 4) * 2);
        memset_jak((undefined *)param_1[10],0,0x2000);
        param_1[9] = 0;
        param_1[8] = 0;
        *(undefined *)((int)param_1 + 5) = 1;
        iVar3 = FUN_089c2b48(param_1[4]);
        *(undefined *)(iVar3 + 0xc6) = 1;
        FUN_089bb790(*param_1);
      }
      else if (*(char *)((int)param_1 + 6) != '\0') {
        *(undefined *)(param_1 + 1) = 0;
        *(undefined *)((int)param_1 + 5) = 0;
        *(undefined *)((int)param_1 + 6) = 0;
      }
    }
  }
  else {
    uVar8 = 0;
  }
  if (bVar2) {
    uVar4 = FUN_089c2b48(param_1[4]);
    FUN_089c3958(uVar4);
  }
  iVar3 = _DONE_Get_DAT_08AC5874();
  if (*(char *)(iVar3 + 0x8be4) != '\0') {
    FUN_089bbd80(param_1[4] + 6);
  }
  return uVar8;
}

