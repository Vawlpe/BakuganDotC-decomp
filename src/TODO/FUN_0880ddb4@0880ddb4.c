#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0880ddb4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == -1) {
    uVar1 = _DONE_Get_DAT_08AAC9E0(0xffffffff,0xffffffff,0xffffffff);
    param_1 = FUN_0880d0ac(uVar1,0x13);
  }
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,param_1 + 3);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  return iVar2;
}

