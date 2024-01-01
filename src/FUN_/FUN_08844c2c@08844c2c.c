#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08844c2c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 in_V7C;
  
  FUN_088440a8();
  iVar4 = *(int *)(param_1 + 0xb4);
  iVar5 = *(int *)(*(int *)(param_1 + 0x48) + 0xc);
  if (5 < iVar4) {
LAB_08844c94:
    if (iVar4 != 99) {
      return;
    }
    FUN_0882c2cc(7,0);
    FUN_0882c2cc(8,1);
    *(undefined4 *)(param_1 + 0xb0) = 4;
    FUN_08840144(param_1);
    iVar4 = FUN_0884b248();
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
      return;
    }
    uVar3 = FUN_0884b268();
    iVar4 = FUN_0884c830(uVar3);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 9;
    }
    *(undefined4 *)(param_1 + 0xb4) = 0;
    return;
  }
  if (iVar4 < 0) {
    return;
  }
  if (iVar4 == 0) {
    FUN_089c2fbc(0x29fc);
    iVar4 = *(int *)(*(int *)(param_1 + 0x48) + 8);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
    uVar3 = *(undefined4 *)(iVar5 + 100);
    uVar1 = *(undefined4 *)(iVar5 + 0x68);
    uVar2 = *(undefined4 *)(iVar5 + 0x6c);
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(iVar5 + 0x60);
    *(undefined4 *)(param_1 + 0x334) = uVar3;
    *(undefined4 *)(param_1 + 0x338) = uVar1;
    *(undefined4 *)(param_1 + 0x33c) = uVar2;
    *(undefined4 *)(param_1 + 0xad4) = 0xfffffe98;
    *(undefined4 *)(param_1 + 0xad8) = 0;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3c0) + 0xbc) = 0;
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    *(undefined4 *)(iVar5 + 0xbc) = 0;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
LAB_08844d9c:
    iVar4 = *(int *)(param_1 + 0xad8) + 1;
    *(int *)(param_1 + 0xad8) = iVar4;
    fVar6 = (float)iVar4 * 0.04166667 - 1.0;
    uVar3 = vmul_s((1.0 - fVar6 * fVar6) * 3.141593,in_V7C);
    fVar6 = (float)vcos_s(uVar3);
    *(float *)(iVar5 + 0x60) =
         *(float *)(param_1 + 0x330) +
         (float)*(int *)(param_1 + 0xad4) * (1.0 - (1.0 - fVar6) * 0.5);
    *(float *)(iVar5 + 0xbc) = *(float *)(iVar5 + 0xbc) + 0.05;
    *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3c0) + 0xbc) = *(float *)(iVar5 + 0xbc) * 0.8;
    if (1.0 <= *(float *)(iVar5 + 0xbc)) {
      *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
    }
    if (0x13 < *(int *)(param_1 + 0xad8)) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3c0) + 0xbc) = 0x3f4ccccd;
      *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(param_1 + 0x330);
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    }
    return;
  }
  if (iVar4 == 1) goto LAB_08844d9c;
  if (iVar4 == 2) {
    *(undefined4 *)(param_1 + 0xad8) = 0x1e;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
LAB_08844e8c:
    iVar4 = *(int *)(param_1 + 0xad8) + -1;
    *(int *)(param_1 + 0xad8) = iVar4;
    if (0 < iVar4) {
      return;
    }
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  }
  else {
    if (iVar4 == 3) goto LAB_08844e8c;
    if (iVar4 != 4) {
      if (iVar4 != 5) goto LAB_08844c94;
      goto LAB_08844fa4;
    }
  }
  *(undefined4 *)(param_1 + 0xad4) = 0x168;
  *(undefined4 *)(param_1 + 0xad8) = 0;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
LAB_08844fa4:
  iVar4 = *(int *)(param_1 + 0xad8) + 1;
  *(int *)(param_1 + 0xad8) = iVar4;
  fVar6 = (float)iVar4 * 0.04166667 - 1.0;
  uVar3 = vmul_s((1.0 - fVar6 * fVar6) * 3.141593,in_V7C);
  fVar6 = (float)vcos_s(uVar3);
  *(float *)(iVar5 + 0x60) =
       *(float *)(param_1 + 0x330) + (float)*(int *)(param_1 + 0xad4) * (1.0 - fVar6) * 0.5;
  *(float *)(iVar5 + 0xbc) = *(float *)(iVar5 + 0xbc) - 0.12;
  *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3c0) + 0xbc) = *(float *)(iVar5 + 0xbc) * 0.8;
  if (0.0 < *(float *)(iVar5 + 0xbc)) {
    return;
  }
  *(undefined4 *)(iVar5 + 0xbc) = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0x3c0);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3c0) + 0xbc) = 0;
  *(float *)(iVar5 + 0x60) = *(float *)(param_1 + 0x330) + (float)*(int *)(param_1 + 0xad4);
  *(undefined4 *)(param_1 + 0xb4) = 99;
  return;
}

