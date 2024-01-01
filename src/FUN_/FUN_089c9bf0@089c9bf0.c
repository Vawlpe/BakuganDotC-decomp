#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c9bf0(undefined4 param_1,int **param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if (DAT_08ac58cc != (int *)0x0) {
    iVar5 = *DAT_08ac58cc;
    iVar6 = 0;
    piVar4 = DAT_08ac58cc;
    if (0 < iVar5) {
      do {
        iVar1 = strcmp(piVar4 + 2,param_1);
        if (iVar1 == 0) {
          if (iVar6 != 0) {
            iVar7 = *piVar4;
          }
          iVar7 = iVar5 * 0x40 + iVar7 + (int)DAT_08ac58cc;
          uVar2 = FUN_089be500(iVar7);
          FUN_089d8634();
          uVar3 = FUN_089d81a4();
          FUN_089d816c(0);
          uVar2 = FUN_089d7d74(uVar2,0,0);
          FUN_089d816c(uVar3);
          FUN_089d866c();
          FUN_089be538(iVar7,uVar2);
          *param_2 = piVar4 + 2;
          return uVar2;
        }
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 0x10;
      } while (iVar6 < iVar5);
    }
  }
  return 0;
}

