#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088327a4(int param_1,int param_2)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined (*pauVar12) [16];
  int iVar13;
  int iVar14;
  float fVar15;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7E;
  undefined4 in_V7F;
  int aiStack_150 [24];
  int local_f0 [4];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined auStack_d4 [36];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float local_90;
  float local_84;
  undefined4 local_7c;
  float local_78;
  float local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  float *local_64;
  char *local_60;
  undefined (*local_5c) [16];
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  
  if (*(int *)(param_1 + 0x4dc) == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  bVar4 = false;
  iVar13 = *(int *)(*(int *)(param_1 + 0x14) + 0x80);
  iVar14 = *(int *)(*(int *)(param_1 + 0x14) + 0x7c);
  iVar6 = FUN_0880d354();
  if ((iVar6 != 0) && (iVar6 = _DONE_NotZero_DAT_08AAC9E0(), iVar6 != 0)) {
    uVar7 = _DONE_Get_DAT_08AAC9E0();
    iVar6 = FUN_0880d7e0(uVar7,0x4880);
    if (iVar6 != 0) {
      bVar4 = true;
    }
  }
  if (bVar4) {
    if (*(int *)(param_1 + 0x4dc) < 1) {
      iVar6 = *(int *)(param_1 + 0x4dc);
    }
    else {
      *(uint *)(iVar13 + 0xd0) = *(uint *)(iVar13 + 0xd0) & 0xfffffffe;
      *(uint *)(iVar14 + 0xd0) = *(uint *)(iVar14 + 0xd0) & 0xfffffffe;
      *(undefined4 *)(param_1 + 0x4dc) = 100;
      iVar6 = *(int *)(param_1 + 0x4dc);
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x4dc);
  }
  iVar8 = param_2;
  switch(iVar6) {
  case 1:
    if (*(int *)(param_1 + 0x394) != 0) {
      return;
    }
    *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4dc) + 1;
    break;
  case 2:
    break;
  case 3:
    pauVar12 = (undefined (*) [16])(param_1 + 0x500);
    puVar11 = &DAT_08aba0a8;
    local_58 = iVar13;
    local_54 = iVar14;
    local_50 = param_2;
    goto LAB_08832c78;
  case 4:
    local_58 = iVar13;
    local_54 = iVar14;
    local_50 = param_2;
    goto LAB_08832ec8;
  case 5:
    local_58 = iVar13;
    local_54 = iVar14;
    local_50 = param_2;
    goto LAB_08832f30;
  case 6:
    local_58 = iVar13;
    local_54 = iVar14;
    local_50 = param_2;
    goto LAB_088330d8;
  case 7:
  case 8:
  case 9:
    goto switchD_088328b8_caseD_7;
  case 10:
    goto switchD_088328b8_caseD_a;
  case 0xb:
    goto switchD_088328b8_caseD_b;
  case 0xc:
    goto switchD_088328b8_caseD_c;
  case 0xd:
    goto switchD_088328b8_caseD_d;
  case 0xe:
    local_58 = iVar13;
    local_54 = iVar14;
    local_50 = param_2;
    FUN_0884c3a0();
    *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4dc) + 1;
    return;
  case 0xf:
    local_58 = iVar13;
    local_54 = iVar14;
    local_50 = param_2;
    FUN_0884c3a0();
    *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4dc) + 1;
    goto LAB_088331b0;
  case 0x10:
    local_58 = iVar13;
    local_54 = iVar14;
    local_50 = param_2;
LAB_088331b0:
    *(undefined4 *)(param_1 + 0x4dc) = 100;
