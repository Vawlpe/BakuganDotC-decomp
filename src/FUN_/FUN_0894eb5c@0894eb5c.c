#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0894eb5c(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x709) != '\0') {
    cVar1 = *(char *)(param_1 + 0x74);
    if (*(char *)(param_1 + 0x708) == '\0') {
      *(char *)(param_1 + 0x75) = cVar1;
      *(char *)(param_1 + 0x74) = cVar1 + '\x01';
      if ('\x01' < *(char *)(param_1 + 0x74)) {
        *(undefined *)(param_1 + 0x74) = 0;
      }
      memset_jak(param_1 + 0x708,0,0xc);
      *(undefined *)(param_1 + 0x708) = 0;
      *(undefined4 *)(param_1 + 0x70c) = 0x41000000;
      return 1;
    }
    *(char *)(param_1 + 0x75) = cVar1;
    *(char *)(param_1 + 0x74) = cVar1 + -1;
    if (*(char *)(param_1 + 0x74) < '\0') {
      *(undefined *)(param_1 + 0x74) = 1;
    }
    memset_jak(param_1 + 0x708,0,0xc);
    *(undefined *)(param_1 + 0x708) = 1;
    *(undefined4 *)(param_1 + 0x70c) = 0x41000000;
    return 1;
  }
  if (((int)*(char *)(*(int *)(param_1 + 0x20) + 2) & 0x80U) == 0) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 2) & 0x20) != 0) {
      cVar1 = *(char *)(param_1 + 0x74);
      *(char *)(param_1 + 0x74) = cVar1 + -1;
      *(char *)(param_1 + 0x75) = cVar1;
      if (*(char *)(param_1 + 0x74) < '\0') {
        *(undefined *)(param_1 + 0x74) = 1;
      }
      memset_jak(param_1 + 0x708,0,0xc);
      *(undefined *)(param_1 + 0x708) = 1;
      *(undefined4 *)(param_1 + 0x70c) = 0x41000000;
      return 1;
    }
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x74);
  *(char *)(param_1 + 0x74) = cVar1 + '\x01';
  *(char *)(param_1 + 0x75) = cVar1;
  if ('\x01' < *(char *)(param_1 + 0x74)) {
    *(undefined *)(param_1 + 0x74) = 0;
  }
  memset_jak(param_1 + 0x708,0,0xc);
  *(undefined *)(param_1 + 0x708) = 0;
  *(undefined4 *)(param_1 + 0x70c) = 0x41000000;
  return 1;
}

