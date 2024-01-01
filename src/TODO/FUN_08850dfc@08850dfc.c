#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08850dfc(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((DAT_08aba778 == 1) && (*(int *)(DAT_08ac58c4 + 0x20) == 1)) {
    uVar1 = *(undefined4 *)(&DAT_08a66524 + *(int *)(DAT_08ac58c4 + 4) * 4);
  }
  return uVar1;
}

