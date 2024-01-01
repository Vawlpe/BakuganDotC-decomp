#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d3760(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 100;
  iVar1 = FUN_089d3ab4();
  if (iVar1 != 0) {
    iVar1 = zz_sceNetGetMallocStat();
    if (iVar1 == 0) {
      iVar2 = 100 - (DAT_08af829c * 100) / DAT_08af8294;
    }
  }
  return iVar2;
}

