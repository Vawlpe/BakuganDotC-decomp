#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887dea4(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0x3da3d70a;
  }
  iVar3 = FUN_08878e5c(0x3dcccccd,0,param_1,0x43,0xbf,0xbf);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0xbc) != 0) {
      iVar3 = *(int *)(param_1 + 0xbc);
      uVar2 = *(undefined4 *)(param_1 + 0x7c);
      auVar1 = vneg_t(*(undefined (*) [12])(param_1 + 0x70));
      *(int *)(iVar3 + 0x90) = auVar1._0_4_;
      *(int *)(iVar3 + 0x94) = auVar1._4_4_;
      *(int *)(iVar3 + 0x98) = auVar1._8_4_;
      *(undefined4 *)(iVar3 + 0x9c) = uVar2;
    }
  }
  else {
    FUN_08877060(param_1,0x200098,0,0,0);
    FUN_08824658(DAT_08b00920,0xffffffff,param_1 + 0x60);
  }
  return;
}

