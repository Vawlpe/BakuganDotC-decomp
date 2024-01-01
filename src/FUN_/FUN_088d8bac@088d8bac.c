#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088d8bac(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  int iVar5;
  undefined4 uVar6;
  undefined4 in_V7C;
  
  if (*(int *)(param_1 + 0x34) - 1U < 7) {
    switch(*(int *)(param_1 + 0x34)) {
    case 1:
    case 2:
    case 3:
      iVar5 = FUN_08823f5c(DAT_08ac5c70,3,param_1 + 0x20);
      break;
    default:
      iVar5 = FUN_08823f5c(DAT_08ac5c70,6,param_1 + 0x20);
      uVar6 = vmul_s(*(undefined4 *)(param_1 + 0x3c),in_V7C);
      auVar3 = vrot_q(uVar6,1,2,0,0);
      auVar4 = vrot_q(uVar6,3,1,0,0);
      auVar1 = vidt_q();
      auVar2 = vidt_q();
      *(int *)(iVar5 + 0x20) = auVar3._0_4_;
      *(int *)(iVar5 + 0x24) = auVar3._4_4_;
      *(int *)(iVar5 + 0x28) = auVar3._8_4_;
      *(int *)(iVar5 + 0x2c) = auVar3._12_4_;
      *(int *)(iVar5 + 0x30) = auVar4._0_4_;
      *(int *)(iVar5 + 0x34) = auVar4._4_4_;
      *(int *)(iVar5 + 0x38) = auVar4._8_4_;
      *(int *)(iVar5 + 0x3c) = auVar4._12_4_;
      *(int *)(iVar5 + 0x40) = auVar1._0_4_;
      *(int *)(iVar5 + 0x44) = auVar1._4_4_;
      *(int *)(iVar5 + 0x48) = auVar1._8_4_;
      *(int *)(iVar5 + 0x4c) = auVar1._12_4_;
      *(int *)(iVar5 + 0x50) = auVar2._0_4_;
      *(int *)(iVar5 + 0x54) = auVar2._4_4_;
      *(int *)(iVar5 + 0x58) = auVar2._8_4_;
      *(int *)(iVar5 + 0x5c) = auVar2._12_4_;
    }
    DAT_08b00fc0 = DAT_08b00fc0 + 1;
    return iVar5;
  }
  *(undefined *)(param_1 + 0x38) = 1;
  return 0;
}

