#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088a60b0(int param_1)

{
  undefined auVar1 [16];
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  piVar2 = (int *)FUN_088660c8();
  iVar3 = FUN_0884c8f4();
  if ((iVar3 == 0) && (piVar2 != (int *)0x0)) {
    iVar3 = *piVar2;
    fVar5 = *(float *)(param_1 + 0x214) * *(float *)(param_1 + 0x214);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0x14);
      do {
        iVar4 = (**(code **)(iVar4 + 0x54))(iVar3 + *(short *)(iVar4 + 0x50));
        if (iVar4 == 0) {
          iVar4 = (**(code **)(*(int *)(iVar3 + 0x14) + 100))
                            (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x60));
          if (iVar4 != 0) {
            iVar4 = *(int *)(iVar3 + 0x4bc);
            goto LAB_088a6144;
          }
          iVar3 = *(int *)(iVar3 + 4);
        }
        else {
          iVar4 = *(int *)(iVar3 + 0x4bc);
LAB_088a6144:
          auVar1 = vsub_q(*(undefined (*) [16])(iVar3 + 0x250),*(undefined (*) [16])(param_1 + 0x20)
                         );
          fVar6 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
          if (fVar6 <= fVar5 + *(float *)(iVar4 + 0xc) * *(float *)(iVar4 + 0xc)) {
            *(int *)(param_1 + 0x158) = iVar3;
            return 1;
          }
          iVar3 = *(int *)(iVar3 + 4);
        }
        if (iVar3 == 0) break;
        iVar4 = *(int *)(iVar3 + 0x14);
      } while( true );
    }
    iVar3 = DAT_08b00870;
    while (iVar3 != 0) {
      fVar6 = (float)FUN_08877a30(iVar3);
      iVar4 = FUN_088779f8(iVar3);
      if (iVar4 == 0) {
        auVar1 = vsub_q(*(undefined (*) [16])(iVar3 + 0x60),*(undefined (*) [16])(param_1 + 0x20));
        fVar7 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
        if (fVar7 <= fVar6 * fVar6 + fVar5) {
          *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(iVar3 + 0xb0);
          return 1;
        }
        iVar3 = *(int *)(iVar3 + 4);
      }
      else if (*(int *)(iVar3 + 0xc0) == 0) {
        iVar3 = *(int *)(iVar3 + 4);
      }
      else {
        auVar1 = vsub_q(*(undefined (*) [16])(*(int *)(iVar3 + 0xc0) + 0x60),
                        *(undefined (*) [16])(param_1 + 0x20));
        fVar7 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
        if (fVar7 <= fVar6 * fVar6 + fVar5) {
          *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(iVar3 + 0xb0);
          return 1;
        }
        iVar3 = *(int *)(iVar3 + 4);
      }
    }
  }
  return 0;
}

