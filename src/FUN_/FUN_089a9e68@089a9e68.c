#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089a9e68(int param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  cVar6 = '\0';
  if (param_2 == '\0') {
    iVar7 = 5;
    iVar8 = param_1 + 200;
    iVar9 = 0x14;
    do {
      if (*(char *)(iVar8 + 0x83) == '\0') {
        piVar4 = (int *)(*(int *)(param_1 + 0x1c) + iVar9);
        if (*(char *)(iVar8 + 0x7f) == '\0') {
          fVar10 = *(float *)(iVar8 + 0x94) + 0.125;
          *(float *)(iVar8 + 0x94) = fVar10;
          *(float *)(*piVar4 + 0x60) =
               (float)(int)*(short *)(iVar8 + 0x8c) +
               fVar10 * fVar10 * (float)(int)*(short *)(iVar8 + 0x90);
          if (1.0 <= *(float *)(iVar8 + 0x94)) {
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0x60) = 0x44300000;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0x90) = 0x3f800000;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0x94) = 0x3f800000;
            iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
            FUN_089f4954(*(undefined4 *)(iVar5 + 0x90),*(undefined4 *)(iVar5 + 0x94),
                         *(undefined4 *)(iVar5 + 0x9c),iVar5,0);
            iVar5 = *(int *)(param_1 + 0x1c);
            *(undefined *)(iVar8 + 0x7f) = 1;
            *(undefined4 *)(iVar8 + 0x94) = 0;
            piVar4 = (int *)(iVar5 + iVar9);
            fVar10 = *(float *)(*piVar4 + 0x60);
            *(undefined *)(iVar8 + 0x83) = 10;
            cVar1 = *(char *)(param_1 + 0x74);
            *(short *)(iVar8 + 0x8c) = (short)(int)fVar10;
            iVar5 = *piVar4;
            if ((int)cVar1 == iVar7 + -5) {
              uVar3 = (undefined2)(int)(*(float *)(iVar5 + 0x60) - *(float *)(param_1 + 0x678));
            }
            else {
              uVar3 = (undefined2)(int)(*(float *)(iVar5 + 0x60) - -224.0);
            }
            *(undefined2 *)(iVar8 + 0x90) = uVar3;
          }
        }
        else {
          fVar10 = *(float *)(iVar8 + 0x94) + 0.0625;
          fVar11 = fVar10 - 1.0;
          *(float *)(iVar8 + 0x94) = fVar10;
          *(float *)(*piVar4 + 0x60) =
               (float)(int)*(short *)(iVar8 + 0x8c) -
               (1.0 - fVar11 * fVar11) * (float)(int)*(short *)(iVar8 + 0x90);
          if (1.0 <= *(float *)(iVar8 + 0x94)) {
            iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
            if ((int)*(char *)(param_1 + 0x74) == iVar7 - 5U) {
              *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(param_1 + 0x678);
              bVar2 = *(byte *)(param_1 + 0x673);
              iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
            }
            else {
              *(undefined4 *)(iVar5 + 0x60) = 0xc3600000;
              bVar2 = *(byte *)(param_1 + 0x673);
              iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
            }
            if (((uint)bVar2 & 1 << (iVar7 - 5U & 0x1f)) == 0) {
              *(undefined4 *)(iVar5 + 0xb0) = 0x3f19999a;
              *(undefined4 *)(iVar5 + 0xb4) = 0x3f19999a;
              *(undefined4 *)(iVar5 + 0xb8) = 0x3f19999a;
              *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
            }
            else {
              *(undefined4 *)(iVar5 + 0xb0) = 0x3f800000;
              *(undefined4 *)(iVar5 + 0xb4) = 0x3f800000;
              *(undefined4 *)(iVar5 + 0xb8) = 0x3f800000;
              *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
            }
            cVar6 = cVar6 + '\x01';
          }
        }
      }
      else {
        *(char *)(iVar8 + 0x83) = *(char *)(iVar8 + 0x83) + -1;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x28;
      iVar9 = iVar9 + 4;
    } while (iVar7 < 10);
    return cVar6 == '\x05';
  }
  cVar6 = *(char *)(param_1 + 0x74);
  iVar7 = param_1 + cVar6 * 0x28;
  fVar10 = *(float *)(iVar7 + 0x15c) + 0.125;
  iVar8 = *(int *)(param_1 + 0x1c);
  *(float *)(iVar7 + 0x15c) = fVar10;
  *(float *)(*(int *)(iVar8 + cVar6 * 4 + 0x14) + 0xbc) =
       *(float *)(iVar7 + 0x160) - fVar10 * fVar10;
  iVar7 = param_1 + *(char *)(param_1 + 0x74) * 0x28;
  fVar10 = *(float *)(iVar7 + 0x15c);
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x14) + 0x90) =
       *(float *)(iVar7 + 0x164) + fVar10 * fVar10;
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x14);
  *(undefined4 *)(iVar7 + 0x94) = *(undefined4 *)(iVar7 + 0x90);
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x14);
  FUN_089f4954(*(undefined4 *)(iVar7 + 0x90),*(undefined4 *)(iVar7 + 0x94),
               *(undefined4 *)(iVar7 + 0x9c),iVar7,0);
  if (1.0 <= *(float *)(param_1 + *(char *)(param_1 + 0x74) * 0x28 + 0x15c)) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x14);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
    return true;
  }
  return false;
}

