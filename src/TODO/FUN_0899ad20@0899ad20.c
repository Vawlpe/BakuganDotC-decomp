#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899ad20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x109f) == '\0') {
    FUN_0899abbc(param_1);
    FUN_0899ac90(param_1);
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,0x2b);
    if (iVar2 < 1) {
      if (-1 < iVar2) {
        FUN_0890a598(param_1,1);
      }
    }
    else if (iVar2 < 3) {
      FUN_089b1bd8();
      uVar1 = _DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar1,0x2e,1);
      if (*(int *)(DAT_08ac58c4 + 4) == 0x24) {
        FUN_0890a598(param_1,5);
      }
      else {
        FUN_0890a598(param_1,3);
      }
    }
  }
  else {
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,0x2b);
    if (iVar2 < 1) {
      if (-1 < iVar2) {
        FUN_0890a598(param_1,0);
      }
    }
    else if (iVar2 < 2) {
      uVar1 = _DONE_Get_DAT_08AAC9E0();
      uVar1 = FUN_0880d0ac(uVar1,0x2c);
      *(undefined4 *)(DAT_08ac58c4 + 4) = uVar1;
      FUN_0890a598(param_1,4);
    }
    else if (iVar2 < 3) {
      FUN_089b1bd8();
      uVar1 = _DONE_Get_DAT_08AAC9E0();
      uVar1 = FUN_0880d0ac(uVar1,0x33);
      *(undefined4 *)(DAT_08ac58c4 + 4) = uVar1;
      uVar1 = _DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar1,0x2e,0);
      FUN_0890a598(param_1,3);
    }
  }
  iVar2 = FUN_0880d354();
  if ((iVar2 != 0) && (iVar2 = _DONE_NotZero_DAT_08AAC9E0(), iVar2 != 0)) {
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d7e0(uVar1,0x80);
    if (iVar2 != 0) {
      FUN_0890a598(param_1,2);
    }
  }
  return;
}

