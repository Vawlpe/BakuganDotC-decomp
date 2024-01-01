#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885aa98(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  undefined (*pauVar7) [16];
  undefined (*pauVar8) [12];
  float fVar9;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar10;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float local_70;
  int local_6c;
  int local_40;
  
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
  switch(*(undefined4 *)(param_1 + 0x8c0)) {
  case 0:
    *(undefined *)(param_1 + 0xbc) = 1;
    local_6c = iVar3;
    iVar4 = FUN_08823f5c(DAT_08abd5b0,0x5b,param_1 + 0x20);
    *(float *)(iVar4 + 0x1e0) = *(float *)(param_1 + 0x40) * 0.4;
    iVar4 = FUN_089c59d4();
    if (iVar4 != 0) {
      uVar5 = FUN_089c59f0();
      FUN_089c6350(uVar5,0x20025e,0,0);
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x8d0) = 10;
    *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
    break;
  case 1:
    local_6c = iVar3;
    break;
  case 2:
    local_6c = iVar3;
    goto LAB_0885ac20;
  case 3:
    goto LAB_0885ace0;
  case 4:
    goto LAB_0885acf8;
  case 5:
    goto switchD_0885ab1c_caseD_5;
  case 6:
    goto LAB_0885ada4;
  case 7:
  case 8:
  case 9:
    goto switchD_0885ab1c_caseD_7;
  case 10:
    local_6c = iVar3;
    goto LAB_0885ae20;
  case 0xb:
    iVar4 = *(int *)(param_1 + 0x8d0);
    *(int *)(param_1 + 0x8d0) = iVar4 + 1;
    if (iVar4 < 0x3b) {
      return;
    }
    *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
    goto LAB_0885afa4;
  case 0xc:
LAB_0885afa4:
    local_40 = 0;
    local_6c = iVar3;
    FUN_089d8634();
    uVar5 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0x160,0,0);
    FUN_089d816c(uVar5);
    FUN_089d866c();
    iVar3 = local_40;
    if (iVar4 != 0) {
      FUN_08876d00(iVar4,param_1,0x7f);
      iVar3 = iVar4;
    }
    FUN_0887799c(iVar3,param_1 + 0x910,param_1 + 0x920,0);
    *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
    return;
  case 0xd:
    *(undefined4 *)(param_1 + 0x8d0) = 0x1e;
    *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
    goto LAB_0885b044;
  case 0xe:
LAB_0885b044:
    iVar4 = *(int *)(param_1 + 0x8d0);
    *(int *)(param_1 + 0x8d0) = iVar4 + -1;
    if (0 < iVar4) {
      return;
    }
    *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
switchD_0885ab1c_caseD_7:
    *(undefined *)(param_1 + 0xa39) = 0;
    local_6c = iVar3;
