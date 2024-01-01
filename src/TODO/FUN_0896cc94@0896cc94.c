#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0896cc94(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if (((int)*(char *)(*(int *)(param_1 + 0x20) + 2) & 0x80U) == 0) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 2) & 0x20) != 0) {
      iVar2 = param_1 + *(char *)(param_1 + 0x29be);
      bVar1 = *(byte *)(iVar2 + 0x2a4c);
      if (bVar1 < 0x96) {
        *(byte *)(iVar2 + 0x2a4c) = bVar1 + 10;
        *(undefined *)(param_1 + 0x2a50) = 1;
        return 1;
      }
    }
  }
  else {
    iVar2 = param_1 + *(char *)(param_1 + 0x29be);
    bVar1 = *(byte *)(iVar2 + 0x2a4c);
    if (0x32 < bVar1) {
      *(byte *)(iVar2 + 0x2a4c) = bVar1 - 10;
      *(undefined *)(param_1 + 0x2a50) = 0;
      return 1;
    }
  }
  return 0;
}

