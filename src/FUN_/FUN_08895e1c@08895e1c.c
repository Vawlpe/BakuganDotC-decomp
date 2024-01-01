#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08895e1c(int param_1)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  float fVar8;
  
  piVar6 = (int *)(param_1 + 0x65c);
  if (*(int *)(param_1 + 0x678) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x660) == 0x1b) {
    iVar4 = *(int *)(param_1 + 0x96c);
    if ((iVar4 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar4 + 0x14) + 0x54))
                          (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x50)), iVar4 != 0)) {
      uVar7 = *(undefined4 *)(param_1 + 0x96c);
      iVar4 = FUN_08892c98(param_1,uVar7);
      if (iVar4 == 0) {
        iVar4 = FUN_08892da8(param_1,uVar7);
        if (iVar4 == 0) {
          iVar4 = FUN_08892e2c(param_1,uVar7);
          if (iVar4 != 0) {
            *(undefined4 *)(param_1 + 0x9d8) = uVar7;
            *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) | 0x200;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x9d8) = uVar7;
          *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) | 0x100;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x9d8) = uVar7;
        *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) | 0x80;
      }
    }
    uVar7 = FUN_08892e90(param_1);
    *(undefined4 *)(param_1 + 0x9dc) = uVar7;
    puVar2 = (undefined2 *)FUN_0888fe34(param_1,piVar6,&DAT_08a80380);
    if (puVar2 != (undefined2 *)0x0) {
      uVar7 = FUN_088903e8(param_1,puVar2 + 0x18);
      FUN_08895d40(uVar7,piVar6,*(undefined *)(puVar2 + 1),*(undefined *)(puVar2 + 0x18),
                   *(undefined *)(puVar2 + 0x1e),(int)(short)puVar2[0x20]);
      *(undefined2 *)(param_1 + 0x786) = *puVar2;
    }
  }
  uVar7 = FUN_08878ce4(*(undefined4 *)(param_1 + 0x9dc));
  *(undefined4 *)(param_1 + 0x9dc) = uVar7;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x9d8) == 0) {
LAB_08896008:
    iVar3 = *(int *)(param_1 + 0x9dc);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x9d4);
    if ((uVar5 & 0x80) == 0) {
      if ((uVar5 & 0x100) == 0) {
        if ((uVar5 & 0x200) == 0) {
          iVar3 = *(int *)(param_1 + 0x9dc);
        }
        else {
          iVar3 = FUN_08892e2c(param_1);
          if (iVar3 == 0) {
            *(undefined4 *)(param_1 + 0x9d8) = 0;
            *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) & 0xfffffdff;
            goto LAB_08896008;
          }
          iVar3 = *(int *)(param_1 + 0x9dc);
        }
      }
      else {
        iVar3 = FUN_08892da8(param_1);
        if (iVar3 == 0) {
          *(undefined4 *)(param_1 + 0x9d8) = 0;
          *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) & 0xfffffeff;
          goto LAB_08896008;
        }
        iVar3 = *(int *)(param_1 + 0x9dc);
      }
    }
    else {
      iVar3 = FUN_08892c98(param_1);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x9d8) = 0;
        *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) & 0xffffff7f;
        goto LAB_08896008;
      }
      iVar3 = *(int *)(param_1 + 0x9dc);
    }
  }
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0xb0) != 0)) {
    if (*(int *)(iVar3 + 0x110) == 0) {
      if (*(int *)(*(int *)(iVar3 + 0xb0) + 0x15c) != *(int *)(*(int *)(param_1 + 0x1a0) + 0xc)) {
        *(undefined4 *)(param_1 + 0x9dc) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x9dc) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x9d8) == 0) && (*(int *)(param_1 + 0x9dc) == 0)) {
    iVar4 = 1;
  }
  iVar3 = FUN_08895df8(piVar6);
  if (iVar3 != 0) {
    iVar4 = *piVar6;
    *(int *)(param_1 + 0x660) = iVar4;
    iVar3 = iVar4 * 4 >> 2;
    switch(iVar4) {
    case 0:
      *(undefined4 *)(param_1 + 0x67c) = 1;
      return;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0x18:
    case 0x19:
      FUN_08895e0c(param_1 + 0x530);
      FUN_08895d40(*(undefined4 *)(param_1 + 0x69c),param_1 + 0x2d8,*(undefined4 *)(param_1 + 0x660)
                   ,*(undefined *)(param_1 + 0x698),*(undefined4 *)(param_1 + 0x6a0),0xffffffff);
      FUN_08895e0c(param_1 + 0x404);
      *(undefined4 *)(param_1 + 0x67c) = 3;
      *(undefined *)(param_1 + 0x784) = 1;
      return;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x10:
      FUN_08895d40(*(undefined4 *)(param_1 + 0x69c),param_1 + 0x404,iVar3,
                   *(undefined *)(param_1 + 0x698),*(undefined4 *)(param_1 + 0x6a0),0xffffffff);
      *(undefined4 *)(param_1 + 0x67c) = 1;
      *(undefined *)(param_1 + 0x784) = 1;
      return;
    default:
      FUN_0888cfe4(piVar6);
      return;
    case 0x11:
      goto switchD_08896094_caseD_11;
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
      FUN_08895d40(*(undefined4 *)(param_1 + 0x69c),param_1 + 0x404,iVar3,
                   *(undefined *)(param_1 + 0x698),*(undefined4 *)(param_1 + 0x6a0),0xffffffff);
      *(undefined4 *)(param_1 + 0x67c) = 1;
      *(undefined *)(param_1 + 0x784) = 1;
      return;
    case 0x1a:
      *(undefined4 *)(param_1 + 0x67c) = 9;
      *(undefined4 *)(param_1 + 0x664) = 2;
      return;
    }
  }
  if (*(char *)(param_1 + 0x694) == '\0') {
    fVar8 = *(float *)(param_1 + 0x690) + 0.03333334;
    *(float *)(param_1 + 0x690) = fVar8;
    if (*(float *)(param_1 + 0x68c) <= fVar8) {
      *(float *)(param_1 + 0x690) = *(float *)(param_1 + 0x68c);
      *(undefined *)(param_1 + 0x694) = 1;
    }
  }
  iVar3 = *(int *)(param_1 + 0x67c) * 4 >> 2;
  switch(*(int *)(param_1 + 0x67c)) {
  case 0:
    break;
  case 1:
    if (iVar4 == 0) {
      iVar4 = FUN_08892948(param_1,piVar6);
    }
  case 2:
    if (iVar4 != 0) {
      FUN_08894c1c(piVar6);
    }
    break;
  case 3:
    if (iVar4 == 0) {
      iVar4 = FUN_08892948(param_1,piVar6);
    }
  case 4:
    if (iVar4 != 0) {
      FUN_08894c1c(piVar6);
      FUN_0888cfe4(param_1 + 0x530);
      FUN_0888cfe4(param_1 + 0x404);
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x674) == '\0') {
      iVar3 = *(int *)(param_1 + 0x67c);
    }
    else if (*(int *)(param_1 + 0x9d8) == 0) {
      if ((*(int *)(param_1 + 0x9dc) != 0) &&
         (iVar3 = FUN_08892c80(param_1,*(int *)(param_1 + 0x9dc)), iVar3 == 0)) {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x67c);
    }
    else {
      iVar3 = FUN_08892c48(param_1,*(int *)(param_1 + 0x9d8));
      if (iVar3 == 0) {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x67c);
    }
    *(int *)(param_1 + 0x67c) = iVar3 + 1;
    goto LAB_0889632c;
  case 6:
