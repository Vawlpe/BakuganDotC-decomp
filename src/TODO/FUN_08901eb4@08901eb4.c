#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08901eb4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined auStack_1b0 [32];
  undefined auStack_190 [128];
  float local_110 [4];
  float local_100;
  float local_fc;
  float fStack_f8;
  undefined4 local_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 local_e4;
  undefined4 local_e0 [4];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  int *local_4c;
  int local_48;
  char *local_44;
  int local_40;
  int local_3c;
  int local_38;
  
  switch(*(undefined4 *)(param_1 + 0x660)) {
  case 0:
    iVar6 = FUN_08905570(*(undefined4 *)(param_1 + 0x654));
    *(int *)(param_1 + 0x664) = iVar6;
    if (iVar6 != -1) {
      FUN_089c2bb4(*(undefined4 *)(param_1 + 0x664));
      *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x660) = 2;
    break;
  case 1:
    break;
  case 2:
    goto switchD_08901f10_caseD_2;
  case 3:
switchD_08901f10_caseD_3:
    iVar6 = FUN_0880d378();
    if (iVar6 == 0) {
      *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
    }
    else {
      iVar6 = FUN_089bdb90(param_1 + 0x54,1);
      if (iVar6 == 0) {
        return;
      }
      *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
    }
  case 4:
    iVar6 = FUN_088ffd14(param_1);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x660) = 6;
    }
    else {
      iVar6 = FUN_0880ddb4(0xffffffff);
      if ((iVar6 == 2) || (iVar6 == 10)) {
        strcpy(auStack_1b0,*(undefined4 *)(&DAT_08ab0518 + (iVar6 + 0x57) * 4));
        strcat(auStack_1b0,&DAT_08a99dc0);
        FUN_089b4c84(param_1 + 0x718,"data/battle/sphere/%s.lzs",auStack_1b0);
        iVar6 = FUN_089bda88(param_1 + 0x98,param_1 + 0x718,10,1,0);
        if (iVar6 != 0) {
          *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x660) = 6;
      }
    }
    return;
  case 5:
    iVar6 = FUN_089bdb90(param_1 + 0x98,1);
    if (iVar6 == 0) {
      return;
    }
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
    goto LAB_0890213c;
  case 6:
LAB_0890213c:
    iVar6 = param_1 + 0x698;
    FUN_0884b444(1);
    uVar5 = FUN_089055e4(*(undefined4 *)(param_1 + 0x654));
    strcpy(auStack_190,uVar5);
    puVar3 = (undefined *)strrchr(auStack_190,0x2e);
    if (puVar3 != (undefined *)0x0) {
      *puVar3 = 0;
    }
    strcat(auStack_190,&DAT_08a99d40);
    strcpy(iVar6,"data/event/");
    strcat(iVar6,auStack_190);
    iVar6 = FUN_089bda88(param_1 + 0x10,iVar6,10,1,0);
    if (iVar6 != 0) {
      *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
    }
