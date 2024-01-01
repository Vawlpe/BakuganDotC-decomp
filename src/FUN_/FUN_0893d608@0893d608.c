#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0893d608(int param_1,undefined param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af4b5c;
  *(undefined *)(param_1 + 0x7de) = param_2;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0xac,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  FUN_08909df4(param_1,1);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  iVar3 = FUN_089edb58();
  if (iVar3 == 0) {
    FUN_089eda24(0);
    iVar3 = FUN_089edb80();
    *(undefined4 *)(iVar3 + 0x10) = 0x469c4000;
    iVar3 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined *)(param_1 + 0x7dd) = *(undefined *)(iVar3 + 0x3c);
  *(undefined *)(iVar3 + 0x3c) = 1;
  *(undefined *)(param_1 + 0x7dc) = 0;
  iVar3 = FUN_089bfa40(500);
  if (iVar3 != 0) {
    FUN_089bf2f0(iVar3,1);
  }
  return param_1;
}

