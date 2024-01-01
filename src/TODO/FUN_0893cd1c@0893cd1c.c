#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0893cd1c(int param_1,char param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  cVar5 = '\0';
  if (param_2 == '\0') {
    iVar8 = 2;
    iVar7 = param_1 + 0x50;
    iVar6 = 8;
    do {
      fVar9 = *(float *)(iVar7 + 0x90) + 0.125;
      iVar2 = *(int *)(param_1 + 0x1c);
      fVar10 = fVar9 - 1.0;
      *(float *)(iVar7 + 0x90) = fVar9;
      *(float *)(*(int *)(iVar2 + iVar6) + 0xbc) =
           *(float *)(iVar7 + 0x94) + (1.0 - fVar10 * fVar10);
      fVar9 = *(float *)(iVar7 + 0x90) - 1.0;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x90) =
           *(float *)(iVar7 + 0x98) + (1.0 - fVar9 * fVar9);
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
      fVar9 = *(float *)(iVar7 + 0x90);
      piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar6);
      iVar2 = *piVar3;
      if (iVar8 < 3) {
        if (1 < iVar8) {
          *(float *)(iVar2 + 0x60) =
               (float)(int)*(short *)(iVar7 + 0x8a) -
               fVar9 * fVar9 * (float)(int)*(short *)(iVar7 + 0x8c);
          fVar9 = *(float *)(iVar7 + 0x90);
          piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar6);
          iVar2 = *piVar3;
        }
      }
      else if (iVar8 == 4) {
        *(float *)(iVar2 + 0x60) =
             (float)(int)*(short *)(iVar7 + 0x8a) +
             fVar9 * fVar9 * (float)(int)*(short *)(iVar7 + 0x8c);
        fVar9 = *(float *)(iVar7 + 0x90);
        piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar6);
        iVar2 = *piVar3;
      }
      if (1.0 <= fVar9) {
        *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x90) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x94) = 0x3f800000;
        piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar6);
        iVar2 = *piVar3;
        if (iVar8 < 3) {
          if (1 < iVar8) {
            sVar1 = *(short *)(iVar7 + 0x88);
LAB_0893cf10:
            *(float *)(iVar2 + 0x60) = (float)(int)sVar1;
            piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar6);
            iVar2 = *piVar3;
          }
        }
        else if (iVar8 == 4) {
          sVar1 = *(short *)(iVar7 + 0x88);
          goto LAB_0893cf10;
        }
        cVar5 = cVar5 + '\x01';
        iVar4 = *piVar3;
      }
      else {
        iVar4 = *piVar3;
      }
      FUN_089f4954(*(undefined4 *)(iVar4 + 0x90),*(undefined4 *)(iVar4 + 0x94),
                   *(undefined4 *)(iVar4 + 0x9c),iVar2,0);
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x28;
      iVar6 = iVar6 + 4;
    } while (iVar8 < 5);
  }
  else {
    iVar6 = 2;
    iVar7 = param_1 + 0x50;
    iVar8 = 8;
    do {
      fVar9 = *(float *)(iVar7 + 0x90) + 0.125;
      iVar2 = *(int *)(param_1 + 0x1c);
      *(float *)(iVar7 + 0x90) = fVar9;
      *(float *)(*(int *)(iVar2 + iVar8) + 0xbc) = *(float *)(iVar7 + 0x94) - fVar9 * fVar9;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x90) =
           *(float *)(iVar7 + 0x98) - *(float *)(iVar7 + 0x90) * *(float *)(iVar7 + 0x90);
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
      *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
      fVar9 = *(float *)(iVar7 + 0x90);
      piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
      iVar2 = *piVar3;
      if (iVar6 < 3) {
        if (1 < iVar6) {
          *(float *)(iVar2 + 0x60) =
               (float)(int)*(short *)(iVar7 + 0x8a) +
               (1.0 - (fVar9 - 1.0) * (fVar9 - 1.0)) * (float)(int)*(short *)(iVar7 + 0x8c);
          fVar9 = *(float *)(iVar7 + 0x90);
          piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
          iVar2 = *piVar3;
        }
      }
      else if (iVar6 == 4) {
        *(float *)(iVar2 + 0x60) =
             (float)(int)*(short *)(iVar7 + 0x8a) -
             (1.0 - (fVar9 - 1.0) * (fVar9 - 1.0)) * (float)(int)*(short *)(iVar7 + 0x8c);
        fVar9 = *(float *)(iVar7 + 0x90);
        piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
        iVar2 = *piVar3;
      }
      if (1.0 <= fVar9) {
        cVar5 = cVar5 + '\x01';
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
        iVar2 = *piVar3;
        iVar4 = *piVar3;
      }
      else {
        iVar4 = *piVar3;
      }
      FUN_089f4954(*(undefined4 *)(iVar4 + 0x90),*(undefined4 *)(iVar4 + 0x94),
                   *(undefined4 *)(iVar4 + 0x9c),iVar2,0);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x28;
      iVar8 = iVar8 + 4;
    } while (iVar6 < 5);
  }
  return cVar5 == '\x03';
}

