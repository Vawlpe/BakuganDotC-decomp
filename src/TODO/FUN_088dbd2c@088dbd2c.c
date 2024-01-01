#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088dbd2c(undefined2 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2;
  if (3.141593 < fVar1) {
    fVar1 = fVar1 - 6.283185;
  }
  else if (fVar1 <= -3.141593) {
    fVar1 = fVar1 + 6.283185;
  }
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 6.283185;
  }
  fVar1 = -fVar1 + 1.570796;
  if (3.141593 < fVar1) {
    fVar1 = fVar1 - 6.283185;
  }
  else if (fVar1 <= -3.141593) {
    fVar1 = fVar1 + 6.283185;
  }
  fVar2 = param_2[1];
  if (3.141593 < fVar2) {
    fVar2 = fVar2 - 6.283185;
  }
  else if (fVar2 <= -3.141593) {
    fVar2 = fVar2 + 6.283185;
  }
  if (fVar2 < 0.0) {
    fVar2 = fVar2 + 6.283185;
  }
  fVar2 = -fVar2 + 1.570796;
  if (3.141593 < fVar2) {
    fVar2 = fVar2 - 6.283185;
  }
  else if (fVar2 <= -3.141593) {
    fVar2 = fVar2 + 6.283185;
  }
  fVar3 = param_2[2];
  if (3.141593 < fVar3) {
    fVar3 = fVar3 - 6.283185;
  }
  else if (fVar3 <= -3.141593) {
    fVar3 = fVar3 + 6.283185;
  }
  if (fVar3 < 0.0) {
    fVar3 = fVar3 + 6.283185;
  }
  fVar3 = -fVar3 + 1.570796;
  if (3.141593 < fVar3) {
    fVar3 = fVar3 - 6.283185;
  }
  else if (fVar3 <= -3.141593) {
    fVar3 = fVar3 + 6.283185;
  }
  *param_1 = (short)(int)(fVar1 * 65535.0 * 0.1591549);
  param_1[1] = (short)(int)(fVar2 * 65535.0 * 0.1591549);
  param_1[2] = (short)(int)(fVar3 * 65535.0 * 0.1591549);
  return;
}

