#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08943db8(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if ((-1 < iVar3) && (iVar3 < 5)) {
    param_1 = param_1 + *(short *)(&DAT_08a9d02c + iVar3 * 8);
    pcVar1 = (code *)(&PTR_FUN_08a9d030)[iVar3 * 2];
    if (*(short *)(&DAT_08a9d02e + iVar3 * 8) != 0) {
      psVar2 = (short *)(*(int *)(pcVar1 + param_1) + *(short *)(&DAT_08a9d02e + iVar3 * 8) * 8);
      pcVar1 = *(code **)(psVar2 + 2);
      param_1 = param_1 + *psVar2;
    }
    (*pcVar1)(param_1);
  }
  return;
}

