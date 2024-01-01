#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088646d0(int param_1)

{
  undefined auVar1 [12];
  uint uVar2;
  bool bVar3;
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined (*pauVar7) [12];
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 in_V7D;
  undefined4 uVar12;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  
  bVar3 = false;
  iVar10 = 0;
  if (*(int *)(param_1 + 0x20c) != 0) {
    iVar9 = *(int *)(*(int *)(param_1 + 0x20c) + 0x164);
    pauVar7 = (undefined (*) [12])(param_1 + 0x300);
    if (iVar9 < 2) {
      if (0 < iVar9) {
        iVar10 = *(int *)(*(int *)(param_1 + 0x20c) + 0x160);
      }
    }
    else if (iVar9 < 4) {
      iVar10 = *(int *)(*(int *)(param_1 + 0x20c) + 0x160);
      bVar3 = true;
    }
    if (iVar10 == 0) {
      iVar9 = *(int *)(param_1 + 0x20c);
      local_50 = *(undefined4 *)(iVar9 + 0x150);
      local_4c = *(undefined4 *)(iVar9 + 0x154);
      uStack_48 = *(undefined4 *)(iVar9 + 0x158);
    }
    else {
      local_50 = *(undefined4 *)(iVar10 + 0x20);
      local_4c = *(undefined4 *)(iVar10 + 0x24);
      uStack_48 = *(undefined4 *)(iVar10 + 0x28);
    }
    auVar1._4_4_ = local_4c;
    auVar1._0_4_ = local_50;
    auVar1._8_4_ = uStack_48;
    auVar1 = vsub_t(auVar1,*pauVar7);
    uVar2 = auVar1._0_4_;
    uVar11 = auVar1._8_4_;
    auVar6._4_4_ = 0;
    auVar6._0_4_ = uVar2;
    auVar6._8_4_ = uVar11;
    auVar5._4_4_ = 0;
    auVar5._0_4_ = uVar2;
    auVar5._8_4_ = uVar11;
    auVar4._4_4_ = 0;
    auVar4._0_4_ = uVar2;
    auVar4._8_4_ = uVar11;
    uVar11 = vdot_t(auVar4,auVar5);
    uVar12 = vcmp_s(8,uVar11,uVar2);
    vrsq_s(uVar11);
    uVar11 = vcmovt_s(in_V7D,(byte)uVar12 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar6,uVar11);
    local_50 = auVar1._0_4_;
    local_4c = auVar1._4_4_;
    uStack_48 = auVar1._8_4_;
    if (*(int *)(param_1 + 0x398) < 5) {
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x80;
      if (*(int *)(*(int *)(param_1 + 0x20c) + 0x164) == 1) {
        iVar9 = FUN_088244ac(DAT_08ac5c70,0x3d,pauVar7,&local_50);
        *(int *)(iVar9 + 0x1fc) = param_1;
        if (param_1 != 0) {
          *(undefined4 *)(iVar9 + 0x200) = *(undefined4 *)(param_1 + 0xc);
        }
        FUN_08864660(param_1,iVar10,1);
        piVar8 = (int *)(*(int *)(param_1 + 0x20c) + 0x174);
        *piVar8 = *piVar8 / 2;
        pauVar7 = (undefined (*) [12])(param_1 + 0x80);
        uVar11 = vdot_t(*pauVar7,*pauVar7);
        uVar12 = vcmp_s(8,uVar11,*(undefined4 *)*pauVar7);
        vrsq_s(uVar11);
        uVar11 = vcmovt_s(in_V7D,(byte)uVar12 & 1);
        uVar11 = vmul_s(uVar11,0x40a00000);
        auVar1 = vscl_t(*pauVar7,uVar11);
        *(int *)*pauVar7 = auVar1._0_4_;
        *(int *)(param_1 + 0x84) = auVar1._4_4_;
        *(int *)(param_1 + 0x88) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0x8c) = in_V7D;
        iVar10 = *(int *)(param_1 + 0x170);
      }
      else if (*(int *)(*(int *)(param_1 + 0x20c) + 0x164) == 2) {
        iVar10 = FUN_08877fc8(iVar10,2,pauVar7);
        if (iVar10 == 0) {
          iVar10 = *(int *)(param_1 + 0x170);
        }
        else {
          *(int *)(iVar10 + 0xe4) = param_1;
          FUN_08877c98(iVar10);
          iVar10 = *(int *)(param_1 + 0x170);
        }
      }
      else {
        iVar10 = *(int *)(param_1 + 0x170);
      }
      if (iVar10 != 0) {
        FUN_08854e78(*(undefined4 *)(param_1 + 0x170),10,1);
      }
      FUN_08862b64(param_1,0x200071,0,0);
      FUN_088706f0(param_1,0x12,0);
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x174) =
           *(undefined4 *)(*(int *)(param_1 + 0x4bc) + 0xa8);
      FUN_088244ac(DAT_08ac5c70,0x38,pauVar7,&local_50);
      FUN_088608d8(0,param_1,0x103,1,1);
      if (*(int *)(param_1 + 0x170) != 0) {
        FUN_08854e78(*(undefined4 *)(param_1 + 0x170),0xf,1);
      }
    }
    *(undefined4 *)(param_1 + 0x39c) = 0xf;
    if (bVar3) {
      FUN_08862b64(param_1,0x200070,0,0);
    }
    else {
      FUN_08862b64(param_1,0x20006f,0,0);
    }
    return 1;
  }
  return 0;
}

