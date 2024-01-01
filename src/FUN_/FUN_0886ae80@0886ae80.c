#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0886ae80(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  undefined auVar3 [12];
  undefined auVar4 [16];
  int iVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 in_V7C;
  
  if (DAT_08af7c80 == 0) {
    DAT_08af7c80 = 1;
    DAT_08aba870 = DAT_08b007d0;
    DAT_08aba874 = DAT_08b007d4;
    DAT_08aba878 = DAT_08b007d8;
    DAT_08aba87c = DAT_08b007dc;
  }
  if (DAT_08aba77e != '\0') {
    return 0;
  }
  fVar11 = *(float *)(param_1 + 0x17c) * 0.5;
  DAT_08b006a0 = *(float *)(param_2 + 8);
  bVar2 = *(int *)(param_1 + 0x140) != 0xb;
  uVar8 = 1 << (*(uint *)(*(int *)(param_1 + 0x20c) + 0x134) & 0x1f) ^ 0x31bf337e;
  if (DAT_08b006a0 <= fVar11) {
    sVar1 = *(short *)(param_2 + 4);
  }
  else {
    fVar11 = *(float *)(param_2 + 8);
    sVar1 = *(short *)(param_2 + 4);
  }
  if ((sVar1 == 0x14) || (*(short *)(param_2 + 4) == 0x15)) {
    fVar11 = fVar11 + -40.0;
    DAT_08b006a0 = DAT_08b006a0 + 25.0;
    uVar6 = *(uint *)(param_1 + 0x148);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x148);
  }
  if (((uVar6 & 4) == 0) || (1 < *(int *)(param_1 + 0x5c0))) {
    if (bVar2) {
      fVar7 = 0.8;
    }
    else {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = 1.2;
  }
  DAT_08b00680 = *(undefined4 *)(param_1 + 0x20);
  DAT_08b00688 = *(undefined4 *)(param_1 + 0x28);
  DAT_08b00684 = *(float *)(param_1 + 0x24) + fVar11;
  uVar12 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
  auVar4 = vrot_q(uVar12,1,0,2,0);
  auVar3 = vscl_t(auVar4._0_12_,*(float *)(param_2 + 0xc) * fVar7);
  DAT_08b00690 = auVar3._0_4_;
  DAT_08b00694 = auVar3._4_4_;
  DAT_08b00698 = auVar3._8_4_;
  DAT_08b0068c = DAT_08b006a0 * DAT_08b006a0;
  uVar12 = vdot_t(auVar3,auVar3);
  DAT_08b0069c = vsqrt_s(uVar12);
  DAT_08aba884 = &DAT_08b006b0;
  DAT_08aba88c = *(undefined4 *)(param_1 + 0x20c);
  DAT_08aba894 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = (uint)*(short *)(param_2 + 4);
  if ((int)uVar6 < 0) {
    uVar9 = -(uVar6 & 1);
  }
  else {
    uVar9 = uVar6 & 1;
  }
  DAT_08aba89c = uVar9 + 1;
  iVar10 = 0;
  DAT_08aba898 = uVar6;
  if (*(char *)(param_1 + 0x5e2) == '\0') {
LAB_0886b11c:
    DAT_08ab02f0 = (uint)*(byte *)(param_2 + 3);
  }
  else {
    if ((5 < (int)uVar6) && ((int)uVar6 < 0xc)) {
      DAT_08aba898 = uVar6 - 6;
      goto LAB_0886b11c;
    }
    if ((int)uVar6 < 0x12) {
      DAT_08ab02f0 = (uint)*(byte *)(param_2 + 3);
    }
    else {
      if ((int)uVar6 < 0x16) {
        DAT_08aba898 = 0;
        if ((uVar6 - 0x12 & 1) != 0) {
          DAT_08aba898 = 3;
        }
        goto LAB_0886b11c;
      }
      DAT_08ab02f0 = (uint)*(byte *)(param_2 + 3);
    }
  }
  if (DAT_08ab02f0 == 0) {
    DAT_08ab02f0 = 3;
  }
  DAT_08aba888 = param_1;
  if (*(int *)(param_1 + 0x140) == 0x14) {
    iVar5 = FUN_08860344(param_1);
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x20c) != 0)) {
      iVar10 = FUN_0881a608(uVar8,*(undefined4 *)(iVar5 + 0x20c),&DAT_08aba870,0);
    }
  }
  else if (bVar2) {
    iVar10 = FUN_0881aa28(uVar8,&DAT_08aba870,0,0);
  }
  else {
    iVar5 = FUN_08860344(param_1);
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x20c) != 0)) {
      if (*(int *)(iVar5 + 0x3c0) == 0) {
        uVar12 = *(undefined4 *)(iVar5 + 0x20c);
      }
      else {
        if (*(int *)(iVar5 + 0x3c0) != param_1) goto LAB_0886b1fc;
        uVar12 = *(undefined4 *)(iVar5 + 0x20c);
      }
      iVar10 = FUN_0881a608(uVar8 & 0xfffff9bf,uVar12,&DAT_08aba870,1);
    }
  }
LAB_0886b1fc:
  if ((iVar10 == 0) && (*(int *)(param_1 + 0x140) == 7)) {
    *(undefined4 *)(param_1 + 0x64c) = 4;
  }
  if (iVar10 != 0) {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x8000;
    if (!bVar2) {
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x2000;
    }
    *(undefined *)(param_1 + 0x610) = 1;
    if (DAT_08aba898 == 0x14) {
      iVar5 = *(int *)(param_1 + 0x168);
    }
    else {
      if (DAT_08aba898 != 0x15) {
        return iVar10;
      }
      iVar5 = *(int *)(param_1 + 0x168);
    }
    *(undefined4 *)(iVar5 + 0x58) = 8;
  }
  return iVar10;
}

