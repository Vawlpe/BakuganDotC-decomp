#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0895e3bc(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(iVar4 + 8) & 0x10) != 0) {
    bVar1 = *(byte *)(param_1 + 0x74);
    uVar3 = 1;
    if (*(char *)(param_1 + 0x75) != '\0') {
      if (-1 < (char)bVar1) {
        *(byte *)(param_1 + 0x74) = (bVar1 & 3) + 0x10;
        *(undefined *)(param_1 + 0x75) = 0;
        return uVar3;
      }
      *(byte *)(param_1 + 0x74) = '\x10' - (-bVar1 & 3);
      *(undefined *)(param_1 + 0x75) = 0;
      return uVar3;
    }
    if ('\x03' < (char)bVar1) {
      *(byte *)(param_1 + 0x74) = bVar1 - 4;
      return uVar3;
    }
    *(undefined *)(param_1 + 0x75) = 1;
    return uVar3;
  }
  if ((*(byte *)(iVar4 + 8) & 0x40) == 0) {
    if (((int)*(char *)(iVar4 + 8) & 0x80U) == 0) {
      if (((*(byte *)(iVar4 + 8) & 0x20) != 0) && (*(char *)(param_1 + 0x75) == '\0')) {
        cVar2 = *(char *)(param_1 + 0x74);
        uVar5 = (uint)cVar2;
        if ((int)uVar5 < 0) {
          uVar5 = -(-uVar5 & 3);
        }
        else {
          uVar5 = uVar5 & 3;
        }
        if (uVar5 != 3) {
          *(char *)(param_1 + 0x74) = cVar2 + '\x01';
          return 1;
        }
        *(char *)(param_1 + 0x74) = cVar2 + -3;
        return 1;
      }
    }
    else if (*(char *)(param_1 + 0x75) == '\0') {
      cVar2 = *(char *)(param_1 + 0x74);
      uVar5 = (uint)cVar2;
      if ((int)uVar5 < 0) {
        uVar5 = -(-uVar5 & 3);
      }
      else {
        uVar5 = uVar5 & 3;
      }
      if (uVar5 != 0) {
        *(char *)(param_1 + 0x74) = cVar2 + -1;
        return 1;
      }
      *(char *)(param_1 + 0x74) = cVar2 + '\x03';
      return 1;
    }
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x74);
  uVar3 = 1;
  if (*(char *)(param_1 + 0x75) != '\0') {
    if (-1 < (char)bVar1) {
      *(byte *)(param_1 + 0x74) = bVar1 & 3;
      *(undefined *)(param_1 + 0x75) = 0;
      return uVar3;
    }
    *(byte *)(param_1 + 0x74) = -(-bVar1 & 3);
    *(undefined *)(param_1 + 0x75) = 0;
    return uVar3;
  }
  if ('\x0f' < (char)bVar1) {
    *(undefined *)(param_1 + 0x75) = 1;
    return uVar3;
  }
  *(byte *)(param_1 + 0x74) = bVar1 + 4;
  return uVar3;
}

