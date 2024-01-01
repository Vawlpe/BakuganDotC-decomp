#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088adf94(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 in_V7F;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 uStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 uStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 uStack_74;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_4c;
  float local_48;
  float local_3c;
  float local_38;
  
  if ((*(char *)(param_1 + 0x284) != '\0') && (*(float *)(param_1 + 0x6c) <= 0.0)) {
    iVar2 = *(int *)(DAT_08abd5b0 + 0x1c);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x1fc);
      goto LAB_088ae01c;
    }
    iVar4 = *(int *)(iVar2 + 0x1fc);
    while( true ) {
      iVar1 = *(int *)(iVar2 + 4);
      if (iVar4 == param_1) {
        FUN_089f5124(*(undefined4 *)(iVar2 + 0x214),iVar2);
      }
      if (iVar1 == 0) break;
      iVar4 = *(int *)(iVar1 + 0x1fc);
      iVar2 = iVar1;
    }
  }
  iVar2 = *(int *)(param_1 + 0x1fc);
LAB_088ae01c:
  if (iVar2 < 2) {
    if (iVar2 < 0) {
      return;
    }
    if (iVar2 < 1) {
      local_a0 = *(float *)(param_1 + 0x20);
      fVar5 = *(float *)(param_1 + 0x24);
      local_98 = *(float *)(param_1 + 0x28);
      uStack_94 = *(undefined4 *)(param_1 + 0x2c);
      local_9c = fVar5;
      iVar2 = FUN_088a9614(param_1);
      local_9c = fVar5 + *(float *)(iVar2 + 4);
      iVar2 = (int)(*(float *)(param_1 + 500) * 0.01);
      if (iVar2 < 1) {
        iVar2 = 1;
      }
      else if (8 < iVar2) {
        iVar2 = 8;
      }
      iVar4 = 0;
      if (0 < iVar2) {
        do {
          local_90 = local_a0;
          fStack_8c = local_9c;
          local_88 = local_98;
          uStack_84 = uStack_94;
          fVar5 = local_a0;
          iVar1 = FUN_088a9614(param_1);
          uVar7 = vrndf1_s();
          local_68 = (float)vsub_s(uVar7,in_V7F);
          fVar6 = *(float *)(iVar1 + 0x10) * 2.0 * local_68;
          iVar1 = FUN_088a9614(param_1);
          local_90 = fVar5 + (fVar6 - *(float *)(iVar1 + 0x10));
          fVar5 = local_88;
          iVar1 = FUN_088a9614(param_1);
          uVar7 = vrndf1_s();
          local_64 = (float)vsub_s(uVar7,in_V7F);
          fVar6 = *(float *)(iVar1 + 0x18) * 2.0 * local_64;
          iVar1 = FUN_088a9614(param_1);
          local_88 = fVar5 + (fVar6 - *(float *)(iVar1 + 0x18));
          FUN_08824594(DAT_08abd5b0,0x8e,&local_90,param_1);
          local_90 = local_a0;
          fStack_8c = local_9c;
          local_88 = local_98;
          uStack_84 = uStack_94;
          fVar5 = local_a0;
          iVar1 = FUN_088a9614(param_1);
          uVar7 = vrndf1_s();
          local_5c = (float)vsub_s(uVar7,in_V7F);
          fVar6 = *(float *)(iVar1 + 0x10) * 2.0 * local_5c;
          iVar1 = FUN_088a9614(param_1);
          local_90 = fVar5 + (fVar6 - *(float *)(iVar1 + 0x10));
          fVar5 = local_88;
          iVar1 = FUN_088a9614(param_1);
          uVar7 = vrndf1_s();
          local_58 = (float)vsub_s(uVar7,in_V7F);
          fVar6 = *(float *)(iVar1 + 0x18) * 2.0 * local_58;
          iVar1 = FUN_088a9614(param_1);
          local_88 = fVar5 + (fVar6 - *(float *)(iVar1 + 0x18));
          FUN_08824594(DAT_08abd5b0,0x8d,&local_90,param_1);
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
      }
      *(undefined4 *)(param_1 + 0x308) = 10;
      *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
      iVar2 = *(int *)(param_1 + 0x308);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x308);
    }
    if (iVar2 != 0) {
      fVar5 = *(float *)(param_1 + 0x2b4);
      iVar2 = FUN_088a95c0(param_1,*(byte *)(param_1 + 0x2b1) & 0x1f);
      fVar6 = *(float *)(param_1 + 0x2b8);
      *(float *)(param_1 + 0x20) = fVar5 + (float)(iVar2 / 2);
      iVar2 = FUN_088a95c0(param_1,*(char *)(param_1 + 0x2b1) + 8U & 0x1f);
      *(char *)(param_1 + 0x2b1) = *(char *)(param_1 + 0x2b1) + '\x01';
      *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + -1;
      *(float *)(param_1 + 0x28) = fVar6 + (float)(iVar2 / 2);
      return;
    }
    local_a0 = *(float *)(param_1 + 0x20);
    fVar5 = *(float *)(param_1 + 0x24);
    local_98 = *(float *)(param_1 + 0x28);
    uStack_94 = *(undefined4 *)(param_1 + 0x2c);
    local_9c = fVar5;
    iVar2 = FUN_088a9614(param_1);
    local_9c = fVar5 + *(float *)(iVar2 + 4);
    iVar2 = (int)(*(float *)(param_1 + 500) * 0.005);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (8 < iVar2) {
      iVar2 = 8;
    }
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        local_80 = local_a0;
        fStack_7c = local_9c;
        local_78 = local_98;
        uStack_74 = uStack_94;
        fVar5 = local_a0;
        iVar1 = FUN_088a9614(param_1);
        uVar7 = vrndf1_s();
        local_4c = (float)vsub_s(uVar7,in_V7F);
        fVar6 = *(float *)(iVar1 + 0x10) * 2.0 * local_4c;
        iVar1 = FUN_088a9614(param_1);
        local_80 = fVar5 + (fVar6 - *(float *)(iVar1 + 0x10));
        fVar5 = local_78;
        iVar1 = FUN_088a9614(param_1);
        uVar7 = vrndf1_s();
        local_48 = (float)vsub_s(uVar7,in_V7F);
        fVar6 = *(float *)(iVar1 + 0x18) * 2.0 * local_48;
        iVar1 = FUN_088a9614(param_1);
        local_78 = fVar5 + (fVar6 - *(float *)(iVar1 + 0x18));
        FUN_08824594(DAT_08abd5b0,0x8f,&local_80,param_1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    *(undefined *)(param_1 + 0xbc) = 1;
    FUN_089e0a70(param_1,&LAB_088a90e0,0);
    *(undefined4 *)(param_1 + 0x308) = 5;
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
  }
  else if (2 < iVar2) {
    if (3 < iVar2) {
      return;
    }
    if (*(int *)(param_1 + 0x308) != 0) {
      *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + -1;
      return;
    }
    *(undefined *)(param_1 + 0x282) = 1;
    return;
  }
  pfVar3 = (float *)(param_1 + 0x24);
  if (*(float *)(param_1 + 0x230) * 2.0 * 0.3333333 < *(float *)(param_1 + 0x300)) {
    fVar5 = *(float *)(param_1 + 0x230) * 0.0444;
    *(float *)(param_1 + 0x300) = *(float *)(param_1 + 0x300) - fVar5;
    *pfVar3 = *pfVar3 - fVar5;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x2b4);
    iVar2 = FUN_088a95c0(param_1,*(byte *)(param_1 + 0x2b1) & 0x1f);
    fVar6 = *(float *)(param_1 + 0x2b8);
    *(float *)(param_1 + 0x20) = fVar5 + (float)(iVar2 / 2);
    iVar2 = FUN_088a95c0(param_1,*(char *)(param_1 + 0x2b1) + 8U & 0x1f);
    fVar5 = *(float *)(param_1 + 0x230) * 0.01111;
    *(char *)(param_1 + 0x2b1) = *(char *)(param_1 + 0x2b1) + '\x01';
    *(float *)(param_1 + 0x28) = fVar6 + (float)(iVar2 / 2);
    *(float *)(param_1 + 0x300) = *(float *)(param_1 + 0x300) - fVar5;
    *pfVar3 = *pfVar3 - fVar5;
  }
  if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x234) - *(float *)(param_1 + 0x230) * 0.3)
  {
    FUN_088a9d64(param_1);
    *(float *)(param_1 + 0x228) = *(float *)(param_1 + 0x228) - 0.02;
    iVar2 = *(int *)(param_1 + 0x140);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x140);
  }
  if (iVar2 == 0) {
    fVar5 = *(float *)(param_1 + 0x228);
  }
  else {
    *(undefined *)(*(int *)(param_1 + 0x140) + 0x10c) = 1;
    fVar5 = *(float *)(param_1 + 0x228);
  }
  if (fVar5 <= 0.0) {
    *(undefined4 *)(param_1 + 0x228) = 0;
    local_a0 = *(float *)(param_1 + 0x20);
    fVar5 = *(float *)(param_1 + 0x24);
    local_98 = *(float *)(param_1 + 0x28);
    uStack_94 = *(undefined4 *)(param_1 + 0x2c);
    local_9c = fVar5;
    iVar2 = FUN_088a9614(param_1);
    local_9c = fVar5 + *(float *)(iVar2 + 4);
    *(undefined4 *)(param_1 + 0x308) = 0xfa;
    FUN_08824594(DAT_08abd5b0,8,&local_a0,param_1);
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
  }
  else if (*(float *)(param_1 + 0x228) <= 0.2) {
    *(uint *)(*(int *)(param_1 + 0x140) + 0x130) = *(uint *)(*(int *)(param_1 + 0x140) + 0x130) | 2;
    FUN_088a9668(param_1);
  }
  else if (*(int *)(param_1 + 0x308) == 0) {
    local_a0 = *(float *)(param_1 + 0x20);
    fVar5 = *(float *)(param_1 + 0x24);
    local_98 = *(float *)(param_1 + 0x28);
    uStack_94 = *(undefined4 *)(param_1 + 0x2c);
    local_9c = fVar5;
    iVar2 = FUN_088a9614(param_1);
    local_9c = fVar5 + *(float *)(iVar2 + 4);
    fVar5 = local_a0;
    iVar2 = FUN_088a9614(param_1);
    uVar7 = vrndf1_s();
    local_3c = (float)vsub_s(uVar7,in_V7F);
    fVar6 = *(float *)(iVar2 + 0x10) * 2.0 * local_3c;
    iVar2 = FUN_088a9614(param_1);
    local_a0 = fVar5 + (fVar6 - *(float *)(iVar2 + 0x10));
    fVar5 = local_98;
    iVar2 = FUN_088a9614(param_1);
    uVar7 = vrndf1_s();
    local_38 = (float)vsub_s(uVar7,in_V7F);
    fVar6 = *(float *)(iVar2 + 0x18) * 2.0 * local_38;
    iVar2 = FUN_088a9614(param_1);
    local_98 = fVar5 + (fVar6 - *(float *)(iVar2 + 0x18));
    FUN_08824594(DAT_08abd5b0,0x91,&local_a0,param_1);
    *(undefined4 *)(param_1 + 0x308) = 5;
  }
  else {
    *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + -1;
  }
  return;
}

