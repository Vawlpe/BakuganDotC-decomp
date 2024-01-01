#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884d0b0(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  piVar4 = (int *)((&PTR_DAT_08aba798)[param_4] + *(int *)(DAT_08ac58c4 + 4) * 8);
  if (piVar4 == (int *)0x0) {
    param_2[2] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    return;
  }
  if (*piVar4 + -1 < param_3) {
    param_3 = *piVar4 + -1;
  }
  puVar5 = (undefined4 *)(piVar4[1] + param_3 * 0x10);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}

