#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08874c34(int param_1)

{
  undefined auVar1 [12];
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7E;
  undefined4 in_V7F;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float local_64;
  float local_54;
  float local_50;
  float local_4c;
  
  uVar5 = *(uint *)(param_1 + 0x3cc);
  if (4 < uVar5) {
    return;
  }
  if (uVar5 != 1) {
    if (uVar5 == 2) goto LAB_0887501c;
    if (uVar5 == 3) {
      iVar6 = *(int *)(param_1 + 0x3d0);
      *(int *)(param_1 + 0x3d0) = iVar6 + -1;
      if (0 < iVar6) {
        return;
      }
      *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
LAB_088750e8:
      *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
      FUN_089de940(param_1,0);
      return;
    }
    if (uVar5 == 4) goto LAB_088750e8;
    *(undefined4 *)(param_1 + 0x80) = in_V72;
    *(undefined4 *)(param_1 + 0x84) = in_V76;
    *(undefined4 *)(param_1 + 0x88) = in_V7A;
    *(undefined4 *)(param_1 + 0x8c) = in_V7E;
    *(undefined4 *)(param_1 + 0x1c4) = 999;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    if (*(int *)(param_1 + 0x20c) != 0) {
      *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) | 7;
    }
    if (*(int *)(param_1 + 0x208) == 0) {
      iVar6 = *(int *)(param_1 + 0x20c);
    }
    else {
      *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x208) + 0x130) | 7;
      iVar6 = *(int *)(param_1 + 0x20c);
    }
    *(undefined4 *)(iVar6 + 0x148) = 0;
    *(uint *)(iVar6 + 0x130) = *(uint *)(iVar6 + 0x130) | 1;
    *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) = *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) | 4;
    *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
         *(uint *)(*(int *)(param_1 + 0x208) + 0x130) | 0x40;
    *(uint *)(*(int *)(param_1 + 0x208) + 0x130) = *(uint *)(*(int *)(param_1 + 0x208) + 0x130) | 4;
    FUN_088854b0(*(undefined4 *)(param_1 + 0x200));
    iVar6 = DONE_NotZero_DAT_08AC5874();
    if (iVar6 != 0) {
      uVar3 = DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar3,0x200011,0,0);
    }
    FUN_08824658(DAT_08ac5c70,0xffffffff,param_1 + 0x250);
    FUN_08824658(DAT_08ac5c70,0xffffffff,param_1 + 0x3f0);
    uVar3 = DAT_08ac5c70;
    iVar6 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
    FUN_088243d8(uVar3,iVar6 + 0x70,param_1 + 0x250);
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0x3f000000;
    FUN_0884c25c(0x1e,&local_80);
    iVar6 = FUN_0884b248();
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0x3cc);
    }
    else {
      uVar3 = FUN_0884b268();
      iVar6 = FUN_0884d2c0(uVar3);
      if (iVar6 == 0) {
        FUN_088634cc(param_1);
        iVar6 = *(int *)(param_1 + 0x3cc);
      }
      else {
        iVar6 = *(int *)(param_1 + 0x3cc);
      }
    }
    *(undefined4 *)(param_1 + 0x3d0) = 0x19;
    *(int *)(param_1 + 0x3cc) = iVar6 + 1;
  }
  puVar4 = (undefined4 *)FUN_0886642c(param_1);
  local_70 = *puVar4;
  uStack_6c = puVar4[1];
  uStack_68 = puVar4[2];
  uVar3 = vmin_s((float)(0x23 - *(int *)(param_1 + 0x3d0)) * 0.03,in_V7F);
  local_54 = (float)vmax_s(uVar3,in_V7D);
  fVar7 = local_54 * 3.141593;
  uVar3 = vmul_s(fVar7,in_V7C);
  local_50 = (float)vcos_s(uVar3);
  local_64 = (1.0 - local_50) * 0.5;
  (**(code **)(*(int *)(param_1 + 0x14) + 0x24))
            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x20),&local_70);
  uVar3 = vmul_s(fVar7,in_V7C);
  local_4c = (float)vcos_s(uVar3);
  fVar7 = 1.0 - local_4c;
  iVar6 = FUN_089ded60(param_1,"Bip01_Pelvis");
  auVar1 = vscl_t(*(undefined (*) [12])(iVar6 + 0x70),1.0 - fVar7 * 0.5 * 0.3);
  *(int *)*(undefined (*) [12])(iVar6 + 0x70) = auVar1._0_4_;
  *(int *)(iVar6 + 0x74) = auVar1._4_4_;
  *(int *)(iVar6 + 0x78) = auVar1._8_4_;
  *(undefined4 *)(iVar6 + 0x7c) = in_V7D;
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) - 0.05;
  iVar6 = *(int *)(param_1 + 0x3d0);
  *(int *)(param_1 + 0x3d0) = iVar6 + -1;
  if (0 < iVar6) {
    return;
  }
  *(undefined *)(param_1 + 0xb9) = 0;
  *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
  iVar6 = FUN_089ded60(param_1,"Bip01_Pelvis");
  *(undefined4 *)(iVar6 + 0x70) = 0x3f800000;
  *(undefined4 *)(iVar6 + 0x74) = 0x3f800000;
  *(undefined4 *)(iVar6 + 0x78) = 0x3f800000;
  *(undefined4 *)(iVar6 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
LAB_0887501c:
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 300;
  if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
    bVar2 = false;
    if ((*(char *)(param_1 + 0x158) == '\0') &&
       (iVar6 = (**(code **)(*(int *)(param_1 + 0x14) + 0x6c))
                          (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x68)), iVar6 != 0)) {
      bVar2 = true;
    }
    iVar6 = 999;
    if (bVar2) {
      iVar6 = *(int *)(param_1 + 0x3cc) + 1;
    }
    *(int *)(param_1 + 0x3cc) = iVar6;
  }
  else {
    uVar3 = DONE_Get_DAT_08AAC9E0();
    iVar6 = FUN_0880d0ac(uVar3,7);
    if (iVar6 < 1) {
      if (-1 < iVar6) {
        *(undefined4 *)(param_1 + 0x3cc) = 999;
      }
    }
    else if (iVar6 < 3) {
      FUN_088706f0(param_1,0x10,0);
    }
  }
  return;
}

