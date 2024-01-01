#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08984788(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(iVar2 + 8) & 0x10) == 0) {
    if ((*(byte *)(iVar2 + 8) & 0x40) == 0) {
      if (((int)*(char *)(iVar2 + 8) & 0x80U) == 0) {
        if ((*(byte *)(iVar2 + 8) & 0x20) != 0) {
          cVar1 = *(char *)(param_1 + 0xbcc);
          uVar3 = (int)cVar1 & 1;
          if (cVar1 < 0) {
            uVar3 = -uVar3;
          }
          if (uVar3 != 1) {
            *(char *)(param_1 + 0xbcc) = cVar1 + '\x01';
            return 1;
          }
        }
      }
      else {
        cVar1 = *(char *)(param_1 + 0xbcc);
        uVar3 = (int)cVar1 & 1;
        if (cVar1 < 0) {
          uVar3 = -uVar3;
        }
        if (uVar3 != 0) {
          *(char *)(param_1 + 0xbcc) = cVar1 + -1;
          return 1;
        }
      }
    }
    else if (*(char *)(param_1 + 0xbcc) < '\x02') {
      *(char *)(param_1 + 0xbcc) = *(char *)(param_1 + 0xbcc) + '\x02';
      return 1;
    }
  }
  else if ('\x01' < *(char *)(param_1 + 0xbcc)) {
    *(char *)(param_1 + 0xbcc) = *(char *)(param_1 + 0xbcc) + -2;
    return 1;
  }
  return 0;
}

