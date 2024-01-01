#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a40ec(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af2524;
    iVar1 = FUN_08860188(*(undefined4 *)(param_1 + 800));
    *(int *)(param_1 + 800) = iVar1;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
      *(undefined4 *)(param_1 + 800) = 0;
    }
    FUN_088a40a8(param_1);
    FUN_088ab4c8(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