LAB_088331b4:
    iVar13 = FUN_089bfa40(100);
    if (iVar13 == 0) {
      *(undefined4 *)(param_1 + 0x4dc) = 0;
      return;
    }
    FUN_089bf300(iVar13,1);
    *(undefined4 *)(param_1 + 0x4dc) = 0;
    return;
  default:
    if (iVar6 != 100) {
      return;
    }
    goto LAB_088331b4;
  }
  local_5c = (undefined (*) [16])(param_1 + 0x500);
  local_6c = (undefined4 *)(param_1 + 0x510);
  local_60 = "gate_card%02d";
  local_68 = &DAT_08aba0a8;
  local_70 = &DAT_08aba0b4;
  local_64 = (float *)(iVar14 + 0xb0);
  local_58 = iVar13;
  local_54 = iVar14;
  local_50 = param_2;
  FUN_089c87e4(0);
  FUN_089c879c(0x3f000000,0);
  iVar13 = _DONE_NotZero_DAT_08AC5874();
  if (iVar13 == 0) {
    *(undefined4 *)(param_1 + 0x4ec) = 0;
  }
  else {
    uVar7 = _DONE_Get_DAT_08AC5874();
    FUN_089c6350(uVar7,0x200020,0,0);
    *(undefined4 *)(param_1 + 0x4ec) = 0;
  }
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)*local_5c = in_V72;
  *(undefined4 *)(*local_5c + 4) = in_V76;
  *(undefined4 *)(*local_5c + 8) = in_V7A;
  *(undefined4 *)(*local_5c + 0xc) = in_V7E;
  *local_6c = in_V72;
  local_6c[1] = in_V76;
  local_6c[2] = in_V7A;
  local_6c[3] = in_V7E;
  *(float *)(param_1 + 0x500) = (float)DAT_08aba0b4;
  *(float *)(param_1 + 0x504) = (float)local_70[1];
  *(undefined4 *)(param_1 + 0x4f4) = DAT_08aba0a8;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  memcpy_jak(aiStack_150,&DAT_08aba0e0,0x60);
  local_f0[0] = 0;
  local_f0[1] = 4;
  local_f0[2] = 1;
  local_f0[3] = 2;
  local_e0 = 3;
  local_dc = 5;
  local_d8 = 0;
  iVar13 = (**(code **)(*(int *)(local_50 + 0x14) + 0xa4))
                     (local_50 + *(short *)(*(int *)(local_50 + 0x14) + 0xa0));
  iVar6 = local_f0[iVar13];
  iVar13 = _DONE_NotZero_DAT_08AC5874();
  if (iVar13 != 0) {
    uVar7 = _DONE_Get_DAT_08AC5874();
    FUN_089c6350(uVar7,*(int *)(local_50 + 0x5a0) * 0x100000 + 1,0,0);
  }
  iVar14 = local_54;
  iVar13 = local_58;
  *(undefined4 *)(local_58 + 0xbc) = 0x3f800000;
  *(uint *)(local_58 + 0xd0) = *(uint *)(local_58 + 0xd0) | 1;
  iVar10 = aiStack_150[iVar6 * 4 + 1];
  iVar8 = aiStack_150[iVar6 * 4 + 2];
  *local_64 = (float)aiStack_150[iVar6 * 4] * 0.00390625;
  local_64[1] = (float)iVar10 * 0.00390625;
  local_64[2] = (float)iVar8 * 0.00390625;
  local_64[3] = 1.0;
  *(undefined4 *)(local_54 + 0xbc) = 0x3f000000;
  *(uint *)(local_54 + 0xd0) = *(uint *)(local_54 + 0xd0) | 1;
  FUN_089f4954(0x3f800000,0x3f800000,0,local_54,0);
  iVar6 = FUN_089bfa40(100);
  param_2 = local_50;
  pauVar12 = local_5c;
  puVar11 = local_68;
  if (iVar6 != 0) {
    FUN_089bf2f0(iVar6,1);
  }
  pcVar5 = local_60;
  uVar7 = (**(code **)(*(int *)(param_2 + 0x14) + 0xa4))
                    (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0xa0));
  FUN_089b4c84(auStack_d4,pcVar5,uVar7);
  uVar7 = FUN_089f7720(auStack_d4);
  *(undefined4 *)(iVar13 + 0xd4) = uVar7;
  FUN_0882c4c8(0,0,0x43000000,0x43400000,param_1,iVar13);
  FUN_089f46dc(iVar13);
  FUN_089f4954(0x3f800000,0x3f800000,0,iVar13,0);
  *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4dc) + 1;
