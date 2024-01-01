#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cfb24(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((DAT_08ac5938 != (int *)0x0) && (*DAT_08ac5938 != 0)) {
    FUN_089bb728(DAT_08ac5938[1]);
    iVar2 = *(int *)(*DAT_08ac5938 + 4);
    if (0 < iVar2) {
      piVar1 = (int *)FUN_08a31570(*DAT_08ac5938);
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          if ((iVar3 != 0) && (*(undefined *)(piVar1 + 2) = 1, piVar1[3] != 0)) {
            FUN_089d03c4(piVar1[3],3);
          }
          iVar3 = iVar3 + 1;
          piVar1 = (int *)*piVar1;
        } while (iVar3 < iVar2);
      }
      FUN_08a313f8(*DAT_08ac5938);
    }
    FUN_089bb790(DAT_08ac5938[1]);
  }
  return;
}

