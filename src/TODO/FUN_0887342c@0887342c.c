#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887342c(int param_1)

{
  undefined auVar1 [12];
  bool bVar2;
  int iVar3;
  undefined (*pauVar4) [12];
  undefined4 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x20c);
  *(undefined4 *)(iVar3 + 0x148) = 5;
  *(uint *)(iVar3 + 0x130) = *(uint *)(iVar3 + 0x130) | 1;
  *(undefined4 *)(param_1 + 0x1c4) = 1;
  pauVar4 = (undefined (*) [12])(param_1 + 0x80);
  if (*(float *)(param_1 + 0x3dc) == 0.0) {
    uVar5 = FUN_08863b94(0x3f75c28f,param_1);
    auVar1 = vscl_t(*pauVar4,uVar5);
    *(int *)*pauVar4 = auVar1._0_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
  }
  else {
    uVar5 = FUN_08863b94(0x3f333333,param_1);
    auVar1 = vscl_t(*pauVar4,uVar5);
    *(int *)*pauVar4 = auVar1._0_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
  }
  iVar3 = FUN_088608b0(param_1,0x10d);
  if (iVar3 == 0) {
    bVar2 = false;
    if ((((*(uint *)(param_1 + 0x16c) & 8) == 0) ||
        (iVar3 = FUN_088886fc(param_1 + 0x434), iVar3 == 0)) ||
       (iVar3 = FUN_088602ec(param_1,1), iVar3 != 0)) {
      bVar2 = true;
    }
    iVar3 = FUN_089df684(0x3f19999a,param_1);
    if (iVar3 == 0) {
      iVar3 = FUN_089df684(*(undefined4 *)(param_1 + 0x3dc),param_1);
      if (((iVar3 != 0) && (iVar3 = FUN_08871794(param_1,0), iVar3 != 0)) && (bVar2)) {
        FUN_08865608(param_1);
      }
    }
    else {
      iVar3 = FUN_08871794(param_1,0);
      if (iVar3 == 0) {
        FUN_088706f0(param_1,0,0);
      }
      if (bVar2) {
        FUN_08865608(param_1);
      }
    }
  }
  else {
    iVar3 = FUN_089df684(*(float *)(param_1 + 0x3dc) + 0.1,param_1);
    if (iVar3 != 0) {
      if (*(char *)(param_1 + 0x158) != '\0') {
        FUN_089e10cc(0x3f800000);
        iVar3 = FUN_0884b268();
        *(undefined4 *)(iVar3 + 0x4e0) = 0;
      }
      FUN_088608d8(0x3e4ccccd,param_1,0x10e,0,0);
      (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                (0x3f99999a,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
    }
  }
  return;
}

