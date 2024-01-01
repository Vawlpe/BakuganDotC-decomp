#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e1f70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = FUN_088f505c(0x38d);
  if (iVar1 == 0) {
    iVar1 = FUN_088f505c(0x38e);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x140);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x140);
  }
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 6)) &&
     (((iVar1 != 7 && (iVar1 != 9)) && ((iVar1 != 0xb && (iVar1 != 0xc)))))) {
    *(undefined *)(param_1 + 0x3b8) = 1;
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    *(undefined *)(param_1 + 0x3a0) = 0;
    *(undefined *)(param_1 + 0x3a1) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x3d0) == '\0') {
    iVar1 = _DONE_NotZero_DAT_08AC5874();
    if (iVar1 == 0) {
      *(undefined *)(param_1 + 0x3d8) = 0;
    }
    else {
      uVar2 = _DONE_Get_DAT_08AC5874();
      FUN_089c6588(uVar2,*(undefined4 *)(param_1 + 0x3d4));
      *(undefined *)(param_1 + 0x3d8) = 0;
    }
  }
  else {
    fVar4 = *(float *)(param_1 + 0x3bc) + 0.1;
    fVar5 = *(float *)(param_1 + 0x3c0) + 0.1;
    *(float *)(param_1 + 0x3bc) = fVar4;
    *(float *)(param_1 + 0x3c0) = fVar5;
    if (1.0 < fVar4) {
      *(undefined4 *)(param_1 + 0x3bc) = 0x3f800000;
    }
    if (1.0 < fVar5) {
      *(undefined4 *)(param_1 + 0x3c0) = 0x3f800000;
    }
    *(undefined *)(param_1 + 0x3d0) = 0;
    if (*(char *)(param_1 + 0x3d8) == '\0') {
      iVar1 = _DONE_NotZero_DAT_08AC5874();
      if (iVar1 != 0) {
        uVar2 = _DONE_Get_DAT_08AC5874();
        uVar2 = FUN_089c6350(uVar2,0x2c00038,0,0);
        *(undefined4 *)(param_1 + 0x3d4) = uVar2;
      }
      *(undefined *)(param_1 + 0x3d8) = 1;
    }
  }
  iVar1 = FUN_088f505c(0x38d);
  if ((iVar1 == 0) || ((*(uint *)(param_1 + 0x168) & 0x10000000) == 0)) {
    iVar1 = FUN_088f505c(0x38e);
    if (iVar1 == 0) {
      cVar3 = *(char *)(param_1 + 0x3b8);
    }
    else if ((*(uint *)(param_1 + 0x168) & 0x8000000) == 0) {
      cVar3 = *(char *)(param_1 + 0x3b8);
    }
    else {
      iVar1 = FUN_088e1948();
      if (*(int *)(iVar1 + 0x140) == 0xb) {
        cVar3 = *(char *)(param_1 + 0x3b8);
      }
      else if (*(char *)(param_1 + 0x3a0) == '\0') {
        if (*(float *)(param_1 + 0x3bc) == 0.0) {
          cVar3 = *(char *)(param_1 + 0x3b8);
        }
        else if (*(char *)(param_1 + 0x354) == '\0') {
          iVar1 = FUN_089bfa40(500);
          if (*(char *)(iVar1 + 0x6e8) == '\0') {
            FUN_088e12e0(param_1);
            cVar3 = *(char *)(param_1 + 0x3b8);
          }
          else {
            cVar3 = *(char *)(param_1 + 0x3b8);
          }
        }
        else {
          cVar3 = *(char *)(param_1 + 0x3b8);
        }
      }
      else {
        FUN_088e1004(param_1,0);
        cVar3 = *(char *)(param_1 + 0x3b8);
      }
    }
  }
  else {
    iVar1 = FUN_088e1948();
    if (*(int *)(iVar1 + 0x140) == 0xb) {
      cVar3 = *(char *)(param_1 + 0x3b8);
    }
    else if (*(char *)(param_1 + 0x3a1) == '\0') {
      if (*(float *)(param_1 + 0x3c0) == 0.0) {
        cVar3 = *(char *)(param_1 + 0x3b8);
      }
      else if (*(char *)(param_1 + 0x354) == '\0') {
        iVar1 = FUN_089bfa40(500);
        if (*(char *)(iVar1 + 0x6e8) == '\0') {
          FUN_088e11bc(param_1);
          cVar3 = *(char *)(param_1 + 0x3b8);
        }
        else {
          cVar3 = *(char *)(param_1 + 0x3b8);
        }
      }
      else {
        cVar3 = *(char *)(param_1 + 0x3b8);
      }
    }
    else {
      FUN_088e10bc(param_1,0);
      cVar3 = *(char *)(param_1 + 0x3b8);
    }
  }
  if ((cVar3 == '\0') &&
     (iVar1 = *(int *)(param_1 + 0x3a8) + 1, *(int *)(param_1 + 0x3a8) = iVar1, 6.0 < (float)iVar1))
  {
    *(undefined *)(param_1 + 0x3b8) = 1;
    *(undefined4 *)(param_1 + 0x3a8) = 0;
  }
  iVar1 = FUN_088f505c(0x38e);
  if (((iVar1 == 0) || ((*(uint *)(param_1 + 0x168) & 0x8000000) == 0)) ||
     (*(float *)(param_1 + 0x3bc) != 0.0)) {
    iVar1 = FUN_088f505c(0x38d);
    if (iVar1 == 0) {
      cVar3 = *(char *)(param_1 + 0x3a1);
      goto LAB_088e22fc;
    }
    if ((*(uint *)(param_1 + 0x168) & 0x10000000) == 0) {
      cVar3 = *(char *)(param_1 + 0x3a1);
      goto LAB_088e22fc;
    }
    if (*(float *)(param_1 + 0x3c0) != 0.0) {
      cVar3 = *(char *)(param_1 + 0x3a1);
      goto LAB_088e22fc;
    }
  }
  iVar1 = _DONE_NotZero_DAT_08AC5874();
  if (iVar1 == 0) {
    cVar3 = *(char *)(param_1 + 0x3a1);
  }
  else {
    uVar2 = _DONE_Get_DAT_08AC5874();
    FUN_089c6350(uVar2,3,0,0);
    cVar3 = *(char *)(param_1 + 0x3a1);
  }
