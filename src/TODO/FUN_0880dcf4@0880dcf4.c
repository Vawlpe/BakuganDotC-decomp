#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880dcf4(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 auStack_40 [14];
  
  memcpy_jak(auStack_40,&PTR_DAT_08aaca2c,0x38);
  iVar1 = _DONE_NotZero_DAT_08AAC9E0();
  iVar3 = 4;
  if (iVar1 != 0) {
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    iVar3 = FUN_0880dba8(uVar2);
    iVar3 = iVar3 << 2;
  }
  return *(undefined4 *)((int)auStack_40 + iVar3);
}

