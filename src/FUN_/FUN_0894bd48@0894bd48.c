#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0894bd48(int param_1)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_1 + 0x80);
  iVar4 = *(int *)(param_1 + 0x7c);
  if (iVar1 < 2) {
    if (iVar4 == 1) {
      iVar5 = 0;
      iVar1 = *(int *)(param_1 + 0x1c);
      iVar4 = 0;
      piVar3 = &DAT_08a9d15c;
      do {
        iVar6 = 0;
        do {
          pfVar2 = (float *)(*(int *)(iVar1 + (iVar6 + 0x2d + iVar4) * 4) + 100);
          iVar6 = iVar6 + 1;
          *pfVar2 = *pfVar2 + 11.5;
          iVar1 = *(int *)(param_1 + 0x1c);
        } while (iVar6 < 4);
        iVar6 = 1;
        piVar7 = piVar3;
        do {
          piVar7 = piVar7 + 1;
          pfVar2 = (float *)(*(int *)(iVar1 + (*piVar7 + iVar5) * 4) + 100);
          iVar6 = iVar6 + 1;
          *pfVar2 = *pfVar2 + 11.5;
          iVar1 = *(int *)(param_1 + 0x1c);
        } while (iVar6 < 8);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar5 < 6);
      iVar4 = 0;
      do {
        pfVar2 = (float *)(*(int *)(iVar1 + (iVar4 + 0x2d) * 4 + 0x50) + 0xbc);
        *pfVar2 = *pfVar2 - 0.5;
        pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + (iVar4 + 0x2d) * 4) + 0xbc);
        iVar4 = iVar4 + 1;
        *pfVar2 = *pfVar2 + 0.5;
        iVar1 = *(int *)(param_1 + 0x1c);
      } while (iVar4 < 4);
      iVar4 = 1;
      do {
        piVar3 = piVar3 + 1;
        pfVar2 = (float *)(*(int *)(iVar1 + *piVar3 * 4 + 0x14) + 0xbc);
        iVar4 = iVar4 + 1;
        *pfVar2 = *pfVar2 - 0.5;
        pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + *piVar3 * 4) + 0xbc);
        *pfVar2 = *pfVar2 + 0.5;
        iVar1 = *(int *)(param_1 + 0x1c);
      } while (iVar4 < 8);
      iVar1 = *(int *)(iVar1 + 0x1c);
      *(undefined4 *)(iVar1 + 0xc0) = 0x3e99999a;
      *(undefined4 *)(iVar1 + 0xc4) = 0x3e99999a;
      *(undefined4 *)(iVar1 + 200) = 0x3e99999a;
      *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
      iVar1 = *(int *)(param_1 + 0x80);
    }
    else if (iVar4 == 2) {
      iVar5 = 0;
      iVar1 = *(int *)(param_1 + 0x1c);
      iVar4 = 0;
      piVar3 = &DAT_08a9d15c;
      do {
        iVar6 = 0;
        do {
          pfVar2 = (float *)(*(int *)(iVar1 + (iVar6 + 0x2d + iVar4) * 4) + 100);
          iVar6 = iVar6 + 1;
          *pfVar2 = *pfVar2 - 11.5;
          iVar1 = *(int *)(param_1 + 0x1c);
        } while (iVar6 < 4);
        iVar6 = 1;
        piVar7 = piVar3;
        do {
          piVar7 = piVar7 + 1;
          pfVar2 = (float *)(*(int *)(iVar1 + (*piVar7 + iVar5) * 4) + 100);
          iVar6 = iVar6 + 1;
          *pfVar2 = *pfVar2 - 11.5;
          iVar1 = *(int *)(param_1 + 0x1c);
        } while (iVar6 < 8);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar5 < 6);
      iVar4 = 0;
      do {
        pfVar2 = (float *)(*(int *)(iVar1 + (iVar4 + 0x2d) * 4 + 0x50) + 0xbc);
        *pfVar2 = *pfVar2 - 0.5;
        pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + (iVar4 + 0x2d) * 4 + 0x40) + 0xbc);
        iVar4 = iVar4 + 1;
        *pfVar2 = *pfVar2 + 0.5;
        iVar1 = *(int *)(param_1 + 0x1c);
      } while (iVar4 < 4);
      iVar4 = 1;
      do {
        piVar3 = piVar3 + 1;
        pfVar2 = (float *)(*(int *)(iVar1 + *piVar3 * 4 + 0x14) + 0xbc);
        iVar4 = iVar4 + 1;
        *pfVar2 = *pfVar2 - 0.5;
        pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + *piVar3 * 4 + 0x10) + 0xbc);
        *pfVar2 = *pfVar2 + 0.5;
        iVar1 = *(int *)(param_1 + 0x1c);
      } while (iVar4 < 8);
      iVar1 = *(int *)(iVar1 + 0x20);
      *(undefined4 *)(iVar1 + 0xc0) = 0x3e99999a;
      *(undefined4 *)(iVar1 + 0xc4) = 0x3e99999a;
      *(undefined4 *)(iVar1 + 200) = 0x3e99999a;
      *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      return 0;
    }
    *(int *)(param_1 + 0x80) = iVar1 + 1;
    return 0;
  }
  if (iVar4 == 1) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1c);
    *(undefined4 *)(iVar1 + 0xc0) = 0;
    *(undefined4 *)(iVar1 + 0xc4) = 0;
    *(undefined4 *)(iVar1 + 200) = 0;
    *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x24);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    iVar1 = *(int *)(param_1 + 0x78) + -1;
    *(int *)(param_1 + 0x78) = iVar1;
    if (iVar1 < 1) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1c);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x80) = 0;
      return 1;
    }
  }
  else {
    if (iVar4 != 2) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      goto LAB_0894c208;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1c);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20);
    *(undefined4 *)(iVar1 + 0xc0) = 0;
    *(undefined4 *)(iVar1 + 0xc4) = 0;
    *(undefined4 *)(iVar1 + 200) = 0;
    *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    iVar1 = *(int *)(param_1 + 0x78) + 1;
    *(int *)(param_1 + 0x78) = iVar1;
    if (iVar1 < 0xf) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      goto LAB_0894c208;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
LAB_0894c208:
  *(undefined4 *)(param_1 + 0x80) = 0;
  return 1;
}

