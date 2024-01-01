#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d03c4(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_089bb728(DAT_08ac5938[1]);
    FUN_08a312e4(*DAT_08ac5938,param_1);
    FUN_089bb790(DAT_08ac5938[1]);
    iVar1 = *(int *)(param_1 + 0xf0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xf8);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0xf0) = 0;
      iVar1 = *(int *)(param_1 + 0xf8);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0xf8) = 0;
      iVar1 = *(int *)(param_1 + 8);
    }
    if (iVar1 != 0) {
      FUN_089bb668(iVar1,3);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

