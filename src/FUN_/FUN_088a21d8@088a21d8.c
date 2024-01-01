#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a21d8(int param_1)

{
  undefined auVar1 [12];
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  
  iVar2 = FUN_089bf93c(0x14a,1);
  if (iVar2 != 0) {
    return;
  }
  FUN_088a1f68(param_1);
  iVar2 = FUN_0884b248();
  if (iVar2 != 0) {
    local_1c = 0;
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0x1e0,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    iVar2 = local_1c;
    if (iVar4 != 0) {
      FUN_088b534c(iVar4,"f6_landmark01_break.gmo");
      iVar2 = iVar4;
    }
    iVar4 = FUN_089bffd4();
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x130);
    }
    else {
      uVar3 = FUN_089bfff0();
      FUN_089c00c4(uVar3,0x20025c,*(int *)(param_1 + 0x130) + 0xb0,0,1);
      iVar4 = *(int *)(param_1 + 0x130);
    }
    fVar6 = *(float *)(iVar4 + 0xb4);
    iVar5 = FUN_088a9614(param_1);
    *(float *)(iVar4 + 0xb4) = fVar6 - -(*(float *)(iVar5 + 4) * *(float *)(param_1 + 0x44));
    FUN_088b5748(*(undefined4 *)(*(int *)(param_1 + 0x130) + 0xb4),iVar2,
                 *(int *)(param_1 + 0x130) + 0x80,param_1 + 0x380);
    iVar5 = *(int *)(param_1 + 0x130);
    iVar4 = FUN_088a9614(param_1);
    fVar6 = -(*(float *)(iVar4 + 4) * *(float *)(param_1 + 0x44));
    uVar3 = *(undefined4 *)(iVar5 + 0x9c);
    auVar1._4_4_ = fVar6;
    auVar1._0_4_ = fVar6;
    auVar1._8_4_ = fVar6;
    auVar1 = vadd_t(*(undefined (*) [12])(iVar5 + 0x90),auVar1);
    *(int *)*(undefined (*) [12])(iVar5 + 0x90) = auVar1._0_4_;
    *(int *)(iVar5 + 0x94) = auVar1._4_4_;
    *(int *)(iVar5 + 0x98) = auVar1._8_4_;
    *(undefined4 *)(iVar5 + 0x9c) = uVar3;
    iVar4 = FUN_0884b268();
    FUN_089d8984(iVar2,iVar4 + 0x468);
    *(undefined4 *)(iVar2 + 0x1c0) = 0x3c;
    *(undefined4 *)(iVar2 + 0x6c) = 0x3f666666;
    *(undefined *)(iVar2 + 0xbc) = 1;
    local_30 = 0;
    local_2c = 0x3f19999a;
    local_28 = 0x3f4ccccd;
    local_24 = 0x3f800000;
    FUN_089e0460(iVar2,&local_30,0);
    iVar4 = FUN_089df7ec(iVar2,"f6_landmark01_kara_");
    if (iVar4 != 0) {
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) & 0x3f | 0x80;
      *(byte *)(iVar4 + 3) = *(byte *)(iVar4 + 3) & 0x1f | 0xa0;
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) & 0xfc | 2;
    }
    iVar2 = FUN_089df7ec(iVar2,"f6_landmark01___");
    if (iVar2 == 0) {
      fVar6 = *(float *)(param_1 + 0x238);
      goto LAB_088a2478;
    }
    *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0x3f | 0x40;
    *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) & 0x1f | 0xa0;
    *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0xfc | 2;
  }
  fVar6 = *(float *)(param_1 + 0x238);
LAB_088a2478:
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(float *)(param_1 + 0x6c) = fVar6 * 0.0;
  FUN_088a21c8(param_1,1);
  return;
}

