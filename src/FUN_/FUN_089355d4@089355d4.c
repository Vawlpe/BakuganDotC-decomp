#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089355d4(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x74) != '\0') {
    return 1;
  }
  iVar1 = param_1 + *(char *)(param_1 + 0x76);
  if (*(char *)(iVar1 + 0x19f8) == -1) {
    return 2;
  }
  if ((*(byte *)(iVar1 + 0x19fc) & 1) == 0) {
    FUN_08935338(param_1);
    FUN_08935344(param_1,1,*(undefined *)(param_1 + 0x76));
    return 1;
  }
  FUN_08935344(param_1,0,*(char *)(param_1 + 0x76));
  return 1;
}

