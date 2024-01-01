#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bb728(int *param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1 * 8;
  iVar4 = (int)param_1 + (int)*(short *)(&DAT_08ac4f28 + iVar3);
  pcVar1 = (code *)(&PTR_LAB_08ac4f2c)[*param_1 * 2];
  if (*(short *)(&DAT_08ac4f2a + iVar3) != 0) {
    psVar2 = (short *)(*(int *)(pcVar1 + iVar4) + *(short *)(&DAT_08ac4f2a + iVar3) * 8);
    pcVar1 = *(code **)(psVar2 + 2);
    iVar4 = iVar4 + *psVar2;
  }
  (*pcVar1)(iVar4);
  return;
}

