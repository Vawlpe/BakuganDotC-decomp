#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089a85ac(int param_1)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) == 0) {
    return 0;
  }
  if (((uint)*(byte *)(param_1 + 0x673) & 1 << ((int)*(char *)(param_1 + 0x74) & 0x1fU)) == 0) {
    return 2;
  }
  return 1;
}

