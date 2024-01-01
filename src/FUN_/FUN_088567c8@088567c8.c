#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088567c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 in_V7C;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_30;
  
  iVar2 = FUN_0884c3d0(1);
  if (iVar2 == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0xa34)) {
  case 1:
    *(undefined *)(param_1 + 0x942) = 0;
    *(undefined4 *)(param_1 + 0x8dc) = 0;
    iVar2 = FUN_08887a90(param_1 + 0x434);
    fVar6 = (float)iVar2;
    puVar5 = (undefined4 *)(param_1 + 0x20);
    if (iVar2 < 0) {
      fVar6 = fVar6 + 4.294967e+09;
    }
    FUN_08887ae4(fVar6,param_1 + 0x434);
    if (*(int *)(param_1 + 0x554) != 0) {
      FUN_0888b8c0(*(undefined4 *)(param_1 + 0x554));
    }
    local_48 = 0;
    local_4c = 0;
    local_50 = 0;
    local_44 = 0;
    uVar7 = FUN_088566a4();
    *(undefined4 *)(param_1 + 0xa7c) = uVar7;
    FUN_088b3260(&local_60,uVar7);
    local_50 = local_60;
    local_4c = uStack_5c;
    local_48 = uStack_58;
    local_44 = uStack_54;
    *puVar5 = local_60;
    *(undefined4 *)(param_1 + 0x24) = uStack_5c;
    *(undefined4 *)(param_1 + 0x28) = uStack_58;
    *(undefined4 *)(param_1 + 0x2c) = uStack_54;
    *(undefined4 *)(param_1 + 0x8a0) = *puVar5;
    *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x8a8) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x8ac) = *(undefined4 *)(param_1 + 0x2c);
    iVar2 = *(int *)(param_1 + 0x130);
    uVar7 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar2 + 0xb0) = *puVar5;
    *(undefined4 *)(iVar2 + 0xb4) = uVar7;
    *(undefined4 *)(iVar2 + 0xb8) = uVar3;
    *(undefined4 *)(iVar2 + 0xbc) = uVar1;
    *(undefined *)(param_1 + 0xa3d) = 1;
    uVar7 = FUN_08855648(param_1);
    uVar3 = FUN_08855650(param_1);
    FUN_088556a4(param_1,uVar7,uVar3);
    *(undefined4 *)(param_1 + 0xa34) = 10;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    goto switchD_08856830_caseD_2;
  case 10:
    break;
  case 0xb:
    goto LAB_088569b8;
  case 0xc:
    goto LAB_08856a30;
  case 0xd:
    goto LAB_08856b04;
  default:
    *(undefined4 *)(param_1 + 0xa34) = 0;
    return;
  }
  *(undefined *)(param_1 + 0xbc) = 1;
  iVar2 = FUN_08823f5c(DAT_08abd5b0,0x5b,param_1 + 0x20);
  *(float *)(iVar2 + 0x1e0) = *(float *)(param_1 + 0x40) * 0.4;
  iVar2 = FUN_089c59d4();
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0xa34);
  }
  else {
    uVar7 = FUN_089c59f0();
    FUN_089c6350(uVar7,0x20025e,0,0);
    iVar2 = *(int *)(param_1 + 0xa34);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x8d0) = 10;
  *(int *)(param_1 + 0xa34) = iVar2 + 1;
LAB_088569b8:
  iVar2 = *(int *)(param_1 + 0x8d0);
  *(int *)(param_1 + 0x8d0) = iVar2 + -1;
  if (iVar2 < 1) {
    *(undefined4 *)(param_1 + 0x8d0) = 0;
    *(int *)(param_1 + 0xa34) = *(int *)(param_1 + 0xa34) + 1;
LAB_08856a30:
    iVar2 = *(int *)(param_1 + 0x8d0);
    fVar6 = (float)iVar2 * 0.1396263;
    *(int *)(param_1 + 0x8d0) = iVar2 + 1;
    if (fVar6 < 0.0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = 1.570796;
      if (fVar6 <= 1.570796) {
        fVar4 = fVar6;
      }
    }
    uVar7 = vmul_s(fVar4,in_V7C);
    fVar6 = (float)vsin_s(uVar7);
    *(float *)(param_1 + 0x6c) = fVar6;
    local_30 = fVar6;
    FUN_089e056c(fVar6,param_1,0);
    FUN_089e0694(fVar6 * 0.5,param_1,"mat_spel");
    *(float *)(param_1 + 0xa84) = fVar6;
    if (1.0 <= fVar6) {
      *(undefined *)(param_1 + 0xbc) = 0;
      *(int *)(param_1 + 0xa34) = *(int *)(param_1 + 0xa34) + 1;
LAB_08856b04:
      *(undefined *)(param_1 + 0xbc) = 0;
      FUN_08855384(param_1,0,0);
      *(undefined *)(param_1 + 0x940) = 0;
      iVar2 = *(int *)(param_1 + 0x20c);
      *(undefined *)(param_1 + 0x4c1) = 0;
      *(undefined4 *)(iVar2 + 0x148) = 0;
      *(uint *)(iVar2 + 0x130) = *(uint *)(iVar2 + 0x130) & 0xfffffffe;
      *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) & 0xffffffbf;
      *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) & 0xfffffffb;
      *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x208) + 0x130) & 0xffffffbf;
      *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x208) + 0x130) & 0xfffffffb;
      (**(code **)(*(int *)(param_1 + 0x14) + 0xbc))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xb8));
      *(undefined4 *)(param_1 + 0xa34) = 999;
switchD_08856830_caseD_2:
      *(undefined4 *)(param_1 + 0xa34) = 0;
    }
  }
  return;
}

