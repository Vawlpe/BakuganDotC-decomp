#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892054c(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x74);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      if ('\x01' < *(char *)(param_1 + 0x77)) {
        FUN_089a537c(0x42200000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20c),param_1 + 0x14f4);
        return;
      }
      FUN_089a537c(0x42200000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2d8),param_1 + 0x1cec);
      return;
    }
  }
  else {
    if (cVar1 < '\x02') {
      if (*(char *)(param_1 + 0x75) != '\0') {
        FUN_089a537c(0x42200000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20c),param_1 + 0x14f4);
        return;
      }
      FUN_089a537c(0x42200000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x1ac),param_1 + 0x1134);
      return;
    }
    if (cVar1 < '\x03') {
      FUN_089a537c(0x42200000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x230),param_1 + 0x165c);
    }
  }
  return;
}

