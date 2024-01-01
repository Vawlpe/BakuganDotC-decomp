#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ae79c(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 in_V7F;
  float local_80;
  float local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 uStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 uStack_54;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  
  pfVar3 = (float *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x1fc) == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x14) + 0x6c))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x68));
    pfVar4 = (float *)(param_1 + 0x20);
    if (iVar1 == 0) {
      iVar1 = 0;
      do {
        fVar6 = *pfVar4;
        local_5c = *(float *)(param_1 + 0x24);
        local_58 = *(float *)(param_1 + 0x28);
        uStack_54 = *(undefined4 *)(param_1 + 0x2c);
        local_60 = fVar6;
        iVar2 = FUN_088a9614(param_1);
        uVar7 = vrndf1_s();
        local_38 = (float)vsub_s(uVar7,in_V7F);
        fVar5 = *(float *)(iVar2 + 0x10) * 2.0 * local_38;
        iVar2 = FUN_088a9614(param_1);
        local_60 = fVar6 + (fVar5 - *(float *)(iVar2 + 0x10));
        fVar6 = local_5c;
        iVar2 = FUN_088a9614(param_1);
        uVar7 = vrndf1_s();
        local_34 = (float)vsub_s(uVar7,in_V7F);
        fVar5 = *(float *)(iVar2 + 0x14) * 2.0 * local_34;
        iVar2 = FUN_088a9614(param_1);
        local_5c = fVar6 + (fVar5 - *(float *)(iVar2 + 0x14));
        fVar6 = local_58;
        iVar2 = FUN_088a9614(param_1);
        uVar7 = vrndf1_s();
        local_30 = (float)vsub_s(uVar7,in_V7F);
        fVar5 = *(float *)(iVar2 + 0x18) * 2.0 * local_30;
        iVar2 = FUN_088a9614(param_1);
        local_58 = fVar6 + (fVar5 - *(float *)(iVar2 + 0x18));
        FUN_08824594(DAT_08abd5b0,0x8f,&local_60,param_1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 6);
      iVar1 = *(int *)(param_1 + 0x1fc);
    }
    else {
      local_80 = *pfVar4;
      fVar6 = *(float *)(param_1 + 0x24);
      uStack_78 = *(undefined4 *)(param_1 + 0x28);
      uStack_74 = *(undefined4 *)(param_1 + 0x2c);
      local_7c = fVar6;
      iVar1 = FUN_088a9614(param_1);
      local_7c = fVar6 + *(float *)(iVar1 + 4);
      FUN_08824594(DAT_08abd5b0,0x160,&local_80,param_1);
      iVar1 = 0;
      do {
        fVar6 = *pfVar4;
        local_6c = *(float *)(param_1 + 0x24);
        local_68 = *(float *)(param_1 + 0x28);
        uStack_64 = *(undefined4 *)(param_1 + 0x2c);
        local_70 = fVar6;
        iVar2 = FUN_088a9614(param_1);
        uVar7 = vrndf1_s();
        local_48 = (float)vsub_s(uVar7,in_V7F);
        fVar5 = *(float *)(iVar2 + 0x10) * 2.0 * local_48;
        iVar2 = FUN_088a9614(param_1);
        local_70 = fVar6 + (fVar5 - *(float *)(iVar2 + 0x10));
        fVar6 = local_6c;
        iVar2 = FUN_088a9614(param_1);
        uVar7 = vrndf1_s();
        local_44 = (float)vsub_s(uVar7,in_V7F);
        fVar5 = *(float *)(iVar2 + 0x14) * 2.0 * local_44;
        iVar2 = FUN_088a9614(param_1);
        local_6c = fVar6 + (fVar5 - *(float *)(iVar2 + 0x14));
        fVar6 = local_68;
        iVar2 = FUN_088a9614(param_1);
        uVar7 = vrndf1_s();
        local_40 = (float)vsub_s(uVar7,in_V7F);
        fVar5 = *(float *)(iVar2 + 0x18) * 2.0 * local_40;
        iVar2 = FUN_088a9614(param_1);
        local_68 = fVar6 + (fVar5 - *(float *)(iVar2 + 0x18));
        FUN_08824594(DAT_08abd5b0,0x160,&local_70,param_1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 2);
      iVar1 = *(int *)(param_1 + 0x1fc);
    }
    *(int *)(param_1 + 0x1fc) = iVar1 + 1;
  }
  if (*(float *)(param_1 + 0x230) * 2.0 * 0.3333333 < *(float *)(param_1 + 0x300)) {
    fVar6 = *(float *)(param_1 + 0x230) * 0.0444;
    *(float *)(param_1 + 0x300) = *(float *)(param_1 + 0x300) - fVar6;
    *pfVar3 = *pfVar3 - fVar6;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x2b4);
    iVar1 = FUN_088a95c0(param_1,*(byte *)(param_1 + 0x2b1) & 0x1f);
    fVar5 = *(float *)(param_1 + 0x2b8);
    *(float *)(param_1 + 0x20) = fVar6 + (float)(iVar1 / 2);
    iVar1 = FUN_088a95c0(param_1,*(char *)(param_1 + 0x2b1) + 8U & 0x1f);
    fVar6 = *(float *)(param_1 + 0x230) * 0.01111;
    *(char *)(param_1 + 0x2b1) = *(char *)(param_1 + 0x2b1) + '\x01';
    *(float *)(param_1 + 0x28) = fVar5 + (float)(iVar1 / 2);
    *(float *)(param_1 + 0x300) = *(float *)(param_1 + 0x300) - fVar6;
    *pfVar3 = *pfVar3 - fVar6;
  }
  if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x234) - *(float *)(param_1 + 0x230) * 0.3)
  {
    FUN_088a9d64(param_1);
    *(float *)(param_1 + 0x228) = *(float *)(param_1 + 0x228) - 0.02;
    fVar6 = *(float *)(param_1 + 0x228);
  }
  else {
    fVar6 = *(float *)(param_1 + 0x228);
  }
  if (fVar6 <= 0.0) {
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(undefined *)(param_1 + 0x282) = 1;
  }
  else {
    if (0.2 < *(float *)(param_1 + 0x228)) {
      iVar1 = *(int *)(param_1 + 0x140);
      goto LAB_088aebf8;
    }
    *(uint *)(*(int *)(param_1 + 0x140) + 0x130) = *(uint *)(*(int *)(param_1 + 0x140) + 0x130) | 2;
    FUN_088a9668(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x140);
LAB_088aebf8:
  if (iVar1 != 0) {
    *(undefined *)(*(int *)(param_1 + 0x140) + 0x10c) = 1;
  }
  return;
}

