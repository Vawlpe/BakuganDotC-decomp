#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fe760(int param_1)

{
  code *pcVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0xf4);
  if ((-1 < (int)uVar3) && (uVar3 < 3)) {
    iVar4 = param_1 + *(short *)(&DAT_08ac6200 + uVar3 * 8);
    pcVar1 = (code *)(&PTR_LAB_08ac6204)[uVar3 * 2];
    if (*(short *)(&DAT_08ac6202 + uVar3 * 8) != 0) {
      psVar2 = (short *)(*(int *)(pcVar1 + iVar4) + *(short *)(&DAT_08ac6202 + uVar3 * 8) * 8);
      pcVar1 = *(code **)(psVar2 + 2);
      iVar4 = iVar4 + *psVar2;
    }
    (*pcVar1)(iVar4);
  }
  (**(code **)(*(int *)(param_1 + 0x74) + 0x3c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x74) + 0x38));
  return;
}

