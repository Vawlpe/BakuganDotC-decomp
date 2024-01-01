#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ff694(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x65c) * 8;
  iVar4 = param_1 + *(short *)(&DAT_08a99a60 + iVar3);
  pcVar1 = (code *)(&PTR_FUN_08a99a64)[*(int *)(param_1 + 0x65c) * 2];
  if (*(short *)(&DAT_08a99a62 + iVar3) != 0) {
    psVar2 = (short *)(*(int *)(pcVar1 + iVar4) + *(short *)(&DAT_08a99a62 + iVar3) * 8);
    pcVar1 = *(code **)(psVar2 + 2);
    iVar4 = iVar4 + *psVar2;
  }
  (*pcVar1)(iVar4);
  iVar3 = FUN_0884b248();
  if (iVar3 != 0) {
    FUN_0884c3a0();
  }
  return;
}

