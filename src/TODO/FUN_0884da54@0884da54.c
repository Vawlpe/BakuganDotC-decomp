#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0884da54(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != '\0') {
    uVar1 = DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,2);
    if (iVar2 == 0) {
      return 3;
    }
  }
  iVar2 = FUN_0884d2c0(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_0884d4a0(param_1);
    if (iVar2 == 0) {
      FUN_0884d600(param_1,1);
      return 1;
    }
    FUN_0884d600(param_1,2);
    return 4;
  }
  iVar2 = FUN_0884d86c(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_0884d4a0(param_1);
    if (iVar2 == 0) {
      FUN_0884d600(param_1,3);
      return 2;
    }
    FUN_0884d600(param_1,2);
    return 4;
  }
  if (param_2 == '\0') {
    uVar1 = DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,2);
    if (((iVar2 == 0) && (iVar2 = FUN_0884d940(param_1,0), iVar2 != 0)) &&
       (iVar2 = FUN_0884d4a0(param_1), iVar2 == 0)) {
      FUN_0884d600(param_1,3);
      return 2;
    }
  }
  iVar2 = FUN_0880d354();
  if (iVar2 != 0) {
    iVar2 = DONE_NotZero_DAT_08AAC9E0();
    if (iVar2 != 0) {
      uVar1 = DONE_Get_DAT_08AAC9E0();
      iVar2 = FUN_0880d7e0(uVar1,0x80);
      if (iVar2 != 0) {
        *(undefined4 *)(DAT_08ac58c4 + 0xc) = 6;
        return 6;
      }
    }
    uVar1 = DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d7e0(uVar1,0x800);
    if (iVar2 != 0) {
      *(undefined4 *)(DAT_08ac58c4 + 0xc) = 10;
      return 7;
    }
  }
  return 0;
}

