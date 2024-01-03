#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0888efc8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
    uVar1 = DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,7);
    if (iVar2 == 1) {
      return 1;
    }
  }
  return 0;
}

