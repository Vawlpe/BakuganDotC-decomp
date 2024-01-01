#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d7b48(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_08ac5ba0 != (int *)0x0) {
    FUN_089d7c74();
  }
  if ((param_1 & 0xf) != 0) {
    param_1 = (param_1 - (param_1 & 0xf)) + 0x10;
  }
  piVar2 = (int *)FUN_08a0f8e8(0x10,param_1);
  DAT_08ac5ba0 = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)(piVar2 + 0x10);
  }
  piVar2[1] = param_1;
  piVar2[2] = 0;
  piVar2[3] = piVar2[1] + -0x40;
  piVar2[4] = 0;
  FUN_089d816c(1);
  piVar2 = DAT_08ac5ba0;
  DAT_08ac5ba0[6] = 0;
  FUN_089d7aac(piVar2 + 8,0,"c:/bullets/bkn2pspsys/src/pspsys/sys/Mem/FOMemMng.cpp",0x205);
  FUN_089d7aac(DAT_08ac5ba0 + 0xc,0,"c:/bullets/bkn2pspsys/src/pspsys/sys/Mem/FOMemMng.cpp",0x206);
  piVar2 = DAT_08ac5ba0;
  iVar3 = DAT_08ac5ba0[3];
  iVar4 = *DAT_08ac5ba0;
  DAT_08ac5ba0[10] = 0;
  piVar2[0xe] = 0;
  FUN_089d7aac(iVar4,iVar3 + -0x10,"c:/bullets/bkn2pspsys/src/pspsys/sys/Mem/FOMemMng.cpp",0x20f);
  FUN_089d843c(DAT_08ac5ba0 + 0xc,iVar4,1);
  piVar1 = DAT_08ac5ba0;
  piVar2 = DAT_08ac5ba0 + 4;
  DAT_08ac5ba0[3] = DAT_08ac5ba0[3] + -0x10;
  piVar1[4] = *piVar2 + 1;
  FUN_089d85ac();
  return;
}

