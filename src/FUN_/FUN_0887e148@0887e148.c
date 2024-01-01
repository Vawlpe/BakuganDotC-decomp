#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887e148(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined auVar3 [12];
  int iVar4;
  undefined (*pauVar5) [12];
  undefined (*pauVar6) [12];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  if (0x3c < *(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0x3cf5c28f;
  }
  else {
    iVar4 = FUN_0887979c(param_1,0xc5);
    if (iVar4 == 0) {
      FUN_08877af0(0x428c0000,0x42700000,param_1,1,0);
      pauVar6 = (undefined (*) [12])(param_1 + 0x60);
      pauVar5 = (undefined (*) [12])(param_1 + 0x70);
      iVar4 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar6,pauVar5,0x45,3,0,
                           0x31bf337e);
      if (iVar4 != 0) {
        FUN_08878cc4(param_1,0xc5,&DAT_08aba930);
        return;
      }
      local_50 = *(undefined4 *)*pauVar6;
      uStack_4c = *(undefined4 *)(param_1 + 100);
      uStack_48 = *(undefined4 *)(param_1 + 0x68);
      uStack_44 = *(undefined4 *)(param_1 + 0x6c);
      auVar1 = vscl_t(*pauVar5,0x3eab020c);
      local_40 = auVar1._0_4_;
      uStack_3c = auVar1._4_4_;
      uStack_38 = auVar1._8_4_;
      iVar4 = 0;
      do {
        FUN_08823f5c(DAT_08b00920,0xc4,&local_50);
        auVar1._4_4_ = uStack_4c;
        auVar1._0_4_ = local_50;
        auVar1._8_4_ = uStack_48;
        auVar3._4_4_ = uStack_3c;
        auVar3._0_4_ = local_40;
        auVar3._8_4_ = uStack_38;
        auVar1 = vadd_t(auVar1,auVar3);
        local_50 = auVar1._0_4_;
        uStack_4c = auVar1._4_4_;
        uStack_48 = auVar1._8_4_;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      uVar2 = *(undefined4 *)(param_1 + 0x6c);
      auVar1 = vadd_t(*pauVar6,*pauVar5);
      *(int *)*pauVar6 = auVar1._0_4_;
      *(int *)(param_1 + 100) = auVar1._4_4_;
      *(int *)(param_1 + 0x68) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
    }
  }
  return;
}

