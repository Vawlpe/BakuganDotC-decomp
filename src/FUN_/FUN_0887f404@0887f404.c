#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887f404(int param_1)

{
  int iVar1;
  
  if (0x14 < *(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    iVar1 = FUN_088602ec(*(undefined4 *)(param_1 + 0xb0),1);
    if (iVar1 == 0) {
      FUN_08823f5c(DAT_08b00920,0xe2,param_1 + 0x60);
    }
  }
  else {
    *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) + 5.0;
    FUN_08878084(param_1,*(int *)(param_1 + 0xbc) + 0x60,param_1 + 0x80,0x5a,3,0,0x31bf337e);
  }
  return;
}

