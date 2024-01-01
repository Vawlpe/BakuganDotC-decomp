#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d7d74(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = 0;
  iVar2 = FUN_089d81a4();
  iVar7 = 0;
  if ((DAT_08ac5ba0 != 0) && (0 < (int)param_1)) {
    iVar5 = *(int *)(DAT_08ac5ba0 + 0x34);
    if ((param_1 & 0xf) != 0) {
      param_1 = (param_1 - (param_1 & 0xf)) + 0x10;
    }
    if (*(uint *)(DAT_08ac5ba0 + 0xc) < param_1) {
      zz_sceKernelPrintf(&DAT_08aa2e18,param_1,*(uint *)(DAT_08ac5ba0 + 0xc));
      iVar5 = 0;
    }
    iVar8 = iVar7;
    if (iVar5 != 0) {
      uVar4 = *(uint *)(iVar5 + 0xc);
      iVar8 = iVar5;
      do {
        if (uVar4 < param_1) {
          iVar5 = *(int *)(iVar8 + 4);
        }
        else {
          if (iVar2 != 0) break;
          iVar5 = *(int *)(iVar8 + 4);
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        if (iVar5 == 0) break;
        uVar4 = *(uint *)(iVar5 + 0xc);
        iVar8 = iVar5;
      } while( true );
    }
    if (iVar8 != 0) {
      if (param_1 + 0x10 < *(uint *)(iVar8 + 0xc)) {
        if (iVar2 == 0) {
          iVar7 = (*(uint *)(iVar8 + 0xc) - param_1) + -0x10;
          *(int *)(iVar8 + 0xc) = iVar7;
          iVar8 = *(int *)(iVar8 + 8) + iVar7;
          FUN_089d7aac(iVar8,param_1,param_2,param_3);
          iVar7 = *(int *)(DAT_08ac5ba0 + 0x10);
        }
        else {
          FUN_089d7ad8(DAT_08ac5ba0 + 0x30,iVar8);
          iVar7 = *(int *)(iVar8 + 8) + param_1;
          FUN_089d7aac(iVar7,(*(int *)(iVar8 + 0xc) - param_1) + -0x10,param_2,param_3);
          FUN_089d843c(DAT_08ac5ba0 + 0x30,iVar7,1);
          *(uint *)(iVar8 + 0xc) = param_1;
          iVar7 = *(int *)(DAT_08ac5ba0 + 0x10);
        }
        iVar2 = DAT_08ac5ba0;
        piVar1 = (int *)(DAT_08ac5ba0 + 0xc);
        *(int *)(DAT_08ac5ba0 + 0x10) = iVar7 + 1;
        *(int *)(iVar2 + 0xc) = *piVar1 + -0x10;
      }
      else {
        FUN_089d7ad8(DAT_08ac5ba0 + 0x30,iVar8);
        iVar2 = DAT_08ac5ba0;
      }
      FUN_089d843c(iVar2 + 0x20,iVar8,0);
      iVar7 = DAT_08ac5ba0;
      iVar6 = *(int *)(iVar8 + 8);
      *(int *)(DAT_08ac5ba0 + 8) = *(int *)(DAT_08ac5ba0 + 8) + *(int *)(iVar8 + 0xc);
      *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) - *(int *)(iVar8 + 0xc);
    }
  }
  if (iVar6 == 0) {
    zz_sceKernelPrintf(&DAT_08aa2e4c,param_1);
    uVar3 = FUN_089d7d20();
    zz_sceKernelPrintf(&DAT_08aa2e6c,uVar3);
    uVar3 = FUN_089d7d3c();
    zz_sceKernelPrintf(&DAT_08aa2e84,uVar3);
    uVar3 = FUN_089d7d58();
    zz_sceKernelPrintf(&DAT_08aa2e9c,uVar3);
    FUN_089d7d18(0);
  }
  return iVar6;
}

