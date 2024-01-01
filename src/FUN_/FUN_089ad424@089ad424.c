#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ad424(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x74);
  if ('\x03' < cVar1) {
    if (((int)*(char *)(*(int *)(param_1 + 0x20) + 8) & 0x80U) != 0) {
      *(char *)(param_1 + 0x74) = cVar1 + -1;
      if (*(char *)(param_1 + 0x74) == '\x03') {
        *(char *)(param_1 + 0x74) = *(char *)(param_1 + 0xbb3) + -1;
      }
      return 1;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x20) != 0) {
      *(char *)(param_1 + 0x74) = cVar1 + '\x01';
      if ((int)*(char *)(param_1 + 0x74) == (uint)*(byte *)(param_1 + 0xbb3)) {
        *(undefined *)(param_1 + 0x74) = 4;
      }
      return 1;
    }
  }
  return 0;
}

