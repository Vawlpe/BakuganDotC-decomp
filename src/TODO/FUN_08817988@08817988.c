#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08817988(int param_1,undefined **param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar2 = FUN_089d7d74(0x10,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x80) = uVar2;
  }
  **(undefined4 **)(param_1 + 0x80) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x80) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x80) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x80) + 0xc) = 0;
  if (param_2 == (undefined **)0x0) {
    param_2 = &PTR_s_wd_font16_08ab0128;
  }
  puVar3 = *param_2;
  iVar4 = 0;
  while( true ) {
    if (puVar3 == (undefined *)0x0) {
      return 1;
    }
    uVar1 = FUN_089f7720();
    *(undefined4 *)(*(int *)(param_1 + 0x80) + iVar4) = uVar1;
    param_2 = param_2 + 1;
    if (*(int *)(*(int *)(param_1 + 0x80) + iVar4) == 0) break;
    puVar3 = *param_2;
    iVar4 = iVar4 + 4;
  }
  return 0;
}

