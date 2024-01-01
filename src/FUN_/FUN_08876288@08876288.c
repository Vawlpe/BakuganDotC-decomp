#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08876288(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  undefined (*pauVar11) [12];
  float fVar12;
  undefined4 uVar13;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7E;
  undefined4 in_V7F;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar13 = DAT_08ac5c70;
  iVar9 = *(int *)(param_1 + 0x3cc);
  if (iVar9 < 0x1e) {
    switch(iVar9) {
    case 0:
      goto switchD_088762fc_caseD_0;
    case 1:
      goto LAB_0887643c;
    case 2:
      goto LAB_088764b4;
    case 3:
      goto LAB_088764fc;
    case 4:
      goto switchD_088762fc_caseD_4;
    case 5:
      goto switchD_088762fc_caseD_5;
    case 6:
      goto LAB_08876578;
    default:
      goto switchD_088762fc_caseD_7;
    case 10:
      goto switchD_088762fc_caseD_a;
    case 0xb:
      goto switchD_088762fc_caseD_b;
    }
  }
  switch(iVar9) {
  case 0:
    iVar9 = *(int *)(param_1 + 0x20c);
    *(undefined4 *)(iVar9 + 0x148) = 0x10;
    *(uint *)(iVar9 + 0x130) = *(uint *)(iVar9 + 0x130) | 1;
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    iVar9 = FUN_089df684(0x3eb33333,param_1,*(undefined4 *)(param_1 + 0x1bc));
    if ((iVar9 != 0) && (*(int *)(param_1 + 0x3d0) == 0)) {
      FUN_088716bc(param_1,0,0);
      *(undefined4 *)(param_1 + 0x3d0) = 1;
    }
    iVar9 = FUN_089df684(0x3f333333,param_1);
    if (iVar9 != 0) {
      *(undefined4 *)(param_1 + 0x3d0) = 1;
      uVar13 = 0xf6;
      if ((*(int *)(param_1 + 0x1b8) == 0x10000000) && (*(int *)(param_1 + 0x1bc) == 0)) {
        uVar13 = 0xf8;
      }
      FUN_088608d8(0x3e4ccccd,param_1,uVar13,0,0);
      *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
    }
    uVar13 = FUN_08863b94(0x3f733333,param_1);
    auVar3 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),uVar13);
    *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar3._0_4_;
    *(int *)(param_1 + 0x88) = auVar3._8_4_;
    break;
  case 1:
    iVar9 = *(int *)(param_1 + 0x20c);
    *(undefined4 *)(iVar9 + 0x148) = 0x10;
    *(uint *)(iVar9 + 0x130) = *(uint *)(iVar9 + 0x130) | 1;
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    bVar2 = (*(uint *)(param_1 + 0x16c) & 0x17) != 0;
    iVar9 = FUN_088604f4(param_1);
    if (iVar9 == 0) {
      if (*(int *)(param_1 + 0x660) == 0) {
        cVar1 = *(char *)(param_1 + 0x4c1);
      }
      else {
        if (*(char *)(param_1 + 0x4c1) != '\0') {
          FUN_088706f0(param_1,0x15,0);
          break;
        }
        cVar1 = *(char *)(param_1 + 0x4c1);
      }
      pauVar11 = (undefined (*) [12])(param_1 + 0x80);
      if ((cVar1 == '\0') && ((*(byte *)(param_1 + 0xb0) | bVar2) != 0)) {
        iVar9 = 0xf9;
        if ((*(int *)(param_1 + 0x1b8) == 0x10000000) && (*(int *)(param_1 + 0x1bc) == 0)) {
          iVar9 = 0xfa;
        }
        *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
        if ((bVar2) && ((*(uint *)(param_1 + 0x16c) & 0x2000) != 0)) {
          *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(*(int *)(param_1 + 0x168) + 4);
          if (iVar9 == 0xf9) {
            iVar9 = 0x1a;
          }
          *(undefined4 *)(param_1 + 0x3cc) = 5;
          uVar13 = vmul_s(*(undefined4 *)(param_1 + 0x3dc),in_V7C);
          auVar4 = vrot_q(uVar13,1,0,2,0);
          auVar3 = vscl_t(auVar4._0_12_,0x42000000);
          *(int *)*pauVar11 = auVar3._0_4_;
          *(int *)(param_1 + 0x84) = auVar3._4_4_;
          *(int *)(param_1 + 0x88) = auVar3._8_4_;
          *(int *)(param_1 + 0x8c) = auVar4._12_4_;
          *(undefined4 *)(param_1 + 0x84) = 0x41880000;
          *(undefined4 *)(param_1 + 0x3d0) = 0;
        }
        FUN_088608d8(0,param_1,iVar9,0,0);
      }
      uVar13 = FUN_08863b94(0x3f59999a,param_1);
      auVar3 = vscl_t(*pauVar11,uVar13);
      *(int *)*pauVar11 = auVar3._0_4_;
      *(int *)(param_1 + 0x88) = auVar3._8_4_;
    }
    else {
      FUN_088706f0(param_1,6,0);
    }
    break;
  case 2:
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    FUN_08888740(param_1 + 0x434,2);
    iVar9 = FUN_089df684(0x3f4ccccd,param_1);
    if (iVar9 != 0) {
      iVar9 = *(int *)(param_1 + 0x20c);
      *(undefined4 *)(iVar9 + 0x148) = 10;
      *(uint *)(iVar9 + 0x130) = *(uint *)(iVar9 + 0x130) | 1;
      FUN_088706f0(param_1,0,0);
    }
    uVar13 = FUN_08863b94(0x3f59999a,param_1);
    auVar3 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),uVar13);
    *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar3._0_4_;
    *(int *)(param_1 + 0x88) = auVar3._8_4_;
    break;
  case 3:
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    FUN_08888740(param_1 + 0x434,2);
    if ((*(uint *)(param_1 + 0x144) & 0x40000000) == 0) {
      iVar9 = *(int *)(param_1 + 0x3d0);
      *(int *)(param_1 + 0x3d0) = iVar9 + 1;
      if (0xc < iVar9) {
        iVar9 = *(int *)(param_1 + 0x20c);
        *(undefined4 *)(iVar9 + 0x148) = 10;
        *(uint *)(iVar9 + 0x130) = *(uint *)(iVar9 + 0x130) | 1;
      }
      FUN_088706f0(param_1,0,0);
      uVar13 = FUN_08863b94(0x3f59999a,param_1);
      auVar3 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),uVar13);
      *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar3._0_4_;
      *(int *)(param_1 + 0x88) = auVar3._8_4_;
    }
    break;
  case 4:
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    FUN_08888740(param_1 + 0x434,2);
    if (*(float *)(param_1 + 0x84) < 0.0) {
      iVar9 = *(int *)(param_1 + 0x20c);
      *(undefined4 *)(iVar9 + 0x148) = 10;
      *(uint *)(iVar9 + 0x130) = *(uint *)(iVar9 + 0x130) | 1;
      FUN_088608d8(0x3e4ccccd,param_1,0x1b,0,0);
      *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
    }
    break;
  case 5:
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    FUN_08888740(param_1 + 0x434,2);
    if ((*(uint *)(param_1 + 0x144) & 0x40000000) == 0) {
      FUN_088608d8(0x3e4ccccd,param_1,0x1c,0,0);
      iVar9 = *(int *)(param_1 + 0x3d0);
      *(int *)(param_1 + 0x3d0) = iVar9 + 1;
      if (0xc < iVar9) {
        iVar9 = *(int *)(param_1 + 0x20c);
        *(undefined4 *)(iVar9 + 0x148) = 10;
        *(uint *)(iVar9 + 0x130) = *(uint *)(iVar9 + 0x130) | 1;
        FUN_088706f0(param_1,0,0);
      }
      uVar13 = FUN_08863b94(0x3f59999a,param_1);
      auVar3 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),uVar13);
      *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar3._0_4_;
      *(int *)(param_1 + 0x88) = auVar3._8_4_;
    }
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x570) = 0;
    FUN_08860438(param_1);
    *(undefined4 *)(param_1 + 0x3d0) = 0x1e;
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
    goto LAB_08875c84;
  case 7:
