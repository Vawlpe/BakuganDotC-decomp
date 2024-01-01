#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885bdb4(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x140) * 8;
  param_1 = param_1 + *(short *)(&DAT_08a67624 + iVar3);
  pcVar1 = *(code **)(&DAT_08a67628 + iVar3);
  if (*(short *)(&DAT_08a67626 + iVar3) != 0) {
    psVar2 = (short *)(*(int *)(pcVar1 + param_1) + *(short *)(&DAT_08a67626 + iVar3) * 8);
    pcVar1 = *(code **)(psVar2 + 2);
    param_1 = param_1 + *psVar2;
  }
  (*pcVar1)(param_1);
  return;
}

