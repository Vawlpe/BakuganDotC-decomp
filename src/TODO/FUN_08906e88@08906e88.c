#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08906e88(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x1ac);
  if (iVar5 == 0) {
LAB_0890709c:
    if (*(int *)(param_1 + 0x60) == 0) {
      iVar5 = *(int *)(param_1 + 0x18);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x30);
      iVar5 = *(int *)(param_1 + 0x60);
      while( true ) {
        iVar6 = *(int *)(iVar5 + 4);
        FUN_08906bf0(iVar5,uVar4);
        if (iVar6 == 0) break;
        uVar4 = *(undefined4 *)(param_1 + 0x30);
        iVar5 = iVar6;
      }
      iVar5 = *(int *)(param_1 + 0x18);
    }
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0x344) = *(undefined4 *)(iVar5 + 0x24);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    return;
  }
  iVar6 = *(int *)(iVar5 + 4);
  do {
    iVar2 = 0;
    if (*(int **)(iVar5 + 0x1c) != (int *)0x0) {
      iVar2 = **(int **)(iVar5 + 0x1c);
    }
    if (iVar2 == 0) {
      piVar3 = *(int **)(iVar5 + 0x20);
    }
    else {
      do {
        iVar2 = *(int *)(iVar2 + 4);
        FUN_08905df8(param_1);
      } while (iVar2 != 0);
      piVar3 = *(int **)(iVar5 + 0x20);
    }
    iVar2 = 0;
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
    }
    if (iVar2 == 0) {
      piVar3 = *(int **)(iVar5 + 0x28);
    }
    else {
      do {
        iVar2 = *(int *)(iVar2 + 4);
        FUN_08906208(param_1);
      } while (iVar2 != 0);
      piVar3 = *(int **)(iVar5 + 0x28);
    }
    iVar2 = 0;
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
    }
    if (iVar2 == 0) {
      piVar3 = *(int **)(iVar5 + 0x24);
    }
    else {
      do {
        iVar2 = *(int *)(iVar2 + 4);
        FUN_08906250(param_1);
      } while (iVar2 != 0);
      piVar3 = *(int **)(iVar5 + 0x24);
    }
    iVar2 = 0;
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
    }
    if (iVar2 == 0) {
      piVar3 = *(int **)(iVar5 + 0x2c);
    }
    else {
      do {
        iVar2 = *(int *)(iVar2 + 4);
        FUN_089064b4(param_1);
      } while (iVar2 != 0);
      piVar3 = *(int **)(iVar5 + 0x2c);
    }
    iVar2 = 0;
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
    }
    if (iVar2 == 0) {
      piVar3 = *(int **)(iVar5 + 0x30);
    }
    else {
      do {
        iVar2 = *(int *)(iVar2 + 4);
        FUN_08906af0(param_1);
      } while (iVar2 != 0);
      piVar3 = *(int **)(iVar5 + 0x30);
    }
    iVar2 = 0;
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
    }
    if (iVar2 == 0) {
      cVar1 = *(char *)(param_1 + 0x6c);
    }
    else {
      do {
        iVar2 = *(int *)(iVar2 + 4);
        FUN_08906ba8(param_1);
      } while (iVar2 != 0);
      cVar1 = *(char *)(param_1 + 0x6c);
    }
    if (cVar1 == '\0') {
      iVar2 = *(int *)(param_1 + 0x30);
    }
    else if (*(char *)(param_1 + 0x6d) == '\0') {
      *(undefined *)(param_1 + 0x6d) = 1;
      iVar2 = DONE_NotZero_DAT_08AC5874();
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x30);
      }
      else {
        uVar4 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar4,0x4300012,0,0);
        iVar2 = *(int *)(param_1 + 0x30);
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x30);
    }
    if (iVar2 < *(int *)(iVar5 + 0x3c)) {
      if ((*(int *)(iVar5 + 0x3c) == 0xffff) && (0x15 < iVar2)) {
        cVar1 = *(char *)(param_1 + 0x56);
        goto LAB_0890707c;
      }
    }
    else {
      cVar1 = *(char *)(param_1 + 0x56);
LAB_0890707c:
      if (cVar1 == '\0') {
        *(undefined *)(*(int *)(param_1 + 0x14) + 0x759) = 1;
        *(undefined *)(param_1 + 0x57) = 1;
      }
      else {
        *(undefined *)(param_1 + 0x57) = 1;
      }
    }
    if (iVar6 == 0) goto LAB_0890709c;
    iVar5 = iVar6;
    iVar6 = *(int *)(iVar6 + 4);
  } while( true );
}

