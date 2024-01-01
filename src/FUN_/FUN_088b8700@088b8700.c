#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b8700(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x150);
  if ((-1 < iVar3) && (iVar3 < 2)) {
    iVar4 = param_1 + *(short *)(&DAT_08a908c8 + iVar3 * 8);
    pcVar1 = (code *)(&PTR_LAB_08a908cc)[iVar3 * 2];
    if (*(short *)(&DAT_08a908ca + iVar3 * 8) != 0) {
      psVar2 = (short *)(*(int *)(pcVar1 + iVar4) + *(short *)(&DAT_08a908ca + iVar3 * 8) * 8);
      pcVar1 = *(code **)(psVar2 + 2);
      iVar4 = iVar4 + *psVar2;
    }
    (*pcVar1)(iVar4);
  }
  FUN_089dfc04(param_1);
  FUN_089dfdb0(param_1);
  FUN_088b82e8(param_1);
  FUN_088b85d0(param_1);
  return;
}

