#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089001c8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined auStack_150 [128];
  undefined4 local_d0 [4];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float local_94;
  int local_44;
  int local_40;
  int local_3c;
  
  switch(*(undefined4 *)(param_1 + 0x660)) {
  case 0:
    iVar4 = FUN_08905570(*(undefined4 *)(param_1 + 0x654));
    *(int *)(param_1 + 0x664) = iVar4;
    if (iVar4 != -1) {
      FUN_089c2bb4(*(undefined4 *)(param_1 + 0x664));
      *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x660) = 2;
    break;
  case 1:
    break;
  case 2:
    goto switchD_08900220_caseD_2;
  case 3:
    goto LAB_089002c8;
  default:
    goto switchD_08900220_caseD_4;
  case 8:
    goto LAB_08900300;
  case 9:
    goto LAB_089003b0;
  case 10:
    goto LAB_089003d4;
  case 0xb:
    if (DAT_08abff85 == '\0') {
      return;
    }
    iVar4 = FUN_089bfa40(100);
    iVar10 = param_1 + 0x100;
    if (iVar4 != 0) {
      FUN_089bf2f0(iVar4,1);
    }
    FUN_088b6844();
    FUN_0884b558(0);
    local_3c = 0;
    FUN_089d8634();
    uVar5 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar6 = FUN_089d7d74(0xa0,0,0);
    FUN_089d816c(uVar5);
    FUN_089d866c();
    iVar8 = local_3c;
    if (iVar6 != 0) {
      uVar5 = FUN_089be054(DAT_08ac520c,"particle_00.ptb");
      FUN_08823ae4(iVar6,uVar5);
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xe8) = iVar8;
    local_40 = 0;
    FUN_089d8634();
    uVar5 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar6 = FUN_089d7d74(0xa0,0,0);
    FUN_089d816c(uVar5);
    FUN_089d866c();
    iVar8 = local_40;
    if (iVar6 != 0) {
      uVar5 = FUN_089be054(DAT_08ac520c,"particle_01.ptb");
      FUN_08823ae4(iVar6,uVar5);
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xec) = iVar8;
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar4 + 0x434);
      *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(iVar4 + 0x438);
    }
    DAT_08ac5c70 = *(undefined4 *)(param_1 + 0xe8);
    DAT_08abd5b0 = *(undefined4 *)(param_1 + 0xec);
    FUN_089e10cc(0x3f800000);
    puVar9 = local_d0;
    FUN_088ff3f4(puVar9);
    local_b0 = *puVar9;
    local_ac = puVar9[1];
    uStack_a8 = puVar9[2];
    local_a4 = 1.570796;
    FUN_0880ddb4(0xffffffff);
    piVar7 = (int *)FUN_088660c8();
    if ((piVar7 != (int *)0x0) && (iVar4 = *piVar7, iVar4 != 0)) {
      puVar9 = (undefined4 *)(param_1 + 0x500);
      iVar6 = *(int *)(iVar4 + 0x14);
      iVar8 = param_1;
      while( true ) {
        iVar6 = (**(code **)(iVar6 + 0x74))(iVar4 + *(short *)(iVar6 + 0x70));
        if (iVar6 == 0) {
          uVar5 = *(undefined4 *)(iVar4 + 0x24);
          uVar1 = *(undefined4 *)(iVar4 + 0x28);
          uVar2 = *(undefined4 *)(iVar4 + 0x2c);
          *puVar9 = *(undefined4 *)(iVar4 + 0x20);
          puVar9[1] = uVar5;
          puVar9[2] = uVar1;
          puVar9[3] = uVar2;
          *(undefined4 *)(iVar8 + 0x50c) = *(undefined4 *)(iVar4 + 0x34);
          if (*(int *)(iVar4 + 0x20c) != 0) {
            iVar6 = *(int *)(iVar4 + 0x20c);
            *(undefined4 *)(iVar6 + 0x148) = 0;
            *(uint *)(iVar6 + 0x130) = *(uint *)(iVar6 + 0x130) | 1;
          }
          iVar8 = iVar8 + 0x10;
          puVar9 = puVar9 + 4;
          iVar4 = *(int *)(iVar4 + 4);
        }
        else {
          iVar4 = *(int *)(iVar4 + 4);
        }
        if (iVar4 == 0) break;
        iVar6 = *(int *)(iVar4 + 0x14);
      }
    }
    iVar4 = FUN_088660e0();
    if (*(int *)(iVar4 + 0x208) != 0) {
      *(uint *)(*(int *)(iVar4 + 0x208) + 0x130) = *(uint *)(*(int *)(iVar4 + 0x208) + 0x130) | 0x46
      ;
    }
    FUN_0886003c(local_a4,iVar4);
    *(undefined4 *)(iVar4 + 0x20) = local_b0;
    *(undefined4 *)(iVar4 + 0x24) = local_ac;
    *(undefined4 *)(iVar4 + 0x28) = uStack_a8;
    *(float *)(iVar4 + 0x2c) = local_a4;
    *(undefined *)(iVar4 + 0x158) = 1;
    *(int *)(param_1 + 0x4c4) = iVar4;
    FUN_088ff574(param_1);
    iVar4 = FUN_0884b248();
    if (iVar4 == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x4c4);
    }
    else {
      iVar4 = FUN_0884b268();
      *(int *)(param_1 + 0x4c0) = iVar4 + 0x20;
      uVar5 = *(undefined4 *)(param_1 + 0x4c4);
    }
    FUN_088fded4(iVar10,uVar5);
    FUN_088fe138(iVar10);
    *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_1 + 0x654);
    FUN_088fde00(iVar10);
    DAT_08ac5c90 = iVar10;
    *(undefined4 *)(param_1 + 0x140) = 0x41f00000;
    FUN_089cec00(DAT_08ac5934);
    iVar4 = FUN_089bfa40(100);
    if (iVar4 != 0) {
      FUN_089bf2f0(iVar4,2);
    }
    FUN_089bf300(param_1,2);
    iVar4 = *(int *)(param_1 + 0x4c4);
    local_b8 = 0x3f800000;
    local_bc = 0x3f800000;
    local_c0 = 0x3f800000;
    local_b4 = 0;
    *(undefined4 *)(iVar4 + 0x40) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0x44) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0x48) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0x4c) = 0;
    switch(*(undefined4 *)(param_1 + 0x654)) {
    case 0x30:
    case 0x32:
      *(undefined4 *)(param_1 + 0x140) = 0x41a00000;
      break;
    case 0x38:
      *(undefined4 *)(param_1 + 0x140) = 0x42c80000;
      break;
    case 0x42:
      *(undefined4 *)(param_1 + 0x420) = 0x42480000;
      *(undefined4 *)(param_1 + 0x304) = 0x3f8ccccd;
      *(undefined4 *)(param_1 + 0x140) = 0x41a00000;
      break;
    case 0x46:
      *(undefined4 *)(param_1 + 0x140) = 0x41c00000;
      break;
    case 0x50:
    case 0x52:
      *(undefined4 *)(param_1 + 0x420) = 0x42480000;
      *(undefined4 *)(param_1 + 0x304) = 0x3f8ccccd;
      break;
    case 0x66:
      *(undefined4 *)(param_1 + 0x420) = 0x42480000;
      *(undefined4 *)(param_1 + 0x304) = 0x3f8ccccd;
    }
    FUN_088fde00(iVar10);
    iVar4 = *(int *)(param_1 + 0x4c4);
    *(undefined4 *)(iVar4 + 0x80) = in_V72;
    *(undefined4 *)(iVar4 + 0x84) = in_V76;
    *(undefined4 *)(iVar4 + 0x88) = in_V7A;
    *(undefined4 *)(iVar4 + 0x8c) = in_V7E;
    iVar4 = *(int *)(*(int *)(param_1 + 0x4c4) + 0x130);
    *(undefined4 *)(iVar4 + 0xb0) = local_b0;
    *(undefined4 *)(iVar4 + 0xb4) = local_ac;
    *(undefined4 *)(iVar4 + 0xb8) = uStack_a8;
    *(float *)(iVar4 + 0xbc) = local_a4;
    FUN_0886003c(local_a4,*(undefined4 *)(param_1 + 0x4c4));
    iVar4 = *(int *)(param_1 + 0x4c4);
    iVar8 = *(int *)(iVar4 + 0x130);
    uVar5 = *(undefined4 *)(iVar8 + 0xb4);
    uVar1 = *(undefined4 *)(iVar8 + 0xb8);
    uVar2 = *(undefined4 *)(iVar8 + 0xbc);
    *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar8 + 0xb0);
    *(undefined4 *)(iVar4 + 0x24) = uVar5;
    *(undefined4 *)(iVar4 + 0x28) = uVar1;
    *(undefined4 *)(iVar4 + 0x2c) = uVar2;
    FUN_088706f0(*(undefined4 *)(param_1 + 0x4c4),0xf,0);
    *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 0x6c) = 0x3f800000;
    iVar4 = *(int *)(*(int *)(param_1 + 0x4c4) + 0x14);
    (**(code **)(iVar4 + 0x34))
              (0x3f800000,*(int *)(param_1 + 0x4c4) + (int)*(short *)(iVar4 + 0x30));
    *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 0x344) = 0;
    switch(*(undefined4 *)(param_1 + 0x654)) {
    case 0x18:
    case 0x1a:
    case 0x30:
    case 0x32:
      uVar5 = *(undefined4 *)(param_1 + 0x654);
      break;
    case 0x3a:
      FUN_0886003c(local_a4 - 0.3926991,*(undefined4 *)(param_1 + 0x4c4));
    case 0x19:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x31:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      uVar5 = *(undefined4 *)(param_1 + 0x654);
      break;
    default:
      uVar5 = *(undefined4 *)(param_1 + 0x654);
    }
    uVar5 = FUN_08905738(uVar5,*(undefined4 *)(param_1 + 0x4c4),0,0);
    *(undefined4 *)(param_1 + 0x4d4) = uVar5;
    iVar4 = FUN_08905508(*(undefined4 *)(param_1 + 0x654));
    if (iVar4 != 0) {
      uVar5 = FUN_0880df5c(0xffffffff);
      iVar4 = FUN_088b9450(0x3dcccccd,uVar5,0,0);
      FUN_088b87bc(local_a4,iVar4);
      *(undefined4 *)(iVar4 + 0x20) = local_b0;
      *(undefined4 *)(iVar4 + 0x24) = local_ac;
      *(undefined4 *)(iVar4 + 0x28) = uStack_a8;
      *(float *)(iVar4 + 0x2c) = local_a4;
      *(undefined4 *)(iVar4 + 0x80) = in_V72;
      *(undefined4 *)(iVar4 + 0x84) = in_V76;
      *(undefined4 *)(iVar4 + 0x88) = in_V7A;
      *(undefined4 *)(iVar4 + 0x8c) = in_V7E;
      iVar8 = *(int *)(iVar4 + 0x130);
      *(undefined4 *)(iVar8 + 0xb0) = local_b0;
      *(undefined4 *)(iVar8 + 0xb4) = local_ac;
      *(undefined4 *)(iVar8 + 0xb8) = uStack_a8;
      *(float *)(iVar8 + 0xbc) = local_a4;
      FUN_088b87bc(local_a4,iVar4);
      *(undefined *)(iVar4 + 0x1f5) = 1;
      *(undefined4 *)(iVar4 + 0x1b4) = local_ac;
      (**(code **)(*(int *)(iVar4 + 0x14) + 0x3c))
                (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x38));
      uVar5 = FUN_0882d020(0xffffffff);
      uVar5 = FUN_08845e7c(uVar5);
      FUN_088b93b8(iVar4,uVar5);
      *(int *)(param_1 + 0x4cc) = iVar4;
      uVar5 = FUN_08905738(0x16,0,0,iVar4);
      *(undefined4 *)(param_1 + 0x4d8) = uVar5;
      iVar4 = FUN_0880ddb4(0xffffffff);
      if (iVar4 < 3) {
        if (1 < iVar4) {
LAB_08900a80:
          local_a0 = local_b0;
          uStack_9c = local_ac;
          uStack_98 = uStack_a8;
          local_94 = local_a4;
          iVar8 = FUN_088b9450(0x3dcccccd,iVar4 + 0x57,0,0);
          FUN_088b87bc(local_94,iVar8);
          *(undefined4 *)(iVar8 + 0x20) = local_a0;
          *(undefined4 *)(iVar8 + 0x24) = uStack_9c;
          *(undefined4 *)(iVar8 + 0x28) = uStack_98;
          *(float *)(iVar8 + 0x2c) = local_94;
          *(undefined4 *)(iVar8 + 0x80) = in_V72;
          *(undefined4 *)(iVar8 + 0x84) = in_V76;
          *(undefined4 *)(iVar8 + 0x88) = in_V7A;
          *(undefined4 *)(iVar8 + 0x8c) = in_V7E;
          iVar6 = *(int *)(iVar8 + 0x130);
          *(undefined4 *)(iVar6 + 0xb0) = local_a0;
          *(undefined4 *)(iVar6 + 0xb4) = uStack_9c;
          *(undefined4 *)(iVar6 + 0xb8) = uStack_98;
          *(float *)(iVar6 + 0xbc) = local_94;
          FUN_088b87bc(local_94,iVar8);
          uVar5 = FUN_0882d020(0xffffffff);
          uVar5 = FUN_08845e7c(uVar5);
          FUN_088b93b8(iVar8,uVar5);
          (**(code **)(*(int *)(iVar8 + 0x14) + 0x3c))
                    (iVar8 + *(short *)(*(int *)(iVar8 + 0x14) + 0x38));
          *(undefined4 *)(iVar8 + 0x6c) = 0;
          *(int *)(param_1 + 0x4d0) = iVar8;
          uVar5 = 0x67;
          if (iVar4 == 10) {
            uVar5 = 0x68;
          }
          uVar5 = FUN_08905738(uVar5,0,0,*(undefined4 *)(param_1 + 0x4d0));
          *(undefined4 *)(param_1 + 0x4dc) = uVar5;
        }
      }
      else if (iVar4 == 10) goto LAB_08900a80;
    }
    iVar4 = FUN_089be148(DAT_08ac520c,"demo_start.gmo");
    if (iVar4 != 0) {
      local_44 = 0;
      FUN_089d8634();
      uVar5 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar8 = FUN_089d7d74(0x140,0,0);
      FUN_089d816c(uVar5);
      FUN_089d866c();
      iVar4 = local_44;
      if (iVar8 != 0) {
        FUN_089de2e4(iVar8,"demo_start.gmo",0);
        iVar4 = iVar8;
      }
      *(int *)(param_1 + 0x650) = iVar4;
      *(undefined4 *)(iVar4 + 0x20) = local_b0;
      *(undefined4 *)(iVar4 + 0x24) = local_ac;
      *(undefined4 *)(iVar4 + 0x28) = uStack_a8;
      *(float *)(iVar4 + 0x2c) = local_a4;
      iVar4 = *(int *)(param_1 + 0x650);
      *(undefined4 *)(iVar4 + 0x80) = in_V72;
      *(undefined4 *)(iVar4 + 0x84) = in_V76;
      *(undefined4 *)(iVar4 + 0x88) = in_V7A;
      *(undefined4 *)(iVar4 + 0x8c) = in_V7E;
      iVar4 = *(int *)(*(int *)(param_1 + 0x650) + 0x130);
      *(undefined4 *)(iVar4 + 0xb0) = local_b0;
      *(undefined4 *)(iVar4 + 0xb4) = local_ac;
      *(undefined4 *)(iVar4 + 0xb8) = uStack_a8;
      *(float *)(iVar4 + 0xbc) = local_a4;
      *(undefined *)(*(int *)(param_1 + 0x650) + 0xbc) = 1;
      FUN_0889d514(*(undefined4 *)(param_1 + 0x650));
      FUN_08a15924(*(undefined4 *)(*(int *)(param_1 + 0x650) + 0x130),0x100,0xffffffff);
      *(undefined4 *)(*(int *)(param_1 + 0x650) + 0x6c) = 0;
      FUN_089d8984(*(undefined4 *)(param_1 + 0x650),*(undefined4 *)(param_1 + 0xf0));
    }
    FUN_088ff320(param_1,*(undefined4 *)(param_1 + 0x4d4));
    if (*(int *)(param_1 + 0x4d8) == 0) {
      iVar4 = *(int *)(param_1 + 0x4dc);
    }
    else {
      *(undefined *)(*(int *)(param_1 + 0x4d4) + 0x56) = 1;
      FUN_089bf2f0(*(undefined4 *)(param_1 + 0x4d8),3);
      iVar4 = *(int *)(param_1 + 0x4dc);
    }
    if (iVar4 != 0) {
      FUN_089bf2f0(*(undefined4 *)(param_1 + 0x4dc),3);
      *(undefined *)(*(int *)(param_1 + 0x4dc) + 0x56) = 1;
    }
    FUN_088fde00(iVar10);
    if (DAT_08aba77d != '\0') {
      if (DAT_08aba778 < 2) {
        if (0 < DAT_08aba778) {
          FUN_0882c2cc(4,1);
        }
      }
      else if (DAT_08aba778 < 4) {
        FUN_0882c2cc(5,1);
      }
      else if (DAT_08aba778 < 5) {
        FUN_0882c2cc(6,1);
      }
    }
    iVar4 = FUN_089bf93c(0x1e0,1);
    if (iVar4 != 0) {
      uVar5 = FUN_089bfa40(0x1e0);
      FUN_089bf2f0(uVar5,2);
    }
    iVar4 = FUN_089bf93c(0x1e1,1);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x4c4);
    }
    else {
      uVar5 = FUN_089bfa40(0x1e1);
      FUN_089bf2f0(uVar5,2);
      iVar4 = *(int *)(param_1 + 0x4c4);
    }
    if (iVar4 != 0) {
      FUN_0886020c(*(undefined4 *)(param_1 + 0x4c4));
    }
    FUN_088fe1d0(iVar10);
    FUN_088ffadc(param_1);
    if ((*(int *)(param_1 + 0x664) != -1) && (iVar4 = FUN_089c2b10(1), iVar4 != 0)) {
      uVar5 = FUN_089c2b48(1);
      FUN_089c357c(uVar5,*(undefined4 *)(param_1 + 0x664),0,0);
    }
    *(undefined4 *)(param_1 + 0x65c) = 1;
    *(undefined4 *)(param_1 + 0x660) = 0;
    *(undefined4 *)(param_1 + 0x684) = 0x3e99999a;
    goto switchD_08900220_caseD_4;
  }
  if (*(int *)(param_1 + 0x664) != -1) {
    iVar4 = FUN_089c2c54(*(undefined4 *)(param_1 + 0x664));
    if (iVar4 == 0) {
      return;
    }
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
  }
