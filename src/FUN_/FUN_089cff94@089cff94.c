#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cff94(void)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_08ac5938 != (undefined4 *)0x0) && (DAT_08ac5938[1] != 0)) {
    FUN_089bb728(DAT_08ac5938[1]);
    piVar1 = (int *)FUN_08a31570(*DAT_08ac5938);
    if (piVar1 != (int *)0x0) {
      iVar2 = piVar1[3];
      while( true ) {
        piVar1 = (int *)*piVar1;
        if (iVar2 != 0) {
          FUN_089d04cc();
        }
        if (piVar1 == (int *)0x0) break;
        iVar2 = piVar1[3];
      }
    }
    memset_jak(DAT_08ac5940,0,0x3c0);
    FUN_089bb790(DAT_08ac5938[1]);
    iVar2 = FUN_0881b254();
    *(undefined4 *)(iVar2 + 0xe8) = 0xffffffff;
  }
  return;
}

