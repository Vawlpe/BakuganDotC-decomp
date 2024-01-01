#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08883844(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7_00,int param_8,char param_7,
                 undefined4 param_10,char param_9)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined auVar3 [12];
  int iVar4;
  int iVar5;
  undefined (*pauVar6) [12];
  undefined (*pauVar7) [12];
  undefined4 uVar8;
  float fVar9;
  undefined4 in_V7D;
  undefined4 uVar10;
  
  if (param_8 < *(int *)(param_3 + 0xf4)) {
    FUN_08876ee0(param_3);
    if (param_7_00 != -1) {
      FUN_08824658(param_6,param_7_00,param_3 + 0x60);
    }
  }
  else {
    if (*(int *)(param_3 + 0xf4) != 0) {
      iVar4 = FUN_0887979c(param_3,param_5);
      if (iVar4 != 0) {
        return;
      }
      iVar4 = param_3 + 0x60;
      if (param_9 == '\0') {
        iVar5 = FUN_08878084(*(undefined4 *)(param_3 + 0xcc),param_3,iVar4,param_3 + 0x70,param_4,3,
                             0,0x31bf337e);
        if (iVar5 != 0) {
          FUN_08823f5c(param_6,param_5,iVar4);
          FUN_08876ee0(param_3);
          if (param_7_00 == -1) {
            return;
          }
          FUN_08824658(param_6,param_7_00,iVar4);
          return;
        }
      }
      else {
        iVar4 = FUN_08878084(*(undefined4 *)(param_3 + 0xcc),param_3,iVar4,param_3 + 0x70,param_4,3,
                             0,0x31bf337e);
        if (iVar4 != 0) {
          FUN_08878cc4(param_3,param_5,&DAT_08aba930);
          return;
        }
      }
    }
    if (param_7 == '\0') {
      pauVar7 = (undefined (*) [12])(param_3 + 0x70);
      if (*(int *)(param_3 + 0xf4) == 0) {
        if ((*(float *)(param_3 + 0x10c) != 0.0) &&
           (iVar4 = FUN_088663a0(*(undefined4 *)(param_3 + 0xb4)), iVar4 != 0)) {
          iVar5 = *(int *)(param_3 + 0xb0);
          uVar8 = *(undefined4 *)(iVar4 + 0x2c);
          pauVar6 = (undefined (*) [12])(param_3 + 0x80);
          auVar1._4_4_ = *(float *)(iVar4 + 0x24) + 80.0;
          auVar1._0_4_ = *(undefined4 *)(iVar4 + 0x20);
          auVar1._8_4_ = *(undefined4 *)(iVar4 + 0x28);
          auVar3._4_4_ = *(float *)(iVar5 + 0x24) + *(float *)(param_3 + 0x10c);
          auVar3._0_4_ = *(undefined4 *)(iVar5 + 0x20);
          auVar3._8_4_ = *(undefined4 *)(iVar5 + 0x28);
          auVar1 = vsub_t(auVar1,auVar3);
          *(int *)*pauVar6 = auVar1._0_4_;
          *(int *)(param_3 + 0x84) = auVar1._4_4_;
          *(int *)(param_3 + 0x88) = auVar1._8_4_;
          *(undefined4 *)(param_3 + 0x8c) = uVar8;
          uVar8 = vdot_t(*pauVar6,*pauVar6);
          uVar10 = vcmp_s(8,uVar8,*(undefined4 *)*pauVar6);
          vrsq_s(uVar8);
          uVar8 = vcmovt_s(in_V7D,(byte)uVar10 & 1);
          vpfxd(4,4,4,5);
          auVar1 = vscl_t(*pauVar6,uVar8);
          *(int *)*pauVar6 = auVar1._0_4_;
          *(int *)(param_3 + 0x84) = auVar1._4_4_;
          *(int *)(param_3 + 0x88) = auVar1._8_4_;
          *(undefined4 *)(param_3 + 0x8c) = in_V7D;
          uVar8 = *(undefined4 *)(param_3 + 0x84);
          uVar10 = *(undefined4 *)(param_3 + 0x88);
          uVar2 = *(undefined4 *)(param_3 + 0x8c);
          *(undefined4 *)*pauVar7 = *(undefined4 *)*pauVar6;
          *(undefined4 *)(param_3 + 0x74) = uVar8;
          *(undefined4 *)(param_3 + 0x78) = uVar10;
          *(undefined4 *)(param_3 + 0x7c) = uVar2;
          if (*(int *)(param_3 + 0xbc) != 0) {
            iVar4 = *(int *)(param_3 + 0xbc);
            uVar8 = *(undefined4 *)(param_3 + 0x74);
            uVar10 = *(undefined4 *)(param_3 + 0x78);
            uVar2 = *(undefined4 *)(param_3 + 0x7c);
            *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)*pauVar7;
            *(undefined4 *)(iVar4 + 0x94) = uVar8;
            *(undefined4 *)(iVar4 + 0x98) = uVar10;
            *(undefined4 *)(iVar4 + 0x9c) = uVar2;
          }
        }
        auVar1 = vscl_t(*pauVar7,param_1);
        *(int *)*pauVar7 = auVar1._0_4_;
        *(int *)(param_3 + 0x74) = auVar1._4_4_;
        *(int *)(param_3 + 0x78) = auVar1._8_4_;
        *(undefined4 *)(param_3 + 0x7c) = in_V7D;
      }
      else {
        pauVar6 = (undefined (*) [12])(param_3 + 0x60);
        if (*(int *)(param_3 + 0xf4) == 1) {
          uVar8 = vdot_t(*pauVar7,*pauVar7);
          fVar9 = (float)vsqrt_s(uVar8);
          if (fVar9 < 10.0) {
            auVar1 = vscl_t(*pauVar7,param_1);
            *(int *)*pauVar7 = auVar1._0_4_;
            *(int *)(param_3 + 0x74) = auVar1._4_4_;
            *(int *)(param_3 + 0x78) = auVar1._8_4_;
            *(undefined4 *)(param_3 + 0x7c) = in_V7D;
          }
          uVar8 = *(undefined4 *)(param_3 + 0x6c);
          auVar1 = vadd_t(*pauVar6,*pauVar7);
          *(int *)*pauVar6 = auVar1._0_4_;
          *(int *)(param_3 + 100) = auVar1._4_4_;
          *(int *)(param_3 + 0x68) = auVar1._8_4_;
          *(undefined4 *)(param_3 + 0x6c) = uVar8;
        }
        else {
          uVar8 = *(undefined4 *)(param_3 + 0x6c);
          auVar1 = vadd_t(*pauVar6,*pauVar7);
          *(int *)*pauVar6 = auVar1._0_4_;
          *(int *)(param_3 + 100) = auVar1._4_4_;
          *(int *)(param_3 + 0x68) = auVar1._8_4_;
          *(undefined4 *)(param_3 + 0x6c) = uVar8;
        }
      }
    }
    else if (*(int *)(param_3 + 0xf4) != 0) {
      FUN_08877af0(param_1,param_2,param_3,1,0);
      uVar8 = *(undefined4 *)(param_3 + 0x6c);
      auVar1 = vadd_t(*(undefined (*) [12])(param_3 + 0x60),*(undefined (*) [12])(param_3 + 0x70));
      *(int *)*(undefined (*) [12])(param_3 + 0x60) = auVar1._0_4_;
      *(int *)(param_3 + 100) = auVar1._4_4_;
      *(int *)(param_3 + 0x68) = auVar1._8_4_;
      *(undefined4 *)(param_3 + 0x6c) = uVar8;
    }
  }
  return;
}

