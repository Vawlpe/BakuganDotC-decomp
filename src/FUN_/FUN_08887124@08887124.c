#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08887124(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (param_1 != 0) {
    fVar1 = (float)*(int *)(param_1 + 8);
    if (fVar1 < 1.0) {
      iVar2 = 1;
    }
    else if (32.0 < fVar1) {
      iVar2 = 0x20;
    }
    else {
      iVar2 = (int)fVar1;
    }
    return *(undefined4 *)(&DAT_08abaa6c + iVar2 * 4);
  }
  return 0;
}

