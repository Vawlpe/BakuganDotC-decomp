#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e0344(undefined4 param_1,int param_2,undefined (*param_3) [16],int param_4)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_V74;
  
  auVar1 = vsat0_q(*param_3);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar8 = vi2uc_q(auVar1);
  iVar7 = 0;
  if (*(short *)(*(int *)(param_2 + 0x130) + 0x1c) != 0) {
    iVar6 = 0;
    do {
      if (param_4 == 0) {
LAB_089e03cc:
        iVar4 = 0;
        iVar3 = 0;
        if (*(short *)(*(int *)(*(int *)(param_2 + 0x130) + 0xc) + iVar6 + 0xc) != 0) {
          do {
            iVar5 = *(int *)(*(int *)(*(int *)(param_2 + 0x130) + 0xc) + iVar6 + 8) + iVar3;
            *(undefined4 *)(iVar5 + 0x30) = uVar8;
            *(undefined4 *)(iVar5 + 0x3c) = param_1;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x40;
          } while (iVar4 < (int)(uint)*(ushort *)
                                       (*(int *)(*(int *)(param_2 + 0x130) + 0xc) + iVar6 + 0xc));
        }
      }
      else {
        uVar2 = FUN_089df234(param_2,iVar7);
        iVar3 = strstr(uVar2,param_4);
        if (iVar3 == 0) goto LAB_089e03cc;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x10;
    } while (iVar7 < (int)(uint)*(ushort *)(*(int *)(param_2 + 0x130) + 0x1c));
  }
  return;
}

