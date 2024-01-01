#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ef410(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_088ef380(param_1);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_088eae94();
    FUN_088eaf48(*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  FUN_088cc6d4(0);
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
    FUN_089d8634();
    FUN_089d7fd8(iVar1,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar1 = *(int *)(param_1 + 0x28);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  else {
    FUN_089d8634();
    FUN_089d7fd8(iVar1,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x30);
  }
  else {
    FUN_089d8634();
    FUN_089d7fd8(iVar1,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x2c) = 0;
    iVar1 = *(int *)(param_1 + 0x30);
  }
  if (iVar1 != 0) {
    FUN_089d8634();
    FUN_089d7fd8(iVar1,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

