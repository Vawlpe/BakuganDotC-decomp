#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d003c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((DAT_08ac5938 != (undefined4 *)0x0) && (DAT_08ac5938[1] != 0)) {
    FUN_089bb728(DAT_08ac5938[1]);
    iVar1 = FUN_08a31570(*DAT_08ac5938);
    if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0xc), iVar1 != 0)) {
      FUN_089bb728(*(undefined4 *)(iVar1 + 8));
      iVar2 = FUN_089d0a6c(iVar1);
      if ((((0 < iVar2) && ((*(uint *)(DAT_08ac5940 + 4) & 0x1000000) != 0)) &&
          ((*(uint *)(DAT_08ac5940 + 0x2c) & 0x1000000) != 0)) &&
         (((*(uint *)(DAT_08ac5940 + 4) & 0x800000) != 0 &&
          ((*(uint *)(DAT_08ac5940 + 0x2c) & 0x800000) != 0)))) {
        if (*(int *)(iVar1 + 0x11c) < 2) {
          uVar3 = 1;
        }
        else {
          *(int *)(iVar1 + 0x11c) = *(int *)(iVar1 + 0x11c) + -1;
        }
      }
      FUN_089bb790(*(undefined4 *)(iVar1 + 8));
    }
    FUN_089bb790(DAT_08ac5938[1]);
  }
  return uVar3;
}

