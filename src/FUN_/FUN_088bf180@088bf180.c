#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088bf180(void)

{
  int iVar1;
  
  iVar1 = FUN_089bf93c(0xbb9,1);
  if (iVar1 == 0) {
    FUN_089bf6e8(0xbb9,100);
    if ((*(int *)(DAT_08ac58c4 + 4) != 0x20) && (iVar1 = FUN_088e1948(), iVar1 != 0)) {
      *(undefined *)(iVar1 + 0x3c4) = 1;
    }
  }
  return;
}

