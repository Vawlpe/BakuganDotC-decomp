#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0884d20c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar1 = DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,0xb);
  uVar1 = DONE_Get_DAT_08AAC9E0();
  iVar3 = FUN_0880d0ac(uVar1,*(int *)(param_1 + 0x548) + 0xe);
  if ((iVar2 != -1) && (iVar2 <= iVar3)) {
    uVar4 = 1;
  }
  uVar1 = DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,2);
  if ((iVar2 == 0) && (iVar2 = FUN_0884d134(param_1,0xffffffff), iVar2 == 0)) {
    uVar4 = 1;
  }
  return uVar4;
}

