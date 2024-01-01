#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e056c(undefined4 param_1,int param_2,int param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_V04;
  undefined4 in_V08;
  undefined4 in_V0C;
  undefined4 in_V74;
  
  iVar8 = 0;
  if (*(short *)(*(int *)(param_2 + 0x130) + 0x1c) != 0) {
    iVar7 = 0;
    do {
      if (param_3 == 0) {
LAB_089e05d8:
        iVar5 = 0;
        iVar4 = 0;
        if (*(short *)(*(int *)(*(int *)(param_2 + 0x130) + 0xc) + iVar7 + 0xc) != 0) {
          do {
            iVar6 = *(int *)(*(int *)(*(int *)(param_2 + 0x130) + 0xc) + iVar7 + 8) + iVar4;
            uVar3 = vuc2i_s(*(undefined4 *)(iVar6 + 0x38));
            auVar1._12_4_ = in_V0C;
            auVar1._8_4_ = in_V08;
            auVar1._4_4_ = in_V04;
            auVar1._0_4_ = uVar3;
            auVar1 = vi2f_q(auVar1,0x1f);
            auVar2._12_4_ = param_1;
            auVar2._0_12_ = auVar1._0_12_;
            auVar1 = vsat0_q(auVar2);
            auVar1 = vscl_q(auVar1,in_V74);
            auVar1 = vf2iz_q(auVar1,0x17);
            in_V04 = auVar1._4_4_;
            in_V08 = auVar1._8_4_;
            in_V0C = auVar1._12_4_;
            uVar3 = vi2uc_q(auVar1);
            *(undefined4 *)(iVar6 + 0x38) = uVar3;
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + 0x40;
          } while (iVar5 < (int)(uint)*(ushort *)
                                       (*(int *)(*(int *)(param_2 + 0x130) + 0xc) + iVar7 + 0xc));
        }
      }
      else {
        uVar3 = FUN_089df234(param_2,iVar8);
        iVar4 = strstr(uVar3,param_3);
        if (iVar4 == 0) goto LAB_089e05d8;
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x10;
    } while (iVar8 < (int)(uint)*(ushort *)(*(int *)(param_2 + 0x130) + 0x1c));
  }
  return;
}

