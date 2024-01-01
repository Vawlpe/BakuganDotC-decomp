#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882e4e4(int param_1)

{
  undefined auVar1 [16];
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 in_V7C;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  float local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined auStack_80 [8];
  float local_78;
  float local_60;
  float local_5c;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_3c;
  
  iVar3 = FUN_0882c548();
  if (iVar3 == 0) {
    return;
  }
  iVar4 = FUN_08860344(iVar3);
  *(int *)(param_1 + 0xd8) = iVar4;
  if (iVar4 == 0) {
    bVar2 = true;
    iVar3 = FUN_0884b248();
    if ((iVar3 != 0) && (iVar3 = FUN_0884b268(), *(int *)(iVar3 + 0x440) == 2)) {
      bVar2 = false;
    }
    if (((bVar2) && (*(int *)(param_1 + 0xdc) != 0)) &&
       (iVar3 = _DONE_NotZero_DAT_08AC5874(), iVar3 != 0)) {
      uVar8 = _DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar8,0x20012c,0,0);
    }
    iVar4 = 0;
    iVar3 = 0;
    do {
      iVar4 = iVar4 + 1;
      iVar5 = *(int *)(*(int *)(param_1 + 0x14) + iVar3 + 0x6c);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 1);
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar5 = *(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x2f0);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 3);
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    return;
  }
  iVar4 = *(int *)(param_1 + 0xd8);
  local_3c = *(float *)(iVar4 + 0x6c);
  local_90 = *(undefined4 *)(iVar4 + 0x20);
  local_8c = *(float *)(iVar4 + 0x24);
  uStack_88 = *(undefined4 *)(iVar4 + 0x28);
  uStack_84 = *(undefined4 *)(iVar4 + 0x2c);
  iVar4 = *(int *)(*(int *)(param_1 + 0xd8) + 0x14);
  iVar4 = (**(code **)(iVar4 + 0x5c))(*(int *)(param_1 + 0xd8) + (int)*(short *)(iVar4 + 0x58));
  if (iVar4 == 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0xd8) + 0x14);
    iVar4 = (**(code **)(iVar4 + 0x74))(*(int *)(param_1 + 0xd8) + (int)*(short *)(iVar4 + 0x70));
    if (iVar4 == 0) {
      local_8c = local_8c + *(float *)(*(int *)(*(int *)(param_1 + 0xd8) + 0x4bc) + 4) * 0.5;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0xd8) + 0x14);
      iVar4 = (**(code **)(iVar4 + 0x9c))(*(int *)(param_1 + 0xd8) + (int)*(short *)(iVar4 + 0x98));
      if (iVar4 == 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0xd8) + 0x14);
        iVar4 = (**(code **)(iVar4 + 0x84))
                          (*(int *)(param_1 + 0xd8) + (int)*(short *)(iVar4 + 0x80));
        if (iVar4 == 0) {
          iVar4 = *(int *)(*(int *)(param_1 + 0xd8) + 0x14);
          iVar4 = (**(code **)(iVar4 + 0x7c))
                            (*(int *)(param_1 + 0xd8) + (int)*(short *)(iVar4 + 0x78));
          if (iVar4 != 0) {
            local_8c = local_8c + 100.0;
          }
        }
        else {
          local_8c = local_8c + 100.0;
        }
      }
    }
  }
  else {
    local_8c = local_8c + 150.0;
  }
  FUN_089e3584(DAT_08ac5c90,&local_a0,&local_90);
  FUN_089beef4(auStack_80);
  FUN_089e34f0(DAT_08ac5c90,&local_a0,&local_90);
  auVar1 = vsub_q(*(undefined (*) [16])(iVar3 + 0x20),
                  *(undefined (*) [16])(*(int *)(param_1 + 0xd8) + 0x20));
  uVar8 = vdot_t(auVar1._0_12_,auVar1._0_12_);
  fVar9 = (float)vsqrt_s(uVar8);
  if ((*(uint *)(*(int *)(param_1 + 0xd8) + 0x144) & 0x30000000) == 0) {
    if (fVar9 <= 800.0) {
      iVar4 = 0;
      iVar3 = param_1;
      do {
        FUN_089ed1b8(*(undefined4 *)(iVar3 + 0x24),0);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < 3);
      *(undefined4 *)(param_1 + 0xec) = 2;
    }
    else {
      iVar4 = 0;
      iVar3 = param_1;
      do {
        FUN_089ed1b8(*(undefined4 *)(iVar3 + 0x24),1);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < 3);
      *(undefined4 *)(param_1 + 0xec) = 2;
    }
  }
  else {
    iVar4 = 0;
    iVar3 = param_1;
    do {
      FUN_089ed1b8(*(undefined4 *)(iVar3 + 0x24),0);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 3);
    *(undefined4 *)(param_1 + 0xec) = 1;
  }
  if (*(int *)(param_1 + 0xdc) == *(int *)(param_1 + 0xd8)) {
    iVar3 = *(int *)(param_1 + 0xec);
  }
  else {
    iVar3 = _DONE_NotZero_DAT_08AC5874();
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
    else {
      uVar8 = _DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar8,0x20012c,0,0);
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
    iVar3 = *(int *)(param_1 + 0xec);
  }
  if (iVar3 == *(int *)(param_1 + 0xf0)) {
    uVar8 = *(undefined4 *)(param_1 + 0xf4);
  }
  else {
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xec);
    if (*(int *)(param_1 + 0xec) != 1) {
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
    uVar8 = *(undefined4 *)(param_1 + 0xf4);
  }
  switch(uVar8) {
  case 0:
    *(undefined4 *)(param_1 + 0xe0) = 0x3fc90fdb;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xd8);
    *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
    break;
  case 1:
    break;
  case 2:
    *(undefined4 *)(param_1 + 0xe0) = 0x3fc90fdb;
    *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
    goto LAB_0882ebfc;
  case 3:
