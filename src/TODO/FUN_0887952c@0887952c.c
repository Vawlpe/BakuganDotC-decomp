#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887952c(int param_1,undefined4 param_2)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined auVar3 [12];
  int iVar4;
  undefined (*pauVar5) [12];
  undefined (*pauVar6) [12];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  pauVar6 = (undefined (*) [12])(param_1 + 0x60);
  if (0x1e < *(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    FUN_08878e14(DAT_08b00920,pauVar6);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x70),0x42a00000);
    uVar2 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar6,auVar1);
    *(int *)*pauVar6 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + 30.0;
  }
  else {
    FUN_08877af0(0x43480000,0x42700000,param_1,1,0);
    if ((*(char *)(param_1 + 0x114) != '\0') || (iVar4 = FUN_088787a0(param_1), iVar4 != 0)) {
      FUN_08823f5c(DAT_08b00920,0x1b,pauVar6);
      FUN_08876ee0(param_1);
      FUN_08878e14(DAT_08b00920,pauVar6);
      return;
    }
    pauVar5 = (undefined (*) [12])(param_1 + 0x70);
    iVar4 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar6,pauVar5,param_2,3,0,
                         0x31bf337e);
    if (iVar4 != 0) {
      FUN_08877060(param_1,0x200097,0,0,0);
      FUN_08823f5c(DAT_08b00920,0x1b,&DAT_08aba930);
      FUN_08876ee0(param_1);
      FUN_08878e14(DAT_08b00920,pauVar6);
      return;
    }
    local_60 = *(undefined4 *)*pauVar6;
    uStack_5c = *(undefined4 *)(param_1 + 100);
    uStack_58 = *(undefined4 *)(param_1 + 0x68);
    uStack_54 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vscl_t(*pauVar5,0x3dcccccd);
    local_50 = auVar1._0_4_;
    uStack_4c = auVar1._4_4_;
    uStack_48 = auVar1._8_4_;
    iVar4 = 0;
    do {
      FUN_08823f5c(DAT_08b00920,0x97,&local_60);
      auVar1._4_4_ = uStack_5c;
      auVar1._0_4_ = local_60;
      auVar1._8_4_ = uStack_58;
      auVar3._4_4_ = uStack_4c;
      auVar3._0_4_ = local_50;
      auVar3._8_4_ = uStack_48;
      auVar1 = vadd_t(auVar1,auVar3);
      local_60 = auVar1._0_4_;
      uStack_5c = auVar1._4_4_;
      uStack_58 = auVar1._8_4_;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 10);
    uVar2 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar6,*pauVar5);
    *(int *)*pauVar6 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  return;
}

