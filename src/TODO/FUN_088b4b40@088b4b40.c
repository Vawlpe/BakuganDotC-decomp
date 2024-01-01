#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b4b40(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  float local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_2c;
  
  iVar15 = FUN_089bf93c(0x14a,1);
  if (iVar15 == 0) {
    if (*(int *)(param_1 + 800) != 0) {
      *(undefined *)(*(int *)(param_1 + 800) + 0x4c1) = 1;
    }
    if (*(int *)(param_1 + 0x154) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x154) + 0x3a) = 1;
      FUN_088b3410(*(undefined4 *)(param_1 + 0x154));
      *(undefined4 *)(param_1 + 0x154) = 0;
    }
    local_80 = *(undefined4 *)(param_1 + 0x20);
    uStack_78 = *(undefined4 *)(param_1 + 0x28);
    uStack_74 = *(undefined4 *)(param_1 + 0x2c);
    local_7c = *(float *)(param_1 + 0x24) + 1000.0;
    FUN_088a8f2c(&local_90,&local_80,0x3fbf2500);
    local_80 = local_90;
    local_7c = (float)uStack_8c;
    uStack_78 = uStack_88;
    uStack_74 = uStack_84;
    iVar15 = *(int *)(param_1 + 0x130);
    *(undefined4 *)(iVar15 + 0xb0) = local_90;
    *(undefined4 *)(iVar15 + 0xb4) = uStack_8c;
    *(undefined4 *)(iVar15 + 0xb8) = uStack_88;
    *(undefined4 *)(iVar15 + 0xbc) = uStack_84;
    iVar15 = FUN_0884b248();
    if (iVar15 != 0) {
      local_2c = 0;
      FUN_089d8634();
      uVar16 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar17 = FUN_089d7d74(0x1e0,0,0);
      FUN_089d816c(uVar16);
      FUN_089d866c();
      iVar15 = local_2c;
      if (iVar17 != 0) {
        FUN_088b534c(iVar17,"little_crystal_bk.gmo");
        iVar15 = iVar17;
      }
      iVar17 = _DONE_NotZero_DAT_08AC5258();
      if (iVar17 == 0) {
        iVar17 = *(int *)(param_1 + 0x130);
      }
      else {
        uVar16 = _DONE_Get_DAT_08AC5258();
        FUN_089c00c4(uVar16,0x200259,*(int *)(param_1 + 0x130) + 0xb0,0,1);
        iVar17 = *(int *)(param_1 + 0x130);
      }
      FUN_088b5748(uStack_8c,uStack_8c,iVar15,iVar17 + 0x80,param_1 + 0x370);
      iVar17 = FUN_0884b268();
      FUN_089d8984(iVar15,iVar17 + 0x468);
      *(undefined4 *)(iVar15 + 0x1c0) = 0x1e;
      FUN_089e0a70(iVar15,&LAB_088b3f98,0);
      iVar17 = FUN_089df7ec(iVar15,"gimmick_11_littlecrystal_break");
      if (iVar17 != 0) {
        *(byte *)(iVar17 + 4) = *(byte *)(iVar17 + 4) & 0x3f | 0x40;
        *(byte *)(iVar17 + 3) = *(byte *)(iVar17 + 3) & 0xfc;
        *(byte *)(iVar17 + 3) = *(byte *)(iVar17 + 3) & 0x1f | 0x20;
        *(byte *)(iVar17 + 4) = *(byte *)(iVar17 + 4) & 0xfc | 2;
      }
      iVar17 = FUN_089df7ec(iVar15,"gimmick_11_littlecrystalbreak");
      if (iVar17 == 0) {
        iVar17 = *(int *)(param_1 + 0x32c);
      }
      else {
        *(byte *)(iVar17 + 4) = *(byte *)(iVar17 + 4) & 0x3f | 0x80;
        *(byte *)(iVar17 + 3) = *(byte *)(iVar17 + 3) & 0xfc | 2;
        iVar17 = *(int *)(param_1 + 0x32c);
      }
      if (iVar17 != 0) {
        FUN_088598a8(&local_70,*(undefined4 *)(param_1 + 0x32c));
        local_60 = local_70;
        uStack_5c = uStack_6c;
        uStack_58 = uStack_68;
        uStack_54 = uStack_64;
        FUN_089e0460(iVar15,&local_60,0);
      }
    }
    iVar15 = FUN_0884b248();
    if (iVar15 != 0) {
      uVar16 = FUN_0884b268();
      iVar15 = FUN_0884d2c0(uVar16);
      if (iVar15 == 0) {
        *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - 5000.0;
        iVar15 = *(int *)(param_1 + 0x130);
        uVar16 = *(undefined4 *)(param_1 + 0x24);
        uVar5 = *(undefined4 *)(param_1 + 0x28);
        uVar10 = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(iVar15 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(iVar15 + 0xb4) = uVar16;
        *(undefined4 *)(iVar15 + 0xb8) = uVar5;
        *(undefined4 *)(iVar15 + 0xbc) = uVar10;
        if (*(int *)(param_1 + 800) != 0) {
          iVar15 = *(int *)(param_1 + 800);
          iVar17 = *(int *)(param_1 + 0x130);
          uVar1 = *(undefined4 *)(iVar17 + 0x84);
          uVar6 = *(undefined4 *)(iVar17 + 0x88);
          uVar11 = *(undefined4 *)(iVar17 + 0x8c);
          uVar16 = *(undefined4 *)(iVar17 + 0x90);
          uVar2 = *(undefined4 *)(iVar17 + 0x94);
          uVar7 = *(undefined4 *)(iVar17 + 0x98);
          uVar12 = *(undefined4 *)(iVar17 + 0x9c);
          uVar5 = *(undefined4 *)(iVar17 + 0xa0);
          uVar3 = *(undefined4 *)(iVar17 + 0xa4);
          uVar8 = *(undefined4 *)(iVar17 + 0xa8);
          uVar13 = *(undefined4 *)(iVar17 + 0xac);
          uVar10 = *(undefined4 *)(iVar17 + 0xb0);
          uVar4 = *(undefined4 *)(iVar17 + 0xb4);
          uVar9 = *(undefined4 *)(iVar17 + 0xb8);
          uVar14 = *(undefined4 *)(iVar17 + 0xbc);
          *(undefined4 *)(iVar15 + 0x220) = *(undefined4 *)(iVar17 + 0x80);
          *(undefined4 *)(iVar15 + 0x224) = uVar1;
          *(undefined4 *)(iVar15 + 0x228) = uVar6;
          *(undefined4 *)(iVar15 + 0x22c) = uVar11;
          *(undefined4 *)(iVar15 + 0x230) = uVar16;
          *(undefined4 *)(iVar15 + 0x234) = uVar2;
          *(undefined4 *)(iVar15 + 0x238) = uVar7;
          *(undefined4 *)(iVar15 + 0x23c) = uVar12;
          *(undefined4 *)(iVar15 + 0x240) = uVar5;
          *(undefined4 *)(iVar15 + 0x244) = uVar3;
          *(undefined4 *)(iVar15 + 0x248) = uVar8;
          *(undefined4 *)(iVar15 + 0x24c) = uVar13;
          *(undefined4 *)(iVar15 + 0x250) = uVar10;
          *(undefined4 *)(iVar15 + 0x254) = uVar4;
          *(undefined4 *)(iVar15 + 600) = uVar9;
          *(undefined4 *)(iVar15 + 0x25c) = uVar14;
          if (*(int *)(*(int *)(param_1 + 800) + 0x20c) == 0) {
            iVar15 = *(int *)(param_1 + 800);
          }
          else {
            iVar15 = *(int *)(*(int *)(param_1 + 800) + 0x20c);
            *(undefined4 *)(iVar15 + 0x148) = 0;
            *(uint *)(iVar15 + 0x130) = *(uint *)(iVar15 + 0x130) | 1;
            iVar15 = *(int *)(*(int *)(param_1 + 800) + 0x20c);
            *(uint *)(iVar15 + 0x130) = *(uint *)(iVar15 + 0x130) | 0x40;
            iVar15 = *(int *)(*(int *)(param_1 + 800) + 0x20c);
            *(uint *)(iVar15 + 0x130) = *(uint *)(iVar15 + 0x130) | 4;
            *(undefined *)(*(int *)(*(int *)(param_1 + 800) + 0x20c) + 0x10c) = 1;
            iVar15 = *(int *)(param_1 + 800);
          }
          if (*(int *)(iVar15 + 0x208) != 0) {
            iVar15 = *(int *)(*(int *)(param_1 + 800) + 0x208);
            *(uint *)(iVar15 + 0x130) = *(uint *)(iVar15 + 0x130) | 1;
            *(undefined4 *)(iVar15 + 0x148) = 0;
            iVar15 = *(int *)(*(int *)(param_1 + 800) + 0x208);
            *(uint *)(iVar15 + 0x130) = *(uint *)(iVar15 + 0x130) | 0x40;
            iVar15 = *(int *)(*(int *)(param_1 + 800) + 0x208);
            *(uint *)(iVar15 + 0x130) = *(uint *)(iVar15 + 0x130) | 4;
            iVar15 = *(int *)(*(int *)(*(int *)(param_1 + 800) + 0x208) + 0xf4);
            iVar17 = *(int *)(param_1 + 0x130);
            uVar16 = *(undefined4 *)(iVar17 + 0xb4);
            uVar5 = *(undefined4 *)(iVar17 + 0xb8);
            uVar10 = *(undefined4 *)(iVar17 + 0xbc);
            *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(iVar17 + 0xb0);
            *(undefined4 *)(iVar15 + 0x14) = uVar16;
            *(undefined4 *)(iVar15 + 0x18) = uVar5;
            *(undefined4 *)(iVar15 + 0x1c) = uVar10;
            *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) + *(float *)(iVar15 + 0x20);
            (**(code **)(*(int *)(iVar15 + 4) + 0x4c))
                      (iVar15 + *(short *)(*(int *)(iVar15 + 4) + 0x48));
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  return;
}

