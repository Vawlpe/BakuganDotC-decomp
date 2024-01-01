#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08818afc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0xf0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_08817708(iVar2,0,(&PTR_PTR_s_wd_font12_08ab0158)[param_1]);
    iVar3 = iVar2;
  }
  FUN_08817a90(iVar3,param_1);
  return iVar3;
}

