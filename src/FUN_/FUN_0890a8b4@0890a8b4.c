#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890a8b4(int param_1)

{
  code *pcVar1;
  short *psVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((-1 < (int)uVar3) && (uVar3 < 5)) {
    param_1 = param_1 + *(short *)(&DAT_08a9b1e0 + uVar3 * 8);
    pcVar1 = (code *)(&PTR_LAB_08a9b1e4)[uVar3 * 2];
    if (*(short *)(&DAT_08a9b1e2 + uVar3 * 8) != 0) {
      psVar2 = (short *)(*(int *)(pcVar1 + param_1) + *(short *)(&DAT_08a9b1e2 + uVar3 * 8) * 8);
      pcVar1 = *(code **)(psVar2 + 2);
      param_1 = param_1 + *psVar2;
    }
    (*pcVar1)(param_1);
  }
  return;
}

