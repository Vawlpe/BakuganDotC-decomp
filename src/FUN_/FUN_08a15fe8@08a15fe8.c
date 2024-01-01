#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a15fe8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if ((param_2 + 1 & 0xffff0000) == 0) {
      if ((uint)*(ushort *)(param_1 + 0xc) <= (param_2 & 0xffff)) {
        return 0;
      }
      param_2 = *(int *)(param_1 + 8) + param_2 * 0x40;
    }
    if (param_2 != 0) {
      return *(undefined4 *)(param_2 + 0x28);
    }
  }
  return 0;
}

