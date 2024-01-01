#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b7cdc(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  
  if (*param_1 != 0) {
    uVar12 = FUN_088b7b1c(param_1,*param_1 + 0x20,param_1 + 0x208);
    puVar5 = (undefined4 *)((ulonglong)uVar12 >> 0x20);
    piVar4 = (int *)uVar12;
    iVar6 = *piVar4;
    uVar1 = *(undefined4 *)(iVar6 + 0x24);
    uVar2 = *(undefined4 *)(iVar6 + 0x28);
    uVar3 = *(undefined4 *)(iVar6 + 0x2c);
    *puVar5 = *(undefined4 *)(iVar6 + 0x20);
    puVar5[1] = uVar1;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    iVar7 = 0;
    iVar6 = 0;
    do {
      if (*(int *)(piVar4[0x20c] + iVar6) != 0) {
        if (*(char *)(piVar4 + 0x205) == '\0') {
          iVar8 = piVar4[0x20c];
LAB_088b7dc8:
          pfVar9 = (float *)(*(int *)(iVar8 + iVar6) + 0xbc);
          *pfVar9 = *pfVar9 - 0.01;
        }
        else {
          if (*(float *)(*(int *)(piVar4[0x20c] + iVar6) + 0x90) <= 0.0) {
            iVar8 = piVar4[0x20c];
            goto LAB_088b7dc8;
          }
          *(undefined4 *)(*(int *)(piVar4[0x20c] + iVar6) + 0xbc) = 0x3dcccccd;
          pfVar9 = (float *)(*(int *)(piVar4[0x20c] + iVar6) + 0x90);
          *pfVar9 = *pfVar9 - 1.0;
        }
        fVar10 = *(float *)(*(int *)(piVar4[0x20c] + iVar6) + 0xbc);
        if (fVar10 < 0.0) {
          fVar11 = 0.0;
        }
        else {
          fVar11 = 0.15;
          if (fVar10 <= 0.15) {
            fVar11 = fVar10;
          }
        }
        *(float *)(*(int *)(piVar4[0x20c] + iVar6) + 0xbc) = fVar11;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar7 < 0xc0);
  }
  return;
}

