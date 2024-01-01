#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a16ba0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,
                 undefined (*param_5) [16],int param_6)

{
  byte bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_V14;
  undefined4 in_V18;
  undefined4 in_V1C;
  
  if ((param_2 != 0) && (param_5 != (undefined (*) [16])0x0)) {
    if (param_3 - 0x82U < 7) {
      iVar5 = FUN_08a15a80(param_2,param_3,0);
      if (iVar5 == 0) {
        if ((&DAT_08aa51fd)[param_3 * 2] == '\0') {
          iVar5 = FUN_08a160d0(param_2,param_3);
        }
        else {
          iVar5 = FUN_08a15a80(param_2,0x82,0);
        }
        if (iVar5 == 0) {
          return;
        }
        bVar1 = (&DAT_08aa51fc)[param_3 * 2];
      }
      else {
        bVar1 = (&DAT_08aa51fc)[param_3 * 2];
      }
      uVar6 = *(undefined4 *)*param_5;
      uVar7 = *(undefined4 *)(*param_5 + 4);
      uVar8 = *(undefined4 *)(*param_5 + 8);
      uVar9 = *(undefined4 *)(*param_5 + 0xc);
      if (param_6 == 1) {
        vpfxs(5,5,5,0);
        auVar2 = vmov_q(*param_5);
        uVar6 = auVar2._0_4_;
        uVar7 = auVar2._4_4_;
        uVar8 = auVar2._8_4_;
        uVar9 = auVar2._12_4_;
      }
      uVar10 = vuc2i_s(*(undefined4 *)((uint)bVar1 + iVar5));
      auVar2._12_4_ = in_V1C;
      auVar2._8_4_ = in_V18;
      auVar2._4_4_ = in_V14;
      auVar2._0_4_ = uVar10;
      auVar3 = vi2f_q(auVar2,0x1f);
      auVar4._12_4_ = uVar9;
      auVar4._8_4_ = uVar8;
      auVar4._4_4_ = uVar7;
      auVar4._0_4_ = uVar6;
      auVar2 = vmov_q(auVar4);
      auVar2 = vsub_q(auVar2,auVar3);
      auVar2 = vscl_q(auVar2,param_1);
      auVar2 = vadd_q(auVar3,auVar2);
      auVar2 = vsat0_q(auVar2);
      uVar6 = viim_s(0xff);
      auVar2 = vscl_q(auVar2,uVar6);
      auVar2 = vf2iz_q(auVar2,0x17);
      uVar6 = vi2uc_q(auVar2);
      *(undefined4 *)((uint)bVar1 + iVar5) = uVar6;
      if (param_3 == 0x82) {
        if (-1 < *(short *)(param_2 + 2)) {
          FUN_08a16ba0(param_1,param_2,0x85,param_4,param_5,param_6);
          *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) & 0x7fff;
        }
      }
      else if (param_3 == 0x85) {
        *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x8000;
      }
      else if (param_3 == 0x83) {
        FUN_08a13dec(param_1,iVar5 + 0x3c,iVar5 + 0x3c,param_5 + 1,1);
        return;
      }
    }
    else if (param_3 == 0x98) {
      FUN_08a1629c(param_2,param_4,param_5);
      return;
    }
  }
  return;
}

