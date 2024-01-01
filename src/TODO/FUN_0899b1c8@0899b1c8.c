#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0899b1c8(int param_1,undefined param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  cVar4 = '\0';
  iVar3 = 0;
  iVar5 = param_1;
  do {
    if (*(char *)(iVar5 + 0x7f) == '\0') {
      cVar1 = FUN_0899af04(param_1,param_2,iVar3);
      cVar4 = cVar4 + cVar1;
    }
    else {
      *(char *)(iVar5 + 0x7f) = *(char *)(iVar5 + 0x7f) + -1;
    }
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + 0x28;
  } while (iVar3 < 8);
  iVar5 = 8;
  iVar3 = param_1 + 0x140;
  do {
    if (*(char *)(iVar3 + 0x7f) == '\0') {
      cVar1 = FUN_0899af04(param_1,param_2,iVar5);
      cVar4 = cVar4 + cVar1;
    }
    else {
      *(char *)(iVar3 + 0x7f) = *(char *)(iVar3 + 0x7f) + -1;
    }
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x28;
  } while (iVar5 < 0x10);
  iVar3 = 0;
  iVar5 = 0;
  do {
    iVar3 = iVar3 + 1;
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar5);
    *(undefined4 *)(piVar2[0x10] + 0xbc) = *(undefined4 *)(*piVar2 + 0xbc);
    iVar5 = iVar5 + 4;
  } while (iVar3 < 8);
  iVar3 = 0;
  iVar5 = 0;
  do {
    iVar3 = iVar3 + 1;
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar5);
    *(undefined4 *)(piVar2[0x2a] + 0xbc) = *(undefined4 *)(*piVar2 + 0xbc);
    iVar5 = iVar5 + 4;
  } while (iVar3 < 8);
  return cVar4 == '\x10';
}

