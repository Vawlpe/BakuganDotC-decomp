#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d7344(int param_1)

{
  int iVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(char *)(param_1 + 0x15e) != '\0') {
    *(byte *)(param_1 + 0x15f) = *(byte *)(param_1 + 0x15f) & 0xfd;
    iVar1 = FUN_088e1948();
    if (iVar1 != 0) {
      local_40 = *(undefined4 *)(param_1 + 0x20);
      uStack_3c = *(undefined4 *)(param_1 + 0x24);
      uStack_38 = *(undefined4 *)(param_1 + 0x28);
      uStack_34 = *(undefined4 *)(param_1 + 0x2c);
      iVar1 = FUN_088d940c(0x41a80000,param_1,&local_40);
      if (iVar1 == 1) {
        local_30 = *(undefined4 *)(param_1 + 0x20);
        uStack_2c = *(undefined4 *)(param_1 + 0x24);
        uStack_28 = *(undefined4 *)(param_1 + 0x28);
        uStack_24 = *(undefined4 *)(param_1 + 0x2c);
        iVar1 = FUN_088d95a4(param_1);
        if (iVar1 == 1) {
          *(byte *)(param_1 + 0x15f) = *(byte *)(param_1 + 0x15f) | 2;
        }
      }
    }
  }
  return;
}