LAB_08832c78:
  iVar6 = *(int *)(param_1 + 0x4ec) + 1;
  *(int *)(param_1 + 0x4ec) = iVar6;
  bVar4 = false;
  if (iVar6 == puVar11[*(int *)(param_1 + 0x4e0)]) {
    iVar6 = *(int *)(param_1 + 0x4e0) + 1;
    *(int *)(param_1 + 0x4e0) = iVar6;
    if (puVar11[iVar6] == -1) {
      bVar4 = true;
    }
    else {
      uVar7 = *(undefined4 *)(*pauVar12 + 4);
      uVar2 = *(undefined4 *)(*pauVar12 + 8);
      uVar3 = *(undefined4 *)(*pauVar12 + 0xc);
      *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)*pauVar12;
      *(undefined4 *)(param_1 + 0x514) = uVar7;
      *(undefined4 *)(param_1 + 0x518) = uVar2;
      *(undefined4 *)(param_1 + 0x51c) = uVar3;
      iVar6 = *(int *)(param_1 + 0x4e0);
      *(float *)(param_1 + 0x500) = (float)(&DAT_08aba0b4)[iVar6 * 3];
      *(float *)(param_1 + 0x504) = (float)(&DAT_08aba0b8)[iVar6 * 3];
      *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_1 + 0x4f4);
      *(undefined4 *)(param_1 + 0x4f4) = puVar11[iVar6];
    }
  }
  iVar6 = *(int *)(param_1 + 0x4f4) - *(int *)(param_1 + 0x4f8);
  fVar15 = 0.0;
  if (iVar6 == 0) {
    fVar15 = 1.0;
  }
  else if (*(int *)(param_1 + 0x4f4) != 0) {
    fVar15 = (float)((iVar6 - (*(int *)(param_1 + 0x4f4) - *(int *)(param_1 + 0x4ec))) + 1) /
             (float)iVar6;
  }
  uVar7 = vmin_s(fVar15,in_V7F);
  local_90 = (float)vmax_s(uVar7,in_V7D);
  if (local_90 == 1.0) {
    local_b0 = *(undefined4 *)*pauVar12;
    local_ac = *(undefined4 *)(*pauVar12 + 4);
    uStack_a8 = *(undefined4 *)(*pauVar12 + 8);
    uStack_a4 = *(undefined4 *)(*pauVar12 + 0xc);
  }
  else {
    uVar7 = vmul_s((1.0 - (local_90 - 1.0) * (local_90 - 1.0)) * 3.141593,in_V7C);
    local_84 = (float)vcos_s(uVar7);
    auVar1 = vsub_q(*pauVar12,*(undefined (*) [16])(param_1 + 0x510));
    auVar1 = vscl_q(auVar1,(1.0 - local_84) * 0.5);
    auVar1 = vadd_q(*(undefined (*) [16])(param_1 + 0x510),auVar1);
    local_b0 = auVar1._0_4_;
    local_ac = auVar1._4_4_;
    uStack_a8 = auVar1._8_4_;
    uStack_a4 = auVar1._12_4_;
  }
  *(undefined4 *)(iVar13 + 0x60) = local_b0;
  *(undefined4 *)(iVar13 + 100) = local_ac;
  *(undefined4 *)(iVar14 + 0x60) = local_b0;
  *(undefined4 *)(iVar14 + 100) = local_ac;
  if (bVar4) {
    *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4dc) + 1;
LAB_08832ec8:
    uVar7 = (**(code **)(*(int *)(param_2 + 0x14) + 0xa4))
                      (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0xa0));
    FUN_0889d8ec(uVar7);
    *(undefined4 *)(param_1 + 0x4e4) = 0x3fc90fdb;
    *(undefined4 *)(param_1 + 0x4e8) = 0;
    *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4dc) + 1;
