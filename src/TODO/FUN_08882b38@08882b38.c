#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08882b38(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined (*pauVar6) [12];
  
  if (0x3c < *(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0xc2c80000;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    uVar4 = DAT_08b008ec;
    uVar3 = DAT_08b008e8;
    uVar2 = DAT_08b008e4;
    iVar5 = *(int *)(param_1 + 0xbc);
    *(undefined4 *)(iVar5 + 0x90) = DAT_08b008e0;
    *(undefined4 *)(iVar5 + 0x94) = uVar2;
    *(undefined4 *)(iVar5 + 0x98) = uVar3;
    *(undefined4 *)(iVar5 + 0x9c) = uVar4;
    FUN_08877060(param_1,0x100001f,0,0,0);
  }
  else {
    FUN_088787a0(param_1);
    pauVar6 = (undefined (*) [12])(param_1 + 0x60);
    iVar5 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar6,
                         (undefined (*) [12])(param_1 + 0x70),0xa0,3,0,0x31bf337e);
    if (iVar5 != 0) {
      if (DAT_08aba940 == 0) {
        FUN_08823f5c(DAT_08b00920,0x103,&DAT_08aba930);
      }
      else {
        FUN_08823f5c(DAT_08b00920,0x1b,&DAT_08aba930);
      }
      FUN_08877060(param_1,0x200099,0,0,0);
      FUN_08876ee0(param_1);
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar6,*(undefined (*) [12])(param_1 + 0x70));
    *(int *)*pauVar6 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  return;
}

