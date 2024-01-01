#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089451bc(int param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  FUN_08945130();
  iVar7 = DAT_08ac1be8 - *(int *)(param_1 + 0xdc);
  uVar1 = 0;
  iVar5 = param_1;
  do {
    iVar2 = *(int *)(iVar5 + 0x104);
    uVar6 = uVar1 + 1;
    if (iVar2 < 2) {
      if ((-1 < iVar2) && (0 < iVar2)) {
        iVar2 = (uVar1 + 10) * 4;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
        if ((uVar1 & 1) == 0) {
          pfVar3 = (float *)(iVar4 + 0x60);
          *pfVar3 = *pfVar3 + 4.0;
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
        }
        else {
          pfVar3 = (float *)(iVar4 + 0x60);
          *pfVar3 = *pfVar3 - 4.0;
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
        }
        *(float *)(iVar2 + 0xbc) = *(float *)(iVar2 + 0xbc) + 0.125;
        if ((int)(iVar7 + 0xb + uVar1 * DAT_08ac1bec) <= *(int *)(param_1 + 0x74)) {
          *(undefined4 *)(iVar5 + 0x104) = 2;
        }
      }
    }
    else if (iVar2 < 3) {
      if ((int)(iVar7 + -5 + DAT_08ac1bec * uVar6) <= *(int *)(param_1 + 0x74)) {
        *(undefined4 *)(iVar5 + 0x104) = 3;
      }
    }
    else if (iVar2 < 4) {
      iVar2 = (uVar1 + 10) * 4;
      fVar9 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
      fVar10 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
      fVar11 = (float)FUN_089f494c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
      uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2);
      fVar12 = (float)FUN_089f494c(uVar8);
      FUN_089f4924(fVar9 + fVar10 * 0.1 * 0.125,fVar11 + fVar12 * 0.1 * 0.125,uVar8);
      pfVar3 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0xbc);
      *pfVar3 = *pfVar3 - 0.125;
      if ((int)(iVar7 + 3 + DAT_08ac1bec * uVar6) <= *(int *)(param_1 + 0x74)) {
        iVar4 = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(iVar5 + 0x104) = 0;
        iVar2 = *(int *)(iVar4 + iVar2);
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      }
    }
    iVar5 = iVar5 + 8;
    uVar1 = uVar6;
  } while ((int)uVar6 < 0xd);
  return;
}

