#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0898df10(int param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *(char *)(param_1 + 0xe79);
  *(char *)(param_1 + 0xe7a) = cVar1;
  if ((*(char *)(param_1 + 0xe7d) < '\x01') && (-1 < *(char *)(param_1 + 0xe7d))) {
    if (((int)*(char *)(*(int *)(param_1 + 0x20) + 8) & 0x80U) == 0) {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x20) != 0) {
        uVar2 = *(byte *)(param_1 + 0xe84) + 5;
        if ((int)cVar1 != uVar2 / 6 - 1) {
          if ((int)*(char *)(param_1 + 0xe78) % 3 == 2) {
            *(char *)(param_1 + 0xe7a) = *(char *)(param_1 + 0xe7a) + '\x01';
            if ((int)(uVar2 / 6 - 1) < (int)*(char *)(param_1 + 0xe7a)) {
              *(undefined *)(param_1 + 0xe7a) = 0;
            }
            *(undefined *)(param_1 + 0xe7b) = 2;
            return 1;
          }
          if ((int)(uint)*(byte *)(param_1 + 0xe84) <=
              (int)*(char *)(param_1 + 0xe78) + cVar1 * 6 + 1) {
            *(char *)(param_1 + 0xe7a) = *(char *)(param_1 + 0xe7a) + '\x01';
            if ((int)(uVar2 / 6 - 1) < (int)*(char *)(param_1 + 0xe7a)) {
              *(undefined *)(param_1 + 0xe7a) = 0;
            }
            *(undefined *)(param_1 + 0xe7b) = 2;
            return 1;
          }
        }
      }
    }
    else if (((int)*(char *)(param_1 + 0xe78) % 3 == 0) && (*(char *)(param_1 + 0xe7a) != '\0')) {
      *(char *)(param_1 + 0xe7a) = *(char *)(param_1 + 0xe7a) + -1;
      if (*(char *)(param_1 + 0xe7a) < '\0') {
        *(char *)(param_1 + 0xe7a) = (char)((*(byte *)(param_1 + 0xe84) + 5) / 6) + -1;
      }
      *(undefined *)(param_1 + 0xe7b) = 1;
      return 1;
    }
  }
  return 0;
}

