#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089c0444(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 1;
  if ((-1 < *(int *)(param_2 + 4)) && (iVar1 = DONE_NotZero_DAT_08AC5874(), iVar1 != 0)) {
    uVar2 = DONE_Get_DAT_08AC5874();
    iVar3 = FUN_089c6588(uVar2,*(undefined4 *)(param_2 + 4));
  }
  if (iVar3 != 0) {
    iVar1 = FUN_08a2e148(DAT_08ac525c,param_2);
    if (iVar1 == 0) {
      if (*(char *)(param_2 + 0x32) == '\0') {
        if ((DAT_08ac5260 != 0) && (iVar1 = FUN_089d774c(DAT_08ac5260,param_2), iVar1 != 0)) {
          param_2 = 0;
        }
        if (param_2 != 0) {
          FUN_089d8634();
          FUN_089d7fd8(param_2,0,0);
          FUN_089d866c();
        }
      }
      else {
        iVar3 = 0;
      }
    }
    else {
      if ((DAT_08ac5260 != 0) && (iVar1 = FUN_089d774c(DAT_08ac5260,param_2), iVar1 != 0)) {
        param_2 = 0;
      }
      if (param_2 != 0) {
        FUN_089d8634();
        FUN_089d7fd8(param_2,0,0);
        FUN_089d866c();
      }
    }
  }
  return iVar3;
}