LAB_08875c84:
    *(undefined4 *)(param_1 + 0x80) = in_V72;
    *(undefined4 *)(param_1 + 0x84) = in_V76;
    *(undefined4 *)(param_1 + 0x88) = in_V7A;
    *(undefined4 *)(param_1 + 0x8c) = in_V7E;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x1c4) = 999;
    iVar9 = *(int *)(param_1 + 0x3d0);
    *(int *)(param_1 + 0x3d0) = iVar9 + -1;
    if (iVar9 < 1) {
      *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
LAB_08875cd4:
      FUN_0886003c(*(undefined4 *)(param_1 + 0x56c),param_1);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x560);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x564);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x568);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x56c);
      iVar9 = FUN_0885fc80(param_1);
      if (((iVar9 != 0) && (iVar9 = FUN_089bf93c(0x14a,1), iVar9 == 0)) && (DAT_08ac5c90 != 0)) {
        FUN_088474a0(DAT_08ac5c90,1);
      }
      FUN_0886020c(param_1);
      *(undefined4 *)(param_1 + 0x3cc) = 10;
      *(undefined4 *)(param_1 + 0x570) = 0x96;
LAB_08875d34:
      if ((*(uint *)(param_1 + 0x16c) & 0x8000) == 0) {
        iVar9 = *(int *)(param_1 + 0x570);
      }
      else {
        *(int *)(param_1 + 0x570) = *(int *)(param_1 + 0x570) + -0x1e;
        iVar9 = *(int *)(param_1 + 0x570);
      }
      *(undefined4 *)(param_1 + 0x1c4) = 999;
      *(int *)(param_1 + 0x570) = iVar9 + -1;
      if (iVar9 + -1 < 1) {
        *(undefined4 *)(param_1 + 0x570) = 0;
        *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
LAB_08875d94:
        *(undefined4 *)(param_1 + 0x3cc) = 100;
        iVar9 = FUN_089bffd4();
        if (iVar9 != 0) {
          uVar13 = FUN_089bfff0();
          FUN_089c00c4(uVar13,0x200012,param_1 + 0x20,0,1);
        }
        uVar13 = DAT_08abd5b0;
        iVar9 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                          (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
        FUN_08823f5c(uVar13,iVar9 + 0xe,param_1 + 0x20);
        *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
        *(undefined4 *)(param_1 + 0x3d0) = 8;
        *(undefined4 *)(param_1 + 0x1c4) = 999;
        iVar9 = *(int *)(param_1 + 0x3d0);
        *(int *)(param_1 + 0x3d0) = iVar9 + -1;
        if (iVar9 < 1) {
          *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
          FUN_08886fd0(param_1 + 0x434);
          *(undefined4 *)(param_1 + 0x1c4) = 0;
          *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
          if (*(int *)(param_1 + 0x20c) != 0) {
            *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
                 *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) & 0xfffffff8;
          }
          if (*(int *)(param_1 + 0x208) == 0) {
            iVar9 = *(int *)(param_1 + 0x20c);
          }
          else {
            *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
                 *(uint *)(*(int *)(param_1 + 0x208) + 0x130) & 0xfffffff8;
            iVar9 = *(int *)(param_1 + 0x20c);
          }
          *(undefined4 *)(iVar9 + 0x148) = 0;
          *(uint *)(iVar9 + 0x130) = *(uint *)(iVar9 + 0x130) & 0xfffffffe;
          *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
               *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) & 0xfffffffb;
          *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
               *(uint *)(*(int *)(param_1 + 0x208) + 0x130) & 0xffffffbf;
          *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
               *(uint *)(*(int *)(param_1 + 0x208) + 0x130) & 0xfffffffb;
          FUN_088854b0(*(undefined4 *)(param_1 + 0x200));
          *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(*(int *)(param_1 + 0x4bc) + 0x18);
          FUN_088706f0(param_1,0,0);
          FUN_08863070(param_1,1);
          *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
          *(undefined *)(param_1 + 0x574) = 1;
          *(undefined *)(param_1 + 0x575) = 0;
          iVar9 = *(int *)(param_1 + 0x20c);
          *(undefined *)(param_1 + 0x576) = 0;
          *(uint *)(iVar9 + 0x130) = *(uint *)(iVar9 + 0x130) | 1;
          *(undefined4 *)(iVar9 + 0x148) = 0x44;
        }
      }
    }
