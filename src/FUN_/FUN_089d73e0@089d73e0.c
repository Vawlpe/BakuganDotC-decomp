#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d73e0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x28);
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 0x10);
  if (uVar2 != 0) {
    do {
      if (piVar1 == (int *)0x0) {
        return;
      }
      if (piVar1[2] == param_2) {
        return;
      }
      if (param_2 < piVar1[2]) {
        piVar1 = (int *)*piVar1;
      }
      else {
        piVar1 = (int *)piVar1[1];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

