#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e2418(int param_1)

{
  char cVar1;
  undefined auVar2 [12];
  undefined auVar3 [16];
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined (*pauVar7) [16];
  int iVar8;
  undefined4 in_V7D;
  undefined4 uVar9;
  
  if (((*(byte *)(WeirdBuff + 3) & 0x10) != 0) && ((*(byte *)(WeirdBuff + 4) & 0x10) != 0)) {
    iVar6 = *(int *)(param_1 + 0x358) + 1;
    *(int *)(param_1 + 0x358) = iVar6;
    if (4 < iVar6) {
      *(undefined4 *)(param_1 + 0x358) = 0;
    }
    piVar4 = (int *)FUN_088dfa48();
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      iVar8 = *(int *)(iVar6 + 8);
      while (iVar8 != 0x23) {
        iVar6 = *(int *)(iVar6 + 4);
        if (iVar6 == 0) goto LAB_088e24a8;
        iVar8 = *(int *)(iVar6 + 8);
      }
      FUN_088df69c(iVar6,*(uint *)(param_1 + 0x358) & 0xff);
    }
  }
LAB_088e24a8:
  uVar5 = FUN_08884cc8(*(undefined4 *)(param_1 + 0x164));
  *(undefined4 *)(param_1 + 0x168) = uVar5;
  if (*(int *)(param_1 + 0x330) != 0) {
    uVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x330) + -1;
    *(int *)(param_1 + 0x330) = iVar6;
    if (iVar6 == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x32c);
    }
    *(undefined4 *)(param_1 + 0x168) = uVar5;
  }
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xce1ffff8;
  *(undefined *)(param_1 + 0x3ac) = 0;
  *(undefined *)(param_1 + 0x3ad) = 0;
  *(undefined *)(param_1 + 0x3ae) = 0;
  (**(code **)(*(int *)(param_1 + 0x14) + 0xfc))
            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xf8));
  if (*(char *)(param_1 + 0x3b1) == '\0') {
    if (*(char *)(param_1 + 0x3b0) != '\0') {
      iVar6 = *(int *)(param_1 + 0x140);
      goto LAB_088e2578;
    }
    if (*(int *)(param_1 + 0x140) == 0) {
      cVar1 = *(char *)(param_1 + 0x3a1);
LAB_088e2548:
      if (cVar1 != '\0') goto LAB_088e2550;
      iVar6 = *(int *)(param_1 + 0x3b4) + 1;
      *(int *)(param_1 + 0x3b4) = iVar6;
      if (0x96 < iVar6) {
        *(undefined *)(param_1 + 0x3b0) = 1;
        *(undefined4 *)(param_1 + 0x3b4) = 0;
      }
    }
    else {
      if (*(int *)(param_1 + 0x140) == 6) {
        cVar1 = *(char *)(param_1 + 0x3a1);
        goto LAB_088e2548;
      }
LAB_088e2550:
      *(undefined4 *)(param_1 + 0x3b4) = 0;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x140);
LAB_088e2578:
    *(undefined4 *)(param_1 + 0x3b4) = 0;
    if ((iVar6 == 0) || (*(int *)(param_1 + 0x140) == 6)) {
      if (*(char *)(param_1 + 0x3a1) != '\0') {
        *(undefined *)(param_1 + 0x3b0) = 0;
        goto LAB_088e25a0;
      }
      iVar6 = *(int *)(param_1 + 0x140);
    }
    else {
      *(undefined *)(param_1 + 0x3b0) = 0;
LAB_088e25a0:
      iVar6 = *(int *)(param_1 + 0x140);
    }
    if (iVar6 == 2) {
      *(undefined *)(param_1 + 0x3b1) = 0;
    }
    else if (*(int *)(param_1 + 0x140) == 3) {
      *(undefined *)(param_1 + 0x3b1) = 0;
    }
    else {
      if (*(int *)(param_1 + 0x140) != 9) {
        cVar1 = *(char *)(param_1 + 0x3c4);
        goto LAB_088e25d8;
      }
      *(undefined *)(param_1 + 0x3b1) = 0;
    }
  }
  cVar1 = *(char *)(param_1 + 0x3c4);
