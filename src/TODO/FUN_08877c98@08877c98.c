#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08877c98(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined (*pauVar5) [12];
  undefined4 uVar6;
  undefined4 in_V7D;
  undefined4 uVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  if (*(char *)(param_1 + 0xf1) != '\0') {
    *(undefined *)(param_1 + 0x114) = 1;
    *(undefined *)(param_1 + 0x115) = 0;
    *(undefined *)(param_1 + 0xe8) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0xc);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0xf4) = 1;
  *(undefined *)(param_1 + 0x114) = 0;
  *(undefined *)(param_1 + 0x115) = 0;
  *(undefined *)(param_1 + 0xe8) = 0;
  *(undefined *)(param_1 + 0xf1) = 1;
  auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x60),
                  *(undefined (*) [12])(*(int *)(param_1 + 0xe4) + 0x250));
  uVar6 = vdot_t(auVar1,auVar1);
  uVar7 = vcmp_s(8,uVar6,auVar1._0_4_);
  vrsq_s(uVar6);
  uVar6 = vcmovt_s(in_V7D,(byte)uVar7 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar1,uVar6);
  local_40 = auVar1._0_4_;
  uStack_3c = auVar1._4_4_;
  uStack_38 = auVar1._8_4_;
  iVar3 = FUN_088244ac(DAT_08b00920,0x3d,*(int *)(param_1 + 0xe4) + 0x250,&local_40);
  iVar4 = *(int *)(param_1 + 0xe4);
  *(int *)(iVar3 + 0x1fc) = iVar4;
  if (iVar4 != 0) {
    *(undefined4 *)(iVar3 + 0x200) = *(undefined4 *)(iVar4 + 0xc);
  }
  iVar3 = FUN_088663a0(*(undefined4 *)(param_1 + 0xb4));
  pauVar5 = (undefined (*) [12])(param_1 + 0x80);
  if (iVar3 == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x8c);
    auVar1 = vneg_t(*pauVar5);
    *(int *)*pauVar5 = auVar1._0_4_;
    *(int *)(param_1 + 0x84) = auVar1._4_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x8c) = uVar6;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)*pauVar5;
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x8c);
  }
  else {
    *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
    FUN_08877af0(0x3f800000,0x42a00000,param_1,1,0);
  }
  *(undefined4 *)(param_1 + 0xe0) = 0x3da3d70a;
  if (*(int *)(param_1 + 0xbc) != 0) {
    iVar3 = *(int *)(param_1 + 0xbc);
    uVar6 = *(undefined4 *)(param_1 + 0x74);
    uVar7 = *(undefined4 *)(param_1 + 0x78);
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(iVar3 + 0x90) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(iVar3 + 0x94) = uVar6;
    *(undefined4 *)(iVar3 + 0x98) = uVar7;
    *(undefined4 *)(iVar3 + 0x9c) = uVar2;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    iVar3 = *(int *)(param_1 + 0xc0);
    uVar6 = *(undefined4 *)(param_1 + 0x74);
    uVar7 = *(undefined4 *)(param_1 + 0x78);
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(iVar3 + 0x90) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(iVar3 + 0x94) = uVar6;
    *(undefined4 *)(iVar3 + 0x98) = uVar7;
    *(undefined4 *)(iVar3 + 0x9c) = uVar2;
  }
  return;
}

