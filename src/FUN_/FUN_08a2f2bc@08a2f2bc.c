#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a2f2bc(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  if ((puVar3 != (undefined4 *)0x0) && (puVar4 = (undefined4 *)*puVar3, puVar4 != (undefined4 *)0x0)
     ) {
    cVar1 = *(char *)(puVar4 + 2);
    while( true ) {
      if (cVar1 == '\0') {
        puVar5 = (undefined4 *)*puVar4;
        puVar3 = puVar4;
      }
      else {
        *puVar3 = *puVar4;
        *puVar4 = 0;
        if ((*(int *)(param_1 + 0xc) != 0) &&
           (iVar2 = FUN_089d774c(*(int *)(param_1 + 0xc),puVar4), iVar2 != 0)) {
          puVar4 = (undefined4 *)0x0;
        }
        if (puVar4 == (undefined4 *)0x0) {
          iVar2 = *(int *)(param_1 + 4);
        }
        else {
          FUN_089d8634();
          FUN_089d7fd8(puVar4,0,0);
          FUN_089d866c();
          iVar2 = *(int *)(param_1 + 4);
        }
        *(int *)(param_1 + 4) = iVar2 + -1;
        puVar5 = (undefined4 *)*puVar3;
      }
      if (puVar5 == (undefined4 *)0x0) break;
      cVar1 = *(char *)(puVar5 + 2);
      puVar4 = puVar5;
    }
  }
  return;
}

