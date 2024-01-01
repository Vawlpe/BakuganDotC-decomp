#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ed1d8(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 in_V04;
  undefined4 in_V08;
  undefined4 in_V0C;
  undefined4 in_V74;
  
  iVar4 = FUN_089f7108(*(undefined4 *)(param_2 + 0x14));
  iVar7 = *(int *)(param_2 + 8);
  if (iVar7 < iVar7 + *(int *)(param_2 + 0xc)) {
    iVar9 = iVar7 * 4;
    puVar5 = (undefined4 *)(iVar4 + *(int *)(param_2 + 4) * param_3 * 4 + iVar9);
    puVar6 = (undefined4 *)(iVar4 + *(int *)(param_2 + 4) * param_4 * 4 + iVar9);
    puVar8 = (undefined4 *)(*(int *)(param_2 + 0x10) + iVar9);
    do {
      uVar10 = vuc2i_s(*puVar5);
      auVar2._12_4_ = in_V0C;
      auVar2._8_4_ = in_V08;
      auVar2._4_4_ = in_V04;
      auVar2._0_4_ = uVar10;
      auVar1 = vi2f_q(auVar2,0x1f);
      uVar10 = vuc2i_s(*puVar6);
      auVar3._4_12_ = auVar1._4_12_;
      auVar3._0_4_ = uVar10;
      auVar2 = vi2f_q(auVar3,0x1f);
      auVar2 = vsub_q(auVar2,auVar1);
      auVar2 = vscl_q(auVar2,param_1);
      auVar2 = vadd_q(auVar1,auVar2);
      auVar2 = vsat0_q(auVar2);
      auVar2 = vscl_q(auVar2,in_V74);
      auVar2 = vf2iz_q(auVar2,0x17);
      in_V04 = auVar2._4_4_;
      in_V08 = auVar2._8_4_;
      in_V0C = auVar2._12_4_;
      uVar10 = vi2uc_q(auVar2);
      *puVar8 = uVar10;
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar7 < *(int *)(param_2 + 8) + *(int *)(param_2 + 0xc));
  }
  zz_sceKernelDcacheWritebackInvalidateRange
            (*(undefined4 *)(param_2 + 0x10),*(int *)(param_2 + 4) << 2);
  return;
}

