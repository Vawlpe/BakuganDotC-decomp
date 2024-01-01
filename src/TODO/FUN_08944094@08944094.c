#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08944094(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_V7C;
  
  iVar3 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x24);
  iVar2 = iVar3 / 2;
  fVar6 = 0.0;
  if (iVar2 < 0x1e) {
    fVar6 = -1.0;
  }
  else if (0x59 < iVar2) {
    fVar6 = -1.0;
  }
  if (fVar6 != 0.0) {
    uVar7 = vmul_s((float)iVar2 * 0.05235988,in_V7C);
    fVar6 = (float)vcos_s(uVar7);
    fVar6 = fVar6 * 3.0;
    fVar6 = fVar6 * fVar6 * fVar6 * fVar6 * fVar6;
  }
  if ((iVar5 != 0) && (iVar1 = 0, 0 < *(int *)(param_1 + 0x28))) {
    do {
      uVar7 = vmul_s((float)iVar2 * 0.1047198,in_V7C);
      fVar8 = (float)vcos_s(uVar7);
      *(float *)(iVar5 + 100) = fVar8 * fVar6 + 136.0;
      fVar8 = *(float *)(param_1 + 0x1c);
      if (*(float *)(iVar5 + 0xbc) == fVar8) {
        iVar3 = *(int *)(param_1 + 0x28);
      }
      else {
        if (fVar8 == 0.0) {
          *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
          uVar7 = *(undefined4 *)(param_1 + 0x1c);
LAB_089441fc:
          *(undefined4 *)(iVar5 + 0xbc) = uVar7;
        }
        else {
          if (*(float *)(iVar5 + 0xbc) == 0.0) {
            *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
            uVar7 = *(undefined4 *)(param_1 + 0x1c);
            goto LAB_089441fc;
          }
          *(float *)(iVar5 + 0xbc) = fVar8;
        }
        iVar3 = *(int *)(param_1 + 0x28);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 8;
      iVar5 = iVar5 + 0x160;
    } while (iVar1 < iVar3);
    iVar3 = *(int *)(param_1 + 0x18);
  }
  uVar4 = iVar3 + 1;
  if (*(int *)(DAT_08ac5934 + 0x1c) == 0) {
    *(uint *)(param_1 + 0x18) = uVar4;
    if ((uVar4 & 1) != 0) {
      uVar4 = iVar3 + 2;
      *(uint *)(param_1 + 0x18) = uVar4;
    }
  }
  else {
    *(uint *)(param_1 + 0x18) = uVar4;
    uVar4 = iVar3 + 2;
    *(uint *)(param_1 + 0x18) = uVar4;
  }
  if (0xef < (int)uVar4) {
    do {
      uVar4 = uVar4 - 0xf0;
    } while (0xef < (int)uVar4);
    *(uint *)(param_1 + 0x18) = uVar4;
  }
  return;
}

