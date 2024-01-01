#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cf8ec(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((DAT_08ac5938 != (int *)0x0) && (*DAT_08ac5938 != 0)) {
    FUN_089bb728(DAT_08ac5938[1]);
    iVar2 = *(int *)(*DAT_08ac5938 + 4);
    if ((0 < iVar2) && ((-1 < param_1 && (param_1 < iVar2)))) {
      piVar1 = (int *)FUN_08a31570(*DAT_08ac5938);
      uVar3 = 0;
      iVar2 = 0;
      if (-1 < param_1) {
        do {
          uVar3 = piVar1[3];
          iVar2 = iVar2 + 1;
          piVar1 = (int *)*piVar1;
        } while (iVar2 <= param_1);
      }
    }
    FUN_089bb790(DAT_08ac5938[1]);
  }
  return uVar3;
}

