#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b4df4(undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = *(int **)(PTR_DAT_08ac46dc + 0x148);
  if (piVar2 == (int *)0x0) {
    pcVar1 = *(code **)(PTR_DAT_08ac46dc + 0x3c);
  }
  else {
    iVar4 = piVar2[1];
    while( true ) {
      iVar4 = iVar4 + -1;
      if (-1 < iVar4) {
        piVar3 = piVar2 + iVar4;
        do {
          (*(code *)piVar3[2])();
          iVar4 = iVar4 + -1;
          piVar3 = piVar3 + -1;
        } while (-1 < iVar4);
      }
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)0x0) break;
      iVar4 = piVar2[1];
    }
    pcVar1 = *(code **)(PTR_DAT_08ac46dc + 0x3c);
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  _exit(param_1);
  return;
}

