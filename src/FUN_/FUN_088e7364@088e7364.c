#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088e7364(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = FUN_088e1948();
  if (*(char *)(*(int *)(iVar1 + 0x164) + 0xc) == '\x01') {
    *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_1 + 0x3a0);
    iVar1 = FUN_088deefc(param_1,0);
    if (iVar1 == 0) {
      FUN_088def24(0x3e4ccccd,param_1,0,1,0);
    }
    *(undefined4 *)(param_1 + 0x3a0) = 9;
    return 1;
  }
  if (param_2 == '\0') {
    if (*(char *)(DAT_08abf710 + 0x88) != '\0') {
      if (*(char *)(param_1 + 0x434) == '\0') {
        FUN_088def24(0x3e4ccccd,param_1,0,1,0);
        *(undefined *)(param_1 + 0x434) = 1;
      }
      return 1;
    }
    *(undefined *)(param_1 + 0x434) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x434) = 0;
  }
  return 0;
}

