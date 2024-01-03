#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0884c440(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
    uVar1 = DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,2);
    if ((-1 < iVar2) && (iVar2 < 0x709)) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

