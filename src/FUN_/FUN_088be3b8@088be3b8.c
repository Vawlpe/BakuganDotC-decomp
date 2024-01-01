#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088be3b8(int param_1)

{
  undefined auVar1 [12];
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined (*pauVar8) [12];
  undefined4 uVar9;
  float fVar10;
  undefined4 in_V7D;
  undefined4 uVar11;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (DAT_08abe9ec == 0) {
    piVar2 = (int *)FUN_088dfa48();
    iVar6 = *piVar2;
    if (iVar6 != 0) {
      iVar4 = *(int *)(iVar6 + 8);
      while (iVar4 != 0x1f) {
        iVar6 = *(int *)(iVar6 + 4);
        if (iVar6 == 0) goto LAB_088be4b0;
        iVar4 = *(int *)(iVar6 + 8);
      }
      *(undefined4 *)(iVar6 + 0x48) = 0x40000000;
      *(undefined4 *)(iVar6 + 0x44) = 0x40000000;
      *(undefined4 *)(iVar6 + 0x40) = 0x40000000;
      FUN_088e05dc(iVar6,3,0);
      FUN_089df3b0(0x3e4ccccd,iVar6,PTR_s_10_for_one_shot_08abea04,0);
      fVar10 = (float)FUN_089df648(iVar6);
      if (fVar10 < 2.147484e+09) {
        DAT_08abe9f4 = (int)fVar10;
      }
      else {
        DAT_08abe9f4 = (int)(fVar10 - 2.147484e+09) + -0x80000000;
      }
    }
  }
LAB_088be4b0:
  iVar6 = 0;
  if (DAT_08abe9ec == 9) {
    iVar4 = 0;
    piVar2 = (int *)FUN_088dfa48();
    iVar3 = *piVar2;
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + 8);
      iVar7 = iVar4;
      do {
        iVar4 = iVar3;
        if ((iVar5 != 0x1f) && (iVar4 = iVar7, *(int *)(iVar3 + 8) == 7)) {
          iVar6 = iVar3;
        }
        if (iVar4 == 0) {
          iVar3 = *(int *)(iVar3 + 4);
        }
        else {
          if (iVar6 != 0) break;
          iVar3 = *(int *)(iVar3 + 4);
        }
        if (iVar3 == 0) break;
        iVar5 = *(int *)(iVar3 + 8);
        iVar7 = iVar4;
      } while( true );
    }
    pauVar8 = (undefined (*) [12])(iVar4 + 0x20);
    if (iVar4 != 0) {
      if ((iVar6 != 0) && (*(int *)(param_1 + 0x608) != 0)) {
        auVar1 = vsub_t(*pauVar8,*(undefined (*) [12])(iVar6 + 0x20));
        uVar9 = vdot_t(auVar1,auVar1);
        uVar11 = vcmp_s(8,uVar9,auVar1._0_4_);
        vrsq_s(uVar9);
        uVar9 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
        vpfxd(4,4,4,5);
        vscl_t(auVar1,uVar9);
        local_90 = 0x42cb0000;
        local_8c = 0x434a8000;
        local_88 = 0xc4484ccd;
        local_84 = 0;
        local_80 = 0x439ac000;
        local_7c = 0x434a3333;
        local_78 = 0xc4272000;
        local_74 = 0;
        FUN_08823f5c(*(undefined4 *)(param_1 + 0x608),0x55,&local_80);
        FUN_08823f5c(*(undefined4 *)(param_1 + 0x608),0x55,&local_90);
      }
      iVar6 = FUN_088e1948();
      auVar1 = vsub_t(*(undefined (*) [12])(iVar6 + 0x20),*pauVar8);
      uVar9 = vdot_t(auVar1,auVar1);
      fVar10 = (float)vsqrt_s(uVar9);
      fVar10 = fVar10 - 800.0;
      if (fVar10 < 0.0) {
        fVar10 = 0.0;
      }
      if (0.0 < (300.0 - fVar10) * 0.003333333) {
        uVar9 = FUN_089bfff0();
        FUN_089c00c4(uVar9,0x2c000ca,pauVar8,0,1);
      }
    }
  }
  if (DAT_08abe9ec == 0x14) {
    piVar2 = (int *)FUN_088dfa48();
    iVar6 = *piVar2;
    if (iVar6 != 0) {
      iVar4 = *(int *)(iVar6 + 8);
      while (iVar4 != 7) {
        iVar6 = *(int *)(iVar6 + 4);
        if (iVar6 == 0) goto LAB_088be844;
        iVar4 = *(int *)(iVar6 + 8);
      }
      *(undefined4 *)(iVar6 + 0x48) = 0x40000000;
      *(undefined4 *)(iVar6 + 0x44) = 0x40000000;
      *(undefined4 *)(iVar6 + 0x40) = 0x40000000;
      FUN_088e05dc(iVar6,3,0);
      FUN_089df3b0(0x3e4ccccd,iVar6,PTR_s_04_wil_b_stagger_08abe9fc,0);
      fVar10 = (float)FUN_089df648(iVar6);
      pauVar8 = (undefined (*) [12])(iVar6 + 0x20);
      if (fVar10 < 2.147484e+09) {
        DAT_08abe9f0 = (uint)fVar10;
      }
      else {
        DAT_08abe9f0 = (int)(fVar10 - 2.147484e+09) + 0x80000000;
      }
      local_70 = *(undefined4 *)*pauVar8;
      uStack_68 = *(undefined4 *)(iVar6 + 0x28);
      uStack_64 = *(undefined4 *)(iVar6 + 0x2c);
      local_6c = *(float *)(iVar6 + 0x24) + 10.0;
      FUN_08823f5c(*(undefined4 *)(param_1 + 0x604),0x51);
      iVar6 = FUN_088e1948();
      uStack_54 = *(undefined4 *)(iVar6 + 0x2c);
      auVar1 = vsub_t(*(undefined (*) [12])(iVar6 + 0x20),*pauVar8);
      local_60 = auVar1._0_4_;
      uStack_5c = auVar1._4_4_;
      uStack_58 = auVar1._8_4_;
      uVar9 = vdot_t(auVar1,auVar1);
      fVar10 = (float)vsqrt_s(uVar9);
      fVar10 = (300.0 - fVar10) * 0.003333333;
      if (1.0 < fVar10) {
        fVar10 = 1.0;
      }
      if (0.0 < fVar10) {
        *(short *)(param_1 + 0x4d0) = (short)(DAT_08abe9f0 >> 1);
        *(float *)(param_1 + 0x4cc) = fVar10;
        uVar9 = FUN_089bfff0();
        FUN_089c00c4(uVar9,0x2c000c9,pauVar8,0,1);
      }
    }
  }
