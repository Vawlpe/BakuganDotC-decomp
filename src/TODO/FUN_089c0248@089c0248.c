#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_089c0248(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  piVar5 = &DAT_08aa12dc;
  piVar1 = (int *)0x0;
  do {
    piVar2 = piVar1;
    if ((*piVar5 <= param_2) && (iVar4 = 0, param_2 <= piVar5[1])) {
      piVar3 = &DAT_08ac5640;
      do {
        piVar2 = piVar3;
        iVar4 = iVar4 + 1;
        if (piVar5[2] == *piVar2) break;
        piVar3 = piVar2 + 7;
        piVar2 = piVar1;
      } while (iVar4 < 2);
      if (piVar2 != (int *)0x0) break;
    }
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 3;
    piVar1 = piVar2;
  } while (iVar6 < 2);
  if (piVar2 == (int *)0x0) {
    piVar2 = &DAT_08ac5640;
  }
  return piVar2;
}

