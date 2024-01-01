#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888d118(int param_1)

{
  undefined uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  iVar5 = *(int *)(param_1 + 0x1a4) + -1;
  fVar9 = (float)iVar5;
  if (iVar5 < 0) {
    fVar9 = fVar9 + 4.294967e+09;
  }
  fVar10 = (float)iVar5;
  *(char *)(param_1 + 0x9e0) =
       (char)((uint)(((int)(fVar9 * 0.1111111 * 0.0) + 100) * 0x1000000) >> 0x18);
  if (iVar5 < 0) {
    fVar10 = fVar10 + 4.294967e+09;
  }
  *(char *)(param_1 + 0x9e1) =
       (char)((uint)(((int)(fVar10 * 0.1111111 * 0.0) + 0x32) * 0x1000000) >> 0x18);
  iVar2 = *(int *)(*(int *)(param_1 + 0x2cc) + 4);
  uVar1 = (**(code **)(iVar2 + 0x2c))
                    (*(int *)(param_1 + 0x2cc) + (int)*(short *)(iVar2 + 0x28),iVar5);
  *(undefined *)(param_1 + 0x9e2) = uVar1;
  iVar5 = *(int *)(*(int *)(param_1 + 0x2cc) + 4);
  uVar1 = (**(code **)(iVar5 + 0x24))
                    (*(int *)(param_1 + 0x2cc) + (int)*(short *)(iVar5 + 0x20),
                     *(int *)(param_1 + 0x1a4) + -1);
  *(undefined *)(param_1 + 0x9e3) = uVar1;
  iVar5 = *(int *)(*(int *)(param_1 + 0x2cc) + 4);
  uVar1 = (**(code **)(iVar5 + 0x34))
                    (*(int *)(param_1 + 0x2cc) + (int)*(short *)(iVar5 + 0x30),
                     *(int *)(param_1 + 0x1a4) + -1);
  *(undefined *)(param_1 + 0x9e4) = uVar1;
  iVar5 = *(int *)(param_1 + 0x1a4) + -1;
  fVar9 = (float)iVar5;
  if (iVar5 < 0) {
    fVar9 = fVar9 + 4.294967e+09;
  }
  fVar10 = (float)iVar5;
  *(float *)(param_1 + 0x9e8) = fVar9 * 0.1111111 * 4.0 + 1.0;
  if (iVar5 < 0) {
    fVar10 = fVar10 + 4.294967e+09;
  }
  fVar9 = (float)iVar5;
  *(float *)(param_1 + 0x9ec) = fVar10 * 0.1111111 * 0.0 + 1.0;
  if (iVar5 < 0) {
    fVar9 = fVar9 + 4.294967e+09;
  }
  *(undefined4 *)(param_1 + 0xa18) = 0x42b40000;
  *(float *)(param_1 + 0x9f0) = fVar9 * 0.1111111 * 0.0 + 1.0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1a0) + 8);
  if (iVar5 == 10 || iVar5 == 2) {
    fVar9 = 3.0;
  }
  else {
    fVar9 = 2.0;
  }
  *(float *)(param_1 + 0xa18) = fVar9 * 90.0;
  uVar8 = 0;
  iVar5 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x2d0);
    iVar6 = *(int *)(iVar2 + 4);
    switch(*(undefined4 *)(param_1 + 0x1a4)) {
    case 2:
      iVar2 = (**(code **)(iVar6 + 0x1c))(iVar2 + *(short *)(iVar6 + 0x18),uVar8);
      if (*(char *)(param_1 + 0xa01) == '\0') {
        if (uVar8 < *(uint *)(param_1 + 0x9f8)) {
          piVar3 = (int *)(*(int *)(param_1 + 0x9f4) + iVar5);
          if (*piVar3 != iVar2) {
            *piVar3 = iVar2;
            *(undefined *)(param_1 + 0xa00) = 0;
            goto LAB_0888d4c8;
          }
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
      }
      else {
LAB_0888d4c8:
        iVar2 = *(int *)(param_1 + 0x2d4);
      }
      iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x1c))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x18),uVar8);
      if (((*(char *)(param_1 + 0xa11) == '\0') && (uVar8 < *(uint *)(param_1 + 0xa08))) &&
         (piVar3 = (int *)(*(int *)(param_1 + 0xa04) + iVar5), *piVar3 != iVar2)) {
        *piVar3 = iVar2;
        *(undefined *)(param_1 + 0xa10) = 0;
      }
      break;
    case 3:
      iVar2 = (**(code **)(iVar6 + 0x24))(iVar2 + *(short *)(iVar6 + 0x20),uVar8);
      if (*(char *)(param_1 + 0xa01) == '\0') {
        if (uVar8 < *(uint *)(param_1 + 0x9f8)) {
          piVar3 = (int *)(*(int *)(param_1 + 0x9f4) + iVar5);
          if (*piVar3 != iVar2) {
            *piVar3 = iVar2;
            *(undefined *)(param_1 + 0xa00) = 0;
            goto LAB_0888d574;
          }
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
      }
      else {
LAB_0888d574:
        iVar2 = *(int *)(param_1 + 0x2d4);
      }
      iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x24))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x20),uVar8);
      if (((*(char *)(param_1 + 0xa11) == '\0') && (uVar8 < *(uint *)(param_1 + 0xa08))) &&
         (piVar3 = (int *)(*(int *)(param_1 + 0xa04) + iVar5), *piVar3 != iVar2)) {
        *piVar3 = iVar2;
        *(undefined *)(param_1 + 0xa10) = 0;
      }
      break;
    case 4:
      iVar2 = (**(code **)(iVar6 + 0x2c))(iVar2 + *(short *)(iVar6 + 0x28),uVar8);
      if (*(char *)(param_1 + 0xa01) == '\0') {
        if (uVar8 < *(uint *)(param_1 + 0x9f8)) {
          piVar3 = (int *)(*(int *)(param_1 + 0x9f4) + iVar5);
          if (*piVar3 != iVar2) {
            *piVar3 = iVar2;
            *(undefined *)(param_1 + 0xa00) = 0;
            goto LAB_0888d620;
          }
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
      }
      else {
LAB_0888d620:
        iVar2 = *(int *)(param_1 + 0x2d4);
      }
      iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x2c))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x28),uVar8);
      if (((*(char *)(param_1 + 0xa11) == '\0') && (uVar8 < *(uint *)(param_1 + 0xa08))) &&
         (piVar3 = (int *)(*(int *)(param_1 + 0xa04) + iVar5), *piVar3 != iVar2)) {
        *piVar3 = iVar2;
        *(undefined *)(param_1 + 0xa10) = 0;
      }
      break;
    case 5:
      iVar2 = (**(code **)(iVar6 + 0x34))(iVar2 + *(short *)(iVar6 + 0x30),uVar8);
      if (*(char *)(param_1 + 0xa01) == '\0') {
        if (uVar8 < *(uint *)(param_1 + 0x9f8)) {
          piVar3 = (int *)(*(int *)(param_1 + 0x9f4) + iVar5);
          if (*piVar3 != iVar2) {
            *piVar3 = iVar2;
            *(undefined *)(param_1 + 0xa00) = 0;
            goto LAB_0888d6cc;
          }
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
      }
      else {
LAB_0888d6cc:
        iVar2 = *(int *)(param_1 + 0x2d4);
      }
      iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x34))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x30),uVar8);
      if (((*(char *)(param_1 + 0xa11) == '\0') && (uVar8 < *(uint *)(param_1 + 0xa08))) &&
         (piVar3 = (int *)(*(int *)(param_1 + 0xa04) + iVar5), *piVar3 != iVar2)) {
        *piVar3 = iVar2;
        *(undefined *)(param_1 + 0xa10) = 0;
      }
      break;
    case 6:
      iVar2 = (**(code **)(iVar6 + 0x3c))(iVar2 + *(short *)(iVar6 + 0x38),uVar8);
      if (*(char *)(param_1 + 0xa01) == '\0') {
        if (uVar8 < *(uint *)(param_1 + 0x9f8)) {
          piVar3 = (int *)(*(int *)(param_1 + 0x9f4) + iVar5);
          if (*piVar3 != iVar2) {
            *piVar3 = iVar2;
            *(undefined *)(param_1 + 0xa00) = 0;
            goto LAB_0888d778;
          }
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
      }
      else {
LAB_0888d778:
        iVar2 = *(int *)(param_1 + 0x2d4);
      }
      iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x3c))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x38),uVar8);
      if (((*(char *)(param_1 + 0xa11) == '\0') && (uVar8 < *(uint *)(param_1 + 0xa08))) &&
         (piVar3 = (int *)(*(int *)(param_1 + 0xa04) + iVar5), *piVar3 != iVar2)) {
        *piVar3 = iVar2;
        *(undefined *)(param_1 + 0xa10) = 0;
      }
      break;
    case 7:
      iVar2 = (**(code **)(iVar6 + 0x44))(iVar2 + *(short *)(iVar6 + 0x40),uVar8);
      if (*(char *)(param_1 + 0xa01) == '\0') {
        if (uVar8 < *(uint *)(param_1 + 0x9f8)) {
          piVar3 = (int *)(*(int *)(param_1 + 0x9f4) + iVar5);
          if (*piVar3 != iVar2) {
            *piVar3 = iVar2;
            *(undefined *)(param_1 + 0xa00) = 0;
            goto LAB_0888d824;
          }
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
      }
      else {
LAB_0888d824:
        iVar2 = *(int *)(param_1 + 0x2d4);
      }
      iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x44))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x40),uVar8);
      if (((*(char *)(param_1 + 0xa11) == '\0') && (uVar8 < *(uint *)(param_1 + 0xa08))) &&
         (piVar3 = (int *)(*(int *)(param_1 + 0xa04) + iVar5), *piVar3 != iVar2)) {
        *piVar3 = iVar2;
        *(undefined *)(param_1 + 0xa10) = 0;
      }
      break;
    case 8:
      iVar2 = (**(code **)(iVar6 + 0x4c))(iVar2 + *(short *)(iVar6 + 0x48),uVar8);
      if (*(char *)(param_1 + 0xa01) == '\0') {
        if (uVar8 < *(uint *)(param_1 + 0x9f8)) {
          piVar3 = (int *)(*(int *)(param_1 + 0x9f4) + iVar5);
          if (*piVar3 != iVar2) {
            *piVar3 = iVar2;
            *(undefined *)(param_1 + 0xa00) = 0;
            goto LAB_0888d8d0;
          }
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
      }
      else {
LAB_0888d8d0:
        iVar2 = *(int *)(param_1 + 0x2d4);
      }
      iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x4c))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x48),uVar8);
      if (((*(char *)(param_1 + 0xa11) == '\0') && (uVar8 < *(uint *)(param_1 + 0xa08))) &&
         (piVar3 = (int *)(*(int *)(param_1 + 0xa04) + iVar5), *piVar3 != iVar2)) {
        *piVar3 = iVar2;
        *(undefined *)(param_1 + 0xa10) = 0;
      }
      break;
    case 9:
      iVar2 = (**(code **)(iVar6 + 0x54))(iVar2 + *(short *)(iVar6 + 0x50),uVar8);
      if (*(char *)(param_1 + 0xa01) == '\0') {
        if (uVar8 < *(uint *)(param_1 + 0x9f8)) {
          piVar3 = (int *)(*(int *)(param_1 + 0x9f4) + iVar5);
          if (*piVar3 != iVar2) {
            *piVar3 = iVar2;
            *(undefined *)(param_1 + 0xa00) = 0;
            goto LAB_0888d97c;
          }
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
      }
      else {
LAB_0888d97c:
        iVar2 = *(int *)(param_1 + 0x2d4);
      }
      iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x54))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x50),uVar8);
      if (((*(char *)(param_1 + 0xa11) == '\0') && (uVar8 < *(uint *)(param_1 + 0xa08))) &&
         (piVar3 = (int *)(*(int *)(param_1 + 0xa04) + iVar5), *piVar3 != iVar2)) {
        *piVar3 = iVar2;
        *(undefined *)(param_1 + 0xa10) = 0;
      }
      break;
    case 10:
      iVar2 = (**(code **)(iVar6 + 0x5c))(iVar2 + *(short *)(iVar6 + 0x58),uVar8);
      if (*(char *)(param_1 + 0xa01) == '\0') {
        if (uVar8 < *(uint *)(param_1 + 0x9f8)) {
          piVar3 = (int *)(*(int *)(param_1 + 0x9f4) + iVar5);
          if (*piVar3 != iVar2) {
            *piVar3 = iVar2;
            *(undefined *)(param_1 + 0xa00) = 0;
            goto LAB_0888da28;
          }
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
      }
      else {
LAB_0888da28:
        iVar2 = *(int *)(param_1 + 0x2d4);
      }
      iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x5c))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x58),uVar8);
      if (((*(char *)(param_1 + 0xa11) == '\0') && (uVar8 < *(uint *)(param_1 + 0xa08))) &&
         (piVar3 = (int *)(*(int *)(param_1 + 0xa04) + iVar5), *piVar3 != iVar2)) {
        *piVar3 = iVar2;
        *(undefined *)(param_1 + 0xa10) = 0;
      }
      break;
    default:
      iVar2 = (**(code **)(iVar6 + 0x14))(iVar2 + *(short *)(iVar6 + 0x10),uVar8);
      if (*(char *)(param_1 + 0xa01) == '\0') {
        if (uVar8 < *(uint *)(param_1 + 0x9f8)) {
          piVar3 = (int *)(*(int *)(param_1 + 0x9f4) + iVar5);
          if (*piVar3 != iVar2) {
            *piVar3 = iVar2;
            *(undefined *)(param_1 + 0xa00) = 0;
            goto LAB_0888d41c;
          }
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x2d4);
        }
      }
      else {
LAB_0888d41c:
        iVar2 = *(int *)(param_1 + 0x2d4);
      }
      iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x10),uVar8);
      if (((*(char *)(param_1 + 0xa11) == '\0') && (uVar8 < *(uint *)(param_1 + 0xa08))) &&
         (piVar3 = (int *)(*(int *)(param_1 + 0xa04) + iVar5), *piVar3 != iVar2)) {
        *piVar3 = iVar2;
        *(undefined *)(param_1 + 0xa10) = 0;
      }
    }
    uVar8 = uVar8 + 1;
    iVar5 = iVar5 + 4;
    if (5 < (int)uVar8) {
      uVar8 = 0;
      uVar4 = *(uint *)(param_1 + 0x918);
      uVar7 = 1;
      do {
        uVar8 = uVar8 + 1;
        uVar4 = uVar4 | uVar7;
        uVar7 = 1 << (uVar8 & 0x1f);
      } while ((int)uVar8 < 0x1e);
      *(uint *)(param_1 + 0x918) = uVar4;
      FUN_0888d0bc(param_1);
      return;
    }
  } while( true );
}

