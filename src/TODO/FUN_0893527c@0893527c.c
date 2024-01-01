#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0893527c(int param_1)

{
  int iVar1;
  undefined uVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x74) == '\0') {
    if ((*(byte *)(iVar1 + 8) & 0x40) != 0) {
      *(undefined *)(param_1 + 0x74) = 1;
      return 1;
    }
    if (((int)*(char *)(iVar1 + 8) & 0x80U) != 0) {
      uVar2 = 3;
      if (*(char *)(param_1 + 0x76) != 0) {
        uVar2 = (undefined)((uint)((*(char *)(param_1 + 0x76) + -1) * 0x1000000) >> 0x18);
      }
      *(undefined *)(param_1 + 0x76) = uVar2;
      return 1;
    }
    if ((*(byte *)(iVar1 + 8) & 0x20) != 0) {
      uVar2 = 0;
      if (*(char *)(param_1 + 0x76) != 3) {
        uVar2 = (undefined)((uint)((*(char *)(param_1 + 0x76) + 1) * 0x1000000) >> 0x18);
      }
      *(undefined *)(param_1 + 0x76) = uVar2;
      return 1;
    }
  }
  else if ((*(byte *)(iVar1 + 8) & 0x10) != 0) {
    *(undefined *)(param_1 + 0x74) = 0;
    return 1;
  }
  return 0;
}

