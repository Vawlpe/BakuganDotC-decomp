#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08931834(int param_1)

{
  *(undefined *)(param_1 + 0x76) = 0;
  *(undefined *)(param_1 + 0x77) = 0xff;
  *(undefined *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x1a7c) = 0;
  *(undefined4 *)(param_1 + 0x1a80) = 0;
  *(undefined4 *)(param_1 + 0x1a84) = 0;
  *(undefined4 *)(param_1 + 0x1af0) = 0;
  *(undefined *)(param_1 + 0x1b5c) = 0;
  *(undefined *)(param_1 + 0x1b5d) = 0;
  FUN_0893160c(param_1);
  memset_jak(param_1 + 0xcb0,0,0x448);
  memset_jak(param_1 + 0x1a68,0,0x10);
  return;
}

