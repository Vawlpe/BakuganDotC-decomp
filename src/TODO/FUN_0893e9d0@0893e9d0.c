#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0893e9d0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(iVar2 + 8) & 0x10) != 0) {
    if (*(char *)(param_1 + 0x74) == '\x01') {
      *(undefined *)(param_1 + 0x74) = 0;
      return 1;
    }
    *(undefined *)(param_1 + 0x74) = 1;
    *(char *)(param_1 + *(char *)(param_1 + 0x74) + 0x75) = *(char *)(param_1 + 0x75) / '\x05';
    return 1;
  }
  if ((*(byte *)(iVar2 + 8) & 0x40) != 0) {
    if (*(char *)(param_1 + 0x74) == '\0') {
      *(undefined *)(param_1 + 0x74) = 1;
      *(char *)(param_1 + *(char *)(param_1 + 0x74) + 0x75) = *(char *)(param_1 + 0x75) / '\x05';
      return 1;
    }
    *(undefined *)(param_1 + 0x74) = 0;
    return 1;
  }
  if (((int)*(char *)(iVar2 + 8) & 0x80U) != 0) {
    iVar2 = param_1 + *(char *)(param_1 + 0x74);
    cVar1 = *(char *)(iVar2 + 0x75) + -1;
    if (*(char *)(param_1 + 0x74) == 0) {
      *(char *)(iVar2 + 0x75) = cVar1;
      if (*(char *)(iVar2 + 0x75) < '\0') {
        *(undefined *)(iVar2 + 0x75) = 9;
      }
      return 1;
    }
    *(char *)(iVar2 + 0x75) = cVar1;
    if (*(char *)(iVar2 + 0x75) < '\0') {
      *(undefined *)(iVar2 + 0x75) = 1;
    }
    return 1;
  }
  if ((*(byte *)(iVar2 + 8) & 0x20) != 0) {
    iVar2 = param_1 + *(char *)(param_1 + 0x74);
    cVar1 = *(char *)(iVar2 + 0x75) + '\x01';
    if (*(char *)(param_1 + 0x74) == 0) {
      *(char *)(iVar2 + 0x75) = cVar1;
      if ('\t' < *(char *)(iVar2 + 0x75)) {
        *(undefined *)(iVar2 + 0x75) = 0;
      }
      return 1;
    }
    *(char *)(iVar2 + 0x75) = cVar1;
    if ('\x01' < *(char *)(iVar2 + 0x75)) {
      *(undefined *)(iVar2 + 0x75) = 0;
    }
    return 1;
  }
  return 0;
}

