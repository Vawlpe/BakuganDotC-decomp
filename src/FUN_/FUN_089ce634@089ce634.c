#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ce634(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  undefined auStack_1c [4];
  
  uVar2 = 0;
  iVar1 = zz_sceImposeGetLanguageMode(&local_20,auStack_1c);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x54) == -1) {
      *(int *)(param_1 + 0x54) = local_20;
    }
    if (local_20 == 2) {
      *(undefined4 *)(param_1 + 0x50) = 2;
      local_20 = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x50) = 1;
      local_20 = 1;
    }
    iVar1 = zz_sceImposeSetLanguageMode(local_20,1);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

