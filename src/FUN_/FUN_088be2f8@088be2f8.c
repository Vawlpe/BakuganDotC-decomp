#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088be2f8(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x618) * 8;
  iVar4 = param_1 + *(short *)(&DAT_08a91bc0 + iVar3);
  pcVar1 = (code *)(&PTR_FUN_08a91bc4)[*(int *)(param_1 + 0x618) * 2];
  if (*(short *)(&DAT_08a91bc2 + iVar3) != 0) {
    psVar2 = (short *)(*(int *)(pcVar1 + iVar4) + *(short *)(&DAT_08a91bc2 + iVar3) * 8);
    pcVar1 = *(code **)(psVar2 + 2);
    iVar4 = iVar4 + *psVar2;
  }
  (*pcVar1)(iVar4);
  return;
}

