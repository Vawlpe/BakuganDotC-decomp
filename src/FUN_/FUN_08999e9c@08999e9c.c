#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08999e9c(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  int iVar5;
  
  if (*(float *)(*(int *)(param_1 + 0x1f04) + 0x6c) != 1.0) {
    iVar7 = 0;
    iVar5 = 0;
    do {
      iVar7 = iVar7 + 1;
      iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5 + 0x70);
      *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) & 0xfffffffe;
      iVar5 = iVar5 + 4;
    } while (iVar7 < 4);
    return;
  }
  if (*(char *)(param_1 + 0x109c) == *(char *)(param_1 + 0x109d)) {
    bVar1 = *(byte *)(param_1 + 0x2268);
  }
  else {
    *(char *)(param_1 + 0x109d) = *(char *)(param_1 + 0x109c);
    FUN_08998408(0x42200000,param_1);
    bVar1 = FUN_089982c8(param_1);
    if (bVar1 == 0) {
      *(undefined *)(param_1 + 0x2268) = 2;
    }
    else if (bVar1 < 2) {
      *(undefined *)(param_1 + 0x2268) = 3;
    }
    else if (bVar1 < 3) {
      *(undefined *)(param_1 + 0x10f4) = 0;
      *(undefined *)(param_1 + 0x2268) = 4;
    }
    iVar7 = 0;
    iVar5 = 0;
    do {
      iVar7 = iVar7 + 1;
      iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5 + 0x70);
      *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) & 0xfffffffe;
      iVar5 = iVar5 + 4;
    } while (iVar7 < 4);
    bVar1 = *(byte *)(param_1 + 0x2268);
  }
  if (bVar1 < 5) {
    if (bVar1 == 1) {
      cVar2 = '\0';
      iVar8 = 0;
      iVar7 = 0;
      iVar5 = param_1;
      do {
        if (*(char *)(iVar5 + 0x4df) == '\0') {
          fVar10 = *(float *)(iVar5 + 0x4f0) + 0.02;
          iVar9 = *(int *)(param_1 + 0x1c);
          fVar11 = fVar10 - 1.0;
          *(float *)(iVar5 + 0x4f0) = fVar10;
          *(float *)(*(int *)(iVar9 + iVar7 + 0x70) + 0xbc) =
               *(float *)(iVar5 + 0x4f4) - (1.0 - fVar11 * fVar11);
          fVar10 = *(float *)(iVar5 + 0x4f0) - 1.0;
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70) + 0x90) =
               *(float *)(iVar5 + 0x4f8) + (1.0 - fVar10 * fVar10) * 1.4;
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70);
          *(undefined4 *)(iVar9 + 0x94) = *(undefined4 *)(iVar9 + 0x90);
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70);
          FUN_089f4954(*(undefined4 *)(iVar9 + 0x90),*(undefined4 *)(iVar9 + 0x94),
                       *(undefined4 *)(iVar9 + 0x9c),iVar9,0);
          if (1.0 <= *(float *)(iVar5 + 0x4f0)) {
            cVar2 = cVar2 + '\x01';
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
      if (cVar2 != '\x03') {
        cVar2 = *(char *)(param_1 + 0x226a);
        goto LAB_0899a330;
      }
      *(undefined *)(param_1 + 0x2268) = 0;
    }
    else if (bVar1 == 2) {
      iVar5 = FUN_08999794(param_1);
      if (iVar5 == 0) {
        cVar2 = *(char *)(param_1 + 0x226a);
        goto LAB_0899a330;
      }
      *(undefined *)(param_1 + 0x2268) = 0;
    }
    else {
      if (bVar1 == 3) {
        FUN_0899994c(param_1);
        cVar2 = *(char *)(param_1 + 0x226a);
        goto LAB_0899a330;
      }
      if (bVar1 == 4) {
        FUN_0899994c(param_1);
        FUN_089999a4(param_1);
      }
      else {
        iVar9 = 0;
        iVar7 = *(int *)(param_1 + 0x1c);
        iVar8 = 0;
        iVar5 = param_1;
        do {
          *(undefined4 *)(*(int *)(iVar7 + iVar8 + 0x70) + 0x128) = 1;
          iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70);
          *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
          FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70));
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70);
          if (iVar9 == 3) {
            FUN_089a51fc(0x3f800000,0x3f800000,0x3f800000,uVar3);
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70) + 0x68) = 0;
            iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70);
          }
          else {
            FUN_089a51fc(0,0,0,uVar3);
            *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70) + 0x68) =
                 (float)(iVar9 + 10);
            iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70);
          }
          *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70) + 0x60) = 0x43020000;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x70) + 100) = 0x43080000;
          iVar7 = *(int *)(param_1 + 0x1c);
          iVar6 = iVar7 + iVar8;
          if (iVar9 == 3) {
            pfVar4 = (float *)(*(int *)(iVar6 + 0x70) + 100);
            *pfVar4 = *pfVar4 - 1.0;
            iVar7 = *(int *)(param_1 + 0x1c);
            iVar6 = iVar7 + iVar8;
          }
          *(undefined4 *)(iVar5 + 0x4f0) = 0;
          fVar10 = (float)iVar9;
          *(undefined4 *)(iVar5 + 0x4f4) = *(undefined4 *)(*(int *)(iVar6 + 0x70) + 0xbc);
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + 4;
          *(undefined4 *)(iVar5 + 0x4f8) = *(undefined4 *)(*(int *)(iVar6 + 0x70) + 0x90);
          *(char *)(iVar5 + 0x4df) = (char)(int)(fVar10 * 8.0);
          iVar5 = iVar5 + 0x28;
        } while (iVar9 < 4);
        *(char *)(param_1 + 0x2268) = *(char *)(param_1 + 0x2268) + '\x01';
      }
    }
    cVar2 = *(char *)(param_1 + 0x226a);
  }
  else {
    cVar2 = *(char *)(param_1 + 0x226a);
  }
LAB_0899a330:
  iVar5 = 0;
  if (cVar2 != '\0') {
    iVar7 = 0;
    do {
      iVar5 = iVar5 + 1;
      iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70);
      *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) & 0xfffffffe;
      iVar7 = iVar7 + 4;
    } while (iVar5 < 4);
  }
  if (*(char *)(param_1 + 0x226b) != '\0') {
    if (*(char *)(param_1 + 0x2268) == '\x04') {
      fVar10 = *(float *)(param_1 + 0x232c) + 0.02;
      *(float *)(param_1 + 0x232c) = fVar10;
      if (0.8 < fVar10) {
        *(undefined4 *)(param_1 + 0x232c) = 0x3f4ccccd;
      }
    }
    else {
      fVar10 = *(float *)(param_1 + 0x232c) - 0.02;
      *(float *)(param_1 + 0x232c) = fVar10;
      if (fVar10 < 0.6) {
        *(undefined4 *)(param_1 + 0x232c) = 0x3f19999a;
      }
    }
  }
  FUN_0899856c(param_1);
  return;
}

