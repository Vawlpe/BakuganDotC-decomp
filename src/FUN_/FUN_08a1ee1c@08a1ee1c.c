#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a1ee1c(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *(int *)(DAT_08afcf9c + 0xc) -
               (*(int *)(DAT_08afcf9c + 8) - *(int *)(DAT_08afcf9c + 4));
  }
  return *(undefined4 *)(DAT_08afcf9c + 8);
}

