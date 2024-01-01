#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08993200(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  float fVar8;
  
  cVar6 = '\0';
  *(float *)(param_1 + 0x110) = *(float *)(param_1 + 0x110) + 0.125;
  if (param_2 == '\0') {
    iVar5 = 1;
    iVar4 = 4;
    do {
      if (iVar5 < 0xc) {
        if (iVar5 < 8) {
          fVar8 = *(float *)(param_1 + 0x110);
        }
        else {
          if (iVar5 < 10) goto LAB_08993258;
          fVar8 = *(float *)(param_1 + 0x110);
        }
LAB_089932cc:
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) =
             1.0 - (fVar8 - 1.0) * (fVar8 - 1.0);
        if (1.0 <= *(float *)(param_1 + 0x110)) {
          cVar6 = cVar6 + '\x01';
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) = 0x3f800000;
        }
      }
      else if (iVar5 < 0xd) {
LAB_08993258:
        fVar8 = *(float *)(param_1 + 0x110) - 1.0;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) = (1.0 - fVar8 * fVar8) * 0.5;
      }
      else {
        if (0xd < iVar5) {
          fVar8 = *(float *)(param_1 + 0x110);
          goto LAB_089932cc;
        }
        fVar8 = *(float *)(param_1 + 0x110) - 1.0;
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
        fVar8 = (1.0 - fVar8 * fVar8) * 0.5;
        *(float *)(iVar7 + 0xb0) = fVar8;
        *(float *)(iVar7 + 0xb4) = fVar8;
        *(float *)(iVar7 + 0xb8) = fVar8;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < 0x29);
  }
  else {
    iVar5 = 1;
    iVar4 = 4;
    do {
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) =
           1.0 - *(float *)(param_1 + 0x110) * *(float *)(param_1 + 0x110);
      if (1.0 <= *(float *)(param_1 + 0x110)) {
        cVar6 = cVar6 + '\x01';
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) = 0;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < 0x29);
  }
  if ((param_2 == '\0') && (iVar4 = 5, cVar6 != '\0')) {
    iVar5 = 0x14;
    do {
      iVar4 = iVar4 + 1;
      iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < 10);
    iVar5 = 0x24;
    iVar4 = 0x90;
    do {
      iVar5 = iVar5 + 1;
      iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < 0x29);
    iVar5 = 0x1a;
    iVar4 = 0x68;
    do {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x68) + 0x60) = 0x42d10000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x68) + 100) = 0x42060000;
      uVar3 = DAT_08ac3bec;
      uVar2 = DAT_08ac3be8;
      uVar1 = DAT_08ac3be4;
      iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
      *(undefined4 *)(iVar7 + 0xb0) = DAT_08ac3be0;
      *(undefined4 *)(iVar7 + 0xb4) = uVar1;
      *(undefined4 *)(iVar7 + 0xb8) = uVar2;
      *(undefined4 *)(iVar7 + 0xbc) = uVar3;
      iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < 0x1b);
  }
  return cVar6 != '\0';
}