switchD_08876324_caseD_9:
    return;
  case 8:
    goto LAB_08875cd4;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    goto switchD_08876324_caseD_9;
  case 0x10:
    goto LAB_08875d34;
  case 0x11:
    goto LAB_08875d94;
  case 0x12:
switchD_088762fc_caseD_0:
    FUN_08824658(DAT_08ac5c70,0xffffffff,param_1 + 0x250);
    FUN_08824658(DAT_08ac5c70,0xffffffff,param_1 + 0x3f0);
    if (*(int *)(param_1 + 0x20c) != 0) {
      iVar9 = *(int *)(param_1 + 0x20c);
      *(undefined4 *)(iVar9 + 0x148) = 0;
      *(uint *)(iVar9 + 0x130) = *(uint *)(iVar9 + 0x130) | 1;
    }
    if (*(int *)(param_1 + 0x20c) == 0) {
      iVar9 = *(int *)(param_1 + 0x208);
    }
    else {
      *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) | 4;
      iVar9 = *(int *)(param_1 + 0x208);
    }
    if (iVar9 == 0) {
      iVar9 = *(int *)(param_1 + 0x208);
    }
    else {
      *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x208) + 0x130) | 0x40;
      iVar9 = *(int *)(param_1 + 0x208);
    }
    if (iVar9 == 0) {
      iVar9 = *(int *)(param_1 + 0x20c);
    }
    else {
      *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x208) + 0x130) | 4;
      iVar9 = *(int *)(param_1 + 0x20c);
    }
    if (iVar9 == 0) {
      iVar9 = *(int *)(param_1 + 0x208);
    }
    else {
      *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) | 7;
      iVar9 = *(int *)(param_1 + 0x208);
    }
    if (iVar9 == 0) {
      iVar9 = *(int *)(param_1 + 0x3cc);
    }
    else {
      *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x208) + 0x130) | 7;
      iVar9 = *(int *)(param_1 + 0x3cc);
    }
    *(undefined4 *)(param_1 + 0x3d0) = 0x1e;
    *(int *)(param_1 + 0x3cc) = iVar9 + 1;
  case 0x13:
