#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890e624(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 in_V7C;
  
  uVar4 = FUN_089f2178(0x459f6000);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar4);
  }
  uVar3 = DAT_08b0019c;
  uVar2 = DAT_08b00198;
  uVar4 = DAT_08b00194;
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar5 = *(int *)(param_1 + 0x2c);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x74);
    *(undefined4 *)(iVar5 + 0xc0) = DAT_08b00190;
    *(undefined4 *)(iVar5 + 0xc4) = uVar4;
    *(undefined4 *)(iVar5 + 200) = uVar2;
    *(undefined4 *)(iVar5 + 0xcc) = uVar3;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0xcc) = *(undefined4 *)(param_1 + 0x78);
    iVar5 = *(int *)(*(int *)(param_1 + 0x74) + 0x74);
    (**(code **)(iVar5 + 0x14))
              (0x43700000,0x43000000,0,*(int *)(param_1 + 0x74) + (int)*(short *)(iVar5 + 0x10),
               &DAT_08ac0e88,1,0,1);
    iVar5 = *(int *)(param_1 + 0x74);
    iVar6 = *(int *)(iVar5 + 0x74);
    sVar1 = *(short *)(iVar6 + 0x28);
    uVar4 = FUN_089f2178(0x45abe000);
    (**(code **)(iVar6 + 0x2c))(iVar5 + sVar1,uVar4);
    iVar5 = *(int *)(param_1 + 0x2c);
  }
  if (2 < iVar5) {
    uVar4 = vmul_s(*(float *)(param_1 + 0x80) * 3.141593,in_V7C);
    fVar7 = (float)vcos_s(uVar4);
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)(*(int *)(param_1 + 0x7c) == 0) * 4 + 0x20);
    *(undefined4 *)(iVar5 + 0xc0) = 0;
    *(undefined4 *)(iVar5 + 0xc4) = 0;
    *(undefined4 *)(iVar5 + 200) = 0;
    *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)(*(int *)(param_1 + 0x7c) != 0) * 4 + 0x20);
    fVar7 = 0.3 - (1.0 - fVar7) * 0.5 * 0.3;
    *(float *)(iVar5 + 0xc0) = fVar7;
    *(float *)(iVar5 + 0xc4) = fVar7;
    *(undefined4 *)(iVar5 + 200) = 0;
    *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
    *(float *)(iVar5 + 0xc0) = fVar7;
    *(float *)(iVar5 + 0xc4) = fVar7;
    *(float *)(iVar5 + 200) = fVar7;
    *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
    if (*(int *)(DAT_08ac5934 + 0x1c) == 0) {
      *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) + 0.04;
    }
    else {
      *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) + 0.08;
    }
  }
  return;
}

