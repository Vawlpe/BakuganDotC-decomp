#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089a5d70(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar2 = _DONE_Get_DAT_08AAC9E0();
  iVar3 = FUN_0880d0ac(uVar2,0x17);
  if (iVar3 < 5) {
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    cVar1 = FUN_0880d0ac(uVar2,0x17);
    iVar4 = (int)cVar1;
  }
  return iVar4;
}

