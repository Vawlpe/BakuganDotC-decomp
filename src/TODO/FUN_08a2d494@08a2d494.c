#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a2d494(char *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 **)(param_1 + 8);
  iVar5 = 0;
  puVar1 = puVar4;
  if ((puVar4 != (undefined4 *)0x0) && (puVar1 = (undefined4 *)*puVar4, puVar1 != (undefined4 *)0x0)
     ) {
    iVar3 = puVar1[3];
    while (puVar2 = puVar1, iVar3 != param_2) {
      puVar1 = (undefined4 *)*puVar2;
      if (puVar1 == (undefined4 *)0x0) goto LAB_08a2d51c;
      iVar3 = puVar1[3];
      puVar4 = puVar2;
    }
    puVar1 = puVar2;
    if (*param_1 == '\0') {
      iVar5 = 1;
      *puVar4 = *puVar2;
      *puVar2 = 0;
    }
    else if (*(char *)(puVar2 + 2) == '\0') {
      *(undefined *)(puVar2 + 2) = 1;
      iVar5 = 1;
    }
  }
LAB_08a2d51c:
  if ((iVar5 != 0) && (*(char *)(puVar1 + 2) == '\0')) {
    if ((*(int *)(param_1 + 0xc) != 0) &&
       (iVar3 = FUN_089d774c(*(int *)(param_1 + 0xc),puVar1), iVar3 != 0)) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 == (undefined4 *)0x0) {
      iVar3 = *(int *)(param_1 + 4);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(puVar1,0,0);
      FUN_089d866c();
      iVar3 = *(int *)(param_1 + 4);
    }
    *(int *)(param_1 + 4) = iVar3 + -1;
  }
  return iVar5;
}