LAB_0887643c:
    auVar3 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),0x3f4ccccd);
    *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar3._0_4_;
    *(int *)(param_1 + 0x88) = auVar3._8_4_;
    iVar9 = *(int *)(param_1 + 0x3d0) + -1;
    *(int *)(param_1 + 0x3d0) = iVar9;
    if (0 < iVar9) {
      return;
    }
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
  case 0x14:
    goto LAB_088764b4;
  case 0x15:
    goto LAB_088764fc;
  case 0x16:
switchD_088762fc_caseD_4:
    *(undefined4 *)(param_1 + 0x3d0) = 0xf;
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
  case 0x17:
switchD_088762fc_caseD_5:
    iVar9 = *(int *)(param_1 + 0x3d0) + -1;
    *(int *)(param_1 + 0x3d0) = iVar9;
    if (0 < iVar9) {
      return;
    }
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
LAB_08876578:
    *(undefined4 *)(param_1 + 0x3cc) = 10;
    return;
  case 0x18:
    goto LAB_08876578;
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x25:
  case 0x26:
  case 0x27:
    goto switchD_088762fc_caseD_7;
  case 0x1c:
switchD_088762fc_caseD_a:
    iVar9 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
    FUN_088243d8(uVar13,iVar9 + 0x77,param_1 + 0x250);
    *(undefined4 *)(param_1 + 0x3d0) = 0x3c;
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
    FUN_08862b64(param_1,0x200014,0,0);
    return;
  case 0x1d:
switchD_088762fc_caseD_b:
    *(undefined4 *)(param_1 + 0x1c4) = 999;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + 3.0;
    iVar9 = *(int *)(param_1 + 0x3d0) + -1;
    *(int *)(param_1 + 0x3d0) = iVar9;
    if (0 < iVar9) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3cc) = 0x1e;
    goto LAB_088766f8;
  case 0x1e:
LAB_088766f8:
    *(undefined4 *)(param_1 + 0x80) = in_V72;
    *(undefined4 *)(param_1 + 0x84) = in_V76;
    *(undefined4 *)(param_1 + 0x88) = in_V7A;
    *(undefined4 *)(param_1 + 0x8c) = in_V7E;
    FUN_088854b0(*(undefined4 *)(param_1 + 0x200));
    FUN_08862b64(param_1,0x200011,0,0);
    if (*(int *)(param_1 + 0x660) == 2) {
      iVar9 = FUN_0884b248();
      if (iVar9 == 0) {
        iVar9 = *(int *)(param_1 + 0x3cc);
      }
      else {
        uVar13 = FUN_0884b268();
        FUN_0884dcb0(0x43fa0000,0x42c80000,0x42200000,uVar13,param_1,0,0,0);
        iVar9 = *(int *)(param_1 + 0x3cc);
      }
    }
    else {
      iVar9 = *(int *)(param_1 + 0x3cc);
    }
    *(undefined4 *)(param_1 + 0x3d0) = 0x19;
    *(int *)(param_1 + 0x3cc) = iVar9 + 1;
