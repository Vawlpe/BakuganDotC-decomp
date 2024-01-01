#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a1feb4(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int **ppiVar2;
  int iVar3;
  uint uVar4;
  int **ppiVar5;
  int *piVar6;
  
  uVar4 = 0x80450001;
  if (DAT_08af13ac != -1) {
    if ((param_1 == (int *)0x0 || param_2 == 0) || (param_3 == 0)) {
      uVar4 = 0x8045000a;
    }
    else {
      ppiVar2 = (int **)&DAT_08afd89c;
      uVar4 = 0;
      ppiVar5 = ppiVar2;
      do {
        piVar6 = *ppiVar2;
        ppiVar2 = ppiVar2 + 1;
        if (piVar6 == (int *)0x0) {
          param_1[1] = param_3;
          *ppiVar5 = param_1;
          *param_1 = param_2;
          return uVar4;
        }
        uVar4 = uVar4 + 1;
        ppiVar5 = ppiVar5 + 1;
      } while (uVar4 < 0x80);
      puVar1 = &DAT_08afdac0;
      iVar3 = 0x1f;
      do {
        iVar3 = iVar3 + -1;
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        puVar1 = puVar1 + 4;
      } while (-1 < iVar3);
      uVar4 = 0x8045000f;
    }
  }
  return uVar4;
}

