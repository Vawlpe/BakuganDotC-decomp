#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08863bcc(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  bool bVar3;
  undefined auVar4 [12];
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  undefined (*pauVar9) [16];
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 in_V7D;
  
  if (*(char *)(param_1 + 0x26c) == '\0') {
    bVar3 = false;
    *(undefined *)(param_1 + 0x26c) = 1;
    puVar10 = (undefined4 *)(param_1 + 0x20);
    if (((*(uint *)(param_1 + 0x148) & 0x1000) == 0) && (*(char *)(param_1 + 0x158) != '\0')) {
      DAT_08b006a0 = *(float *)(*(int *)(param_1 + 0x4bc) + 8) * 0.7;
      DAT_08b00680 = *puVar10;
      DAT_08b00684 = *(undefined4 *)(param_1 + 0x24);
      DAT_08b00688 = *(undefined4 *)(param_1 + 0x28);
      auVar4._8_4_ = 0x453b8000;
      auVar4._0_8_ = 0x453b8000453b8000;
      auVar2._8_4_ = DAT_08b008e8;
      auVar2._4_4_ = DAT_08b008e4;
      auVar2._0_4_ = DAT_08b008e0;
      auVar2 = vmul_t(auVar2,auVar4);
      DAT_08b00690 = auVar2._0_4_;
      DAT_08b00694 = auVar2._4_4_;
      DAT_08b00698 = auVar2._8_4_;
      DAT_08b0068c = DAT_08b006a0 * DAT_08b006a0;
      uVar11 = vdot_t(auVar2,auVar2);
      DAT_08b0069c = vsqrt_s(uVar11);
      iVar8 = FUN_0881a83c(0x3fbf2700,&DAT_08b006b0,0);
      if (iVar8 == 0) {
        DAT_08b002d0 = *puVar10;
        DAT_08b002d8 = *(undefined4 *)(param_1 + 0x28);
        DAT_08b002dc = *(undefined4 *)(param_1 + 0x2c);
        DAT_08b002d4 = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x17c);
        DAT_08b002e0 = DAT_08b008e0;
        DAT_08b002e4 = DAT_08b008e4;
        DAT_08b002e8 = DAT_08b008e8;
        DAT_08b002ec = DAT_08b008ec;
        uVar11 = vcmp_s(8,DAT_08b008e0,DAT_08b008e0);
        vrcp_s(DAT_08b008e0);
        DAT_08b002f0 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
        uVar11 = vcmp_s(8,DAT_08b008e4,DAT_08b008e0);
        vrcp_s(DAT_08b008e4);
        DAT_08b002f4 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
        uVar11 = vcmp_s(8,DAT_08b008e8,DAT_08b008e0);
        vrcp_s(DAT_08b008e8);
        DAT_08b002f8 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
        DAT_08b002fc = in_V7D;
        iVar8 = FUN_0881a83c(0x3fbf2700,&DAT_08b00300,0);
        uVar6 = DAT_08b0028c;
        uVar5 = DAT_08b00288;
        uVar11 = DAT_08b00284;
        if (iVar8 != 0) {
          *(undefined4 *)(param_1 + 0x340) = DAT_08b00280;
          *(undefined4 *)(param_1 + 0x344) = uVar11;
          *(undefined4 *)(param_1 + 0x348) = uVar5;
          *(undefined4 *)(param_1 + 0x34c) = uVar6;
          *(int *)(param_1 + 0x264) = DAT_08b002b4;
          *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xfffffff7;
          bVar3 = true;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x340) = *puVar10;
        *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x344) = DAT_08b00284;
        if (((DAT_08b002b8 == 0) && (0.5 < DAT_08b00294)) &&
           (pauVar9 = (undefined (*) [16])(param_1 + 0x310), DAT_08b002b4 < 6)) {
          auVar1._4_4_ = DAT_08b00294;
          auVar1._0_4_ = DAT_08b00290;
          auVar1._8_4_ = DAT_08b00298;
          auVar1._12_4_ = DAT_08b0029c;
          auVar1 = vsub_q(auVar1,*pauVar9);
          auVar1 = vscl_q(auVar1,0x3f333333);
          auVar1 = vadd_q(*pauVar9,auVar1);
          *(int *)*pauVar9 = auVar1._0_4_;
          *(int *)(param_1 + 0x314) = auVar1._4_4_;
          *(int *)(param_1 + 0x318) = auVar1._8_4_;
          *(int *)(param_1 + 0x31c) = auVar1._12_4_;
        }
        *(int *)(param_1 + 0x264) = DAT_08b002b4;
        *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xfffffff7;
        bVar3 = true;
      }
    }
    else {
      DAT_08b002d0 = *puVar10;
      DAT_08b002d8 = *(undefined4 *)(param_1 + 0x28);
      DAT_08b002dc = *(undefined4 *)(param_1 + 0x2c);
      DAT_08b002d4 = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x17c);
      DAT_08b002e0 = DAT_08b008e0;
      DAT_08b002e4 = DAT_08b008e4;
      DAT_08b002e8 = DAT_08b008e8;
      DAT_08b002ec = DAT_08b008ec;
      uVar11 = vcmp_s(8,DAT_08b008e0,DAT_08b008e0);
      vrcp_s(DAT_08b008e0);
      DAT_08b002f0 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
      uVar11 = vcmp_s(8,DAT_08b008e4,DAT_08b008e0);
      vrcp_s(DAT_08b008e4);
      DAT_08b002f4 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
      uVar11 = vcmp_s(8,DAT_08b008e8,DAT_08b008e0);
      vrcp_s(DAT_08b008e8);
      DAT_08b002f8 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
      DAT_08b002fc = in_V7D;
      iVar8 = FUN_0881a83c(0x3fbf2700,&DAT_08b00300,0);
      uVar6 = DAT_08b0028c;
      uVar5 = DAT_08b00288;
      uVar11 = DAT_08b00284;
      if (iVar8 != 0) {
        *(undefined4 *)(param_1 + 0x340) = DAT_08b00280;
        *(undefined4 *)(param_1 + 0x344) = uVar11;
        *(undefined4 *)(param_1 + 0x348) = uVar5;
        *(undefined4 *)(param_1 + 0x34c) = uVar6;
        uVar5 = DAT_08b0029c;
        uVar11 = DAT_08b00298;
        fVar7 = DAT_08b00294;
        *(undefined4 *)(param_1 + 0x310) = DAT_08b00290;
        *(float *)(param_1 + 0x314) = fVar7;
        *(undefined4 *)(param_1 + 0x318) = uVar11;
        *(undefined4 *)(param_1 + 0x31c) = uVar5;
        *(int *)(param_1 + 0x264) = DAT_08b002b4;
        *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xfffffff7;
        bVar3 = true;
      }
    }
    if (bVar3) {
      iVar8 = *(int *)(param_1 + 0x140);
    }
    else {
      *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 8;
      iVar8 = *(int *)(param_1 + 0x140);
    }
    bVar3 = false;
    if ((2 < iVar8) && (bVar3 = false, *(int *)(param_1 + 0x140) < 7)) {
      bVar3 = true;
    }
    if (((!bVar3) && ((*(uint *)(param_1 + 0x144) & 0x40000000) == 0)) &&
       (((*(uint *)(param_1 + 0x144) & 0x1000000) == 0 &&
        ((*(uint *)(param_1 + 0x144) & 0x40000000) == 0)))) {
      *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x24);
    }
  }
  return;
}

