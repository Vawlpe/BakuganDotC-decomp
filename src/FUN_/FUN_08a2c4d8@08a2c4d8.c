#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a2c4d8(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x140) * 8;
  param_1 = param_1 + *(short *)(&DAT_08a98b10 + iVar3);
  pcVar1 = *(code **)(&DAT_08a98b14 + iVar3);
  if (*(short *)(&DAT_08a98b12 + iVar3) != 0) {
    psVar2 = (short *)(*(int *)(pcVar1 + param_1) + *(short *)(&DAT_08a98b12 + iVar3) * 8);
    pcVar1 = *(code **)(psVar2 + 2);
    param_1 = param_1 + *psVar2;
  }
  (*pcVar1)(param_1);
  return;
}

