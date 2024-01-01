#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a1e70c(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  puVar1 = DAT_08afcf9c;
  iVar4 = -0x7fffffdf;
  if (DAT_08afcf9c[4] == 0) {
    iVar4 = -0x7ffffef9;
    switch(DAT_08afcf60) {
    case 0:
      puVar6 = (uint *)DAT_08afcf9c[2];
      *puVar6 = param_1 & 0xffff | 0xf000000;
      puVar1[2] = puVar6 + 2;
      puVar6[1] = 0xc000000;
      iVar4 = gu_update_stall();
      if (iVar4 < 0) {
        return iVar4;
      }
      break;
    case 1:
    case 3:
      if (DAT_08afcf64 == 1) {
        puVar3 = (undefined4 *)DAT_08afcf9c[2];
        *puVar3 = 0xe120000;
        puVar1[2] = puVar3 + 2;
        puVar3[1] = 0xc000000;
      }
      else {
        puVar3 = (undefined4 *)DAT_08afcf9c[2];
        *puVar3 = 0xb000000;
        puVar1[2] = puVar3 + 1;
      }
      break;
    case 2:
    case 4:
      puVar6 = (uint *)DAT_08afcf9c[2];
      *puVar6 = param_1 & 0xffff | 0xf000000;
      puVar1[2] = puVar6 + 2;
      puVar6[1] = 0xc000000;
      break;
    default:
      goto switchD_08a1e764_caseD_5;
    }
    iVar4 = DAT_08afcf9c[2] - DAT_08afcf9c[1];
    uVar2 = zz_sceKernelCpuSuspendIntr();
    iVar5 = (&DAT_08afd098)[DAT_08afcf60 * 0x3f];
    (&DAT_08afd098)[DAT_08afcf60 * 0x3f] = 0xffffffff;
    if (iVar5 < 0) {
      DAT_08afcf9c = (undefined4 *)0x0;
    }
    else {
      DAT_08afcf9c = &DAT_08afcfa0 + iVar5 * 0x3f;
    }
    DAT_08afcf60 = iVar5;
    zz_sceKernelCpuResumeIntr(uVar2);
  }
switchD_08a1e764_caseD_5:
  return iVar4;
}

