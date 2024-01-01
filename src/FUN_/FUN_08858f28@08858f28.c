#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08858f28(int param_1)

{
  int iVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = FUN_0884df98();
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x400000;
    iVar1 = *(int *)(param_1 + 0x90c) * 8;
    iVar4 = param_1 + *(short *)(&DAT_08a67134 + iVar1);
    pcVar2 = (code *)(&PTR_LAB_08a67138)[*(int *)(param_1 + 0x90c) * 2];
    if (*(short *)(&DAT_08a67136 + iVar1) != 0) {
      psVar3 = (short *)(*(int *)(pcVar2 + iVar4) + *(short *)(&DAT_08a67136 + iVar1) * 8);
      pcVar2 = *(code **)(psVar3 + 2);
      iVar4 = iVar4 + *psVar3;
    }
    iVar1 = (*pcVar2)(iVar4);
    if (iVar1 != 0) {
      FUN_08855384(param_1,0,0);
    }
  }
  return;
}

