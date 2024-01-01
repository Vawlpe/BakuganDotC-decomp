#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bd298(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 < 2) {
    if (0 < iVar3) {
      if (*(int *)(DAT_08ac51f8 + 8) == 0) {
        return;
      }
      if (*(char *)(param_1 + 0x19) == '\0') {
        iVar3 = *(int *)(param_1 + 0x28);
        if (((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) &&
           (piVar2 = (int *)FUN_08a2d678(iVar3), piVar2 != (int *)0x0)) {
          pcVar4 = (code *)piVar2[3];
          while( true ) {
            (*pcVar4)();
            piVar2 = (int *)*piVar2;
            if (piVar2 == (int *)0x0) break;
            pcVar4 = (code *)piVar2[3];
          }
        }
        *(undefined *)(param_1 + 0x19) = 1;
        return;
      }
      if (*(char *)(param_1 + 5) == '\0') {
        *(undefined4 *)(param_1 + 0x10) = 2;
        *(undefined *)(param_1 + 0x19) = 0;
        return;
      }
      iVar3 = FUN_089d73c8();
      if (iVar3 != 0) {
        return;
      }
      FUN_089bd25c(param_1);
      return;
    }
    cVar1 = *(char *)(param_1 + 5);
  }
  else {
    if (iVar3 < 3) {
      return;
    }
    if (iVar3 < 4) {
      return;
    }
    cVar1 = *(char *)(param_1 + 5);
  }
  if (cVar1 == '\0') {
    FUN_089bd118(param_1);
    iVar3 = *(int *)(param_1 + 0x2c);
    if (((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) &&
       (piVar2 = (int *)FUN_08a2d678(iVar3), piVar2 != (int *)0x0)) {
      pcVar4 = (code *)piVar2[3];
      while( true ) {
        (*pcVar4)();
        piVar2 = (int *)*piVar2;
        if (piVar2 == (int *)0x0) break;
        pcVar4 = (code *)piVar2[3];
      }
    }
  }
  return;
}