LAB_089021d0:
    iVar6 = FUN_089bdb90(param_1 + 0x10,1);
    if (iVar6 == 0) {
      return;
    }
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
LAB_089021fc:
    if (*(int *)(param_1 + 0xf0) == 0) {
      FUN_089d8634();
      uVar5 = FUN_089d81a4();
      FUN_089d816c(1);
      puVar12 = (undefined4 *)FUN_089d7d74(0xc,0,0);
      FUN_089d816c(uVar5);
      FUN_089d866c();
      *(undefined4 **)(param_1 + 0xf0) = puVar12;
      puVar12[1] = 0;
      *puVar12 = 0;
      puVar12[2] = 0;
      FUN_0889e9c0(0,*(undefined4 *)(param_1 + 0xf0));
      FUN_08828ad0();
      FUN_08825580();
      FUN_088a91d4();
    }
    DAT_08abff84 = 1;
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
    return;
  case 7:
    goto LAB_089021d0;
  case 8:
    goto LAB_089021fc;
  case 9:
    iVar6 = FUN_089bfa40(100);
    local_4c = (int *)(param_1 + 0x79c);
    local_38 = param_1 + 0x100;
    if (iVar6 != 0) {
      FUN_089bf2f0(iVar6,3);
    }
    FUN_0884b558(0);
    local_3c = 0;
    FUN_089d8634();
    uVar5 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0xa0,0,0);
    FUN_089d816c(uVar5);
    FUN_089d866c();
    iVar2 = local_38;
    iVar7 = local_3c;
    if (iVar4 != 0) {
      uVar5 = FUN_089be054(DAT_08ac520c,"particle_00.ptb");
      FUN_08823ae4(iVar4,uVar5);
      iVar7 = iVar4;
    }
    *(int *)(param_1 + 0xe8) = iVar7;
    local_40 = 0;
    local_38 = iVar2;
    FUN_089d8634();
    uVar5 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0xa0,0,0);
    FUN_089d816c(uVar5);
    FUN_089d866c();
    iVar2 = local_38;
    iVar7 = local_40;
    if (iVar4 != 0) {
      uVar5 = FUN_089be054(DAT_08ac520c,"particle_01.ptb");
      FUN_08823ae4(iVar4,uVar5);
      iVar7 = iVar4;
    }
    *(int *)(param_1 + 0xec) = iVar7;
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar6 + 0x434);
      *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(iVar6 + 0x438);
    }
    DAT_08ac5c70 = *(undefined4 *)(param_1 + 0xe8);
    DAT_08abd5b0 = *(undefined4 *)(param_1 + 0xec);
    FUN_088dfa1c(param_1 + 0x4f0);
    pfVar9 = local_110;
    FUN_088ff3f4(pfVar9);
    local_100 = *pfVar9;
    local_fc = pfVar9[1];
    fStack_f8 = pfVar9[2];
    local_f4 = 0x3fc90fdb;
    uVar5 = FUN_0880de08(0xffffffff);
    iVar6 = FUN_088dffe4(uVar5,0,0,0);
    if (*(int *)(iVar6 + 0x170) == 0) {
      iVar7 = *(int *)(iVar6 + 0x174);
    }
    else {
      *(uint *)(*(int *)(iVar6 + 0x170) + 0x130) = *(uint *)(*(int *)(iVar6 + 0x170) + 0x130) | 199;
      iVar7 = *(int *)(iVar6 + 0x174);
    }
    if (iVar7 != 0) {
      *(uint *)(*(int *)(iVar6 + 0x174) + 0x130) = *(uint *)(*(int *)(iVar6 + 0x174) + 0x130) | 199;
    }
    FUN_088deadc(local_f4,iVar6);
    *(float *)(iVar6 + 0x20) = local_100;
    *(float *)(iVar6 + 0x24) = local_fc;
    *(float *)(iVar6 + 0x28) = fStack_f8;
    *(undefined4 *)(iVar6 + 0x2c) = local_f4;
    *(undefined *)(iVar6 + 0x14c) = 1;
    *(undefined4 *)(iVar6 + 0x250) = 0;
    *(undefined4 *)(iVar6 + 0x33c) = 999;
    *(undefined4 *)(iVar6 + 0x80) = in_V72;
    *(undefined4 *)(iVar6 + 0x84) = in_V76;
    *(undefined4 *)(iVar6 + 0x88) = in_V7A;
    *(undefined4 *)(iVar6 + 0x8c) = in_V7E;
    iVar7 = *(int *)(iVar6 + 0x130);
    *(float *)(iVar7 + 0xb0) = local_100;
    *(float *)(iVar7 + 0xb4) = local_fc;
    *(float *)(iVar7 + 0xb8) = fStack_f8;
    *(undefined4 *)(iVar7 + 0xbc) = local_f4;
    FUN_088deadc(local_f4,iVar6);
    iVar7 = *(int *)(iVar6 + 0x130);
    uVar5 = *(undefined4 *)(iVar7 + 0xb4);
    uVar11 = *(undefined4 *)(iVar7 + 0xb8);
    uVar1 = *(undefined4 *)(iVar7 + 0xbc);
    *(float *)(iVar6 + 0x20) = *(float *)(iVar7 + 0xb0);
    *(undefined4 *)(iVar6 + 0x24) = uVar5;
    *(undefined4 *)(iVar6 + 0x28) = uVar11;
    *(undefined4 *)(iVar6 + 0x2c) = uVar1;
    FUN_088e05dc(iVar6,3,0);
    FUN_088def24(0,iVar6,8,0,1);
    (**(code **)(*(int *)(iVar6 + 0x14) + 0x3c))(iVar6 + *(short *)(*(int *)(iVar6 + 0x14) + 0x38));
    *(int *)(param_1 + 0x4c8) = iVar6;
    iVar6 = FUN_0880d378();
    if (iVar6 != 0) {
      FUN_088deaf8(*(undefined4 *)(param_1 + 0x4c8));
    }
    uVar5 = FUN_0880df5c(0xffffffff);
    fStack_ec = local_fc;
    fStack_e8 = fStack_f8;
    local_e4 = local_f4;
    local_f0 = local_100 + 5.0;
    iVar6 = FUN_088b9450(0x3dcccccd,uVar5,0,0);
    FUN_088b87bc(local_e4,iVar6);
    *(float *)(iVar6 + 0x20) = local_f0;
    *(float *)(iVar6 + 0x24) = fStack_ec;
    *(float *)(iVar6 + 0x28) = fStack_e8;
    *(undefined4 *)(iVar6 + 0x2c) = local_e4;
    *(undefined4 *)(iVar6 + 0x80) = in_V72;
    *(undefined4 *)(iVar6 + 0x84) = in_V76;
    *(undefined4 *)(iVar6 + 0x88) = in_V7A;
    *(undefined4 *)(iVar6 + 0x8c) = in_V7E;
    iVar7 = *(int *)(iVar6 + 0x130);
    *(float *)(iVar7 + 0xb0) = local_f0;
    *(float *)(iVar7 + 0xb4) = fStack_ec;
    *(float *)(iVar7 + 0xb8) = fStack_e8;
    *(undefined4 *)(iVar7 + 0xbc) = local_e4;
    FUN_088b87bc(local_e4,iVar6);
    *(undefined *)(iVar6 + 0x1f5) = 1;
    *(float *)(iVar6 + 0x1b4) = local_fc;
    uVar5 = FUN_0882d020(0xffffffff);
    uVar5 = FUN_08845e7c(uVar5);
    FUN_088b93b8(iVar6,uVar5);
    (**(code **)(*(int *)(iVar6 + 0x14) + 0x3c))(iVar6 + *(short *)(*(int *)(iVar6 + 0x14) + 0x38));
    *(int *)(param_1 + 0x4cc) = iVar6;
    iVar6 = FUN_0880ddb4(0xffffffff);
    if (iVar6 < 3) {
      if (iVar6 < 2) {
        iVar6 = *(int *)(param_1 + 0x4d0);
      }
      else {
LAB_08902644:
        iVar6 = FUN_088b9450(0x3dcccccd,iVar6 + 0x57,0,0);
        FUN_088b87bc(local_e4,iVar6);
        *(float *)(iVar6 + 0x20) = local_f0;
        *(float *)(iVar6 + 0x24) = fStack_ec;
        *(float *)(iVar6 + 0x28) = fStack_e8;
        *(undefined4 *)(iVar6 + 0x2c) = local_e4;
        *(undefined4 *)(iVar6 + 0x80) = in_V72;
        *(undefined4 *)(iVar6 + 0x84) = in_V76;
        *(undefined4 *)(iVar6 + 0x88) = in_V7A;
        *(undefined4 *)(iVar6 + 0x8c) = in_V7E;
        iVar7 = *(int *)(iVar6 + 0x130);
        *(float *)(iVar7 + 0xb0) = local_f0;
        *(float *)(iVar7 + 0xb4) = fStack_ec;
        *(float *)(iVar7 + 0xb8) = fStack_e8;
        *(undefined4 *)(iVar7 + 0xbc) = local_e4;
        FUN_088b87bc(local_e4,iVar6);
        uVar5 = FUN_0882d020(0xffffffff);
        uVar5 = FUN_08845e7c(uVar5);
        FUN_088b93b8(iVar6,uVar5);
        (**(code **)(*(int *)(iVar6 + 0x14) + 0x3c))
                  (iVar6 + *(short *)(*(int *)(iVar6 + 0x14) + 0x38));
        *(undefined4 *)(iVar6 + 0x6c) = 0;
        *(int *)(param_1 + 0x4d0) = iVar6;
        iVar6 = *(int *)(param_1 + 0x4d0);
      }
    }
    else {
      if (iVar6 == 10) goto LAB_08902644;
      iVar6 = *(int *)(param_1 + 0x4d0);
    }
    if (iVar6 == 0) {
      local_44 = "demo_start.gmo";
      iVar6 = FUN_089be148(DAT_08ac520c,"demo_start.gmo");
      if (iVar6 != 0) {
        local_48 = 0;
        FUN_089d8634();
        uVar5 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar7 = FUN_089d7d74(0x140,0,0);
        FUN_089d816c(uVar5);
        FUN_089d866c();
        iVar6 = local_48;
        if (iVar7 != 0) {
          FUN_089de2e4(iVar7,local_44,0);
          iVar6 = iVar7;
        }
        *(int *)(param_1 + 0x650) = iVar6;
        *(float *)(iVar6 + 0x20) = local_100;
        *(float *)(iVar6 + 0x24) = local_fc;
        *(float *)(iVar6 + 0x28) = fStack_f8;
        *(undefined4 *)(iVar6 + 0x2c) = local_f4;
        iVar6 = *(int *)(param_1 + 0x650);
        *(undefined4 *)(iVar6 + 0x80) = in_V72;
        *(undefined4 *)(iVar6 + 0x84) = in_V76;
        *(undefined4 *)(iVar6 + 0x88) = in_V7A;
        *(undefined4 *)(iVar6 + 0x8c) = in_V7E;
        iVar6 = *(int *)(*(int *)(param_1 + 0x650) + 0x130);
        *(float *)(iVar6 + 0xb0) = local_100;
        *(float *)(iVar6 + 0xb4) = local_fc;
        *(float *)(iVar6 + 0xb8) = fStack_f8;
        *(undefined4 *)(iVar6 + 0xbc) = local_f4;
        *(undefined *)(*(int *)(param_1 + 0x650) + 0xbc) = 1;
        FUN_0889d514(*(undefined4 *)(param_1 + 0x650));
        *(undefined4 *)(*(int *)(param_1 + 0x650) + 0x6c) = 0;
        FUN_089d8984(*(undefined4 *)(param_1 + 0x650),*(undefined4 *)(param_1 + 0xf0));
        FUN_08a15924(*(undefined4 *)(*(int *)(param_1 + 0x650) + 0x130),0x100,0xffffffff);
      }
    }
    puVar12 = local_e0;
    FUN_088ff3f4(puVar12);
    local_c0 = *puVar12;
    local_bc = puVar12[1];
    uStack_b8 = puVar12[2];
    local_b4 = 0x3fc90fdb;
    FUN_0880ddb4(0xffffffff);
    iVar6 = FUN_088660e0();
    piVar10 = (int *)FUN_088660c8();
    if ((piVar10 != (int *)0x0) && (iVar7 = *piVar10, iVar7 != 0)) {
      puVar12 = (undefined4 *)(param_1 + 0x500);
      iVar8 = *(int *)(iVar7 + 0x14);
      iVar4 = param_1;
      while( true ) {
        iVar8 = (**(code **)(iVar8 + 0x74))(iVar7 + *(short *)(iVar8 + 0x70));
        if (iVar8 == 0) {
          uVar5 = *(undefined4 *)(iVar7 + 0x24);
          uVar11 = *(undefined4 *)(iVar7 + 0x28);
          uVar1 = *(undefined4 *)(iVar7 + 0x2c);
          *puVar12 = *(undefined4 *)(iVar7 + 0x20);
          puVar12[1] = uVar5;
          puVar12[2] = uVar11;
          puVar12[3] = uVar1;
          *(undefined4 *)(iVar4 + 0x50c) = *(undefined4 *)(iVar7 + 0x34);
          if (*(int *)(iVar7 + 0x20c) != 0) {
            iVar8 = *(int *)(iVar7 + 0x20c);
            *(undefined4 *)(iVar8 + 0x148) = 0;
            *(uint *)(iVar8 + 0x130) = *(uint *)(iVar8 + 0x130) | 1;
          }
          iVar4 = iVar4 + 0x10;
          puVar12 = puVar12 + 4;
          iVar7 = *(int *)(iVar7 + 4);
        }
        else {
          iVar7 = *(int *)(iVar7 + 4);
        }
        if (iVar7 == 0) break;
        iVar8 = *(int *)(iVar7 + 0x14);
      }
    }
    FUN_0886003c(local_b4,iVar6);
    *(undefined4 *)(iVar6 + 0x20) = local_c0;
    *(undefined4 *)(iVar6 + 0x24) = local_bc;
    *(undefined4 *)(iVar6 + 0x28) = uStack_b8;
    *(undefined4 *)(iVar6 + 0x2c) = local_b4;
    *(undefined *)(iVar6 + 0x158) = 1;
    *(undefined4 *)(iVar6 + 0x80) = in_V72;
    *(undefined4 *)(iVar6 + 0x84) = in_V76;
    *(undefined4 *)(iVar6 + 0x88) = in_V7A;
    *(undefined4 *)(iVar6 + 0x8c) = in_V7E;
    iVar7 = *(int *)(iVar6 + 0x130);
    *(undefined4 *)(iVar7 + 0xb0) = local_c0;
    *(undefined4 *)(iVar7 + 0xb4) = local_bc;
    *(undefined4 *)(iVar7 + 0xb8) = uStack_b8;
    *(undefined4 *)(iVar7 + 0xbc) = local_b4;
    FUN_0886003c(local_b4,iVar6);
    iVar7 = *(int *)(iVar6 + 0x130);
    uVar5 = *(undefined4 *)(iVar7 + 0xb4);
    uVar11 = *(undefined4 *)(iVar7 + 0xb8);
    uVar1 = *(undefined4 *)(iVar7 + 0xbc);
    *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar7 + 0xb0);
    *(undefined4 *)(iVar6 + 0x24) = uVar5;
    *(undefined4 *)(iVar6 + 0x28) = uVar11;
    *(undefined4 *)(iVar6 + 0x2c) = uVar1;
    FUN_088706f0(iVar6,0xf,0);
    *(undefined4 *)(iVar6 + 0x6c) = 0;
    *(undefined4 *)(iVar6 + 0x344) = local_bc;
    *(undefined4 *)(iVar6 + 0x1c4) = 999;
    local_c8 = 0x3f800000;
    local_cc = 0x3f800000;
    local_d0 = 0x3f800000;
    local_c4 = 0;
    *(undefined4 *)(iVar6 + 0x40) = 0x3f800000;
    *(undefined4 *)(iVar6 + 0x44) = 0x3f800000;
    *(undefined4 *)(iVar6 + 0x48) = 0x3f800000;
    *(undefined4 *)(iVar6 + 0x4c) = 0;
    *(int *)(param_1 + 0x4c4) = iVar6;
    FUN_088ff574(param_1);
    switch(*(undefined4 *)(param_1 + 0x654)) {
    case 6:
    case 0x12:
      if (*(int *)(param_1 + 0x4c8) == 0) {
        iVar6 = *(int *)(param_1 + 0x4cc);
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x4c8) + 0x14);
        (**(code **)(iVar6 + 0x34))
                  (0x3f866666,*(int *)(param_1 + 0x4c8) + (int)*(short *)(iVar6 + 0x30));
        iVar6 = *(int *)(param_1 + 0x4cc);
      }
      if (iVar6 != 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x4cc) + 0x14);
        (**(code **)(iVar6 + 0x34))
                  (0x3f4ccccd,*(int *)(param_1 + 0x4cc) + (int)*(short *)(iVar6 + 0x30));
      }
      break;
    case 0xf:
    case 0x15:
      if (*(int *)(param_1 + 0x4c8) != 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x4c8) + 0x14);
        (**(code **)(iVar6 + 0x34))
                  (0x3f8ccccd,*(int *)(param_1 + 0x4c8) + (int)*(short *)(iVar6 + 0x30));
      }
    }
    iVar6 = FUN_0884b248();
    if (iVar6 == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x654);
    }
    else {
      iVar6 = FUN_0884b268();
      *(int *)(param_1 + 0x4c0) = iVar6 + 0x20;
      uVar5 = *(undefined4 *)(param_1 + 0x654);
    }
    *(undefined4 *)(param_1 + 0x3a4) = uVar5;
    FUN_088fded4(iVar2,*(undefined4 *)(param_1 + 0x4c8));
    FUN_088fe19c(iVar2);
    DAT_08ac5c90 = iVar2;
    uVar5 = 1;
    if (*(int *)(param_1 + 0x4c4) != 0) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 8);
    }
    uVar5 = FUN_08905450(uVar5);
    uVar11 = 1;
    if (*(int *)(param_1 + 0x4c4) != 0) {
      uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 8);
    }
    uVar11 = FUN_08905430(uVar11);
    if (*(int *)(param_1 + 0x4d0) == 0) {
      uVar5 = FUN_08905738(uVar5,0,0,*(undefined4 *)(param_1 + 0x4cc));
      *(undefined4 *)(param_1 + 0x794) = uVar5;
    }
    else {
      uVar5 = FUN_08905738(uVar5,0,0,*(undefined4 *)(param_1 + 0x4d0));
      *(undefined4 *)(param_1 + 0x794) = uVar5;
    }
    uVar5 = FUN_08905738(uVar11,*(undefined4 *)(param_1 + 0x4c4),*(undefined4 *)(param_1 + 0x4c8),0)
    ;
    *(undefined4 *)(param_1 + 0x798) = uVar5;
    uVar5 = FUN_08905738(*(undefined4 *)(param_1 + 0x654),0,*(undefined4 *)(param_1 + 0x4c8),
                         *(undefined4 *)(param_1 + 0x4cc));
    *(undefined4 *)(param_1 + 0x790) = uVar5;
    FUN_088ff320(param_1,uVar5);
    FUN_089bf2f0(*(undefined4 *)(param_1 + 0x794),3);
    FUN_089bf2f0(*(undefined4 *)(param_1 + 0x798),3);
    *(undefined *)(*(int *)(param_1 + 0x790) + 0x56) = 1;
    *(undefined *)(*(int *)(param_1 + 0x794) + 0x56) = 1;
    FUN_088fde00(iVar2);
    FUN_088fde00(iVar2);
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
    goto LAB_08902b54;
  case 10:
    local_4c = (int *)(param_1 + 0x79c);
