#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08887350(int param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_08887310();
  if (*(char *)(param_1 + 0xc) != '\0') {
    fVar1 = fVar1 * 2.0;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    fVar1 = fVar1 * 0.75;
  }
  if (0.0 <= fVar1) {
    if (fVar1 <= 100.0) {
      return fVar1;
    }
    return 100.0;
  }
  return 0.0;
}