LAB_088e25d8:
  if (cVar1 == '\0') {
    iVar6 = *(int *)(param_1 + 0x140);
  }
  else {
    FUN_088e1f70(param_1);
    iVar6 = *(int *)(param_1 + 0x140);
  }
  if (iVar6 != 8) {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0x7ffdfdef;
    FUN_088de24c(param_1);
  }
  FUN_089dfc04(param_1);
  FUN_089dfdb0(param_1);
  (**(code **)(*(int *)(param_1 + 0x14) + 0x54))
            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x50));
  if (*(int *)(param_1 + 0x4a4) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x4a4) + 0x814) = *(undefined *)(param_1 + 0x4a8);
    FUN_088b7cdc(*(undefined4 *)(param_1 + 0x4a4));
    if (((*(char *)(param_1 + 0x4a8) != '\0') && (*(int *)(param_1 + 0x418) != 0)) &&
       (*(char *)(*(int *)(param_1 + 0x418) + 0x1d3) != '\0')) {
      *(undefined *)(param_1 + 0x4a8) = 0;
      FUN_088b7808(*(undefined4 *)(param_1 + 0x4a4),1);
      *(undefined4 *)(*(int *)(param_1 + 0x418) + 0x6c) = 0;
    }
  }
  FUN_088de33c(param_1);
  FUN_088de3c8(param_1);
  *(undefined *)(param_1 + 0x1c8) = 0;
  FUN_088854b0(*(undefined4 *)(param_1 + 0x16c));
  iVar6 = *(int *)(*(int *)(param_1 + 0x16c) + 4);
  uVar5 = *(undefined4 *)(iVar6 + 0x6c);
  auVar2 = vadd_t(*(undefined (*) [12])(iVar6 + 0x60),*(undefined (*) [12])(param_1 + 0x520));
  *(int *)*(undefined (*) [12])(iVar6 + 0x60) = auVar2._0_4_;
  *(int *)(iVar6 + 100) = auVar2._4_4_;
  *(int *)(iVar6 + 0x68) = auVar2._8_4_;
  *(undefined4 *)(iVar6 + 0x6c) = uVar5;
  FUN_088de574(param_1);
  pauVar7 = (undefined (*) [16])(param_1 + 0x2a0);
  if ((*(uint *)(param_1 + 0x144) & 1) == 0) {
    auVar3._12_4_ = DAT_08b001ac;
    auVar3._8_4_ = DAT_08b001a8;
    auVar3._4_4_ = DAT_08b001a4;
    auVar3._0_4_ = DAT_08b001a0;
    auVar3 = vsub_q(auVar3,*pauVar7);
    auVar3 = vscl_q(auVar3,0x3e4ccccd);
    auVar3 = vadd_q(*pauVar7,auVar3);
    *(int *)*pauVar7 = auVar3._0_4_;
    *(int *)(param_1 + 0x2a4) = auVar3._4_4_;
    *(int *)(param_1 + 0x2a8) = auVar3._8_4_;
    *(int *)(param_1 + 0x2ac) = auVar3._12_4_;
    uVar5 = vdot_t(*(undefined (*) [12])*pauVar7,*(undefined (*) [12])*pauVar7);
    uVar9 = vcmp_s(8,uVar5,*(undefined4 *)*pauVar7);
    vrsq_s(uVar5);
    uVar5 = vcmovt_s(in_V7D,(byte)uVar9 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(*(undefined (*) [12])*pauVar7,uVar5);
    *(int *)*pauVar7 = auVar2._0_4_;
    *(int *)(param_1 + 0x2a4) = auVar2._4_4_;
    *(int *)(param_1 + 0x2a8) = auVar2._8_4_;
    *(undefined4 *)(param_1 + 0x2ac) = in_V7D;
  }
  return;
}

