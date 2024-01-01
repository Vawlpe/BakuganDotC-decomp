#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08920708(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined uVar3;
  
  cVar1 = *(char *)(param_1 + 0x74);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x10) != 0) {
        uVar3 = 2;
        if (*(char *)(param_1 + 0x77) != 0) {
          uVar3 = (undefined)((uint)((*(char *)(param_1 + 0x77) + -1) * 0x1000000) >> 0x18);
        }
        *(undefined *)(param_1 + 0x77) = uVar3;
        return 1;
      }
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x40) != 0) {
        uVar3 = 0;
        if (*(char *)(param_1 + 0x77) != 2) {
          uVar3 = (undefined)((uint)((*(char *)(param_1 + 0x77) + 1) * 0x1000000) >> 0x18);
        }
        *(undefined *)(param_1 + 0x77) = uVar3;
        return 1;
      }
    }
  }
  else if (cVar1 < '\x02') {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x10) != 0) {
      uVar2 = 1;
      if (*(char *)(param_1 + 0x75) != '\0') {
        *(undefined *)(param_1 + 0x75) = 0;
        *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x2137) + -1;
        return uVar2;
      }
      if (*(char *)(param_1 + 0x78) == '\0') {
        *(undefined *)(param_1 + 0x75) = 1;
        return uVar2;
      }
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + -1;
      return uVar2;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x40) != 0) {
      uVar2 = 1;
      if (*(char *)(param_1 + 0x75) != '\0') {
        *(undefined *)(param_1 + 0x75) = 0;
        *(undefined *)(param_1 + 0x78) = 0;
        return uVar2;
      }
      if ((int)*(char *)(param_1 + 0x78) == *(byte *)(param_1 + 0x2137) - 1) {
        *(undefined *)(param_1 + 0x75) = 1;
        return uVar2;
      }
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
      return uVar2;
    }
  }
  else if (cVar1 < '\x03') {
    if (((int)*(char *)(*(int *)(param_1 + 0x20) + 8) & 0x80U) != 0) {
      uVar3 = 5;
      if (*(char *)(param_1 + 0x79) != 0) {
        uVar3 = (undefined)((uint)((*(char *)(param_1 + 0x79) + -1) * 0x1000000) >> 0x18);
      }
      *(undefined *)(param_1 + 0x79) = uVar3;
      return 1;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x20) != 0) {
      uVar3 = 0;
      if (*(char *)(param_1 + 0x79) != 5) {
        uVar3 = (undefined)((uint)((*(char *)(param_1 + 0x79) + 1) * 0x1000000) >> 0x18);
      }
      *(undefined *)(param_1 + 0x79) = uVar3;
      return 1;
    }
  }
  return 0;
}