LAB_088be844:
  if ((DAT_08abe9f0 != 0) && (DAT_08abe9f0 = DAT_08abe9f0 - 1, DAT_08abe9f0 == 0)) {
    piVar2 = (int *)FUN_088dfa48();
    iVar6 = *piVar2;
    if (iVar6 != 0) {
      iVar4 = *(int *)(iVar6 + 8);
      while( true ) {
        if (iVar4 == 7) {
          FUN_089df3b0(0x3e4ccccd,iVar6,PTR_s_04_wil_defense_c_08abe9f8,1);
          iVar6 = *(int *)(iVar6 + 4);
        }
        else {
          iVar6 = *(int *)(iVar6 + 4);
        }
        if (iVar6 == 0) break;
        iVar4 = *(int *)(iVar6 + 8);
      }
    }
  }
  if ((DAT_08abe9f4 != 0) && (DAT_08abe9f4 = DAT_08abe9f4 + -1, DAT_08abe9f4 == 0)) {
    piVar2 = (int *)FUN_088dfa48();
    iVar6 = *piVar2;
    if (iVar6 != 0) {
      iVar4 = *(int *)(iVar6 + 8);
      while( true ) {
        if (iVar4 == 0x1f) {
          FUN_089df3b0(0x3e4ccccd,iVar6,PTR_s_10_for_stay_08abea00,1);
          iVar6 = *(int *)(iVar6 + 4);
        }
        else {
          iVar6 = *(int *)(iVar6 + 4);
        }
        if (iVar6 == 0) break;
        iVar4 = *(int *)(iVar6 + 8);
      }
    }
  }
  DAT_08abe9ec = DAT_08abe9ec + 1;
  if (0x96 < DAT_08abe9ec) {
    DAT_08abe9ec = 0;
  }
  return;
}

