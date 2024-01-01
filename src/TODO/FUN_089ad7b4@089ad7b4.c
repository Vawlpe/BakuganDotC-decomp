#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ad7b4(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_2 = param_2 & 0xff;
  iVar4 = param_2 * 0xc;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 4);
  *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 0x34);
  *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
  cVar1 = FUN_089acf60(param_1,param_2);
  if (param_2 < 3) {
    if (cVar1 == '\0') {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 4);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
    }
    if (cVar1 == '\t') {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 0x34);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
    }
  }
  else {
    iVar2 = FUN_089abfa0(param_1);
    iVar3 = *(int *)(param_1 + 0x1c) + iVar4;
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar3 + 4);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 0x34);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
    }
    else if (cVar1 == '\0') {
      iVar2 = *(int *)(iVar3 + 4);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
    }
    else {
      iVar2 = *(int *)(iVar3 + 0x34);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
    }
  }
  return;
}

