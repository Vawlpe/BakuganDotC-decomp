#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a035cc(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int local_20;
  
  iVar4 = (param_1 & 0xffffe000) + 0x2000;
  if (iVar4 - param_1 < 0x1000) {
    iVar4 = (param_1 & 0xffffe000) + 0x4000;
  }
  puVar2 = (undefined4 *)FUN_08a0356c(0x20,&local_20);
  *(undefined *)(local_20 + 0xc) = 1;
  uVar3 = FUN_08a034ac(iVar4);
  puVar1 = puVar2;
  *puVar2 = DAT_08af11dc;
  DAT_08af11dc = puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = iVar4;
  puVar2[3] = 0;
  *(undefined *)(puVar2 + 4) = 1;
  return;
}

