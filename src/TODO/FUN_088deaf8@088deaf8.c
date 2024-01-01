#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088deaf8(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_089d9674();
  FUN_089d9914(uVar2,"12_editm_braw.gmo");
  uVar2 = FUN_089d9674();
  FUN_089d9914(uVar2,"12_editm_dir_app.gmo");
  uVar2 = FUN_089d9674();
  uVar1 = FUN_089d9c84(uVar2,"12_editm_braw");
  *(undefined2 *)(*(int *)(param_1 + 0x150) + 0x5e) = uVar1;
  uVar2 = FUN_089d9674();
  uVar1 = FUN_089d9c84(uVar2,"12_editm_dir_app");
  *(undefined2 *)(*(int *)(param_1 + 0x150) + 0x60) = uVar1;
  return;
}

