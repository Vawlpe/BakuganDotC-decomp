#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0884d3cc(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar4 = 0;
  do {
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,iVar4 + 3);
    if (0 < iVar2) {
      iVar6 = iVar6 + 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  iVar4 = FUN_0880d0ac(uVar1,0xe);
  iVar2 = 1;
  iVar5 = 1;
  if (1 < iVar6) {
    do {
      uVar1 = _DONE_Get_DAT_08AAC9E0();
      iVar3 = FUN_0880d0ac(uVar1,iVar2 + 0xe);
      if (iVar4 == iVar3) {
        iVar5 = iVar5 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar6);
  }
  return iVar6 == iVar5;
}

