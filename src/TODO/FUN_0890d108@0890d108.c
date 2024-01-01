#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890d108(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
LAB_0890d148:
      iVar3 = FUN_0890b018(param_1);
      if ((iVar3 == 0) || (5 < *(int *)(param_1 + 0x1d4))) {
        uVar2 = FUN_089f9468();
        iVar3 = FUN_089f9dd4(uVar2);
        if (iVar3 != 0) {
          if (*(char *)(param_1 + 0x1bd) == '\0') {
            *(undefined4 *)(param_1 + 0x20) = 0x2d;
            *(undefined4 *)(param_1 + 0x14) = 1;
          }
          else {
            *(undefined4 *)(param_1 + 0x14) = 0;
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          }
        }
      }
      goto LAB_0890d260;
    }
    *(int *)(param_1 + 0x14) = iVar3 + 1;
  }
  else if (1 < iVar3) {
    if (iVar3 < 3) {
      iVar3 = FUN_0890b018(param_1);
      if (iVar3 == 0) {
        FUN_0890cdac(param_1);
        iVar3 = *(int *)(param_1 + 0x14);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x14);
        *(undefined4 *)(param_1 + 0x1d8) = 1;
      }
      *(int *)(param_1 + 0x14) = iVar3 + 1;
      goto LAB_0890d260;
    }
    goto LAB_0890d148;
  }
  iVar3 = FUN_0890b018(param_1);
  if (iVar3 == 0) {
    FUN_0890cdac(param_1);
    cVar1 = *(char *)(param_1 + 0x1bc);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x1bc);
  }
  if ((cVar1 == '\0') && (iVar3 = FUN_089f944c(), iVar3 != 0)) {
    uVar2 = FUN_089f9468();
    iVar3 = FUN_089f9dd4(uVar2);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0xf;
    }
    else if (*(int *)(param_1 + 0x20) < 1) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    }
  }
LAB_0890d260:
  iVar3 = FUN_0890b018(param_1);
  if (iVar3 == 0) {
    FUN_0890cd60(param_1);
    FUN_0890cff4(param_1);
  }
  return;
}

