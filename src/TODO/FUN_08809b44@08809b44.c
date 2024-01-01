#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08809b44(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = param_1;
  do {
    iVar1 = FUN_0881a300(0x21,iVar3 + 4);
    iVar6 = *(int *)(*(int *)(param_1 + 0x20) + iVar4 + 0x10);
    *(float *)(iVar6 + 0x68) = (float)(int)*(short *)(iVar1 + 4);
    if (iVar3 == *(int *)(param_1 + 0x28)) {
      *(undefined4 *)(iVar6 + 0xd4) = *(undefined4 *)(param_1 + 0x38);
      fVar8 = 1.1;
      if (*(float *)(iVar5 + 0x3c) < 1.1) {
        fVar8 = *(float *)(iVar5 + 0x3c) + 0.02;
      }
      *(float *)(iVar5 + 0x3c) = fVar8;
      *(float *)(iVar6 + 0x68) = *(float *)(iVar6 + 0x68) - 10.0;
    }
    else {
      *(undefined4 *)(iVar6 + 0xd4) = *(undefined4 *)(param_1 + 0x34);
      if (1.0 < *(float *)(iVar5 + 0x3c)) {
        fVar8 = *(float *)(iVar5 + 0x3c) - 0.02;
      }
      else {
        fVar8 = 1.0;
      }
      *(float *)(iVar5 + 0x3c) = fVar8;
    }
    FUN_089f46dc(iVar6);
    FUN_089f4954(*(undefined4 *)(iVar5 + 0x3c),*(undefined4 *)(iVar5 + 0x3c),0,iVar6,0);
    *(undefined4 *)(iVar6 + 0xc0) = in_V72;
    *(undefined4 *)(iVar6 + 0xc4) = in_V76;
    *(undefined4 *)(iVar6 + 200) = in_V7A;
    *(undefined4 *)(iVar6 + 0xcc) = in_V7E;
    iVar1 = FUN_0881a300(0x21,iVar3 + 0xc);
    iVar6 = *(int *)(*(int *)(param_1 + 0x20) + iVar4 + 0x30);
    *(float *)(iVar6 + 0x68) = (float)(int)*(short *)(iVar1 + 4);
    if (iVar3 == *(int *)(param_1 + 0x28)) {
      pfVar2 = (float *)(iVar6 + 0x68);
      *pfVar2 = *pfVar2 - 10.0;
    }
    iVar1 = FUN_0881a300(0x21,iVar3 + 0x13);
    iVar6 = *(int *)(*(int *)(param_1 + 0x20) + iVar4 + 0x4c);
    *(float *)(iVar6 + 0x68) = (float)(int)*(short *)(iVar1 + 4);
    pfVar2 = (float *)(iVar6 + 0x68);
    if (iVar3 == *(int *)(param_1 + 0x28)) {
      *pfVar2 = *pfVar2 - 10.0;
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + 4;
  } while (iVar3 < 7);
  iVar5 = FUN_0881a300(0x21,*(int *)(param_1 + 0x28) + 4);
  iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 0x2c);
  FUN_089f4594(iVar3);
  *(float *)(iVar3 + 100) = (float)(int)*(short *)(iVar5 + 2);
  FUN_089f46dc(iVar3);
  uVar7 = *(undefined4 *)(param_1 + *(int *)(param_1 + 0x28) * 4 + 0x3c);
  FUN_089f4954(uVar7,uVar7,0,iVar3,0);
  iVar5 = FUN_0881a300(0x21,0xb);
  *(float *)(iVar3 + 0x68) = (float)(*(short *)(iVar5 + 4) + -10);
  iVar5 = *(int *)(param_1 + 0x2c) % 0x3c;
  if (0x1d < iVar5) {
    iVar5 = 0x3c - iVar5;
  }
  *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
  fVar8 = (float)(0x1e - iVar5) * 0.03333334 * 0.5 + 0.5;
  *(float *)(iVar3 + 0xb0) = fVar8;
  *(float *)(iVar3 + 0xb4) = fVar8;
  *(float *)(iVar3 + 0xb8) = fVar8;
  iVar5 = *(int *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x28) * 4 + 0x10);
  *(float *)(iVar5 + 0xc0) = fVar8 * 0.5;
  *(float *)(iVar5 + 0xc4) = fVar8 * 0.5;
  *(undefined4 *)(iVar5 + 200) = 0;
  *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
  return;
}

