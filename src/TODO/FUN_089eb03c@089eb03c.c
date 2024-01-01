#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089eb03c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_089eaf58();
  if (iVar1 != 0) {
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0xf0,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    iVar1 = 0;
    if (iVar2 != 0) {
      FUN_08817708(iVar2,0,&PTR_s_wd_font16_08ac5d70);
      iVar1 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar1;
    if (0 < param_2) {
      FUN_089f5270(iVar1,param_2);
      iVar1 = *(int *)(param_1 + 0xc);
    }
    if (*(float *)(param_1 + 4) == 0.0) {
      FUN_089eb220(*(undefined4 *)(iVar1 + 0x94),param_1);
      uVar3 = 1;
    }
    else {
      *(float *)(iVar1 + 0x94) = *(float *)(param_1 + 4);
      uVar3 = 1;
    }
  }
  return uVar3;
}

