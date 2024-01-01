#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a1fe30(void)

{
  int iVar1;
  
  iVar1 = -0x7fbaffff;
  if ((((DAT_08af13ac != -1) && (iVar1 = FUN_08a294bc(), iVar1 == 0)) &&
      (iVar1 = FUN_08a23474(), -1 < iVar1)) &&
     (iVar1 = zz_sceKernelDeleteLwMutex(&DAT_08afdaa0), -1 < iVar1)) {
    DAT_08af13ac = -1;
    iVar1 = 0;
  }
  return iVar1;
}

