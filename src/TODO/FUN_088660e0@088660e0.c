#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088660e0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (DAT_08aba808 != (int *)0x0) {
    iVar4 = *DAT_08aba808;
  }
  if (iVar4 == 0) {
    return 0;
  }
  cVar1 = *(char *)(iVar4 + 0x158);
  while( true ) {
    if (cVar1 == '\0') {
      iVar4 = *(int *)(iVar4 + 4);
    }
    else {
      iVar2 = FUN_0880d354();
      if (iVar2 == 0) {
        return iVar4;
      }
      iVar2 = DONE_NotZero_DAT_08AAC9E0();
      if (iVar2 == 0) {
        iVar4 = *(int *)(iVar4 + 4);
      }
      else {
        iVar5 = *(int *)(iVar4 + 0x150);
        uVar3 = DONE_Get_DAT_08AAC9E0();
        iVar2 = FUN_0880d0ac(uVar3,0x13);
        if (iVar5 == iVar2) {
          return iVar4;
        }
        iVar4 = *(int *)(iVar4 + 4);
      }
    }
    if (iVar4 == 0) break;
    cVar1 = *(char *)(iVar4 + 0x158);
  }
  return 0;
}

