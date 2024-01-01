#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cdbc8(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined auStack_130 [256];
  
  iVar9 = 0;
  bVar1 = false;
  FUN_089bb728(param_1[1]);
  iVar7 = 0;
  iVar6 = 0;
  iVar8 = 0x8ac5918;
  do {
    piVar4 = (int *)(DAT_08ac5924 + iVar6);
    uVar5 = piVar4[1];
    if (uVar5 < 6) {
      if (uVar5 == 1) {
        if (iVar7 < 6) {
          if (iVar7 < 4) {
            uVar2 = FUN_089cd770(iVar7);
            iVar3 = zz_sceUtilityLoadModule(uVar2);
          }
          else {
            uVar2 = FUN_089cd770(iVar7);
            iVar3 = zz_sceUtilityLoadModule(uVar2);
          }
          if (iVar3 == -0x7feeeefe) {
            *(undefined4 *)(DAT_08ac5924 + iVar6 + 4) = 3;
          }
        }
        else if (!bVar1) {
          bVar1 = true;
          iVar3 = FUN_089f944c();
          if (iVar3 != 0) {
            uVar2 = FUN_089f9468();
            iVar3 = FUN_089f9d28(uVar2,1);
            if (iVar3 != 0) {
              FUN_089fb5b0(*(undefined4 *)(iVar8 + -0x18),auStack_130);
              iVar3 = zz_sceKernelLoadModule(auStack_130,0,0);
              bVar1 = iVar3 < 1;
              if (!bVar1) {
                *(int *)(DAT_08ac5924 + iVar6) = iVar3;
                *(undefined4 *)(DAT_08ac5924 + iVar6 + 4) = 2;
              }
              uVar2 = FUN_089f9468();
              FUN_089f9d28(uVar2,0);
            }
          }
        }
      }
      else if (uVar5 == 2) {
        iVar3 = zz_sceKernelStartModule(*piVar4,0,0,0,0);
        if (0 < iVar3) {
          *(int *)(DAT_08ac5924 + iVar6) = iVar3;
          *(undefined4 *)(DAT_08ac5924 + iVar6 + 4) = 3;
        }
      }
      else if (uVar5 == 4) {
        if (iVar7 < 6) {
          if (iVar7 < 4) {
            uVar2 = FUN_089cd770(iVar7);
            iVar3 = zz_sceUtilityUnloadModule(uVar2);
          }
          else {
            uVar2 = FUN_089cd770(iVar7);
            iVar3 = zz_sceUtilityUnloadModule(uVar2);
          }
          if (iVar3 == 0) {
            *(undefined4 *)(DAT_08ac5924 + iVar6) = 0xffffffff;
            *(undefined4 *)(DAT_08ac5924 + iVar6 + 4) = 0;
            *param_1 = *param_1 + -1;
          }
        }
        else if (*piVar4 < 1) {
          piVar4[1] = 0;
        }
        else {
          iVar3 = zz_sceKernelStopModule(*piVar4,0,0,0,0);
          if (iVar3 == 0) {
            *(undefined4 *)(DAT_08ac5924 + iVar6 + 4) = 5;
          }
        }
      }
      else if (uVar5 == 5) {
        if (*piVar4 < 1) {
          piVar4[1] = 0;
        }
        else {
          iVar3 = zz_sceKernelUnloadModule(*piVar4);
          if (0 < iVar3) {
            *(undefined4 *)(DAT_08ac5924 + iVar6) = 0xffffffff;
            *(undefined4 *)(DAT_08ac5924 + iVar6 + 4) = 0;
            *param_1 = *param_1 + -1;
          }
        }
      }
      else {
        iVar9 = iVar9 + 1;
      }
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 8;
    iVar8 = iVar8 + 4;
  } while (iVar7 < 8);
  if (iVar9 == 8) {
    FUN_089bb790(param_1[1]);
    FUN_089bbef8();
  }
  else {
    FUN_089bb790(param_1[1]);
    if (bVar1) {
      zz_sceDisplayWaitVblankStartCB();
    }
  }
  return;
}

