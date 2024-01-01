#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08808628(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if ((-1 < iVar3) && (iVar3 < 2)) {
    iVar4 = param_1 + *(short *)(&DAT_08a33a80 + iVar3 * 8);
    pcVar1 = (code *)(&PTR_FUN_08a33a84)[iVar3 * 2];
    if (*(short *)(&DAT_08a33a82 + iVar3 * 8) != 0) {
      psVar2 = (short *)(*(int *)(pcVar1 + iVar4) + *(short *)(&DAT_08a33a82 + iVar3 * 8) * 8);
      pcVar1 = *(code **)(psVar2 + 2);
      iVar4 = iVar4 + *psVar2;
    }
    (*pcVar1)(iVar4);
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_089bf7a8(param_1,1);
  }
  return;
}

