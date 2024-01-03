#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08922184(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,0x2b);
  if (iVar2 == 2) {
    uVar1 = DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,0x2e);
    if ((iVar2 == 0) && (*(int *)(DAT_08ac58c4 + 4) == 4)) {
      return 1;
    }
  }
  return 0;
}

