#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088a4f0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  float local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  iVar1 = FUN_08866270();
  if (3 < iVar1) {
    return 0;
  }
  uVar2 = FUN_08860188(*(undefined4 *)(param_1 + 0x324));
  if (*(int *)(param_1 + 800) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 800) + 0x20c);
    *(undefined4 *)(iVar1 + 0x148) = 0;
    *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) | 1;
    iVar1 = *(int *)(*(int *)(param_1 + 800) + 0x20c);
    *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) | 4;
    iVar1 = *(int *)(*(int *)(param_1 + 800) + 0x20c);
    *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) | 0x40;
    iVar1 = *(int *)(*(int *)(param_1 + 800) + 0x208);
    *(undefined4 *)(iVar1 + 0x148) = 0;
    *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) | 1;
    iVar1 = *(int *)(*(int *)(param_1 + 800) + 0x208);
    *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) | 4;
    iVar1 = *(int *)(*(int *)(param_1 + 800) + 0x208);
    *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) | 0x40;
  }
  local_30 = *(undefined4 *)(param_1 + 0x20);
  uStack_28 = *(undefined4 *)(param_1 + 0x28);
  local_24 = *(undefined4 *)(param_1 + 0x2c);
  local_2c = *(float *)(param_1 + 0x24) + 1500.0;
  FUN_088a8f2c(&local_40,&local_30,0x3fbf2500);
  local_30 = local_40;
  uStack_28 = uStack_38;
  local_2c = fStack_3c + 150.0;
  local_24 = *(undefined4 *)(param_1 + 0x34);
  iVar1 = FUN_0886f934(*(undefined4 *)(param_1 + 0x354),2,&local_30);
  FUN_088625e8(iVar1,5);
  *(undefined4 *)(iVar1 + 0x6a0) = *(undefined4 *)(param_1 + 0x358);
  *(undefined4 *)(iVar1 + 0x670) = uVar2;
  FUN_0889ab54(iVar1,1);
  FUN_08862ba4(iVar1);
  *(undefined4 *)(iVar1 + 0x150) = 4;
  *(undefined *)(iVar1 + 0x6b0) = *(undefined *)(param_1 + 0x385);
  FUN_0889acb4(iVar1,*(undefined4 *)(param_1 + 0x360));
  local_40 = *(undefined4 *)(param_1 + 0x330);
  fStack_3c = *(float *)(param_1 + 0x334);
  uStack_38 = *(undefined4 *)(param_1 + 0x338);
  uStack_34 = *(undefined4 *)(param_1 + 0x33c);
  FUN_0889ad40(iVar1,&local_40);
  *(undefined *)(iVar1 + 0x6bc) = 1;
  (**(code **)(*(int *)(iVar1 + 0x14) + 0x3c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x38));
  return 1;
}