LAB_0882ebfc:
    fVar9 = *(float *)(param_1 + 0xe0) + 0.06981317;
    *(float *)(param_1 + 0xe0) = fVar9;
    if (3.141593 < fVar9) {
      *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xe0) - 3.141593;
    }
    fVar7 = *(float *)(param_1 + 0xe8) + 0.3839724;
    *(float *)(param_1 + 0xe8) = fVar7;
    if (6.283185 < fVar7) {
      *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0xe8) - 6.283185;
    }
    fVar7 = *(float *)(param_1 + 0xe4) + 0.05;
    *(float *)(param_1 + 0xe4) = fVar7;
    if (3.141593 < fVar7) {
      *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe4) - 6.283185;
LAB_0882eca0:
      uVar8 = *(undefined4 *)(param_1 + 0xe0);
    }
    else {
      if (*(float *)(param_1 + 0xe4) <= -3.141593) {
        *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe4) + 6.283185;
        goto LAB_0882eca0;
      }
      uVar8 = *(undefined4 *)(param_1 + 0xe0);
    }
    uVar8 = vmul_s(uVar8,in_V7C);
    local_54 = (float)vsin_s(uVar8);
    uVar8 = vmul_s(*(undefined4 *)(param_1 + 0xe8),in_V7C);
    local_50 = (float)vsin_s(uVar8);
    fVar7 = local_50 * 0.4 + 1.0;
    iVar4 = 0;
    fVar6 = (local_54 * 0.2 + 0.8) * local_3c;
    iVar3 = 0;
    do {
      if (-3.0 < local_78) {
        iVar5 = FUN_0882e4c8(param_1);
        if (iVar5 != 0) {
          iVar5 = *(int *)(param_1 + 0x14);
          goto LAB_0882ed40;
        }
        iVar5 = *(int *)(*(int *)(param_1 + 0x14) + iVar3 + 0x6c);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x14);
LAB_0882ed40:
        iVar5 = *(int *)(iVar5 + iVar3 + 0x6c);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
      }
      iVar5 = *(int *)(*(int *)(param_1 + 0x14) + iVar3 + 0x6c);
      *(undefined4 *)(iVar5 + 0x60) = local_a0;
      *(undefined4 *)(iVar5 + 100) = uStack_9c;
      *(undefined4 *)(iVar5 + 0x68) = uStack_98;
      *(undefined4 *)(iVar5 + 0x6c) = uStack_94;
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar3 + 0x6c) + 0xbc) = fVar6;
      FUN_089f4954(fVar7,fVar7,0,*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar3 + 0x6c),0);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 1);
    if (3.141593 >= fVar9) {
      return;
    }
    *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
LAB_0882ee28:
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 10;
LAB_0882ee8c:
    fVar9 = *(float *)(param_1 + 0xe0) + 0.1396263;
    *(float *)(param_1 + 0xe0) = fVar9;
    if (3.141593 < fVar9) {
      *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xe0) - 3.141593;
    }
    fVar9 = *(float *)(param_1 + 0xe8) + 0.2792527;
    *(float *)(param_1 + 0xe8) = fVar9;
    if (6.283185 < fVar9) {
      *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0xe8) - 6.283185;
    }
    fVar9 = *(float *)(param_1 + 0xe4) + 0.05;
    *(float *)(param_1 + 0xe4) = fVar9;
    if (3.141593 < fVar9) {
      *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe4) - 6.283185;
    }
    else {
      if (-3.141593 < *(float *)(param_1 + 0xe4)) {
        uVar8 = *(undefined4 *)(param_1 + 0xe0);
        goto LAB_0882ef2c;
      }
      *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe4) + 6.283185;
    }
    uVar8 = *(undefined4 *)(param_1 + 0xe0);
