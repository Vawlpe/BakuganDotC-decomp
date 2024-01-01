#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882ab08(void)

{
  int iVar1;
  
  if (DAT_08ab9f6c != '\0') {
    iVar1 = zz_sceGeEdramGetAddr();
    memcpy_jak(DAT_08ab9f60,iVar1 + DAT_08ac5db0 * 0x88000,0x20000);
  }
  return;
}

