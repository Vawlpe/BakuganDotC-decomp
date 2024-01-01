#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089cf9a4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if ((DAT_08ac5938 != (int *)0x0) && (*DAT_08ac5938 != 0)) {
    FUN_089bb728(DAT_08ac5938[1]);
    iVar6 = *(int *)(*DAT_08ac5938 + 4);
    if (0 < iVar6) {
      piVar1 = (int *)FUN_08a31570(*DAT_08ac5938);
      iVar2 = 0;
      if (0 < iVar6) {
        do {
          iVar7 = piVar1[3];
          iVar3 = 0;
          iVar4 = iVar7;
          if (iVar7 != 0) {
            do {
              pcVar5 = (char *)(param_1 + iVar3);
              iVar3 = iVar3 + 1;
              if (*(char *)(iVar4 + 0x38) != *pcVar5) {
                iVar7 = 0;
                break;
              }
              iVar4 = iVar3 + iVar7;
            } while (iVar3 < 6);
            if (iVar7 != 0) break;
          }
          iVar2 = iVar2 + 1;
          piVar1 = (int *)*piVar1;
        } while (iVar2 < iVar6);
      }
    }
    FUN_089bb790(DAT_08ac5938[1]);
  }
  return iVar7;
}

