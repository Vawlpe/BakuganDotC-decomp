#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890cb40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  if (*(char *)(param_1 + 0x238) != '\0') {
    iVar2 = 0;
    if ((*(byte *)(DAT_08ac5928 + 5) & 0x40) != 0) {
      iVar3 = -1;
      iVar1 = 0xb;
      piVar6 = (int *)(*(int *)(DAT_08ac0e80 + 4) + 0x2c);
      iVar5 = 0x7fffffff;
      do {
        iVar7 = (int)*(float *)(*piVar6 + 0x9c);
        if ((int)*(float *)(*piVar6 + 0x80) == 2) {
          if (iVar7 < iVar5) {
            iVar2 = iVar2 + 1;
            iVar3 = iVar1;
            iVar5 = iVar7;
          }
          else {
            iVar2 = iVar2 + 1;
          }
        }
        iVar1 = iVar1 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar1 < 0x11);
      if (iVar3 == -1) {
        fVar9 = 0.0;
        iVar5 = 0xb;
        piVar6 = (int *)(*(int *)(DAT_08ac0e80 + 4) + 0x2c);
        iVar3 = -1;
        do {
          fVar8 = *(float *)(*piVar6 + 0x98);
          if ((int)*(float *)(*piVar6 + 0x80) == 10) {
            iVar1 = iVar5;
            if (fVar8 <= fVar9) {
              iVar1 = iVar3;
              fVar8 = fVar9;
            }
            iVar2 = iVar2 + 1;
            iVar3 = iVar1;
            fVar9 = fVar8;
          }
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar5 < 0x11);
        if (iVar3 != -1) {
          pfVar4 = (float *)(*(int *)(*(int *)(DAT_08ac0e80 + 4) + iVar3 * 4) + 0x80);
          *pfVar4 = *pfVar4 + 1.0;
          *(undefined *)(param_1 + 0x239) = 1;
        }
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(DAT_08ac0e80 + 4) + iVar3 * 4) + 0x9c) = 0;
        *(undefined *)(param_1 + 0x239) = 1;
      }
    }
    if (5 < iVar2) {
      iVar3 = 0xb;
      iVar2 = 0x2c;
      do {
        fVar9 = (float)((iVar3 + -0xb) * 0x50);
        if (2 < iVar3 + -0xb) {
          fVar9 = fVar9 + 240.0;
        }
        iVar3 = iVar3 + 1;
        *(float *)(*(int *)(*(int *)(DAT_08ac0e80 + 4) + iVar2) + 0x9c) = fVar9;
        iVar2 = iVar2 + 4;
      } while (iVar3 < 0x11);
    }
    iVar2 = 0xb;
    iVar3 = 0x2c;
    do {
      FUN_0890c138(param_1,*(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + iVar3),iVar2 + -0xb);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < 0x11);
  }
  return;
}