LAB_08832f30:
    FUN_0884c3a0();
    fVar15 = *(float *)(param_1 + 0x4e4) + -0.1186824;
    *(float *)(param_1 + 0x4e4) = fVar15;
    *(float *)(param_1 + 0x4e8) = *(float *)(param_1 + 0x4e8) + 0.06108652;
    if (fVar15 < 0.0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = 1.570796;
      if (fVar15 <= 1.570796) {
        fVar9 = fVar15;
      }
    }
    *(float *)(param_1 + 0x4e4) = fVar9;
    fVar15 = *(float *)(param_1 + 0x4e8);
    if (fVar15 < 0.0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = 1.570796;
      if (fVar15 <= 1.570796) {
        fVar9 = fVar15;
      }
    }
    local_4c = 0.01;
    *(float *)(param_1 + 0x4e8) = fVar9;
    uVar7 = vmul_s(*(undefined4 *)(param_1 + 0x4e4),in_V7C);
    local_7c = vsin_s(uVar7);
    uVar7 = vmul_s(fVar9,in_V7C);
    local_78 = (float)vsin_s(uVar7);
    *(undefined4 *)(iVar13 + 0xbc) = local_7c;
    fVar9 = local_78 + 1.0;
    FUN_089f4954(fVar9,fVar9,0,iVar13,0);
    uVar7 = vmul_s(*(undefined4 *)(param_1 + 0x4e4),in_V7C);
    local_74 = (float)vsin_s(uVar7);
    *(float *)(iVar14 + 0xbc) = local_74 * 0.3;
    fVar15 = *(float *)(param_1 + 0x4f0) + 0.03;
    *(float *)(param_1 + 0x4f0) = fVar15;
    fVar15 = fVar9 * 1.2 + fVar15;
    FUN_089f4954(fVar15,fVar15,0,iVar14,0);
    if (*(float *)(iVar13 + 0xbc) < local_4c) {
      *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4dc) + 1;
LAB_088330d8:
      *(uint *)(iVar13 + 0xd0) = *(uint *)(iVar13 + 0xd0) & 0xfffffffe;
      *(uint *)(iVar14 + 0xd0) = *(uint *)(iVar14 + 0xd0) & 0xfffffffe;
      *(undefined4 *)(param_1 + 0x4dc) = 10;
      iVar13 = local_58;
      iVar14 = local_54;
      iVar8 = local_50;
switchD_088328b8_caseD_a:
      local_50 = iVar8;
      local_54 = iVar14;
      local_58 = iVar13;
      *(undefined4 *)(param_1 + 0x4ec) = 0;
      *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4dc) + 1;
      iVar13 = local_58;
      iVar14 = local_54;
      iVar8 = local_50;
switchD_088328b8_caseD_b:
      local_50 = iVar8;
      local_54 = iVar14;
      local_58 = iVar13;
      FUN_0884c3a0();
      iVar13 = *(int *)(param_1 + 0x4ec) + -1;
      *(int *)(param_1 + 0x4ec) = iVar13;
      if (iVar13 < 1) {
        *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4dc) + 1;
        iVar13 = local_58;
        iVar14 = local_54;
        iVar8 = local_50;
switchD_088328b8_caseD_c:
        local_50 = iVar8;
        local_54 = iVar14;
        local_58 = iVar13;
        *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4dc) + 1;
        iVar13 = local_58;
        iVar14 = local_54;
        iVar8 = local_50;
switchD_088328b8_caseD_d:
        local_50 = iVar8;
        local_54 = iVar14;
        local_58 = iVar13;
        FUN_089c87e4(0);
        iVar13 = FUN_089c2b10(0);
        if (iVar13 == 0) {
          iVar13 = *(int *)(param_1 + 0x4dc);
        }
        else {
          uVar7 = FUN_089c2b48(0);
          FUN_089c357c(uVar7,10,1,0);
          iVar13 = *(int *)(param_1 + 0x4dc);
        }
        *(int *)(param_1 + 0x4dc) = iVar13 + 1;
        return;
      }
    }
  }
switchD_088328b8_caseD_7:
  return;
}

