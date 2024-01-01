#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882f3d8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 in_V7F;
  
  uVar1 = FUN_0880cc48();
  iVar2 = FUN_0880d0ac(uVar1,2);
  iVar4 = 3;
  if (iVar2 == -1) {
    FUN_0882f184(param_1,999,999);
    iVar4 = 3;
    iVar2 = 0xc;
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0x14) + iVar2);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
      iVar5 = *(int *)(*(int *)(param_1 + 0x14) + iVar2);
      *(undefined4 *)(iVar5 + 0xb0) = 0;
      *(undefined4 *)(iVar5 + 0xb4) = 0;
      *(undefined4 *)(iVar5 + 0xb8) = 0;
      *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar4 < 10);
  }
  else {
    iVar5 = 0xc;
    do {
      iVar4 = iVar4 + 1;
      iVar6 = *(int *)(*(int *)(param_1 + 0x14) + iVar5);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < 10);
    FUN_0882f184(param_1,iVar2 / 0x3c,iVar2 % 0x3c);
  }
  iVar2 = FUN_0882c220(0xb);
  if (((iVar2 != 0) && (*(int *)(param_1 + 0x18) != 0)) &&
     (pfVar3 = (float *)(*(int *)(param_1 + 0x18) + 100),
     *pfVar3 = *pfVar3 + (float)(*(int *)(DAT_08ac5934 + 0x1c) + 1),
     200.0 < *(float *)(*(int *)(param_1 + 0x18) + 100))) {
    uVar1 = vrndf1_s();
    fVar7 = (float)vsub_s(uVar1,in_V7F);
    *(float *)(*(int *)(param_1 + 0x18) + 100) = fVar7 * 128.0 + -128.0;
    *(float *)(*(int *)(param_1 + 0x1c) + 100) = *(float *)(*(int *)(param_1 + 0x18) + 100) - 8.0;
  }
  return;
}

