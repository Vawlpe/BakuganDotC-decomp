#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_088de3c8(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined (*pauVar4) [16];
  int iVar5;
  undefined4 in_V7D;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    iVar5 = *(int *)(*(int *)(param_1 + 0x170) + 0xf4);
    DAT_08b002d0 = *(undefined4 *)(iVar5 + 0x10);
    DAT_08b002d4 = *(undefined4 *)(iVar5 + 0x14);
    DAT_08b002d8 = *(undefined4 *)(iVar5 + 0x18);
    DAT_08b002dc = *(undefined4 *)(iVar5 + 0x1c);
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
    iVar5 = FUN_0881a83c(0x3fbf2700,&DAT_08b00300,0);
    uVar3 = DAT_08b0028c;
    uVar7 = DAT_08b00288;
    uVar6 = DAT_08b00284;
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x290) = DAT_08b002d0;
      *(undefined4 *)(param_1 + 0x298) = DAT_08b002d8;
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 8;
    }
    else {
      *(undefined4 *)(param_1 + 0x290) = DAT_08b00280;
      *(undefined4 *)(param_1 + 0x294) = uVar6;
      *(undefined4 *)(param_1 + 0x298) = uVar7;
      *(undefined4 *)(param_1 + 0x29c) = uVar3;
      pauVar4 = (undefined (*) [16])(param_1 + 0x260);
      auVar1 = vsub_q(_DAT_08b00290,*pauVar4);
      auVar1 = vscl_q(auVar1,0x3f000000);
      auVar1 = vadd_q(*pauVar4,auVar1);
      *(int *)*pauVar4 = auVar1._0_4_;
      *(int *)(param_1 + 0x264) = auVar1._4_4_;
      *(int *)(param_1 + 0x268) = auVar1._8_4_;
      *(int *)(param_1 + 0x26c) = auVar1._12_4_;
      uVar6 = vdot_t(*(undefined (*) [12])*pauVar4,*(undefined (*) [12])*pauVar4);
      uVar7 = vcmp_s(8,uVar6,*(undefined4 *)*pauVar4);
      vrsq_s(uVar6);
      uVar6 = vcmovt_s(in_V7D,(byte)uVar7 & 1);
      vpfxd(4,4,4,5);
      auVar2 = vscl_t(*(undefined (*) [12])*pauVar4,uVar6);
      *(int *)*pauVar4 = auVar2._0_4_;
      *(int *)(param_1 + 0x264) = auVar2._4_4_;
      *(int *)(param_1 + 0x268) = auVar2._8_4_;
      *(undefined4 *)(param_1 + 0x26c) = in_V7D;
      *(undefined4 *)(param_1 + 0x1c4) = DAT_08b002b4;
    }
  }
  return;
}

