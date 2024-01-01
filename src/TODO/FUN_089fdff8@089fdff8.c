#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fdff8(int param_1)

{
  int iVar1;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 0x1074));
  if (*(char *)(param_1 + 0x24) == '\0') {
    if (*(char *)(param_1 + 0x26) == '\0') {
      iVar1 = FUN_089be7b4(param_1 + 0x28,*(undefined4 *)(param_1 + 0x4c));
      if (iVar1 == 0) {
        *(undefined *)(param_1 + 0x24) = 1;
      }
    }
    else if (*(char *)(param_1 + 0x27) == '\0') {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x1064);
      iVar1 = FUN_089be7b4(param_1 + 0x28,*(undefined4 *)(param_1 + 0x1070));
      if (iVar1 == 0) {
        zz_sceKernelDcacheWritebackInvalidateRange
                  (*(undefined4 *)(param_1 + 0x1068),*(undefined4 *)(param_1 + 0x106c));
        *(undefined *)(param_1 + 0x24) = 1;
      }
      else {
        *(undefined *)(param_1 + 0x27) = 1;
      }
    }
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 0x1074));
  return;
}

