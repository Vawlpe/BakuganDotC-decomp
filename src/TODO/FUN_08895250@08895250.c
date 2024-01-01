#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08895250(int param_1)

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
  
  if ((*(char *)(param_1 + 0x74) == '\0') &&
     (fVar7 = *(float *)(param_1 + 0x70) + 0.03333334, *(float *)(param_1 + 0x70) = fVar7,
     *(float *)(param_1 + 0x6c) <= fVar7)) {
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x74) = 1;
  }
  uVar4 = *(uint *)(param_1 + 0x60);
  if (4 < uVar4) {
    uVar4 = *(uint *)(param_1 + 0x68);
    goto LAB_088954a0;
  }
  if (uVar4 == 1) {
LAB_08895314:
    uVar5 = FUN_089bedc4(DAT_08abd0b4);
    uVar6 = FUN_089bee24();
    uVar6 = vmul_s(uVar6,in_V7C);
    auVar2 = vrot_q(uVar6,1,0,2,0);
    uStack_24 = auVar2._12_4_;
    auVar1 = vscl_t(auVar2._0_12_,uVar5);
    auVar1 = vadd_t(auVar1,*(undefined (*) [12])(*(int *)(param_1 + 0x9c) + 0x20));
    local_30 = auVar1._0_4_;
    uStack_2c = auVar1._4_4_;
    uStack_28 = auVar1._8_4_;
    FUN_0888f82c(param_1,&local_30);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  else if (uVar4 == 2) {
    if (*(char *)(param_1 + 0x74) == '\0') {
      uVar4 = *(uint *)(param_1 + 0x68);
    }
    else {
      *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfffffffe;
      uVar4 = *(uint *)(param_1 + 0x68);
    }
    if (((uVar4 & 1) == 0) &&
       ((*(int *)(param_1 + 0x96c) != 0 || (*(char *)(*(int *)(param_1 + 0x9c) + 0x4c1) == '\0'))))
    {
      *(undefined4 *)(param_1 + 0x60) = 4;
    }
    else {
      iVar3 = FUN_0889367c(param_1 + 0x2d8);
      if (iVar3 != 0) {
        uVar4 = *(uint *)(param_1 + 0x68);
        goto LAB_088954a0;
      }
      *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfffffffe;
      *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined *)(param_1 + 0x74) = 0;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    }
  }
  else {
    if (uVar4 != 3) {
      if (uVar4 == 4) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x7c) = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
        *(undefined *)(param_1 + 0x84) = 1;
        *(undefined4 *)(param_1 + 0x88) = 0;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(undefined *)(param_1 + 0x95) = 0;
        *(undefined4 *)(param_1 + 0x9c) = 0;
        return;
      }
      *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 1;
      *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined *)(param_1 + 0x74) = 0;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      goto LAB_08895314;
    }
    if ((*(int *)(param_1 + 0x96c) == 0) && (*(char *)(*(int *)(param_1 + 0x9c) + 0x4c1) != '\0')) {
      if (*(char *)(param_1 + 0x74) != '\0') {
        *(undefined4 *)(param_1 + 0x60) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 4;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x68);
LAB_088954a0:
  if (((uVar4 & 1) == 0) && (iVar3 = FUN_088936a0(param_1), iVar3 != 0)) {
    FUN_0888cfe4(param_1 + 0x2d8);
  }
  FUN_08894c40(param_1);
  return;
}