LAB_0889632c:
    FUN_08899620(param_1 + 0x1b0);
switchD_08896228_caseD_7:
    if (iVar4 == 0) {
      iVar4 = FUN_08892948(param_1,piVar6);
    }
    goto switchD_08896228_caseD_8;
  case 7:
    goto switchD_08896228_caseD_7;
  case 8:
switchD_08896228_caseD_8:
    if (iVar4 == 0) {
      return;
    }
    FUN_0888cfe4(param_1 + 0x2d8);
    FUN_0888cfe4(param_1 + 0x404);
    FUN_08894c1c(piVar6);
    return;
  case 9:
    *(undefined *)(param_1 + 0x784) = 1;
    *(int *)(param_1 + 0x67c) = iVar3 + 1;
    break;
  case 10:
    if (*(char *)(param_1 + 0x688) == '\0') {
      fVar8 = *(float *)(param_1 + 0x684) + 0.03333334;
      *(float *)(param_1 + 0x684) = fVar8;
      if (*(float *)(param_1 + 0x680) <= fVar8) {
        *(float *)(param_1 + 0x684) = *(float *)(param_1 + 0x680);
        *(undefined *)(param_1 + 0x688) = 1;
      }
    }
    if (*(char *)(param_1 + 0x688) == '\0') {
      return;
    }
    *(int *)(param_1 + 0x67c) = iVar3 + 1;
    uVar7 = *(undefined4 *)(param_1 + 0x664);
    goto LAB_088963e4;
  case 0xb:
    uVar7 = *(undefined4 *)(param_1 + 0x664);
LAB_088963e4:
    FUN_08897ee4(param_1,param_1 + 0x764,uVar7);
    if (*(char *)(param_1 + 0x780) != '\0') {
      *(undefined4 *)(param_1 + 0x764) = 0;
      *(undefined4 *)(param_1 + 0x768) = 0;
      *(undefined4 *)(param_1 + 0x76c) = 0;
      *(undefined *)(param_1 + 0x770) = 1;
      *(undefined4 *)(param_1 + 0x774) = 0;
      *(undefined4 *)(param_1 + 0x778) = 0;
      *(undefined4 *)(param_1 + 0x77c) = 0;
      *(undefined *)(param_1 + 0x780) = 0;
      *(undefined *)(param_1 + 0x781) = 0;
      *(undefined4 *)(param_1 + 0x67c) = 0xc;
    }
    break;
  case 0xc:
    *(undefined4 *)(param_1 + 0x67c) = 0xd;
    break;
  case 0xd:
    iVar4 = FUN_08892948(param_1,piVar6);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x67c) = 0xe;
      FUN_08894c1c(piVar6);
    }
  }
  return;
switchD_08896094_caseD_11:
  FUN_08895e0c(param_1 + 0x2d8);
  FUN_08895e0c(param_1 + 0x404);
  cVar1 = *(char *)(param_1 + 0x9e2);
  iVar4 = FUN_089bed14(99);
  if (iVar4 < cVar1) {
    *(undefined *)(param_1 + 0x674) = 1;
  }
  if ((*(uint *)(param_1 + 0x918) & 0x8000000) == 0) {
    *(undefined *)(param_1 + 0x674) = 0;
  }
  *(undefined4 *)(param_1 + 0x67c) = 5;
  *(undefined *)(param_1 + 0x784) = 1;
  return;
}

