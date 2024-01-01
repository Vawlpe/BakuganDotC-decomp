#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089109ec(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)(&DAT_08a9b620 + *(int *)(param_1 + 0x150) * 0x1c);
  do {
    if (*piVar1 == 0xf) {
      *(int *)(param_1 + 0x78) = iVar2;
      DAT_08ac0e78 = 0x2724;
      return;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 7);
  *(int *)(param_1 + 0x78) = iVar2;
  DAT_08ac0e78 = 0x2724;
  return;
}