switchD_08900220_caseD_2:
  iVar4 = FUN_088ffd14(param_1);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x660) = 8;
  }
  else {
    FUN_089bf6e8(0x6c,100);
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
LAB_089002c8:
    if (DAT_08aba750 == '\x01') {
      *(undefined4 *)(param_1 + 0x660) = 8;
LAB_08900300:
      iVar4 = FUN_08905474(*(undefined4 *)(param_1 + 0x654));
      if (iVar4 == 0) {
        uVar5 = FUN_089055e4(*(undefined4 *)(param_1 + 0x654));
        strcpy(auStack_150,uVar5);
        puVar3 = (undefined *)strrchr(auStack_150,0x2e);
        if (puVar3 != (undefined *)0x0) {
          *puVar3 = 0;
        }
        strcat(auStack_150,&DAT_08a99d40);
        iVar4 = param_1 + 0x698;
        strcpy(iVar4,"data/event/");
        strcat(iVar4,auStack_150);
        iVar4 = FUN_089bda88(param_1 + 0x10,iVar4,10,1,0);
        if (iVar4 != 0) {
          *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x660) = 10;
      }
LAB_089003b0:
      iVar4 = FUN_089bdb90(param_1 + 0x10,1);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x660) = 10;
LAB_089003d4:
        if (*(int *)(param_1 + 0xf0) == 0) {
          FUN_089d8634();
          uVar5 = FUN_089d81a4();
          FUN_089d816c(1);
          puVar9 = (undefined4 *)FUN_089d7d74(0xc,0,0);
          FUN_089d816c(uVar5);
          FUN_089d866c();
          *(undefined4 **)(param_1 + 0xf0) = puVar9;
          puVar9[1] = 0;
          *puVar9 = 0;
          puVar9[2] = 0;
          FUN_0889e9c0(0,*(undefined4 *)(param_1 + 0xf0));
          FUN_08828ad0();
          FUN_08825580();
          FUN_088a91d4();
        }
        FUN_0884b444(1);
        DAT_08abff84 = 1;
        *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
      }
    }
  }
switchD_08900220_caseD_4:
  return;
}

