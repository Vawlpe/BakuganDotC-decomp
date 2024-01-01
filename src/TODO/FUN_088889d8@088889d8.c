#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_088889d8(int param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_08888998();
  if (*(char *)(param_1 + 0x18) != '\0') {
    fVar1 = fVar1 * 0.5;
  }
  if (*(char *)(param_1 + 0x1e) != '\0') {
    fVar1 = fVar1 * 1.5;
  }
  if (0.0 <= fVar1) {
    if (fVar1 <= 100.0) {
      return fVar1;
    }
    return 100.0;
  }
  return 0.0;
}

