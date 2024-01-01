#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889da04(void)

{
  if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
    *(int *)(DAT_08ac58c4 + 4) =
         (*(int *)(DAT_08ac58c4 + 0x24) / 100000) * 4 + (*(int *)(DAT_08ac58c4 + 0x24) / 10000) % 10
    ;
  }
  return;
}

