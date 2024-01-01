#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08906bf0(int param_1,int param_2)

{
  undefined auVar1 [12];
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined local_30 [12];
  
  iVar5 = 0;
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x18);
  do {
    iVar5 = iVar5 + 1;
    if (*(int *)(iVar3 + 4) == *(int *)(param_1 + 0x20)) {
      piVar4 = (int *)(*(int *)(param_1 + 0x18) + iVar2);
      goto LAB_08906c44;
    }
    iVar2 = iVar2 + 0xc;
    iVar3 = iVar3 + 0xc;
  } while (iVar5 < 8);
  piVar4 = (int *)0x0;
LAB_08906c44:
  if ((piVar4 != (int *)0x0) && (param_2 < *piVar4)) {
    iVar3 = piVar4[2] + param_2 * 0x34;
    fVar7 = *(float *)(iVar3 + 4);
    fVar10 = *(float *)(iVar3 + 8);
    fVar9 = *(float *)(iVar3 + 0xc);
    fVar8 = *(float *)(iVar3 + 0x10);
    fVar6 = *(float *)(iVar3 + 0x14);
    uVar11 = *(undefined4 *)(iVar3 + 0x18);
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_088ff3f4(local_30);
      auVar1._4_4_ = fVar10 * 0.1;
      auVar1._0_4_ = fVar7 * 0.1;
      auVar1._8_4_ = fVar9 * 0.1;
      auVar1 = vadd_t(auVar1,local_30);
      iVar3 = *(int *)(param_1 + 0x1c);
      *(int *)(iVar3 + 0x20) = auVar1._0_4_;
      *(int *)(iVar3 + 0x24) = auVar1._4_4_;
      *(int *)(iVar3 + 0x28) = auVar1._8_4_;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      if (*(uint *)(*(int *)(param_1 + 0x1c) + 8) < 0x58) {
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      else {
        if (*(uint *)(*(int *)(param_1 + 0x1c) + 8) < 0x6c) {
          if (*(int *)(param_1 + 0x24) == 0x16) {
            *(float *)(*(int *)(param_1 + 0x1c) + 0x30) = fVar8 + 3.141593;
            fVar6 = 1.570796 - fVar6;
            if (3.141593 < fVar6) {
              fVar6 = fVar6 - 6.283185;
            }
            else if (fVar6 <= -3.141593) {
              fVar6 = fVar6 + 6.283185;
            }
            *(float *)(*(int *)(param_1 + 0x1c) + 0x34) = fVar6;
            return;
          }
          *(float *)(*(int *)(param_1 + 0x1c) + 0x38) = fVar8;
          return;
        }
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      *(float *)(iVar3 + 0x30) = fVar8;
      *(float *)(iVar3 + 0x34) = fVar6;
      *(undefined4 *)(iVar3 + 0x38) = uVar11;
      *(undefined4 *)(iVar3 + 0x3c) = 0;
      fVar6 = 1.570796 - fVar6;
      if (3.141593 < fVar6) {
        fVar6 = fVar6 - 6.283185;
      }
      else if (fVar6 <= -3.141593) {
        fVar6 = fVar6 + 6.283185;
      }
      *(float *)(*(int *)(param_1 + 0x1c) + 0x34) = fVar6;
    }
  }
  return;
}