LAB_0882ef2c:
    uVar8 = vmul_s(uVar8,in_V7C);
    local_48 = (float)vsin_s(uVar8);
    uVar8 = vmul_s(*(undefined4 *)(param_1 + 0xe8),in_V7C);
    local_44 = (float)vsin_s(uVar8);
    fVar9 = local_44 * 0.05 + 1.0;
    iVar4 = 0;
    fVar7 = (local_48 * 0.2 + 0.8) * local_3c;
    iVar3 = 0;
    do {
      if (-3.0 < local_78) {
        iVar5 = FUN_0882e4c8(param_1);
        if (iVar5 != 0) {
          iVar5 = *(int *)(param_1 + 0x14);
          goto LAB_0882efe8;
        }
        iVar5 = *(int *)(*(int *)(param_1 + 0x14) + iVar3 + 0x6c);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x14);
LAB_0882efe8:
        iVar5 = *(int *)(iVar5 + iVar3 + 0x6c);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
      }
      iVar5 = *(int *)(*(int *)(param_1 + 0x14) + iVar3 + 0x6c);
      *(undefined4 *)(iVar5 + 0x60) = local_a0;
      *(undefined4 *)(iVar5 + 100) = uStack_9c;
      *(undefined4 *)(iVar5 + 0x68) = uStack_98;
      *(undefined4 *)(iVar5 + 0x6c) = uStack_94;
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar3 + 0x6c) + 0xbc) = fVar7;
      FUN_089f4954(fVar9,fVar9,0,*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar3 + 0x6c),0);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      if (0 < iVar4) {
        return;
      }
    } while( true );
  case 4:
    goto LAB_0882ee28;
  default:
    goto LAB_0882f14c;
  case 10:
    goto LAB_0882ee8c;
  }
  fVar9 = *(float *)(param_1 + 0xe0) + 0.06981317;
  *(float *)(param_1 + 0xe0) = fVar9;
  if (3.141593 < fVar9) {
    *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xe0) - 3.141593;
  }
  fVar7 = *(float *)(param_1 + 0xe8) + 0.2792527;
  *(float *)(param_1 + 0xe8) = fVar7;
  if (6.283185 < fVar7) {
    *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0xe8) - 6.283185;
  }
  fVar7 = *(float *)(param_1 + 0xe4) + 0.05;
  *(float *)(param_1 + 0xe4) = fVar7;
  if (3.141593 < fVar7) {
    *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe4) - 6.283185;
LAB_0882e9cc:
    uVar8 = *(undefined4 *)(param_1 + 0xe0);
  }
  else {
    if (*(float *)(param_1 + 0xe4) <= -3.141593) {
      *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe4) + 6.283185;
      goto LAB_0882e9cc;
    }
    uVar8 = *(undefined4 *)(param_1 + 0xe0);
  }
  uVar8 = vmul_s(uVar8,in_V7C);
  local_60 = (float)vsin_s(uVar8);
  uVar8 = vmul_s(*(undefined4 *)(param_1 + 0xe8),in_V7C);
  local_5c = (float)vsin_s(uVar8);
  fVar7 = local_5c * 0.4 + 1.0;
  iVar4 = 0;
  fVar6 = (local_60 * 0.3 + 0.7) * local_3c;
  iVar3 = 0;
  do {
    if (-3.0 < local_78) {
      iVar5 = FUN_0882e4c8(param_1);
      if (iVar5 != 0) {
        iVar5 = *(int *)(param_1 + 0x14);
        goto LAB_0882ea6c;
      }
      iVar5 = *(int *)(*(int *)(param_1 + 0x14) + iVar3 + 0x6c);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x14);
LAB_0882ea6c:
      iVar5 = *(int *)(iVar5 + iVar3 + 0x6c);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x14) + iVar3 + 0x6c);
    *(undefined4 *)(iVar5 + 0x60) = local_a0;
    *(undefined4 *)(iVar5 + 100) = uStack_9c;
    *(undefined4 *)(iVar5 + 0x68) = uStack_98;
    *(undefined4 *)(iVar5 + 0x6c) = uStack_94;
    *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar3 + 0x6c) + 0xbc) = fVar6;
    FUN_089f4954(fVar7,fVar7,0,*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar3 + 0x6c),0);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 1);
  if (3.141593 < fVar9) {
    *(undefined4 *)(param_1 + 0xf4) = 4;
  }
LAB_0882f14c:
  return;
}