LAB_08902b54:
    piVar10 = local_4c;
    if (*(int *)(param_1 + 0x664) == -1) {
LAB_08902b90:
      iVar6 = *(int *)(param_1 + 0x660);
    }
    else {
      iVar6 = FUN_089c2b10(0);
      if (iVar6 != 0) {
        uVar5 = FUN_089c2b48(0);
        FUN_089c357c(uVar5,*(undefined4 *)(param_1 + 0x664),0,0);
        goto LAB_08902b90;
      }
      iVar6 = *(int *)(param_1 + 0x660);
    }
    *(undefined4 *)(param_1 + 0x79c) = 8;
    *(int *)(param_1 + 0x660) = iVar6 + 1;
LAB_08902bac:
    iVar6 = *piVar10;
    *piVar10 = iVar6 + -1;
    if (0 < iVar6) {
      return;
    }
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
    iVar6 = *(int *)(param_1 + 0x4c4);
LAB_08902bcc:
    if (iVar6 != 0) {
      FUN_0886020c(*(undefined4 *)(param_1 + 0x4c4));
    }
    FUN_088fe1d0(param_1 + 0x100);
    FUN_088ffadc(param_1);
    *(undefined4 *)(param_1 + 0x65c) = 1;
    *(undefined4 *)(param_1 + 0x660) = 0;
    *(undefined4 *)(param_1 + 0x684) = 0x3e99999a;
    return;
  case 0xb:
    piVar10 = (int *)(param_1 + 0x79c);
    goto LAB_08902bac;
  default:
    iVar6 = *(int *)(param_1 + 0x4c4);
    goto LAB_08902bcc;
  }
  if (*(int *)(param_1 + 0x664) != -1) {
    iVar6 = FUN_089c2c54(*(undefined4 *)(param_1 + 0x664));
    if (iVar6 == 0) {
      return;
    }
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
  }
switchD_08901f10_caseD_2:
  iVar6 = FUN_0880d378();
  if (iVar6 == 0) {
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
  }
  else {
    uVar5 = FUN_0880ddb4(0xffffffff);
    FUN_089b4c84(param_1 + 0x6d8,"data/event/12_baku_app_%02d.lzs",uVar5);
    iVar6 = FUN_089bda88(param_1 + 0x54,param_1 + 0x6d8,10,1,0);
    if (iVar6 == 0) {
      return;
    }
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
  }
  goto switchD_08901f10_caseD_3;
}

