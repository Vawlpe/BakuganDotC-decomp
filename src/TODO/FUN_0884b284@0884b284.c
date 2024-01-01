#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884b284(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  DAT_08aba784 = DAT_08aba784 + 1;
  iVar3 = *(int *)(param_1 + 0x440) * 8;
  iVar4 = param_1 + *(short *)(&DAT_08a66474 + iVar3);
  pcVar1 = (code *)(&PTR_LAB_08a66478)[*(int *)(param_1 + 0x440) * 2];
  if (*(short *)(&DAT_08a66476 + iVar3) != 0) {
    psVar2 = (short *)(*(int *)(pcVar1 + iVar4) + *(short *)(&DAT_08a66476 + iVar3) * 8);
    pcVar1 = *(code **)(psVar2 + 2);
    iVar4 = iVar4 + *psVar2;
  }
  (*pcVar1)(iVar4);
  return;
}

