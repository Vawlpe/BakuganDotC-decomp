#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ccb44(void)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_088e1948();
  fVar2 = 0.0;
  if (*(float *)(WeirdBuff + 0x30) < -0.8) {
    fVar2 = 0.03141593;
  }
  else if (0.8 < *(float *)(WeirdBuff + 0x30)) {
    fVar2 = -0.03141593;
  }
  if (*(char *)(iVar1 + 0x4a8) != '\0') {
    fVar2 = 0.0;
  }
  if (*(int *)(iVar1 + 0x4d4) == 0) {
    *(float *)(iVar1 + 0x34) = *(float *)(iVar1 + 0x34) + fVar2;
  }
  else if (*(int *)(iVar1 + 0x314) != 0) {
    fVar2 = 1.570796 - (*(float *)(*(int *)(iVar1 + 0x314) + 0x150) + 1.570796);
    if (3.141593 < fVar2) {
      fVar2 = fVar2 - 6.283185;
    }
    else if (fVar2 <= -3.141593) {
      fVar2 = fVar2 + 6.283185;
    }
    *(float *)(iVar1 + 0x34) = fVar2;
  }
  fVar2 = *(float *)(iVar1 + 0x34);
  if (3.141593 < fVar2) {
    *(float *)(iVar1 + 0x34) = fVar2 - 6.283185;
    return;
  }
  if (fVar2 <= -3.141593) {
    *(float *)(iVar1 + 0x34) = fVar2 + 6.283185;
  }
  return;
}

