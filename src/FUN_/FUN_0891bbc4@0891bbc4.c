#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0891bbc4(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = FUN_0880cc48();
  iVar2 = FUN_0880d0ac(uVar1,0x2b);
  if (iVar2 == 2) {
    uVar1 = FUN_0880cc48();
    iVar2 = FUN_0880d0ac(uVar1,0x2e);
    if (((iVar2 == 0) && (*(int *)(DAT_08ac58c4 + 4) == 4)) &&
       (piVar3 = (int *)FUN_0880cc48(), (*(ushort *)(*piVar3 + 0x82) & 1) == 0)) {
      return 1;
    }
  }
  return 0;
}

