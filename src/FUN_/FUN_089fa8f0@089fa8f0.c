#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fa8f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  int local_20;
  int local_1c;
  
  local_1c = 0;
  local_20 = 0;
  iVar1 = zz_sceIoIoctl(param_1[5],0x1020007,0,0,&local_20,8);
  param_1[8] = iVar1;
  if (iVar1 < 0) {
    if (iVar1 != -0x7ffdfcdd) {
      return;
    }
    param_1[8] = 0;
    *(undefined *)((int)param_1 + 10) = 0;
    *param_1 = 1;
    return;
  }
  if ((local_1c != 0 || local_20 == 0) && local_1c == 0) {
    return;
  }
  param_1[10] = local_20;
  if (param_1[1] == 2) {
    *param_1 = 6;
    return;
  }
  iVar1 = param_1[9];
  if (iVar1 == -1) {
    *param_1 = 6;
    return;
  }
  if (local_20 == 0) {
    if (local_1c == 0) {
      *param_1 = 6;
      return;
    }
    cVar3 = *(char *)((int)param_1 + 0xe);
  }
  else {
    cVar3 = *(char *)((int)param_1 + 0xe);
  }
  if (cVar3 == '\0') {
    cVar3 = *(char *)(param_1 + 2);
    if (iVar1 == 0) {
      *(undefined *)((int)param_1 + 0xd) = 0;
    }
    else if (iVar1 == 1) {
      *(undefined *)((int)param_1 + 0xd) = 1;
    }
  }
  else {
    piVar4 = (int *)param_1[0x3c];
    if (piVar4 == (int *)0x0) {
      if (iVar1 == 0) {
        cVar5 = *(char *)((int)param_1 + 0xd);
      }
      else {
        FUN_089d8634();
        FUN_089d7fd8(iVar1,0,0);
        FUN_089d866c();
        param_1[9] = 0;
        cVar5 = *(char *)((int)param_1 + 0xd);
      }
    }
    else {
      (**(code **)(*piVar4 + 0x14))((int)piVar4 + (int)*(short *)(*piVar4 + 0x10),iVar1);
      cVar5 = *(char *)((int)param_1 + 0xd);
    }
    cVar3 = *(char *)(param_1 + 2);
    if (cVar5 == '\0') {
      param_1[9] = 0;
    }
    else if (cVar5 == '\x01') {
      param_1[9] = 1;
    }
  }
  if (cVar3 != '\0') {
    *param_1 = 3;
    return;
  }
  piVar4 = (int *)param_1[0x3c];
  if (piVar4 == (int *)0x0) {
    iVar1 = param_1[9];
    if (iVar1 == 0) {
      uVar6 = param_1[10];
      FUN_089d8634();
      uVar2 = FUN_089d81a4();
      FUN_089d816c(0);
      iVar1 = FUN_089d7d74(uVar6,0,0);
      FUN_089d816c(uVar2);
      FUN_089d866c();
      param_1[9] = iVar1;
    }
    else if (iVar1 == 1) {
      uVar6 = param_1[10];
      FUN_089d8634();
      uVar2 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar1 = FUN_089d7d74(uVar6,0,0);
      FUN_089d816c(uVar2);
      FUN_089d866c();
      param_1[9] = iVar1;
    }
  }
  else {
    iVar1 = (**(code **)(*piVar4 + 0xc))((int)piVar4 + (int)*(short *)(*piVar4 + 8),param_1[10],0,0)
    ;
    param_1[9] = iVar1;
    if (iVar1 != 0) goto LAB_089fabac;
    iVar1 = 0;
    if (*(char *)(param_1 + 0x3d) != '\0') {
      *param_1 = 0;
      *(undefined *)(param_1 + 3) = 1;
      return;
    }
  }
  if (iVar1 == 0) {
    return;
  }
LAB_089fabac:
  *(undefined *)((int)param_1 + 0xe) = 1;
  *param_1 = 4;
  return;
}

