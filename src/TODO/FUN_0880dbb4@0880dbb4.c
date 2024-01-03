#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880dbb4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar3 = 0;
  iVar1 = DONE_NotZero_DAT_08AAC9E0(param_1,0,0);
  if (iVar1 != 0) {
    uVar2 = DONE_Get_DAT_08AAC9E0();
    iVar3 = FUN_0880dba8(uVar2);
  }
  if (iVar3 == 2) {
    uVar4 = 1;
  }
  return uVar4;
}

