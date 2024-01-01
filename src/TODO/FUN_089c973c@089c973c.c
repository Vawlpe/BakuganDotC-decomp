#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c973c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_90 [128];
  
  strcpy(auStack_90);
  iVar1 = strstr(auStack_90,".script");
  if (iVar1 != 0) {
    strcpy(iVar1,&DAT_08aa1bb0);
  }
  uVar2 = FUN_089c9bf0(auStack_90,param_1 + 0x50);
  FUN_089c97a4(param_1,uVar2);
  return;
}

