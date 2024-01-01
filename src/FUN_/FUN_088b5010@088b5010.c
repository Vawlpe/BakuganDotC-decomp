#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b5010(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  int iVar3;
  int iVar4;
  undefined (*pauVar5) [16];
  undefined (*pauVar6) [12];
  undefined (*pauVar7) [12];
  undefined4 uVar8;
  float fVar9;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar10;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  iVar3 = FUN_088660e0();
  iVar4 = FUN_0884df98();
  if (iVar4 != 0) {
    return;
  }
  if (iVar3 == 0) {
    return;
  }
  if (*(char *)(iVar3 + 0x4c1) != '\0') {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x328);
  if (iVar4 < 2) {
    if (-1 < iVar4) {
      pauVar5 = (undefined (*) [16])(iVar3 + 0x20);
      if (iVar4 < 1) {
        auVar2 = vsub_q(*(undefined (*) [16])(param_1 + 0x20),*pauVar5);
        uVar8 = vdot_t(auVar2._0_12_,auVar2._0_12_);
        fVar9 = (float)vsqrt_s(uVar8);
        if (2000.0 <= fVar9) {
          *(undefined4 *)(param_1 + 0x328) = 999;
          return;
        }
        *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
      }
      uVar8 = atan2f(*(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28),
                     *(float *)*pauVar5 - *(float *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 0x340) = uVar8;
      uVar8 = vmul_s(uVar8,in_V7C);
      auVar2 = vrot_q(uVar8,1,0,2,0);
      uStack_64 = auVar2._12_4_;
      auVar1 = vscl_t(auVar2._0_12_,0x42480000);
      local_70 = auVar1._0_4_;
      uStack_6c = auVar1._4_4_;
      uStack_68 = auVar1._8_4_;
      pauVar7 = (undefined (*) [12])(param_1 + 0x350);
      auVar1 = vadd_t(auVar1,*(undefined (*) [12])*(undefined (*) [16])(param_1 + 0x20));
      *(int *)*pauVar7 = auVar1._0_4_;
      *(int *)(param_1 + 0x354) = auVar1._4_4_;
      *(int *)(param_1 + 0x358) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x35c) = uStack_64;
      *(float *)(param_1 + 0x354) = *(float *)(param_1 + 0x354) + 80.0;
      iVar4 = FUN_089bffd4();
      pauVar6 = (undefined (*) [12])(param_1 + 0x360);
      if (iVar4 != 0) {
        uVar8 = FUN_089bfff0();
        FUN_089c00c4(uVar8,0x200033,*(int *)(param_1 + 0x130) + 0xb0,0,1);
      }
      iVar4 = FUN_08824024(DAT_08abd5b0,0x39,pauVar7,&local_70);
      *(undefined (**) [12])(iVar4 + 0x160) = pauVar7;
      uVar8 = *(undefined4 *)(iVar3 + 0x2c);
      auVar1._4_4_ = *(float *)(iVar3 + 0x24) + *(float *)(*(int *)(iVar3 + 0x4bc) + 4);
      auVar1._0_4_ = *(undefined4 *)*pauVar5;
      auVar1._8_4_ = *(undefined4 *)(iVar3 + 0x28);
      auVar1 = vsub_t(auVar1,*pauVar7);
      *(int *)*pauVar6 = auVar1._0_4_;
      *(int *)(param_1 + 0x364) = auVar1._4_4_;
      *(int *)(param_1 + 0x368) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x36c) = uVar8;
      uVar8 = vdot_t(*pauVar6,*pauVar6);
      uVar10 = vcmp_s(8,uVar8,*(undefined4 *)*pauVar6);
      vrsq_s(uVar8);
      uVar8 = vcmovt_s(in_V7D,(byte)uVar10 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*pauVar6,uVar8);
      *(int *)*pauVar6 = auVar1._0_4_;
      *(int *)(param_1 + 0x364) = auVar1._4_4_;
      *(int *)(param_1 + 0x368) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x36c) = in_V7D;
      auVar1 = vscl_t(*pauVar6,0x3fc00000);
      *(int *)*pauVar6 = auVar1._0_4_;
      *(int *)(param_1 + 0x364) = auVar1._4_4_;
      *(int *)(param_1 + 0x368) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x36c) = in_V7D;
      *(undefined4 *)(param_1 + 0x334) = 0;
      *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
      return;
    }
LAB_088b5320:
    FUN_088b4b34(param_1,0);
  }
  else {
    if (iVar4 < 3) {
      iVar3 = *(int *)(param_1 + 0x334);
      *(int *)(param_1 + 0x334) = iVar3 + 1;
      if (iVar3 < 0x3b) {
        return;
      }
      *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
    }
    else if (3 < iVar4) goto LAB_088b5320;
    FUN_089d8634();
    uVar8 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0x160,0,0);
    FUN_089d816c(uVar8);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar4 != 0) {
      FUN_08876d00(iVar4,*(undefined4 *)(param_1 + 800),0x83);
      iVar3 = iVar4;
    }
    iVar4 = FUN_089bffd4();
    if (iVar4 != 0) {
      uVar8 = FUN_089bfff0(iVar3);
      FUN_089c00c4(uVar8,0x200033,param_1 + 0x350,0,1);
    }
    FUN_0887799c(iVar3,param_1 + 0x350,param_1 + 0x360,0);
    *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
  }
  return;
}

