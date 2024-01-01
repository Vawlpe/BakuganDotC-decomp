#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a2c258(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x16c) * 8;
  iVar4 = param_1 + *(short *)(&DAT_08a96b28 + iVar3);
  pcVar1 = (code *)(&PTR_LAB_08a96b2c)[*(int *)(param_1 + 0x16c) * 2];
  if (*(short *)(&DAT_08a96b2a + iVar3) != 0) {
    psVar2 = (short *)(*(int *)(pcVar1 + iVar4) + *(short *)(&DAT_08a96b2a + iVar3) * 8);
    pcVar1 = *(code **)(psVar2 + 2);
    iVar4 = iVar4 + *psVar2;
  }
  (*pcVar1)(iVar4);
  return;
}

