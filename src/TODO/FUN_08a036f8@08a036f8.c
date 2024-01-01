#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a036f8(void)

{
  int *piVar1;
  
  piVar1 = DAT_08af11e0 + 1;
  DAT_08af11e0 = (undefined4 *)*DAT_08af11e0;
  *(int *)(DAT_08af11dc + 0xc) = (*(int *)(DAT_08af11dc + 0xc) - *piVar1) + -0x10;
  return;
}

