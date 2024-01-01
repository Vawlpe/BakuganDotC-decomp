#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a29f38(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x140) * 8;
  param_1 = param_1 + *(short *)(&DAT_08a6810c + iVar3);
  pcVar1 = *(code **)(&DAT_08a68110 + iVar3);
  if (*(short *)(&DAT_08a6810e + iVar3) != 0) {
    psVar2 = (short *)(*(int *)(pcVar1 + param_1) + *(short *)(&DAT_08a6810e + iVar3) * 8);
    pcVar1 = *(code **)(psVar2 + 2);
    param_1 = param_1 + *psVar2;
  }
  (*pcVar1)(param_1);
  return;
}

