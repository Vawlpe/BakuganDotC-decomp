#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088b0d30(int param_1)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  piVar4 = (int *)FUN_088660c8();
  iVar5 = FUN_0884c8f4();
  if ((iVar5 != 0) || (piVar4 == (int *)0x0)) {
    return 0;
  }
  iVar5 = *piVar4;
  fVar7 = *(float *)(param_1 + 800);
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + 0x4bc);
    while( true ) {
      auVar1 = vsub_q(*(undefined (*) [16])(iVar5 + 0x20),*(undefined (*) [16])(param_1 + 0x20));
      uVar8 = vdot_t(auVar1._0_12_,auVar1._0_12_);
      fVar9 = (float)vsqrt_s(uVar8);
      if (fVar9 <= fVar7 + *(float *)(iVar6 + 0xc)) {
        uVar8 = *(undefined4 *)(iVar5 + 0x24);
        uVar2 = *(undefined4 *)(iVar5 + 0x28);
        uVar3 = *(undefined4 *)(iVar5 + 0x2c);
        *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)*(undefined (*) [16])(iVar5 + 0x20);
        *(undefined4 *)(param_1 + 0x364) = uVar8;
        *(undefined4 *)(param_1 + 0x368) = uVar2;
        *(undefined4 *)(param_1 + 0x36c) = uVar3;
        uVar8 = *(undefined4 *)(iVar5 + 0x84);
        uVar2 = *(undefined4 *)(iVar5 + 0x88);
        uVar3 = *(undefined4 *)(iVar5 + 0x8c);
        *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(iVar5 + 0x80);
        *(undefined4 *)(param_1 + 0x374) = uVar8;
        *(undefined4 *)(param_1 + 0x378) = uVar2;
        *(undefined4 *)(param_1 + 0x37c) = uVar3;
        *(int *)(param_1 + 0x158) = iVar5;
        return 1;
      }
      iVar5 = *(int *)(iVar5 + 4);
      if (iVar5 == 0) break;
      iVar6 = *(int *)(iVar5 + 0x4bc);
    }
  }
  iVar5 = DAT_08b00870;
  do {
    while( true ) {
      if (iVar5 == 0) {
        return 0;
      }
      fVar9 = (float)FUN_08877a30(iVar5);
      iVar6 = FUN_088779f8(iVar5);
      if (iVar6 != 0) break;
      auVar1 = vsub_q(*(undefined (*) [16])(iVar5 + 0x60),*(undefined (*) [16])(param_1 + 0x20));
      uVar8 = vdot_t(auVar1._0_12_,auVar1._0_12_);
      fVar10 = (float)vsqrt_s(uVar8);
      if (fVar10 <= fVar9 + fVar7) {
        uVar8 = *(undefined4 *)(iVar5 + 100);
        uVar2 = *(undefined4 *)(iVar5 + 0x68);
        uVar3 = *(undefined4 *)(iVar5 + 0x6c);
        *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)*(undefined (*) [16])(iVar5 + 0x60);
        *(undefined4 *)(param_1 + 0x364) = uVar8;
        *(undefined4 *)(param_1 + 0x368) = uVar2;
        *(undefined4 *)(param_1 + 0x36c) = uVar3;
        uVar8 = *(undefined4 *)(iVar5 + 0x74);
        uVar2 = *(undefined4 *)(iVar5 + 0x78);
        uVar3 = *(undefined4 *)(iVar5 + 0x7c);
        *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(iVar5 + 0x70);
        *(undefined4 *)(param_1 + 0x374) = uVar8;
        *(undefined4 *)(param_1 + 0x378) = uVar2;
        *(undefined4 *)(param_1 + 0x37c) = uVar3;
        *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(iVar5 + 0xb0);
        return 1;
      }
LAB_088b0e80:
      iVar5 = *(int *)(iVar5 + 4);
    }
    if (*(int *)(iVar5 + 0xc0) != 0) {
      auVar1 = vsub_q(*(undefined (*) [16])(*(int *)(iVar5 + 0xc0) + 0x60),
                      *(undefined (*) [16])(param_1 + 0x20));
      uVar8 = vdot_t(auVar1._0_12_,auVar1._0_12_);
      fVar10 = (float)vsqrt_s(uVar8);
      if (fVar10 <= fVar9 + fVar7) {
        uVar8 = *(undefined4 *)(iVar5 + 100);
        uVar2 = *(undefined4 *)(iVar5 + 0x68);
        uVar3 = *(undefined4 *)(iVar5 + 0x6c);
        *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(iVar5 + 0x60);
        *(undefined4 *)(param_1 + 0x364) = uVar8;
        *(undefined4 *)(param_1 + 0x368) = uVar2;
        *(undefined4 *)(param_1 + 0x36c) = uVar3;
        uVar8 = *(undefined4 *)(iVar5 + 0x74);
        uVar2 = *(undefined4 *)(iVar5 + 0x78);
        uVar3 = *(undefined4 *)(iVar5 + 0x7c);
        *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(iVar5 + 0x70);
        *(undefined4 *)(param_1 + 0x374) = uVar8;
        *(undefined4 *)(param_1 + 0x378) = uVar2;
        *(undefined4 *)(param_1 + 0x37c) = uVar3;
        *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(iVar5 + 0xb0);
        return 1;
      }
      goto LAB_088b0e80;
    }
    iVar5 = *(int *)(iVar5 + 4);
  } while( true );
}

