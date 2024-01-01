#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089eb76c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af56e4;
  DAT_08ac5d88 = param_1;
  iVar1 = FUN_089eac08();
  if (iVar1 == 0) {
    FUN_089eaa70();
    puVar2 = (undefined4 *)FUN_089eac30();
    *puVar2 = 0x469c4000;
  }
  iVar1 = FUN_089ebcf0();
  if (iVar1 == 0) {
    FUN_089ebb6c();
  }
  iVar1 = FUN_08816a90();
  if (iVar1 == 0) {
    FUN_08816868();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return param_1;
}

