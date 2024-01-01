#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a01f88(int param_1,undefined4 param_2,undefined4 param_3,ushort *param_4,int param_5)

{
  undefined auVar1 [64];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(ushort **)(param_1 + 0x20) = param_4;
  *(int *)(param_1 + 0x2c) = param_5;
  *(undefined *)(param_1 + 0xe4) = 0;
  *(uint *)(param_1 + 0x24) = param_5 + ((int)(short)param_4[3] & 0xfffU);
  uVar4 = DAT_08b0019c;
  uVar3 = DAT_08b00198;
  uVar2 = DAT_08b00194;
  *(undefined4 *)(param_1 + 0x70) = DAT_08b00190;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  *(undefined4 *)(param_1 + 0x80) = in_V72;
  *(undefined4 *)(param_1 + 0x84) = in_V76;
  *(undefined4 *)(param_1 + 0x88) = in_V7A;
  *(undefined4 *)(param_1 + 0x8c) = in_V7E;
  auVar1 = vmidt_q();
  *(int *)(param_1 + 0x30) = auVar1._0_4_;
  *(int *)(param_1 + 0x34) = auVar1._16_4_;
  *(int *)(param_1 + 0x38) = auVar1._32_4_;
  *(int *)(param_1 + 0x3c) = auVar1._48_4_;
  *(int *)(param_1 + 0x40) = auVar1._4_4_;
  *(int *)(param_1 + 0x44) = auVar1._20_4_;
  *(int *)(param_1 + 0x48) = auVar1._36_4_;
  *(int *)(param_1 + 0x4c) = auVar1._52_4_;
  *(int *)(param_1 + 0x50) = auVar1._8_4_;
  *(int *)(param_1 + 0x54) = auVar1._24_4_;
  *(int *)(param_1 + 0x58) = auVar1._40_4_;
  *(int *)(param_1 + 0x5c) = auVar1._56_4_;
  *(int *)(param_1 + 0x60) = auVar1._12_4_;
  *(int *)(param_1 + 100) = auVar1._28_4_;
  *(int *)(param_1 + 0x68) = auVar1._44_4_;
  *(int *)(param_1 + 0x6c) = auVar1._60_4_;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x24);
  *(uint *)(param_1 + 0x9c) = (uint)*param_4;
  *(float *)(param_1 + 0xe8) = -(float)(uint)param_4[2];
  iVar5 = FUN_089f8988(param_2,param_4[1]);
  *(int *)(param_1 + 0x28) = iVar5;
  *(undefined **)(param_1 + 0xe0) = &DAT_08aa4070;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (*(short *)(iVar5 + 0xc) == 2) {
    iVar5 = FUN_089f89cc(param_2,*(undefined2 *)(*(int *)(param_1 + 0x28) + 2));
    *(int *)(param_1 + 0x94) = iVar5;
    *(int *)(iVar5 + 0x30) = param_1;
  }
  else {
    if (*(short *)(*(int *)(param_1 + 0x28) + 0xc) == 0) {
      iVar5 = *(int *)(param_1 + 0x28);
    }
    else {
      if (*(short *)(*(int *)(param_1 + 0x28) + 0xc) != 1) goto LAB_08a02208;
      iVar5 = *(int *)(param_1 + 0x28);
    }
    iVar5 = FUN_089f89fc(param_2,*(undefined2 *)(iVar5 + 2));
    *(int *)(param_1 + 0x90) = iVar5;
    if (iVar5 == 0) {
      *(undefined *)(param_1 + 0xe4) = 1;
      return;
    }
    iVar5 = FUN_089f70c4(*(undefined4 *)(param_1 + 0x90));
    iVar6 = FUN_089f70d0(*(undefined4 *)(param_1 + 0x90));
    if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x90) + 0xa0) + 0x2c) & 4) != 0) {
      uVar8 = *(uint *)(*(int *)(*(int *)(param_1 + 0x90) + 0xa0) + 0x2c);
      iVar5 = ((uVar8 & 0x7ff8) >> 3 ^ 0x800) - 0x800;
      iVar6 = ((uVar8 & 0x7ff8000) >> 0xf ^ 0x800) - 0x800;
    }
    if (((*(char *)(*(int *)(param_1 + 0x90) + 0xac) == '\0') ||
        (iVar7 = FUN_089f70c4(*(undefined4 *)(param_1 + 0x90)), iVar5 != iVar7)) ||
       (iVar7 = FUN_089f70d0(*(undefined4 *)(param_1 + 0x90)), iVar6 != iVar7)) {
      puVar9 = (undefined4 *)(param_1 + 0xb0);
      uVar8 = 0;
      puVar11 = &DAT_08aa4090;
      puVar10 = puVar9;
      do {
        uVar2 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar10 = *puVar11;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
        uVar8 = uVar8 + 1;
        puVar10 = puVar10 + 4;
        puVar11 = puVar11 + 4;
      } while (uVar8 < 3);
      fVar12 = (float)iVar5 * *(float *)(*(int *)(param_1 + 0x90) + 0xa4);
      *(float *)(param_1 + 0xd4) = fVar12;
      *(float *)(param_1 + 0xbc) = fVar12;
      fVar12 = *(float *)(*(int *)(param_1 + 0x90) + 0xa8);
      *(undefined4 **)(param_1 + 0xe0) = puVar9;
      fVar12 = (float)iVar6 * fVar12;
      *(float *)(param_1 + 0xd8) = fVar12;
      *(float *)(param_1 + 0xcc) = fVar12;
      zz_sceKernelDcacheWritebackRange(puVar9,0x30);
    }
  }
LAB_08a02208:
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  switch(((int)(short)param_4[3] & 0xf000U) >> 0xc) {
  case 0:
  case 1:
    break;
  case 2:
  case 3:
    *(undefined4 *)(param_1 + 0x98) = 1;
    if (((*(int *)(param_1 + 0x94) == 0) && (*(int *)(*(int *)(param_1 + 0x1c) + 0x30) != 0)) &&
       ((*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x30) + 0x94) != 0 &&
        (iVar5 = strcasecmp(*(int *)(param_1 + 0x90) + 0x18,"fab_start00"), iVar5 != 0)))) {
      *(undefined4 *)(param_1 + 0x98) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x30) + 0x98);
    }
    break;
  case 5:
  case 8:
    *(undefined4 *)(param_1 + 0x98) = 2;
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x98) = 3;
  }
  iVar5 = strstr(param_5,&DAT_08aa40d0);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x28);
  }
  else if (*(char *)(iVar5 + 2) == 'B') {
    switch(*(undefined *)(iVar5 + 3)) {
    case 0x41:
      *(undefined4 *)(param_1 + 0x98) = 2;
      break;
    case 0x4d:
      *(undefined4 *)(param_1 + 0x98) = 1;
      break;
    case 0x52:
      *(undefined4 *)(param_1 + 0x98) = 0;
      break;
    case 0x53:
      *(undefined4 *)(param_1 + 0x98) = 3;
    }
    iVar5 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x28);
  }
  if (*(short *)(iVar5 + 0xc) == 1) {
    *(float *)(param_1 + 0x60) =
         *(float *)(param_1 + 0x60) + (float)(int)*(short *)(*(int *)(param_1 + 0x28) + 8);
    *(float *)(param_1 + 100) =
         *(float *)(param_1 + 100) + (float)(int)*(short *)(*(int *)(param_1 + 0x28) + 10);
  }
  return;
}