LAB_088767d4:
    puVar8 = (undefined4 *)FUN_0886642c(param_1);
    local_90 = *puVar8;
    uStack_8c = puVar8[1];
    uStack_88 = puVar8[2];
    uVar13 = vmin_s((float)(0x23 - *(int *)(param_1 + 0x3d0)) * 0.03,in_V7F);
    local_5c = (float)vmax_s(uVar13,in_V7D);
    fVar12 = local_5c * 3.141593;
    uVar13 = vmul_s(fVar12,in_V7C);
    local_58 = (float)vcos_s(uVar13);
    local_84 = (1.0 - local_58) * 0.5;
    (**(code **)(*(int *)(param_1 + 0x14) + 0x24))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x20),&local_90);
    uVar13 = vmul_s(fVar12,in_V7C);
    local_54 = (float)vcos_s(uVar13);
    fVar12 = 1.0 - local_54;
    iVar9 = FUN_089ded60(param_1,"Bip01_Pelvis");
    auVar3 = vscl_t(*(undefined (*) [12])(iVar9 + 0x70),1.0 - fVar12 * 0.5 * 0.3);
    *(int *)*(undefined (*) [12])(iVar9 + 0x70) = auVar3._0_4_;
    *(int *)(iVar9 + 0x74) = auVar3._4_4_;
    *(int *)(iVar9 + 0x78) = auVar3._8_4_;
    *(undefined4 *)(iVar9 + 0x7c) = in_V7D;
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) - 0.05;
    iVar9 = *(int *)(param_1 + 0x3d0);
    *(int *)(param_1 + 0x3d0) = iVar9 + -1;
    if (0 < iVar9) {
      return;
    }
    *(undefined *)(param_1 + 0xb9) = 0;
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
    iVar9 = FUN_089ded60(param_1,"Bip01_Pelvis");
    *(undefined4 *)(iVar9 + 0x70) = 0x3f800000;
    *(undefined4 *)(iVar9 + 0x74) = 0x3f800000;
    *(undefined4 *)(iVar9 + 0x78) = 0x3f800000;
    *(undefined4 *)(iVar9 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
LAB_08876910:
    uVar13 = 0;
    if (*(int *)(param_1 + 0x660) == 2) {
      uVar13 = 0x28;
    }
    *(undefined4 *)(param_1 + 0x3d0) = uVar13;
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
    return;
  case 0x1f:
    goto LAB_088767d4;
  case 0x20:
    goto LAB_08876910;
  case 0x21:
    iVar9 = *(int *)(param_1 + 0x3d0) + -1;
    *(int *)(param_1 + 0x3d0) = iVar9;
    if (0 < iVar9) {
      return;
    }
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
    goto LAB_0887698c;
  case 0x22:
LAB_0887698c:
    if (*(int *)(param_1 + 0x660) == 2) {
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - 250.0;
      uVar13 = FUN_0884b268();
      FUN_0884dcb0(0x43e10000,0x43160000,0x42200000,uVar13,param_1,0,0,0);
      *(undefined4 *)(param_1 + 0x3d0) = 0x2d;
    }
    else {
      *(undefined4 *)(param_1 + 0x3d0) = 0;
    }
    bVar2 = true;
    local_80 = *(undefined4 *)(param_1 + 0x20);
    uStack_78 = *(undefined4 *)(param_1 + 0x28);
    uStack_74 = *(undefined4 *)(param_1 + 0x2c);
    local_7c = *(float *)(param_1 + 0x24) + 3000.0;
    FUN_0889d57c(&local_80,&local_80);
    if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
      uVar13 = FUN_0880cc48();
      iVar9 = FUN_0880d0ac(uVar13,0x1a);
      if (iVar9 == 1) {
        bVar2 = false;
      }
    }
    if (bVar2) {
      FUN_088b65c4(3,&local_80,600,1,0);
    }
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
    return;
  case 0x23:
    iVar9 = *(int *)(param_1 + 0x3d0) + -1;
    *(int *)(param_1 + 0x3d0) = iVar9;
    if (0 < iVar9) {
      return;
    }
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
    goto LAB_08876ab8;
  case 0x24:
LAB_08876ab8:
    if (*(int *)(param_1 + 0x660) == 2) {
      *(undefined *)(param_1 + 0x1ac) = 1;
      iVar9 = FUN_0884b248();
      if (iVar9 != 0) {
        uVar13 = FUN_0884b268();
        FUN_0884dd94(uVar13);
      }
    }
    *(undefined4 *)(param_1 + 0x3cc) = 0x28;
