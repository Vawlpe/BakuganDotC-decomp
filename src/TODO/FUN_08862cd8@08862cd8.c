#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08862cd8(int param_1)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (*(char *)(param_1 + 0x458) != '\0') {
    fVar1 = 1.4;
  }
  if (*(char *)(param_1 + 0x45e) != '\0') {
    fVar1 = fVar1 * 0.65;
  }
  return fVar1;
}

