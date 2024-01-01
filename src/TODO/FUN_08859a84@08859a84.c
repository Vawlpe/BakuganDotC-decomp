#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08859a84(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_1 + 0x941) != '\0') {
    if (*(char *)(param_1 + 0xa7b) == '\0') {
      FUN_08824594(DAT_08abd5b0,0x157,param_1 + 0x20,param_1);
    }
    else {
      FUN_08824594(DAT_08abd5b0,0x3b,param_1 + 0x20,param_1);
    }
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(400,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar2 != 0) {
      FUN_0881a358(iVar2,3);
      iVar4 = iVar2;
    }
    *(int *)(param_1 + 0x6d0) = iVar4;
    if (*(char *)(param_1 + 0xa7b) == '\0') {
      pcVar3 = "fz_VexosBarrier60.ctc";
    }
    else {
      pcVar3 = "fz_VexosBarrier.ctc";
    }
    uVar5 = *(undefined4 *)(param_1 + 0x6d0);
    uVar1 = FUN_089be054(DAT_08ac520c,pcVar3);
    FUN_0881a484(uVar5,uVar1,9,param_1,0);
    *(uint *)(*(int *)(param_1 + 0x6d0) + 0x130) = *(uint *)(*(int *)(param_1 + 0x6d0) + 0x130) | 1;
    *(undefined *)(*(int *)(param_1 + 0x6d0) + 0x104) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x6d0) + 0x144) = 1;
    *(int *)(*(int *)(param_1 + 0x6d0) + 0x138) = param_1;
    iVar4 = *(int *)(param_1 + 0x6d0);
    *(undefined4 *)(iVar4 + 0x148) = 0xffffffff;
    *(uint *)(iVar4 + 0x130) = *(uint *)(iVar4 + 0x130) | 1;
    iVar4 = *(int *)(param_1 + 0x6d0);
    *(int *)(iVar4 + 0x110) = param_1 + 0x670;
    *(undefined *)(iVar4 + 0x10c) = 1;
    FUN_08855840(param_1);
    iVar4 = *(int *)(param_1 + 0x20c);
    *(undefined4 *)(iVar4 + 0x148) = 0;
    *(uint *)(iVar4 + 0x130) = *(uint *)(iVar4 + 0x130) | 1;
    *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
         *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) | 0x40;
    *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) = *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) | 4;
    (**(code **)(*(int *)(param_1 + 0x14) + 0xbc))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xb8));
  }
  return;
}

