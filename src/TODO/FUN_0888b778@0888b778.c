#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888b778(void)

{
  int iVar1;
  
  iVar1 = DAT_08b00890;
  if (DAT_08b00890 != 0) {
    do {
      FUN_0888b400(iVar1);
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != 0);
  }
  return;
}

