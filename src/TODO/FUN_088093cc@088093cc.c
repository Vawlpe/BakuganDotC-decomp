#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088093cc(int param_1)

{
  undefined4 uVar1;
  undefined *ptr;
  int iVar2;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af14cc;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  ptr = (undefined *)FUN_089d7d74(4,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08aac9c0 = ptr;
  memset_jak(ptr,0,4);
  iVar2 = DONE_NotZero_DAT_08AAC9E0();
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar1 = DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar1,1,0);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return param_1;
}

