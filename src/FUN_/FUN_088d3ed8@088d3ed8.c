#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * FUN_088d3ed8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d3e6c();
  strcpy(&DAT_08abefbd,*(undefined4 *)(iVar1 + 8));
  uVar2 = FUN_0880cc48();
  iVar1 = FUN_0880d0ac(uVar2,8);
  if (iVar1 < 2) {
    if (0 < iVar1) {
      strcat(&DAT_08abefbd,&DAT_08a968e8);
    }
  }
  else if (iVar1 < 3) {
    strcat(&DAT_08abefbd,&DAT_08a968ec);
  }
  else if (iVar1 < 4) {
    strcat(&DAT_08abefbd,&DAT_08a968f0);
  }
  strcat(&DAT_08abefbd,&DAT_08a968f4);
  return &DAT_08abefbd;
}

