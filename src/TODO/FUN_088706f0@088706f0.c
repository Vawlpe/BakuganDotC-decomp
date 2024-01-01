#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088706f0(int param_1,undefined4 param_2,char param_3)

{
  undefined auVar1 [16];
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7E;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float local_70;
  undefined4 uStack_6c;
  float local_68;
  undefined4 uStack_64;
  undefined auStack_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar5 = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x140) = param_2;
  if (param_3 == '\0') {
    *(undefined4 *)(param_1 + 0x3cc) = 0;
    *(undefined4 *)(param_1 + 0x3d0) = 0;
    *(undefined4 *)(param_1 + 0x3d4) = 0;
    *(undefined4 *)(param_1 + 0x3d8) = 0;
    *(undefined4 *)(param_1 + 0x3dc) = 0;
    *(undefined4 *)(param_1 + 0x3e0) = 0;
    *(undefined4 *)(param_1 + 0x3e4) = 0;
    *(undefined4 *)(param_1 + 0x3f0) = in_V72;
    *(undefined4 *)(param_1 + 0x3f4) = in_V76;
    *(undefined4 *)(param_1 + 0x3f8) = in_V7A;
    *(undefined4 *)(param_1 + 0x3fc) = in_V7E;
    *(undefined4 *)(param_1 + 0x400) = in_V72;
    *(undefined4 *)(param_1 + 0x404) = in_V76;
    *(undefined4 *)(param_1 + 0x408) = in_V7A;
    *(undefined4 *)(param_1 + 0x40c) = in_V7E;
    *(undefined4 *)(param_1 + 0x430) = 0;
    *(undefined4 *)(param_1 + 0x410) = 0;
    (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
              (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xfff7ffff;
    *(undefined4 *)(param_1 + 0x5dc) = 0;
    *(undefined4 *)(param_1 + 0x5d8) = 0;
  }
  iVar2 = FUN_08862b1c(param_1,0);
  if (iVar2 != 0) {
    FUN_08862ad4(param_1,0);
  }
  FUN_08862ad4(param_1,4);
  if (*(int *)(param_1 + 8) == 0x19) {
    FUN_08862b88(param_1,0x1c00000);
  }
  if (*(int *)(param_1 + 0x140) == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x140);
  }
  else {
    FUN_08865608(param_1);
    uVar3 = *(undefined4 *)(param_1 + 0x140);
  }
  *(undefined4 *)(param_1 + 0x64c) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  switch(uVar3) {
  case 0:
    *(undefined4 *)(param_1 + 0x174) = 0;
    break;
  case 1:
    FUN_088608d8(0x3e4ccccd,param_1,1,1,0);
    break;
  case 2:
    if ((*(uint *)(param_1 + 0x16c) & 1) == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x34);
    }
    else {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x168) + 4);
    }
    *(undefined4 *)(param_1 + 0x3dc) = uVar5;
    iVar2 = FUN_08860344(param_1);
    if (iVar2 == 0) {
      uVar5 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
      auVar1 = vrot_q(uVar5,1,0,2,0);
      local_80 = auVar1._0_4_;
      uStack_7c = auVar1._4_4_;
      uStack_78 = auVar1._8_4_;
      uStack_74 = auVar1._12_4_;
      FUN_088608d8(0x3e4ccccd,param_1,5,1,0);
    }
    else {
      uVar5 = vmul_s(*(undefined4 *)(param_1 + 0x3dc),in_V7C);
      auVar1 = vrot_q(uVar5,1,0,2,0);
      local_80 = auVar1._0_4_;
      uStack_7c = auVar1._4_4_;
      uStack_78 = auVar1._8_4_;
      uStack_74 = auVar1._12_4_;
      FUN_088608d8(0x3e4ccccd,param_1,5,1,0);
    }
    uVar5 = FUN_08865c40(param_1);
    *(undefined4 *)(param_1 + 0x174) = uVar5;
    iVar2 = FUN_08860344(param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_08860344(param_1);
      local_70 = *(float *)(iVar2 + 0x20);
      uStack_6c = *(undefined4 *)(iVar2 + 0x24);
      local_68 = *(float *)(iVar2 + 0x28);
      uStack_64 = *(undefined4 *)(iVar2 + 0x2c);
      fVar7 = (float)atan2f(local_68 - *(float *)(param_1 + 0x28),
                            local_70 - *(float *)(param_1 + 0x20));
      fVar7 = *(float *)(param_1 + 0x3dc) - fVar7;
      fVar7 = fVar7 - (float)(int)(fVar7 * 0.3183099) * 6.283185;
      if (fVar7 < 0.0) {
        fVar7 = fVar7 + 6.283185;
      }
      if (3.141593 <= fVar7) {
        fVar7 = 6.283185 - fVar7;
      }
      else {
        fVar7 = -fVar7;
      }
      if (0.0 < 0.3141593 - ABS(fVar7)) {
        fVar10 = *(float *)(param_1 + 0x174);
        fVar8 = (float)FUN_08865c40(param_1);
        fVar9 = (float)FUN_08865cc8(param_1);
        *(float *)(param_1 + 0x174) = fVar10 - (fVar8 - fVar9) * (0.3141593 - ABS(fVar7)) * 3.183099
        ;
      }
    }
    FUN_08862a84(param_1,0,1,0);
    *(undefined4 *)(param_1 + 0x184) = 4;
    uVar5 = DAT_08ac5c70;
    FUN_089dedf8(param_1,auStack_60,"Bip01");
    FUN_08824024(uVar5,0x1c,auStack_60,&local_80);
    break;
  case 7:
    if (*(char *)(param_1 + 0x4b2) == '\0') {
      if ((*(int *)(param_1 + 0x5ac) == 0) ||
         ((*(int *)(param_1 + 0x648) != 0 && ((*(uint *)(param_1 + 0x16c) & 0x20000) != 0)))) {
        *(undefined4 *)(param_1 + 0x140) = uVar5;
      }
      else {
        FUN_0886b8b0(param_1,uVar5);
      }
    }
    else {
      FUN_088706f0(param_1,3,0);
      FUN_088608d8(0,param_1,0xea,0,1);
    }
    break;
  case 8:
  case 10:
    if ((int)*(float *)(param_1 + 0x188) == 100) {
      FUN_0885ff24(param_1,9,0);
    }
    else {
      FUN_0885ff24(param_1,8,0);
    }
    *(undefined4 *)(param_1 + 0x648) = 10;
    break;
  case 0xb:
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffffdfff;
    break;
  case 0xc:
    iVar2 = FUN_088608b0(param_1,0x1b);
    if (iVar2 == 0) {
      FUN_0885ff24(param_1,1,0);
      FUN_088608d8(0x3dcccccd,param_1,0x19,0,0);
      if (*(int *)(param_1 + 0x170) == 0) {
        uVar4 = *(uint *)(param_1 + 0x148);
      }
      else {
        FUN_08854e78(*(undefined4 *)(param_1 + 0x170),0xc,1);
        uVar4 = *(uint *)(param_1 + 0x148);
      }
      *(uint *)(param_1 + 0x148) = uVar4 & 0xffffdfff;
    }
    break;
  case 0xe:
    uVar5 = 0x3d4ccccd;
    if (*(int *)(param_1 + 8) == 8) {
      uVar5 = 0x3dcccccd;
    }
    FUN_088608d8(uVar5,param_1,0x1c,0,0);
    iVar2 = *(int *)(param_1 + 0x264);
    iVar6 = 8;
    if (iVar2 < 4) {
      if (2 < iVar2) {
        iVar6 = 9;
      }
    }
    else if ((iVar2 < 5) && (iVar2 = FUN_0885fd54(param_1), iVar2 == 0)) {
      iVar6 = 0x19;
    }
    if (iVar6 != 0x19) {
      FUN_08862a84(param_1,iVar6,0,0);
    }
    break;
  case 0xf:
    FUN_088656b0(param_1,0);
    FUN_0886344c(param_1,1);
    *(undefined4 *)(param_1 + 0x80) = in_V72;
    *(undefined4 *)(param_1 + 0x84) = in_V76;
    *(undefined4 *)(param_1 + 0x88) = in_V7A;
    *(undefined4 *)(param_1 + 0x8c) = in_V7E;
    break;
  case 0x11:
    iVar2 = FUN_0884b268();
    *(undefined4 *)(iVar2 + 0x4e0) = 0;
    uVar5 = FUN_0884b268();
    FUN_0884de14(uVar5,param_1);
    FUN_089e10cc(0x3f800000);
    break;
  case 0x12:
    FUN_088608d8(0,param_1,0x103,1,0);
    FUN_08865520(param_1);
    if (*(char *)(param_1 + 0x158) != '\0') {
      FUN_089e10cc(0x3f400000);
      iVar2 = FUN_0884b268();
      *(undefined4 *)(iVar2 + 0x4e0) = 0x3f333333;
    }
    iVar2 = *(int *)(param_1 + 0x20c);
    *(undefined4 *)(iVar2 + 0x148) = 5;
    *(uint *)(iVar2 + 0x130) = *(uint *)(iVar2 + 0x130) | 1;
    *(undefined *)(param_1 + 0x658) = 0;
    break;
  case 0x13:
    FUN_088608d8(0,param_1,0x10d,0,0);
    iVar2 = FUN_089df4ec(0x3e99999a,param_1);
    FUN_089df450((float)iVar2,param_1);
    FUN_08865520(param_1);
    if (*(char *)(param_1 + 0x158) != '\0') {
      iVar2 = FUN_0884b268();
      *(undefined4 *)(iVar2 + 0x4e0) = 0x3f333333;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0x3f19999a;
      FUN_0884c25c(0x1e,&local_50);
    }
    iVar2 = *(int *)(param_1 + 0x20c);
    *(undefined4 *)(iVar2 + 0x148) = 5;
    *(uint *)(iVar2 + 0x130) = *(uint *)(iVar2 + 0x130) | 1;
    *(undefined *)(param_1 + 0x658) = 0;
    *(undefined4 *)(param_1 + 0x3dc) = 0x3f19999a;
    break;
  case 0x17:
    FUN_088608d8(0x3e4ccccd,param_1,0x1b,1,0);
    FUN_08862a84(param_1,4,0,0);
    *(undefined4 *)(param_1 + 0x140) = 0xc;
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xffffdfff;
    break;
  case 0x18:
    uVar5 = 0x3e4ccccd;
    if (*(char *)(*(int *)(param_1 + 0x4bc) + 2) == '\x02') {
      uVar5 = 0x3d4ccccd;
    }
    FUN_088608d8(uVar5,param_1,0xc,0,0);
    *(undefined4 *)(param_1 + 0x140) = 0xe;
  }
  return;
}

