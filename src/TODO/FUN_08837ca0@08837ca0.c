#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08837ca0(void)

{
  int iVar1;
  
  if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
    iVar1 = FUN_0880de08(0xffffffff);
    return iVar1 + -0x23;
  }
  return *(int *)(&DAT_08a64c98 + *(int *)(DAT_08ac58c4 + 4) * 4);
}

