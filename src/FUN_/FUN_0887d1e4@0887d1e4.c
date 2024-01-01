#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887d1e4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xf4);
  if (iVar1 == 0) {
    iVar1 = (int)*(float *)(param_1 + 0x10c);
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
    }
    else if (iVar1 < 2) {
      *(undefined4 *)(param_1 + 0x10c) = 0x45160000;
    }
    else if (iVar1 < 3) {
      *(undefined4 *)(param_1 + 0x10c) = 0xc5160000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (0x1e < iVar1) {
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x108) * 0.93;
    }
    if (0x5a < iVar1) {
      iVar1 = FUN_08823f5c(DAT_08b00920,0xb0,param_1 + 0x60);
      iVar2 = *(int *)(param_1 + 0xb0);
      *(int *)(iVar1 + 0x1fc) = iVar2;
      if (iVar2 != 0) {
        *(undefined4 *)(iVar1 + 0x200) = *(undefined4 *)(iVar2 + 0xc);
      }
      FUN_08876ee0(param_1);
      return;
    }
  }
  FUN_08878e5c(0x3dcccccd,*(undefined4 *)(param_1 + 0x10c),param_1,0x3a,0xb0,0xb0);
  return;
}

