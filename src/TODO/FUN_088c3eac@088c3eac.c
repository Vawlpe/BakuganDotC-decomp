#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088c3eac(int param_1)

{
  ushort uVar1;
  short sVar2;
  undefined auVar3 [12];
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  short *psVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_V7D;
  
  iVar8 = WeirdBuff;
  uVar14 = *(undefined4 *)(param_1 + 0x61c);
  if (WeirdBuff == 0) {
    return uVar14;
  }
  iVar6 = FUN_088e1948();
  if (0 < *(short *)(param_1 + 0x794)) {
    *(short *)(param_1 + 0x794) = *(short *)(param_1 + 0x794) + -1;
    return uVar14;
  }
  if ((*(byte *)(iVar8 + 4) & 8) != 0) {
    if (DAT_08b00bd4 == '\b') {
      FUN_088bede4(param_1,5);
      return uVar14;
    }
    FUN_088bede4(param_1,4);
    return uVar14;
  }
  iVar7 = FUN_088c0ef4(param_1);
  if (iVar7 != 0) {
    return 0xb;
  }
  iVar7 = FUN_088c1270(param_1);
  if (iVar7 == 0) {
    iVar7 = FUN_088e1adc(iVar6);
    if (iVar7 == 0) {
      iVar8 = *(int *)(iVar6 + 0x140);
    }
    else if ((*(byte *)(iVar8 + 5) & 0x40) == 0) {
      iVar8 = *(int *)(iVar6 + 0x140);
    }
    else {
      *(undefined2 *)(*(int *)(iVar6 + 0x350) + 0x30) =
           *(undefined2 *)(*(int *)(iVar7 + 0x350) + 0x30);
      *(undefined *)(*(int *)(iVar6 + 0x350) + 0x3a) = *(undefined *)(iVar7 + 0x34c);
      FUN_088e1d44(iVar6);
      FUN_088f491c(*(undefined4 *)(param_1 + 0x78c));
      FUN_088c1028(param_1,(int)*(short *)(DAT_08b00d40 + 0x30),0,
                   *(undefined *)(DAT_08b00d40 + 0x3a),0);
      FUN_088bf1e0(param_1);
      uVar14 = 5;
      iVar8 = *(int *)(iVar6 + 0x140);
    }
    if (iVar8 != 0xb) {
      return uVar14;
    }
    return 0x21;
  }
  iVar8 = (**(code **)(*(int *)(iVar7 + 0x14) + 0x54))
                    (iVar7 + *(short *)(*(int *)(iVar7 + 0x14) + 0x50));
  if ((iVar8 != 0) ||
     (iVar8 = (**(code **)(*(int *)(iVar7 + 0x14) + 0x74))
                        (iVar7 + *(short *)(*(int *)(iVar7 + 0x14) + 0x70)), iVar8 != 0)) {
    FUN_088f491c(*(undefined4 *)(param_1 + 0x78c));
    FUN_088e1d44(*DAT_08abf710);
    uVar14 = FUN_088d93fc(iVar7);
    puVar9 = (undefined2 *)FUN_088bf4cc(param_1,uVar14);
    *(undefined2 *)(param_1 + 0x796) = *puVar9;
    if ((*(char *)(param_1 + 0x6f9) == '\0') && (iVar8 = FUN_088e1948(), iVar8 != 0)) {
      FUN_088e2788(iVar8,0xc,0);
      *(int *)(iVar8 + 0x414) = iVar7;
    }
    FUN_088bf1e0(param_1);
    return 0x17;
  }
  if (*(int *)(iVar7 + 0x168) == 9) {
    uVar14 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar14,0x34,1);
    FUN_088f491c(*(undefined4 *)(param_1 + 0x78c));
    FUN_088e1d44(*DAT_08abf710);
    uVar14 = FUN_088d93fc(iVar7);
    puVar9 = (undefined2 *)FUN_088bf4cc(param_1,uVar14);
    *(undefined2 *)(param_1 + 0x796) = *puVar9;
    FUN_088bf1e0(param_1);
    iVar8 = FUN_088e1948();
    if (iVar8 != 0) {
      FUN_088e2788(iVar8,10,0);
      *(int *)(iVar8 + 0x414) = iVar7;
    }
    *(undefined *)(param_1 + 0x3d9) = 1;
    return 0x1e;
  }
  iVar8 = (**(code **)(*(int *)(iVar7 + 0x14) + 0x6c))
                    (iVar7 + *(short *)(*(int *)(iVar7 + 0x14) + 0x68));
  if (iVar8 != 0) {
    uVar14 = FUN_088d93fc(iVar7);
    puVar9 = (undefined2 *)FUN_088bf4cc(param_1,uVar14);
    *(undefined2 *)(param_1 + 0x796) = *puVar9;
    return 0x12;
  }
  if (*(int *)(iVar7 + 0x168) == 0x10) {
    iVar8 = _DONE_NotZero_DAT_08AC5874();
    if (iVar8 != 0) {
      uVar14 = _DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar14,0,0,0);
    }
    FUN_088f491c(*(undefined4 *)(param_1 + 0x78c));
    FUN_088bad9c(param_1 + 0x20);
    FUN_088bf388(param_1);
    *(undefined4 *)(param_1 + 0x620) = 0xb;
    DAT_08abe906 = 2;
    *(undefined *)(param_1 + 0x79a) = 10;
    return 0x18;
  }
  if (*(int *)(iVar7 + 0x168) == 0x11) {
    iVar8 = _DONE_NotZero_DAT_08AC5874();
    if (iVar8 != 0) {
      uVar14 = _DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar14,0,0,0);
    }
    FUN_088f491c(*(undefined4 *)(param_1 + 0x78c));
    FUN_088bad9c(param_1 + 0x20);
    return 0x1c;
  }
  iVar8 = (**(code **)(*(int *)(iVar7 + 0x14) + 100))
                    (iVar7 + *(short *)(*(int *)(iVar7 + 0x14) + 0x60));
  if (iVar8 == 0) {
    return uVar14;
  }
  uVar1 = *(ushort *)(iVar7 + 0x142);
  if (uVar1 < 0x326) {
    if (uVar1 < 0x323) {
      if (uVar1 < 0x322) {
        return uVar14;
      }
      FUN_088f491c(*(undefined4 *)(param_1 + 0x78c));
      FUN_088bad9c(param_1 + 0x20);
      FUN_088bf388(param_1);
      *(undefined4 *)(param_1 + 0x620) = 0xb;
      DAT_08abe906 = 2;
      *(undefined *)(param_1 + 0x79a) = 10;
      return 0x18;
    }
    if (uVar1 < 0x324) {
      FUN_088f491c(*(undefined4 *)(param_1 + 0x78c));
      FUN_088bad9c(param_1 + 0x20);
      return 0x1a;
    }
    if (0x324 < uVar1) {
      FUN_088f491c(*(undefined4 *)(param_1 + 0x78c));
      FUN_088bad9c(param_1 + 0x20);
      return 0x1c;
    }
    iVar8 = _DONE_NotZero_DAT_08AC5874();
    if (iVar8 != 0) {
      uVar14 = _DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar14,0,0,0);
    }
    FUN_088f491c(*(undefined4 *)(param_1 + 0x78c));
    FUN_088bf388(param_1);
    *(undefined4 *)(param_1 + 0x620) = 0xc;
    DAT_08abe906 = 3;
    *(undefined *)(param_1 + 0x79a) = 10;
    uVar13 = *(undefined4 *)(DAT_08ac58c4 + 4);
    FUN_089b1bd8();
    FUN_089b1c54(1,*(uint *)(DAT_08ac58c4 + 4) & 0xff);
    uVar14 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar14,0x33,*(undefined4 *)(DAT_08ac58c4 + 4));
    uVar14 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar14,0x2e,0);
    uVar14 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar14,0x31,uVar13);
    return 0x18;
  }
  if (uVar1 < 0x1773) {
    if (uVar1 != 6000) {
      return uVar14;
    }
    DAT_08b00bd6 = *(byte *)(*(int *)(iVar7 + 0x170) + 0x22) & 0xf;
    DAT_08abe907 = (undefined)(((int)*(char *)(*(int *)(iVar7 + 0x170) + 0x22) & 0xf0U) >> 4);
    FUN_088f488c(*(undefined4 *)(param_1 + 0x78c),0);
    return 6;
  }
  if (0x1774 < uVar1) {
    return uVar14;
  }
  if (*(int *)(param_1 + 0x6f0) == iVar7) {
    return uVar14;
  }
  uVar13 = FUN_088d93fc(iVar7);
  iVar8 = FUN_088bf4cc(param_1,uVar13);
  if (*(short *)(iVar8 + 2) != 0) {
    uVar13 = FUN_088d93fc(iVar7);
    iVar8 = FUN_088bf4cc(param_1,uVar13);
    uVar11 = (uint)*(ushort *)(iVar8 + 2);
    if ((int)uVar11 < 0) {
      uVar12 = -(-uVar11 & 0x1f);
    }
    else {
      uVar12 = uVar11 & 0x1f;
    }
    bVar4 = false;
    if (((uint)(&DAT_08b00bdc)[(int)uVar11 >> 5] >> (uVar12 & 0x1f) & 1) != 0) goto LAB_088c4494;
  }
  bVar4 = true;
