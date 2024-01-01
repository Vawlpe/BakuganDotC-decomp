#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_088b85d0(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined4 uVar3;
  int iVar4;
  undefined (*pauVar5) [16];
  undefined4 in_V7D;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*(char *)(param_1 + 0x1f5) == '\0') {
    FUN_089deeb0(param_1,&local_40,1);
    DAT_08b002d0 = local_40;
    DAT_08b002d4 = uStack_3c;
    DAT_08b002d8 = uStack_38;
    DAT_08b002dc = uStack_34;
    DAT_08b002e0 = DAT_08b008e0;
    DAT_08b002e4 = DAT_08b008e4;
    DAT_08b002e8 = DAT_08b008e8;
    DAT_08b002ec = DAT_08b008ec;
    uVar6 = vcmp_s(8,DAT_08b008e0,DAT_08b008e0);
    vrcp_s(DAT_08b008e0);
    DAT_08b002f0 = vcmovt_s(in_V7D,(byte)uVar6 & 1);
    uVar6 = vcmp_s(8,DAT_08b008e4,DAT_08b008e0);
    vrcp_s(DAT_08b008e4);
    DAT_08b002f4 = vcmovt_s(in_V7D,(byte)uVar6 & 1);
    uVar6 = vcmp_s(8,DAT_08b008e8,DAT_08b008e0);
    vrcp_s(DAT_08b008e8);
    DAT_08b002f8 = vcmovt_s(in_V7D,(byte)uVar6 & 1);
    DAT_08b002fc = in_V7D;
    iVar4 = FUN_0881a83c(0x3fbf2700,&DAT_08b00300,0);
    uVar3 = DAT_08b0028c;
    uVar7 = DAT_08b00288;
    uVar6 = DAT_08b00284;
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x1b0) = DAT_08b002d0;
      *(undefined4 *)(param_1 + 0x1b8) = DAT_08b002d8;
    }
    else {
      *(undefined4 *)(param_1 + 0x1b0) = DAT_08b00280;
      *(undefined4 *)(param_1 + 0x1b4) = uVar6;
      *(undefined4 *)(param_1 + 0x1b8) = uVar7;
      *(undefined4 *)(param_1 + 0x1bc) = uVar3;
      pauVar5 = (undefined (*) [16])(param_1 + 0x1a0);
      auVar1 = vsub_q(_DAT_08b00290,*pauVar5);
      auVar1 = vscl_q(auVar1,0x3f000000);
      auVar1 = vadd_q(*pauVar5,auVar1);
      *(int *)*pauVar5 = auVar1._0_4_;
      *(int *)(param_1 + 0x1a4) = auVar1._4_4_;
      *(int *)(param_1 + 0x1a8) = auVar1._8_4_;
      *(int *)(param_1 + 0x1ac) = auVar1._12_4_;
      uVar6 = vdot_t(*(undefined (*) [12])*pauVar5,*(undefined (*) [12])*pauVar5);
      uVar7 = vcmp_s(8,uVar6,*(undefined4 *)*pauVar5);
      vrsq_s(uVar6);
      uVar6 = vcmovt_s(in_V7D,(byte)uVar7 & 1);
      vpfxd(4,4,4,5);
      auVar2 = vscl_t(*(undefined (*) [12])*pauVar5,uVar6);
      *(int *)*pauVar5 = auVar2._0_4_;
      *(int *)(param_1 + 0x1a4) = auVar2._4_4_;
      *(int *)(param_1 + 0x1a8) = auVar2._8_4_;
      *(undefined4 *)(param_1 + 0x1ac) = in_V7D;
    }
  }
  return;
}

