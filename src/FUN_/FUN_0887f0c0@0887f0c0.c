#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887f0c0(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined (*pauVar6) [12];
  
  pauVar6 = (undefined (*) [12])(param_1 + 0x60);
  if (0x5a < *(int *)(param_1 + 0xf4)) {
    FUN_08824658(DAT_08b00920,0x23f,pauVar6);
    FUN_08824658(DAT_08b00920,0x240,pauVar6);
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + 35.0;
    auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),0x42820000);
    uVar2 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar6,auVar1);
    *(int *)*pauVar6 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
    FUN_08877af0(0,0x42200000,param_1,1,0);
    *(undefined4 *)(param_1 + 0xe0) = 0x3ca3d70a;
  }
  else {
    if (0x13 < *(int *)(param_1 + 0xf4)) {
      FUN_08877af0(0x420c0000,0x42c80000,param_1,1,0);
    }
    FUN_088787a0(param_1);
    iVar5 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar6,
                         (undefined (*) [12])(param_1 + 0x70),0x57,3,0,0x31bf337e);
    if (iVar5 != 0) {
      FUN_08823f5c(DAT_08b00920,0x1b,&DAT_08aba930);
      FUN_08824658(DAT_08b00920,0x23f,pauVar6);
      FUN_08824658(DAT_08b00920,0x240,pauVar6);
      FUN_08877060(param_1,0x200098,0,0,0);
      FUN_08876ee0(param_1);
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

