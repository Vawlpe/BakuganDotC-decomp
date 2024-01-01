#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a2c470(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x140) * 8;
  param_1 = param_1 + *(short *)(&DAT_08a98a38 + iVar3);
  pcVar1 = *(code **)(&DAT_08a98a3c + iVar3);
  if (*(short *)(&DAT_08a98a3a + iVar3) != 0) {
    psVar2 = (short *)(*(int *)(pcVar1 + param_1) + *(short *)(&DAT_08a98a3a + iVar3) * 8);
    pcVar1 = *(code **)(psVar2 + 2);
    param_1 = param_1 + *psVar2;
  }
  (*pcVar1)(param_1);
  return;
}

