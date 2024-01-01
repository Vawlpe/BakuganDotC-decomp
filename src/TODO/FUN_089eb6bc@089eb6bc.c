#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089eb6bc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((DAT_08ac5d88 == (undefined4 *)0x0) || (iVar1 = FUN_089bfae0(*DAT_08ac5d88), iVar1 != 0)) {
    iVar1 = FUN_089eac08();
    if (iVar1 != 0) {
      uVar2 = FUN_089eac30();
      FUN_089eb250(uVar2);
    }
    iVar1 = FUN_089ebcf0();
    if (iVar1 != 0) {
      iVar1 = FUN_089ebd18();
      FUN_089eb250(*(undefined4 *)(iVar1 + 0x74));
    }
    iVar1 = FUN_08816a90();
    if (iVar1 != 0) {
      iVar1 = FUN_08816aac();
      FUN_089eb250(*(undefined4 *)(iVar1 + 0x2c));
    }
  }
  return;
}

