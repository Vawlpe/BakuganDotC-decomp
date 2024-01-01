#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887800c(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_08b00870 != 0) {
    iVar1 = DAT_08b00870;
    iVar2 = *(int *)(DAT_08b00870 + 4);
    while( true ) {
      *(undefined4 *)(iVar1 + 0xf4) = 0x7fffffff;
      FUN_08876e10();
      if (iVar2 == 0) break;
      iVar1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  return;
}

