#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880dc00(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_50 [64];
  
  strcpy(auStack_50,param_1);
  strcat(auStack_50,&DAT_08a341ac);
  iVar1 = _DONE_NotZero_DAT_08AAC9E0();
  if (iVar1 == 0) {
    strcat(auStack_50,&DAT_08a341b0);
  }
  else {
    _DONE_Get_DAT_08AAC9E0();
    uVar2 = FUN_0880dcf4();
    strcat(auStack_50,uVar2);
  }
  strcat(auStack_50,&DAT_08a341b4);
  FUN_089be054(DAT_08ac520c,auStack_50);
  return;
}
