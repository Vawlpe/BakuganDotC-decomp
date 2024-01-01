#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891ee2c(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    FUN_089b1bd8();
  }
  else {
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,0x2d);
    if (iVar2 != 0) {
      piVar3 = (int *)_DONE_Get_DAT_08AAC9E0();
      uVar1 = _DONE_Get_DAT_08AAC9E0();
      iVar4 = FUN_0880d0ac(uVar1,0x2d);
      iVar4 = *(int *)(*piVar3 + 0x464) - iVar4;
      iVar2 = 9999999;
      if ((iVar4 < 10000000) && (iVar2 = iVar4, iVar4 < 0)) {
        iVar2 = 0;
      }
      *(int *)(*piVar3 + 0x464) = iVar2;
    }
  }
  return;
}

