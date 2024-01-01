#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a6a4c(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af27b4;
    FUN_08824658(DAT_08ac5c70,0xffffffff,*(int *)(param_1 + 0x130) + 0xb0);
    FUN_08824658(DAT_08ac5c70,0xffffffff,param_1 + 0x350);
    FUN_08824658(DAT_08ac5c70,0xffffffff,param_1 + 0x360);
    FUN_08824658(DAT_08ac5c70,0xffffffff,param_1 + 0x370);
    FUN_088246f4(DAT_08ac5c70,0xffffffff,param_1);
    FUN_088246f4(DAT_08abd5b0,0xffffffff,param_1);
    uVar1 = FUN_08860188(*(undefined4 *)(param_1 + 800));
    iVar2 = *(int *)(param_1 + 0x3a8);
    *(undefined4 *)(param_1 + 800) = uVar1;
    if (iVar2 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x3a8) = 0;
    }
    FUN_088ab4c8(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

