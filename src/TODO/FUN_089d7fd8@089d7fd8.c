#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d7fd8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  if ((DAT_08ac5ba0 != 0) && (piVar5 = (int *)(param_1 + -0x10), param_1 != 0)) {
    if (*(int *)(param_1 + -8) == param_1) {
      iVar2 = FUN_089d7ad8(DAT_08ac5ba0 + 0x20,piVar5);
      if (iVar2 != 0) {
        FUN_089d843c(DAT_08ac5ba0 + 0x30,piVar5,1);
        iVar2 = DAT_08ac5ba0;
        piVar1 = (int *)(DAT_08ac5ba0 + 8);
        *(int *)(DAT_08ac5ba0 + 0xc) = *(int *)(DAT_08ac5ba0 + 0xc) + *(int *)(param_1 + -4);
        *(int *)(iVar2 + 8) = *piVar1 - *(int *)(param_1 + -4);
        iVar3 = *(int *)(param_1 + -0xc);
        if (iVar3 == 0) {
          iVar3 = *piVar5;
        }
        else if (*(int *)(param_1 + -8) + *(int *)(param_1 + -4) == iVar3) {
          *(int *)(param_1 + -4) = *(int *)(iVar3 + 0xc) + *(int *)(param_1 + -4) + 0x10;
          FUN_089d7ad8(iVar2 + 0x30,*(undefined4 *)(param_1 + -0xc));
          iVar2 = DAT_08ac5ba0;
          piVar1 = (int *)(DAT_08ac5ba0 + 0x10);
          *(int *)(DAT_08ac5ba0 + 0xc) = *(int *)(DAT_08ac5ba0 + 0xc) + 0x10;
          *(int *)(iVar2 + 0x10) = *piVar1 + -1;
          iVar3 = *piVar5;
        }
        else {
          iVar3 = *piVar5;
        }
        if (((iVar3 != 0) && (iVar2 + 0x30 != iVar3)) &&
           ((int *)(*(int *)(iVar3 + 8) + *(int *)(iVar3 + 0xc)) == piVar5)) {
          *(int *)(iVar3 + 0xc) = *(int *)(param_1 + -4) + *(int *)(iVar3 + 0xc) + 0x10;
          FUN_089d7ad8(iVar2 + 0x30,piVar5);
          iVar2 = DAT_08ac5ba0;
          piVar5 = (int *)(DAT_08ac5ba0 + 0x10);
          *(int *)(DAT_08ac5ba0 + 0xc) = *(int *)(DAT_08ac5ba0 + 0xc) + 0x10;
          *(int *)(iVar2 + 0x10) = *piVar5 + -1;
        }
        uVar4 = 1;
      }
    }
    else {
      zz_sceKernelPrintf(&DAT_08aa2eb4,param_1);
      FUN_089d7d18(0);
      zz_sceKernelPrintf(&DAT_08aa2eb4,param_1);
      trap(0);
    }
  }
  return uVar4;
}