LAB_088c4494:
  bVar5 = true;
  if (bVar4) {
    uVar13 = FUN_088d93fc(iVar7);
    psVar10 = (short *)FUN_088bf4cc(param_1,uVar13);
    sVar2 = *psVar10;
    if ((*(short *)(iVar7 + 0x142) == 0x1773) &&
       (iVar8 = FUN_088f00d4(*(undefined4 *)(param_1 + 0x790),sVar2), iVar8 != 0)) {
      FUN_088c1028(param_1,(int)sVar2,0,0,1);
      bVar5 = false;
      *(int *)(param_1 + 0x6f0) = iVar7;
      iVar8 = FUN_088e1948();
      iVar6 = *(int *)(iVar7 + 0x170);
      auVar3._4_4_ = (float)*(int *)(iVar6 + 0x2c) * 0.0002441406;
      auVar3._0_4_ = (float)*(int *)(iVar6 + 0x28) * 0.0002441406;
      auVar3._8_4_ = (float)*(int *)(iVar6 + 0x30) * 0.0002441406;
      auVar3 = vscl_t(auVar3,0x41a00000);
      *(int *)(iVar8 + 0x3e0) = auVar3._0_4_;
      *(int *)(iVar8 + 0x3e4) = auVar3._4_4_;
      *(int *)(iVar8 + 1000) = auVar3._8_4_;
      *(undefined4 *)(iVar8 + 0x3ec) = in_V7D;
    }
    else {
      FUN_088c1028(param_1,(int)sVar2,0,0,0);
      FUN_088f491c(*(undefined4 *)(param_1 + 0x78c));
      FUN_088bf1e0(param_1);
      uVar14 = 5;
    }
  }
  if (bVar5) {
    (**(code **)(*(int *)(iVar7 + 0x14) + 0x84))
              (iVar7 + *(short *)(*(int *)(iVar7 + 0x14) + 0x80),0);
  }
  return uVar14;
}

