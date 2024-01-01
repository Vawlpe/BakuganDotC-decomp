#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887ed18(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined (*pauVar6) [12];
  
  if (0x5a < *(int *)(param_1 + 0xf4)) {
    FUN_08824658(DAT_08b00920,0x1d1,param_1 + 0x60);
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
    FUN_08877af0(0,0x42a00000,param_1,1,0);
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  else {
    iVar5 = FUN_0887979c(param_1,0x1b);
    pauVar6 = (undefined (*) [12])(param_1 + 0x60);
    if (iVar5 != 0) {
      FUN_08824658(DAT_08b00920,0x1d1,pauVar6);
      return;
    }
    FUN_08877af0(0x42480000,0x42a00000,param_1,1,0);
    iVar5 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar6,
                         (undefined (*) [12])(param_1 + 0x70),0x55,3,0,0x31bf337e);
    if (iVar5 != 0) {
      FUN_08878cc4(param_1,0x1b,&DAT_08aba930);
      FUN_08824658(DAT_08b00920,0x1d1,pauVar6);
      return;
    }
    iVar5 = *(int *)(param_1 + 0xbc);
    uVar2 = *(undefined4 *)(param_1 + 0x84);
    uVar3 = *(undefined4 *)(param_1 + 0x88);
    uVar4 = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(iVar5 + 0x90) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(iVar5 + 0x94) = uVar2;
    *(undefined4 *)(iVar5 + 0x98) = uVar3;
    *(undefined4 *)(iVar5 + 0x9c) = uVar4;
    uVar2 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar6,*(undefined (*) [12])(param_1 + 0x70));
    *(int *)*pauVar6 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  return;
}

