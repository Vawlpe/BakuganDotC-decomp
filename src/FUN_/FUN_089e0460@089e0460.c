#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e0460(int param_1,undefined (*param_2) [16],int param_3)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_V74;
  
  auVar1 = vsat0_q(*param_2);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar7 = vi2uc_q(auVar1);
  iVar6 = 0;
  if (*(short *)(*(int *)(param_1 + 0x130) + 0x1c) != 0) {
    iVar5 = 0;
    do {
      if (param_3 == 0) {
LAB_089e04e0:
        iVar4 = 0;
        iVar3 = 0;
        if (*(short *)(*(int *)(*(int *)(param_1 + 0x130) + 0xc) + iVar5 + 0xc) != 0) {
          do {
            *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(param_1 + 0x130) + 0xc) + iVar5 + 8) + iVar3 + 0x38) =
                 uVar7;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x40;
          } while (iVar4 < (int)(uint)*(ushort *)
                                       (*(int *)(*(int *)(param_1 + 0x130) + 0xc) + iVar5 + 0xc));
        }
      }
      else {
        uVar2 = FUN_089df234(param_1,iVar6);
        iVar3 = strstr(uVar2,param_3);
        if (iVar3 == 0) goto LAB_089e04e0;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < (int)(uint)*(ushort *)(*(int *)(param_1 + 0x130) + 0x1c));
  }
  return;
}

