#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089999a4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  if (*(byte *)(param_1 + 0x10f4) == 0) {
    iVar2 = 0;
    iVar7 = *(int *)(param_1 + 0x1c);
    iVar8 = 0;
    iVar5 = param_1;
    do {
      *(undefined4 *)(*(int *)(iVar7 + iVar8 + 0x70) + 0x128) = 2;
      iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70);
      *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
      iVar7 = FUN_08996448(param_1);
      if (iVar7 == 1) {
        iVar7 = FUN_089982c8(param_1);
        if (iVar7 == 2) {
          iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70);
          *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
          iVar7 = *(int *)(param_1 + 0x1c);
        }
        else {
          iVar7 = *(int *)(param_1 + 0x1c);
        }
      }
      else {
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      FUN_089f46dc(*(undefined4 *)(iVar7 + iVar8 + 0x70));
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70);
      if (iVar2 == 3) {
        FUN_089a51fc(0x3f800000,0x3f800000,0x3f800000,uVar1);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70) + 0x68) = 0;
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70);
      }
      else {
        FUN_089a51fc(0,0,0,uVar1);
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70) + 0x68) = (float)(iVar2 + 10);
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70);
      }
      *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70) + 0x60) =
           *(float *)(*(int *)(param_1 + 0x226c) + 0x20) * 1.8 + 130.0;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70) + 100) =
           (136.0 - *(float *)(*(int *)(param_1 + 0x226c) + 0x24) * 1.5) + 12.0;
      iVar7 = *(int *)(param_1 + 0x1c);
      iVar3 = iVar7 + iVar8;
      if (iVar2 == 3) {
        pfVar4 = (float *)(*(int *)(iVar3 + 0x70) + 100);
        *pfVar4 = *pfVar4 - 1.0;
        iVar7 = *(int *)(param_1 + 0x1c);
        iVar3 = iVar7 + iVar8;
      }
      *(undefined4 *)(iVar5 + 0x4f0) = 0;
      fVar9 = (float)iVar2;
      *(undefined4 *)(iVar5 + 0x4f4) = *(undefined4 *)(*(int *)(iVar3 + 0x70) + 0xbc);
      iVar2 = iVar2 + 1;
      iVar8 = iVar8 + 4;
      *(undefined4 *)(iVar5 + 0x4f8) = *(undefined4 *)(*(int *)(iVar3 + 0x70) + 0x90);
      *(char *)(iVar5 + 0x4df) = (char)(int)(fVar9 * 8.0);
      iVar5 = iVar5 + 0x28;
    } while (iVar2 < 4);
    *(char *)(param_1 + 0x10f4) = *(char *)(param_1 + 0x10f4) + '\x01';
  }
  else if (*(byte *)(param_1 + 0x10f4) < 2) {
    cVar6 = '\0';
    iVar8 = 0;
    iVar7 = 0;
    iVar5 = param_1;
    do {
      if (*(char *)(iVar5 + 0x4df) == '\0') {
        fVar9 = *(float *)(iVar5 + 0x4f0) + 0.02;
        iVar2 = *(int *)(param_1 + 0x1c);
        fVar10 = fVar9 - 1.0;
        *(float *)(iVar5 + 0x4f0) = fVar9;
        *(float *)(*(int *)(iVar2 + iVar7 + 0x70) + 0xbc) =
             *(float *)(iVar5 + 0x4f4) - (1.0 - fVar10 * fVar10);
        fVar9 = *(float *)(iVar5 + 0x4f0) - 1.0;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70) + 0x90) =
             *(float *)(iVar5 + 0x4f8) + (1.0 - fVar9 * fVar9) * 1.4;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70);
        *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70);
        FUN_089f4954(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x94),
                     *(undefined4 *)(iVar2 + 0x9c),iVar2,0);
        if (1.0 <= *(float *)(iVar5 + 0x4f0)) {
          cVar6 = cVar6 + '\x01';
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70) + 0xbc) = 0;
        }
      }
      else {
        *(char *)(iVar5 + 0x4df) = *(char *)(iVar5 + 0x4df) + -1;
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 3);
    iVar5 = 0;
    iVar7 = 0;
    do {
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70) + 0x60) =
           *(float *)(*(int *)(param_1 + 0x226c) + 0x20) * 1.8 + 130.0;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70) + 100) =
           (136.0 - *(float *)(*(int *)(param_1 + 0x226c) + 0x24) * 1.5) + 12.0;
      if (iVar5 == 3) {
        pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70) + 100);
        *pfVar4 = *pfVar4 - 1.0;
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar5 < 4);
    if (cVar6 == '\x03') {
      *(undefined *)(param_1 + 0x10f4) = 0;
    }
  }
  return;
}

