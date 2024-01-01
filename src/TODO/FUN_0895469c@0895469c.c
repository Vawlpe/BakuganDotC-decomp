#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0895469c(int param_1,char param_2)

{
  char cVar1;
  undefined2 uVar2;
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
    iVar6 = 1;
    iVar7 = param_1 + 0x28;
    iVar8 = 4;
    do {
      if (*(char *)(iVar7 + 0x83) == '\0') {
        piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
        if (*(char *)(iVar7 + 0x7f) == '\0') {
          fVar9 = *(float *)(iVar7 + 0x94) + 0.125;
          *(float *)(iVar7 + 0x94) = fVar9;
          *(float *)(*piVar3 + 0x60) =
               (float)(int)*(short *)(iVar7 + 0x8c) +
               fVar9 * fVar9 * (float)(int)*(short *)(iVar7 + 0x90);
          if (1.0 <= *(float *)(iVar7 + 0x94)) {
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) = 0x44300000;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x90) = 0x3f800000;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x94) = 0x3f800000;
            iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
            FUN_089f4954(*(undefined4 *)(iVar4 + 0x90),*(undefined4 *)(iVar4 + 0x94),
                         *(undefined4 *)(iVar4 + 0x9c),iVar4,0);
            iVar4 = *(int *)(param_1 + 0x1c);
            *(undefined *)(iVar7 + 0x7f) = 1;
            *(undefined4 *)(iVar7 + 0x94) = 0;
            piVar3 = (int *)(iVar4 + iVar8);
            fVar9 = *(float *)(*piVar3 + 0x60);
            *(undefined *)(iVar7 + 0x83) = 4;
            cVar1 = *(char *)(param_1 + 0x74);
            *(short *)(iVar7 + 0x8c) = (short)(int)fVar9;
            iVar4 = *piVar3;
            if ((int)cVar1 == iVar6 + -1) {
              uVar2 = (undefined2)(int)(*(float *)(iVar4 + 0x60) - *(float *)(param_1 + 0x600));
            }
            else {
              uVar2 = (undefined2)(int)(*(float *)(iVar4 + 0x60) - -224.0);
            }
            *(undefined2 *)(iVar7 + 0x90) = uVar2;
          }
        }
        else {
          fVar9 = *(float *)(iVar7 + 0x94) + 0.0625;
          fVar10 = fVar9 - 1.0;
          *(float *)(iVar7 + 0x94) = fVar9;
          *(float *)(*piVar3 + 0x60) =
               (float)(int)*(short *)(iVar7 + 0x8c) -
               (1.0 - fVar10 * fVar10) * (float)(int)*(short *)(iVar7 + 0x90);
          if (1.0 <= *(float *)(iVar7 + 0x94)) {
            iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
            if ((int)*(char *)(param_1 + 0x74) == iVar6 + -1) {
              *(undefined4 *)(iVar4 + 0x60) = *(undefined4 *)(param_1 + 0x600);
              cVar1 = *(char *)(param_1 + iVar6 + 0x5f8);
              iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
            }
            else {
              *(undefined4 *)(iVar4 + 0x60) = 0xc3600000;
              cVar1 = *(char *)(param_1 + iVar6 + 0x5f8);
              iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
            }
            if (cVar1 == '\0') {
              *(undefined4 *)(iVar4 + 0xb0) = 0x3f19999a;
              *(undefined4 *)(iVar4 + 0xb4) = 0x3f19999a;
              *(undefined4 *)(iVar4 + 0xb8) = 0x3f19999a;
              *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
            }
            else {
              *(undefined4 *)(iVar4 + 0xb0) = 0x3f800000;
              *(undefined4 *)(iVar4 + 0xb4) = 0x3f800000;
              *(undefined4 *)(iVar4 + 0xb8) = 0x3f800000;
              *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
            }
            cVar5 = cVar5 + '\x01';
          }
        }
      }
      else {
        *(char *)(iVar7 + 0x83) = *(char *)(iVar7 + 0x83) + -1;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x28;
      iVar8 = iVar8 + 4;
    } while (iVar6 < 5);
    return cVar5 == '\x04';
  }
  cVar5 = *(char *)(param_1 + 0x74);
  iVar6 = param_1 + cVar5 * 0x28;
  fVar9 = *(float *)(iVar6 + 0xbc) + 0.125;
  iVar7 = *(int *)(param_1 + 0x1c);
  *(float *)(iVar6 + 0xbc) = fVar9;
  *(float *)(*(int *)(iVar7 + cVar5 * 4 + 4) + 0xbc) = *(float *)(iVar6 + 0xc0) - fVar9 * fVar9;
  iVar6 = param_1 + *(char *)(param_1 + 0x74) * 0x28;
  fVar9 = *(float *)(iVar6 + 0xbc);
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 4) + 0x90) =
       *(float *)(iVar6 + 0xc4) + fVar9 * fVar9;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 4);
  *(undefined4 *)(iVar6 + 0x94) = *(undefined4 *)(iVar6 + 0x90);
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 4);
  FUN_089f4954(*(undefined4 *)(iVar6 + 0x90),*(undefined4 *)(iVar6 + 0x94),
               *(undefined4 *)(iVar6 + 0x9c),iVar6,0);
  if (1.0 <= *(float *)(param_1 + *(char *)(param_1 + 0x74) * 0x28 + 0xbc)) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 4);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    return true;
  }
  return false;
}

