#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08905df8(int param_1,int param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [64];
  undefined auVar3 [12];
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  float local_110;
  float fStack_10c;
  float fStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90 [2];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined local_80 [32];
  undefined local_60 [72];
  
  if ((uint)*(ushort *)(param_2 + 0x18) == *(uint *)(param_1 + 0x30)) {
    if (*(ushort *)(param_2 + 0x1a) == 0) {
      switch(*(undefined4 *)(param_2 + 0x2c)) {
      case 0:
        piVar4 = (int *)0x0;
        if (0 < *(int *)(param_2 + 0x30)) {
          piVar4 = *(int **)(param_2 + 0x28);
        }
        piVar6 = (int *)0x0;
        if (1 < *(int *)(param_2 + 0x30)) {
          piVar6 = (int *)(*(int *)(param_2 + 0x28) + 8);
        }
        piVar7 = (int *)0x0;
        if (2 < *(int *)(param_2 + 0x30)) {
          piVar7 = (int *)(*(int *)(param_2 + 0x28) + 0x10);
        }
        piVar8 = (int *)0x0;
        if (3 < *(int *)(param_2 + 0x30)) {
          piVar8 = (int *)(*(int *)(param_2 + 0x28) + 0x18);
        }
        auVar2 = vmidt_q();
        local_100 = auVar2._0_4_;
        local_f0 = auVar2._4_4_;
        local_e0 = auVar2._8_4_;
        uStack_fc = auVar2._16_4_;
        uStack_ec = auVar2._20_4_;
        uStack_dc = auVar2._24_4_;
        uStack_f8 = auVar2._32_4_;
        uStack_e8 = auVar2._36_4_;
        uStack_d8 = auVar2._40_4_;
        uStack_f4 = auVar2._48_4_;
        uStack_e4 = auVar2._52_4_;
        uStack_d4 = auVar2._56_4_;
        uStack_c4 = auVar2._60_4_;
        if (piVar6 == (int *)0x0) {
          local_110 = 0.0;
        }
        else if (*piVar6 == 0) {
          local_110 = (float)piVar6[1];
        }
        else {
          local_110 = (float)piVar6[1];
        }
        if (piVar7 == (int *)0x0) {
          local_bc = 0.0;
        }
        else if (*piVar7 == 0) {
          local_bc = (float)piVar7[1];
        }
        else {
          local_bc = (float)piVar7[1];
        }
        if (piVar8 == (int *)0x0) {
          local_b8 = 0.0;
        }
        else if (*piVar8 == 0) {
          local_b8 = (float)piVar8[1];
        }
        else {
          local_b8 = (float)piVar8[1];
        }
        if ((((uint)local_110 | (uint)local_bc | (uint)local_b8) & 0x7fffffff) == 0) {
          local_bc = 1.0;
        }
        auVar1._4_4_ = auVar2._28_4_;
        auVar1._0_4_ = auVar2._12_4_;
        auVar1._8_4_ = auVar2._44_4_;
        auVar3._4_4_ = local_bc;
        auVar3._0_4_ = local_110;
        auVar3._8_4_ = local_b8;
        auVar1 = vadd_t(auVar1,auVar3);
        local_d0 = auVar1._0_4_;
        uStack_cc = auVar1._4_4_;
        uStack_c8 = auVar1._8_4_;
        iVar5 = 0;
        if (piVar4 != (int *)0x0) {
          if (*piVar4 == 0) {
            iVar5 = piVar4[1];
          }
          else {
            iVar5 = piVar4[1];
          }
        }
        fStack_10c = local_bc;
        fStack_108 = local_b8;
        local_c0 = local_110;
        FUN_08905c20(param_1,iVar5,&local_110,0);
        break;
      case 1:
        piVar4 = (int *)0x0;
        if (0 < *(int *)(param_2 + 0x30)) {
          piVar4 = *(int **)(param_2 + 0x28);
        }
        iVar5 = 0;
        if (piVar4 != (int *)0x0) {
          if (*piVar4 == 0) {
            iVar5 = piVar4[1];
          }
          else {
            iVar5 = piVar4[1];
          }
        }
        local_a0 = in_V72;
        local_9c = in_V76;
        uStack_98 = in_V7A;
        uStack_94 = in_V7E;
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_089dedf8(*(undefined4 *)(param_1 + 0x18),local_90,"Bip01");
          local_a0 = local_90[0];
          uStack_98 = uStack_88;
          uStack_94 = uStack_84;
          local_9c = 0;
        }
        local_b0 = local_a0;
        uStack_ac = local_9c;
        uStack_a8 = uStack_98;
        uStack_a4 = uStack_94;
        FUN_08905c20(param_1,iVar5,&local_b0,0);
        break;
      case 2:
        piVar4 = (int *)0x0;
        if (0 < *(int *)(param_2 + 0x30)) {
          piVar4 = *(int **)(param_2 + 0x28);
        }
        iVar5 = 0;
        if (piVar4 != (int *)0x0) {
          if (*piVar4 == 0) {
            iVar5 = piVar4[1];
          }
          else {
            iVar5 = piVar4[1];
          }
        }
        FUN_08905c20(param_1,iVar5,local_80,0);
        break;
      case 0xe:
        FUN_08905c20(param_1,*(undefined4 *)
                              (&DAT_08a9aaa0 +
                              (((int)(*(int *)(param_1 + 0x28) +
                                      ((uint)(*(int *)(param_1 + 0x28) + -0x17 >> 2) >> 0x1e) +
                                     -0x17) >> 2) + 1) * 4),local_60,0);
      }
    }
    else if (*(ushort *)(param_2 + 0x1a) < 2) {
      *(undefined *)(*(int *)(param_1 + 0x14) + 0x758) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x684) = 0x3e99999a;
    }
    if (param_2 != 0) {
      (**(code **)(*(int *)(param_2 + 0x14) + 0xc))
                (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 8),3);
    }
  }
  return;
}

