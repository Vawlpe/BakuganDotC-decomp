#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08984868(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x20);
  *(char *)(param_1 + 0xbce) = *(char *)(param_1 + 0xbcd);
  if (((int)*(char *)(iVar2 + 8) & 0x80U) == 0) {
    if (((*(byte *)(iVar2 + 8) & 0x20) != 0) && (*(char *)(param_1 + 0xbcd) != '\x13')) {
      uVar3 = (int)*(char *)(param_1 + 0xbcc) & 1;
      if (*(char *)(param_1 + 0xbcc) < 0) {
        uVar3 = -uVar3;
      }
      if (uVar3 == 1) {
        *(char *)(param_1 + 0xbce) = *(char *)(param_1 + 0xbce) + '\x01';
        *(undefined *)(param_1 + 0xbcf) = 2;
        uVar1 = 1;
        if ((*(byte *)(iVar2 + 4) & 0x20) != 0) {
          uVar1 = FUN_08984854();
        }
        return uVar1;
      }
    }
  }
  else {
    uVar3 = (int)*(char *)(param_1 + 0xbcc) & 1;
    if (*(char *)(param_1 + 0xbcc) < 0) {
      uVar3 = -uVar3;
    }
    if ((uVar3 == 0) && (*(char *)(param_1 + 0xbce) != '\0')) {
      *(char *)(param_1 + 0xbce) = *(char *)(param_1 + 0xbce) + -1;
      *(undefined *)(param_1 + 0xbcf) = 1;
      uVar1 = 1;
      if (((int)*(char *)(iVar2 + 4) & 0x80U) != 0) {
        uVar1 = FUN_08984854();
      }
      return uVar1;
    }
  }
  return 0;
}

