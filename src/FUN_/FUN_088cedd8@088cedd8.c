#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_088cedd8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = FUN_089bfa40(500);
  iVar2 = FUN_089bf93c(0x173,1);
  iVar3 = FUN_088c2010(iVar1);
  iVar4 = *(int *)(param_1 + 0x74);
  bVar5 = iVar3 != 0 || (iVar2 != 0 || iVar1 == 0);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x140) == 3)) && (*(int *)(iVar4 + 0x140) == 8)) {
    bVar5 = true;
  }
  if (bVar5 != false) {
    FUN_088e1570(iVar4);
  }
  if (DAT_08abec9c == '\0') {
    bVar5 = true;
  }
  return bVar5;
}

