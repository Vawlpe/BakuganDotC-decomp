#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a6680(int param_1)

{
  int iVar1;
  short *psVar2;
  code *pcVar3;
  
  iVar1 = FUN_088abfa8(*(float *)(param_1 + 0x1f0) * 5.0,0x457a0000,param_1,param_1,param_1 + 0x238,
                       param_1 + 0x283,*(int *)(param_1 + 0x1fc) == 0);
  *(bool *)(param_1 + 0x284) = iVar1 == 0;
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x238) * *(float *)(param_1 + 0x228);
  FUN_089df8a4(param_1);
  iVar1 = *(int *)(param_1 + 0x32c);
  if ((-1 < iVar1) && (iVar1 == 0)) {
    param_1 = param_1 + *(short *)(&DAT_08a83f68 + iVar1 * 8);
    pcVar3 = (code *)PTR_LAB_08a83f6c;
    if (*(short *)(&DAT_08a83f6a + iVar1 * 8) != 0) {
      psVar2 = (short *)(*(int *)(pcVar3 + param_1) + *(short *)(&DAT_08a83f6a + iVar1 * 8) * 8);
      pcVar3 = *(code **)(psVar2 + 2);
      param_1 = param_1 + *psVar2;
    }
    (*pcVar3)(param_1);
  }
  return;
}

