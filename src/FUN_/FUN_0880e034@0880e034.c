#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880e034(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0880ddb4(param_2);
  uVar2 = 0;
  if ((0 < iVar1) && (iVar1 < 0x15)) {
    uVar2 = *(undefined4 *)(&DAT_08a3424c + iVar1 * 4);
  }
  return uVar2;
}

