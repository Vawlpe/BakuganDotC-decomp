#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08884910(void)

{
  float fVar1;
  
  fVar1 = 1.570796 - *(float *)(DAT_08ac5c90 + 0x150);
  if (3.141593 < fVar1) {
    return fVar1 - 6.283185;
  }
  if (fVar1 <= -3.141593) {
    fVar1 = fVar1 + 6.283185;
  }
  return fVar1;
}

