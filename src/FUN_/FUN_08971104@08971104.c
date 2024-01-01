#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08971104(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  param_2 = param_2 & 0xff;
  iVar3 = param_2 * 0xc;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 4);
  *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 0x34);
  *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
  if (param_2 < 2) {
    if (param_2 == 0) {
      iVar2 = FUN_0880d354();
      if (iVar2 == 0) {
        if (*(char *)(param_1 + 0xba9) == '\0') {
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 4);
          *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
          *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
          *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
          *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
          cVar1 = *(char *)(param_1 + 0xbad);
        }
        else {
          cVar1 = *(char *)(param_1 + 0xbad);
        }
        if ((int)*(char *)(param_1 + 0xba9) == cVar1 + -1) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 0x34);
          *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
          *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
          *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
          *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
        }
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 4);
        *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 0x34);
        *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
      }
    }
    else {
      if (*(char *)(param_1 + 0xbaa) == '\0') {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 4);
        *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
        cVar1 = *(char *)(param_1 + 0xbae);
      }
      else {
        cVar1 = *(char *)(param_1 + 0xbae);
      }
      if ((int)*(char *)(param_1 + 0xbaa) == cVar1 + -1) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 0x34);
        *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
      }
    }
  }
  else if (param_2 < 3) {
    if (*(char *)(param_1 + 0xbab) == '\0') {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 4);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
      cVar1 = *(char *)(param_1 + 0xbaf);
    }
    else {
      cVar1 = *(char *)(param_1 + 0xbaf);
    }
    if ((int)*(char *)(param_1 + 0xbab) == cVar1 + -1) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 0x34);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
    }
  }
  else if (param_2 < 4) {
    iVar2 = (int)*(char *)(param_1 + 0xbac);
    if (iVar2 == -1) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 4);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 0x34);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
    }
    else {
      if (iVar2 == 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 4);
        *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
        iVar2 = (int)*(char *)(param_1 + 0xbac);
        cVar1 = *(char *)(param_1 + 0xbb0);
      }
      else {
        cVar1 = *(char *)(param_1 + 0xbb0);
      }
      if (iVar2 == cVar1 + -1) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 0x34);
        *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
      }
    }
  }
  return;
}

