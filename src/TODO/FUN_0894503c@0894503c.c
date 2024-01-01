#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894503c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 < 1) {
    if (-1 < iVar3) {
      FUN_0890a424(0x3f800000,0,0,param_1,"main_bg.fab",0,0);
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar2 = FUN_089d7d74(0x7c,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
      FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),uVar2,0x31);
      FUN_08944c90(param_1);
      FUN_08944f24(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 1;
    }
  }
  else if ((iVar3 < 2) && (iVar3 = FUN_089445ec(), iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x28) = 2;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

