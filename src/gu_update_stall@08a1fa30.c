#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int gu_update_stall(void)

{
  int iVar1;
  
  if (((DAT_08afcf60 != 0) || (*(int *)(DAT_08afcf9c + 0x10) != 0)) ||
     (iVar1 = zz_sceGeListUpdateStallAddr(DAT_08afcf6c,*(undefined4 *)(DAT_08afcf9c + 8)),
     -1 < iVar1)) {
    iVar1 = 0;
  }
  return iVar1;
}

