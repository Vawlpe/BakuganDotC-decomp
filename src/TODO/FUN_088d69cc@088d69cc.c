#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d69cc(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x180);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      bVar1 = true;
      iVar2 = FUN_088e1948();
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x140) == 9)) && (*(char *)(iVar2 + 0x355) == '\0')) {
        bVar1 = false;
      }
      if (bVar1) {
        *(undefined4 *)(param_1 + 0x1b0) = 0x96;
        *(undefined4 *)(param_1 + 0x180) = 1;
      }
    }
  }
  else if (iVar2 < 2) {
    if (*(int *)(param_1 + 0x1b0) < 1) {
      *(undefined4 *)(param_1 + 0x180) = 2;
    }
    else {
      *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + -1;
    }
  }
  else if (iVar2 < 3) {
    *(undefined4 *)(param_1 + 0x16c) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  return;
}

