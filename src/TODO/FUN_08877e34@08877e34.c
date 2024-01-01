#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08877e34(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_08ab02f8;
  if (((DAT_08ab02f4 != '\0') && (DAT_08ab02f8 != 0)) &&
     (iVar1 = FUN_08860188(DAT_08ab02f8), iVar1 != 0)) {
    if (*(int *)(iVar2 + 8) == 0x15) {
      return 1;
    }
    iVar2 = FUN_088603e0(iVar2);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