LAB_0885b064:
    *(undefined *)(param_1 + 0xa3a) = 0;
    *(undefined *)(param_1 + 0xa3f) = 1;
    *(undefined *)(param_1 + 0xa40) = 1;
    FUN_08855384(param_1,0,0);
    return;
  default:
    *(undefined *)(param_1 + 0xa39) = 0;
    goto LAB_0885b064;
  }
  iVar4 = *(int *)(param_1 + 0x8d0);
  *(int *)(param_1 + 0x8d0) = iVar4 + -1;
  if (iVar4 < 1) {
    *(undefined4 *)(param_1 + 0x8d0) = 0;
    *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
LAB_0885ac20:
    iVar4 = *(int *)(param_1 + 0x8d0);
    fVar9 = (float)iVar4 * 0.03490658;
    *(int *)(param_1 + 0x8d0) = iVar4 + 1;
    if (fVar9 < 0.0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = 1.570796;
      if (fVar9 <= 1.570796) {
        fVar6 = fVar9;
      }
    }
    uVar5 = vmul_s(fVar6,in_V7C);
    fVar9 = (float)vsin_s(uVar5);
    *(float *)(param_1 + 0x6c) = fVar9;
    local_70 = fVar9;
    FUN_089e056c(fVar9,param_1,0);
    FUN_089e0694(fVar9 * 0.5,param_1,"mat_spel");
    *(float *)(param_1 + 0xa84) = fVar9;
    if (1.0 <= fVar9) {
      *(undefined *)(param_1 + 0xbc) = 0;
      *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
LAB_0885ace0:
      *(undefined4 *)(param_1 + 0x8d0) = 5;
      *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
LAB_0885acf8:
      iVar4 = *(int *)(param_1 + 0x8d0);
      *(int *)(param_1 + 0x8d0) = iVar4 + -1;
      if (iVar4 < 1) {
        *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
switchD_0885ab1c_caseD_5:
        if (*(char *)(param_1 + 0xa40) == '\0') {
          *(undefined4 *)(param_1 + 0x8c0) = 999;
        }
        else {
          *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
LAB_0885ada4:
          local_6c = iVar3;
          iVar4 = FUN_089c9b48(5,DAT_08ac58c8);
          if (iVar4 != 0) {
            uVar5 = FUN_0884b268();
            FUN_0884dcb0(0x44fa0000,0x43fa0000,0x42200000,uVar5,param_1,0,0,0);
          }
          *(undefined4 *)(param_1 + 0x8c0) = 10;
LAB_0885ae20:
          pauVar8 = (undefined (*) [12])(param_1 + 0x910);
          pauVar7 = (undefined (*) [16])(param_1 + 0x920);
          uVar5 = atan2f(*(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28),
                         *(float *)*(undefined (*) [12])(iVar3 + 0x20) - *(float *)(param_1 + 0x20))
          ;
          *(undefined4 *)(param_1 + 0x930) = uVar5;
          uVar5 = vmul_s(uVar5,in_V7C);
          auVar2 = vrot_q(uVar5,1,0,2,0);
          uStack_84 = auVar2._12_4_;
          auVar1 = vscl_t(auVar2._0_12_,0x437a0000);
          local_90 = auVar1._0_4_;
          uStack_8c = auVar1._4_4_;
          uStack_88 = auVar1._8_4_;
          auVar1 = vadd_t(auVar1,*(undefined (*) [12])(param_1 + 0x20));
          *(int *)*pauVar8 = auVar1._0_4_;
          *(int *)(param_1 + 0x914) = auVar1._4_4_;
          *(int *)(param_1 + 0x918) = auVar1._8_4_;
          *(undefined4 *)(param_1 + 0x91c) = uStack_84;
          *(float *)(param_1 + 0x914) = *(float *)(param_1 + 0x914) + 250.0;
          iVar4 = FUN_089c59d4();
          if (iVar4 != 0) {
            uVar5 = FUN_089c59f0();
            FUN_089c6350(uVar5,0x20025a,0,0);
          }
          iVar4 = FUN_08824024(DAT_08abd5b0,0x30,pauVar8,&local_90);
          *(undefined (**) [12])(iVar4 + 0x160) = pauVar8;
          uVar5 = *(undefined4 *)(iVar3 + 0x2c);
          auVar1 = vsub_t(*(undefined (*) [12])(iVar3 + 0x20),*pauVar8);
          *(int *)*pauVar7 = auVar1._0_4_;
          *(int *)(param_1 + 0x924) = auVar1._4_4_;
          *(int *)(param_1 + 0x928) = auVar1._8_4_;
          *(undefined4 *)(param_1 + 0x92c) = uVar5;
          *(undefined4 *)(param_1 + 0x924) = 0;
          uVar5 = vdot_t(*(undefined (*) [12])*pauVar7,*(undefined (*) [12])*pauVar7);
          uVar10 = vcmp_s(8,uVar5,*(undefined4 *)*pauVar7);
          vrsq_s(uVar5);
          uVar5 = vcmovt_s(in_V7D,(byte)uVar10 & 1);
          vpfxd(4,4,4,5);
          auVar1 = vscl_t(*(undefined (*) [12])*pauVar7,uVar5);
          *(int *)*pauVar7 = auVar1._0_4_;
          *(int *)(param_1 + 0x924) = auVar1._4_4_;
          *(int *)(param_1 + 0x928) = auVar1._8_4_;
          *(undefined4 *)(param_1 + 0x92c) = in_V7D;
          auVar2 = vsub_q(*(undefined (*) [16])(DAT_08ac5c90 + 0x70),*pauVar7);
          auVar2 = vscl_q(auVar2,0x3e99999a);
          auVar2 = vadd_q(*pauVar7,auVar2);
          *(int *)*pauVar7 = auVar2._0_4_;
          *(int *)(param_1 + 0x924) = auVar2._4_4_;
          *(int *)(param_1 + 0x928) = auVar2._8_4_;
          *(int *)(param_1 + 0x92c) = auVar2._12_4_;
          auVar1 = vscl_t(*(undefined (*) [12])*pauVar7,0x40200000);
          *(int *)*pauVar7 = auVar1._0_4_;
          *(int *)(param_1 + 0x924) = auVar1._4_4_;
          *(int *)(param_1 + 0x928) = auVar1._8_4_;
          *(undefined4 *)(param_1 + 0x92c) = in_V7D;
          *(undefined4 *)(param_1 + 0x8d0) = 0;
          *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
        }
      }
    }
  }
  return;
}

