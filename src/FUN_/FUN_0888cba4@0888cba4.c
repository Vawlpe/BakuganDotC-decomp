#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888cba4(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = 0;
    piVar2 = (int *)(param_1 + 0x50);
    do {
      if (*(char *)((int)piVar2 + 0xd) == '\0') {
        iVar1 = *piVar2;
      }
      else {
        *piVar2 = 0;
        *(undefined *)((int)piVar2 + 0xd) = 0;
        iVar1 = *piVar2;
      }
      if (iVar1 == 0) {
        piVar2[1] = 0;
      }
      else {
        FUN_089d8634();
        FUN_089d7fd8(iVar1,0,0);
        FUN_089d866c();
        *piVar2 = 0;
        piVar2[1] = 0;
      }
      piVar2[2] = 0;
      iVar3 = iVar3 + 1;
      *(undefined *)(piVar2 + 3) = 0;
      piVar2 = piVar2 + 4;
    } while (iVar3 < 10);
    FUN_08a02fb0(param_1 + 0x50,10,0x10,FUN_08a2a21c,0,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

