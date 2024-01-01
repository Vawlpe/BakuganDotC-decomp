#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880dd54(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 auStack_40 [14];
  
  memcpy_jak(auStack_40,&PTR_s_English_US_08aaca64,0x38);
  iVar1 = FUN_0880d2e0();
  iVar3 = 4;
  if (iVar1 != 0) {
    uVar2 = FUN_0880cc48();
    iVar3 = FUN_0880dba8(uVar2);
    iVar3 = iVar3 << 2;
  }
  return *(undefined4 *)((int)auStack_40 + iVar3);
}

