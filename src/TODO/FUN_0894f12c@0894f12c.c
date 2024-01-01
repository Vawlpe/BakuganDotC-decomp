#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0894f12c(int param_1,char param_2)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  cVar5 = '\0';
  if (param_2 == '\0') {
    iVar6 = 4;
    iVar8 = param_1 + 0xa0;
    iVar9 = 0x10;
    do {
      iVar7 = iVar6 + -4;
      if (*(char *)(iVar8 + 0x83) == '\0') {
        piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar9);
        if (*(char *)(iVar8 + 0x7f) == '\0') {
          fVar10 = *(float *)(iVar8 + 0x94) + 0.125;
          *(float *)(iVar8 + 0x94) = fVar10;
          *(float *)(*piVar3 + 0x60) =
               (float)(int)*(short *)(iVar8 + 0x8c) +
               fVar10 * fVar10 * (float)(int)*(short *)(iVar8 + 0x90);
          if (1.0 <= *(float *)(iVar8 + 0x94)) {
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0x60) = 0x44300000;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0x90) = 0x3f800000;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0x94) = 0x3f800000;
            iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
            FUN_089f4954(*(undefined4 *)(iVar4 + 0x90),*(undefined4 *)(iVar4 + 0x94),
                         *(undefined4 *)(iVar4 + 0x9c),iVar4,0);
            iVar4 = *(int *)(param_1 + 0x1c);
            *(undefined *)(iVar8 + 0x7f) = 1;
            *(undefined4 *)(iVar8 + 0x94) = 0;
            piVar3 = (int *)(iVar4 + iVar9);
            fVar10 = *(float *)(*piVar3 + 0x60);
            *(undefined *)(iVar8 + 0x83) = 4;
            cVar1 = *(char *)(param_1 + 0x74);
            *(short *)(iVar8 + 0x8c) = (short)(int)fVar10;
            iVar4 = *piVar3;
            if (cVar1 == iVar7) {
              uVar2 = (undefined2)(int)(*(float *)(iVar4 + 0x60) - *(float *)(param_1 + 0x2d4));
            }
            else {
              uVar2 = (undefined2)(int)(*(float *)(iVar4 + 0x60) - -224.0);
            }
            *(undefined2 *)(iVar8 + 0x90) = uVar2;
          }
        }
        else {
          fVar10 = *(float *)(iVar8 + 0x94) + 0.0625;
          fVar11 = fVar10 - 1.0;
          *(float *)(iVar8 + 0x94) = fVar10;
          *(float *)(*piVar3 + 0x60) =
               (float)(int)*(short *)(iVar8 + 0x8c) -
               (1.0 - fVar11 * fVar11) * (float)(int)*(short *)(iVar8 + 0x90);
          if (1.0 <= *(float *)(iVar8 + 0x94)) {
            iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
            if (*(char *)(param_1 + 0x74) == iVar7) {
              *(undefined4 *)(iVar4 + 0x60) = *(undefined4 *)(param_1 + 0x2d4);
              cVar1 = *(char *)(param_1 + iVar7 + 0x2d1);
              iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
            }
            else {
              *(undefined4 *)(iVar4 + 0x60) = 0xc3600000;
              cVar1 = *(char *)(param_1 + iVar7 + 0x2d1);
              iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
            }
            if (cVar1 == '\0') {
              *(undefined4 *)(iVar7 + 0xb0) = 0x3f19999a;
              *(undefined4 *)(iVar7 + 0xb4) = 0x3f19999a;
              *(undefined4 *)(iVar7 + 0xb8) = 0x3f19999a;
              *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
            }
            else {
              *(undefined4 *)(iVar7 + 0xb0) = 0x3f800000;
              *(undefined4 *)(iVar7 + 0xb4) = 0x3f800000;
              *(undefined4 *)(iVar7 + 0xb8) = 0x3f800000;
              *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
            }
            cVar5 = cVar5 + '\x01';
          }
        }
      }
      else {
        *(char *)(iVar8 + 0x83) = *(char *)(iVar8 + 0x83) + -1;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x28;
      iVar9 = iVar9 + 4;
    } while (iVar6 < 6);
    return cVar5 == '\x02';
  }
  iVar8 = *(char *)(param_1 + 0x74) + 4;
  iVar9 = param_1 + iVar8 * 0x28;
  fVar10 = *(float *)(iVar9 + 0x94) + 0.125;
  iVar6 = *(int *)(param_1 + 0x1c);
  iVar8 = iVar8 * 4;
  *(float *)(iVar9 + 0x94) = fVar10;
  *(float *)(*(int *)(iVar6 + iVar8) + 0xbc) = *(float *)(iVar9 + 0x98) - fVar10 * fVar10;
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x90) =
       *(float *)(iVar9 + 0x9c) + *(float *)(iVar9 + 0x94) * *(float *)(iVar9 + 0x94);
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
  *(undefined4 *)(iVar6 + 0x94) = *(undefined4 *)(iVar6 + 0x90);
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
  FUN_089f4954(*(undefined4 *)(iVar6 + 0x90),*(undefined4 *)(iVar6 + 0x94),
               *(undefined4 *)(iVar6 + 0x9c),iVar6,0);
  if (1.0 <= *(float *)(iVar9 + 0x94)) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    return true;
  }
  return false;
}

