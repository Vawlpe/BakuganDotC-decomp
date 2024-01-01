#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08888740(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  
  if ((*(char *)(param_1 + 0x8d) == '\0') && (*(int *)(param_1 + 0x88) != 0)) {
    bVar1 = true;
    if ((-1 < param_2) && ((param_2 < 2 && (0 < param_2)))) {
      bVar1 = false;
    }
    if (bVar1) {
      fVar2 = *(float *)(param_1 + 0xa4) - 1.0;
      *(float *)(param_1 + 0xa4) = fVar2;
      if (fVar2 < 0.0) {
        *(undefined4 *)(param_1 + 0xa4) = 0;
      }
      if (*(float *)(param_1 + 0xa4) <= 0.0) {
        if (param_2 == 2) {
          FUN_088881b4(param_1,0xb,0);
          return;
        }
        FUN_088881b4(param_1,0,0);
      }
    }
  }
  return;
}

