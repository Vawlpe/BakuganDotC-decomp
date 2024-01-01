#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088108cc(void)

{
  int iVar1;
  
  iVar1 = FUN_089c9da8();
  if (iVar1 == -1) {
    if (*(int *)(&DAT_08a34928 + *(int *)(DAT_08ac58c4 + 4) * 4) != -1) {
      *(int *)(DAT_08ac58c4 + 0x24) = *(int *)(&DAT_08a34928 + *(int *)(DAT_08ac58c4 + 4) * 4);
      goto LAB_08810918;
    }
    iVar1 = 100;
  }
  *(int *)(DAT_08ac58c4 + 0x24) = iVar1;
LAB_08810918:
  *(undefined4 *)(DAT_08ac58c4 + 0x20) = 1;
  return 0;
}