LAB_08876af4:
    *(undefined4 *)(param_1 + 0x3d0) = 300;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    bVar2 = false;
    if ((*(char *)(param_1 + 0x158) == '\0') &&
       (iVar9 = (**(code **)(*(int *)(param_1 + 0x14) + 0x6c))
                          (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x68)), iVar9 != 0)) {
      bVar2 = true;
    }
    iVar9 = 999;
    if (bVar2) {
      iVar9 = *(int *)(param_1 + 0x3cc) + 1;
    }
    *(int *)(param_1 + 0x3cc) = iVar9;
    return;
  case 0x28:
    goto LAB_08876af4;
  case 0x29:
    iVar9 = FUN_089c9b48(5,DAT_08ac58c8);
    piVar10 = (int *)(param_1 + 0x3d0);
    if (iVar9 == 0) {
LAB_08876b74:
      iVar9 = *piVar10;
    }
    else {
      iVar9 = FUN_08866270();
      if (3 < iVar9) {
        *(undefined4 *)(param_1 + 0x3d0) = 0;
        goto LAB_08876b74;
      }
      iVar9 = *piVar10;
    }
    *piVar10 = iVar9 + -1;
    if (0 < iVar9) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3cc) = 100;
    iVar9 = *(int *)(param_1 + 0x3cc);
LAB_08876b90:
    *(int *)(param_1 + 0x3cc) = iVar9 + 1;
    FUN_089de940(param_1,0);
    return;
  default:
    if (100 < iVar9) {
      return;
    }
    iVar9 = *(int *)(param_1 + 0x3cc);
    goto LAB_08876b90;
  }
  FUN_089dedf8(param_1,&local_90,"Bip01");
  *(undefined4 *)(param_1 + 0x3f0) = local_90;
  *(undefined4 *)(param_1 + 0x3f4) = uStack_8c;
  *(undefined4 *)(param_1 + 0x3f8) = uStack_88;
  *(float *)(param_1 + 0x3fc) = local_84;
  if (((*(uint *)(param_1 + 0x3d4) & 3) == 0) && (*(int *)(param_1 + 0x3cc) == 1)) {
    uVar13 = vzero_s();
    auVar5._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar5._4_4_ = uVar13;
    auVar5._0_4_ = *(undefined4 *)(param_1 + 0x80);
    auVar3._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar3._4_4_ = uVar13;
    auVar3._0_4_ = *(undefined4 *)(param_1 + 0x80);
    fVar12 = (float)vdot_t(auVar5,auVar3);
    if (1.0 < fVar12) {
      iVar9 = FUN_0885fcf8(param_1);
      if (iVar9 == 0) {
        auVar6._8_4_ = 0x42a00000;
        auVar6._0_8_ = 0x42a00000;
        auVar3 = vrndf1_t();
        vpfxt(5,5,5,3);
        auVar3 = vsub_t(auVar3,auVar3);
        auVar3 = vmul_t(auVar6,auVar3);
        auVar7._8_4_ = 0x42200000;
        auVar7._0_8_ = 0x42200000;
        auVar3 = vsub_t(auVar3,auVar7);
        uStack_60 = auVar3._0_4_;
        local_5c = auVar3._4_4_;
        local_58 = auVar3._8_4_;
        uVar13 = 3;
        if ((0xb < DAT_08abd488) && (DAT_08abd488 < 0x10)) {
          uVar13 = 8;
        }
        auVar3 = vadd_t(*(undefined (*) [12])(param_1 + 0x340),auVar3);
        uStack_50 = auVar3._0_4_;
        uStack_4c = auVar3._4_4_;
        FUN_08823f5c(DAT_08ac5c70,uVar13,&uStack_50);
      }
      else {
        FUN_08862a84(param_1,4,0,0);
      }
    }
  }
  return;
LAB_088764b4:
  *(undefined4 *)(param_1 + 0x80) = in_V72;
  *(undefined4 *)(param_1 + 0x84) = in_V76;
  *(undefined4 *)(param_1 + 0x88) = in_V7A;
  *(undefined4 *)(param_1 + 0x8c) = in_V7E;
  FUN_08823f5c(DAT_08ac5c70,0x76,param_1 + 0x20);
  FUN_088608d8(0x3e4ccccd,param_1,0xfa,0,0);
  *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
LAB_088764fc:
  iVar9 = FUN_089df684(0x3f666666,param_1);
  if (iVar9 != 0) {
    FUN_088608d8(0x3e4ccccd,param_1,0,1,0);
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
  }
switchD_088762fc_caseD_7:
  return;
}

