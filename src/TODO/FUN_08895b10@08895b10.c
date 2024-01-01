#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08895b10(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 in_V7C;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((*(char *)(param_1 + 0x114) == '\0') &&
     (fVar7 = *(float *)(param_1 + 0x110) + 0.03333334, *(float *)(param_1 + 0x110) = fVar7,
     *(float *)(param_1 + 0x10c) <= fVar7)) {
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x10c);
    *(undefined *)(param_1 + 0x114) = 1;
  }
  iVar3 = *(int *)(param_1 + 0x100);
  if (iVar3 < 2) {
    if (iVar3 < 0) {
      uVar4 = *(uint *)(param_1 + 0x108);
      goto LAB_08895cb0;
    }
    if (iVar3 < 1) {
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
      *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 1;
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0x3f800000;
      *(undefined *)(param_1 + 0x114) = 0;
    }
    uVar5 = FUN_089bedc4(0x44fa0000);
    uVar6 = FUN_089bee24();
    uVar6 = vmul_s(uVar6,in_V7C);
    auVar2 = vrot_q(uVar6,1,0,2,0);
    uStack_24 = auVar2._12_4_;
    auVar1 = vscl_t(auVar2._0_12_,uVar5);
    auVar1 = vadd_t(auVar1,*(undefined (*) [12])(param_1 + 0x140));
    local_30 = auVar1._0_4_;
    uStack_2c = auVar1._4_4_;
    uStack_28 = auVar1._8_4_;
    FUN_0888f82c(param_1,&local_30);
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  }
  else if (iVar3 < 3) {
    if (*(char *)(param_1 + 0x114) != '\0') {
      *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) & 0xfffffffe;
    }
    iVar3 = FUN_0889367c(param_1 + 0x2d8);
    if (iVar3 != 0) {
      uVar4 = *(uint *)(param_1 + 0x108);
      goto LAB_08895cb0;
    }
    *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x10c) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined *)(param_1 + 0x114) = 0;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  }
  else {
    if (3 < iVar3) {
      uVar4 = *(uint *)(param_1 + 0x108);
      goto LAB_08895cb0;
    }
    if (*(char *)(param_1 + 0x114) != '\0') {
      *(undefined4 *)(param_1 + 0x100) = 1;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x108);
LAB_08895cb0:
  if ((uVar4 & 1) == 0) {
    FUN_088936a0(param_1);
  }
  FUN_08894c40(param_1);
  if (*(int *)(param_1 + 0x96c) != 0) {
    (**(code **)(*(int *)(param_1 + 0x138) + 0xc))
              (param_1 + 0xf0 + (int)*(short *)(*(int *)(param_1 + 0x138) + 8));
  }
  return;
}

