#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089606b4(int param_1)

{
  int iVar1;
  undefined uVar2;
  char cVar3;
  
  cVar3 = *(char *)(param_1 + 0x5025);
  iVar1 = FUN_0880d354();
  if (iVar1 != 0) {
    cVar3 = *(char *)(param_1 + *(int *)(param_1 + 0x52a0) + 0x5026);
  }
  if (cVar3 == '\0') {
    if (((int)*(char *)(*(int *)(param_1 + 0x20) + 8) & 0x80U) != 0) {
      uVar2 = 3;
      if (*(char *)(param_1 + 0x5024) != 0) {
        uVar2 = (undefined)((uint)((*(char *)(param_1 + 0x5024) + -1) * 0x1000000) >> 0x18);
      }
      *(undefined *)(param_1 + 0x5024) = uVar2;
      return 1;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x20) != 0) {
      uVar2 = 0;
      if (*(char *)(param_1 + 0x5024) != 3) {
        uVar2 = (undefined)((uint)((*(char *)(param_1 + 0x5024) + 1) * 0x1000000) >> 0x18);
      }
      *(undefined *)(param_1 + 0x5024) = uVar2;
      return 1;
    }
  }
  return 0;
}