LAB_088e22fc:
  if (cVar3 == '\0') {
    cVar3 = *(char *)(param_1 + 0x3a0);
  }
  else if (*(char *)(param_1 + 0x3b8) == '\0') {
    cVar3 = *(char *)(param_1 + 0x3a0);
  }
  else {
    iVar1 = FUN_088e143c(param_1);
    fVar5 = 0.0;
    if (iVar1 == 0) {
      iVar1 = FUN_088e1460(param_1);
      fVar4 = *(float *)(param_1 + 0x3c0);
      if (iVar1 != 0) {
        fVar4 = fVar4 - 0.005;
        *(float *)(param_1 + 0x3c0) = fVar4;
      }
    }
    else {
      fVar4 = *(float *)(param_1 + 0x3c0) - 0.003333333;
      *(float *)(param_1 + 0x3c0) = fVar4;
    }
    if (fVar4 < fVar5) {
      *(float *)(param_1 + 0x3c0) = fVar5;
      FUN_088e10bc(param_1,0);
      cVar3 = *(char *)(param_1 + 0x3a0);
    }
    else {
      cVar3 = *(char *)(param_1 + 0x3a0);
    }
  }
  if ((cVar3 != '\0') && (*(char *)(param_1 + 0x3b8) != '\0')) {
    iVar1 = FUN_088e143c(param_1);
    fVar5 = 0.0;
    if (iVar1 == 0) {
      iVar1 = FUN_088e1460(param_1);
      fVar4 = *(float *)(param_1 + 0x3bc);
      if (iVar1 != 0) {
        fVar4 = fVar4 - 0.005;
        *(float *)(param_1 + 0x3bc) = fVar4;
      }
    }
    else {
      fVar4 = *(float *)(param_1 + 0x3bc) - 0.003333333;
      *(float *)(param_1 + 0x3bc) = fVar4;
    }
    if (fVar4 < fVar5) {
      *(float *)(param_1 + 0x3bc) = fVar5;
      FUN_088e1004(param_1,0);
    }
  }
  return;
}

