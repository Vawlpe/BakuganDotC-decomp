#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ed9b0(int param_1)

{
  undefined4 uVar1;
  undefined auStack_70 [96];
  
  FUN_089edbc8(auStack_70);
  uVar1 = FUN_089edb80();
  FUN_089edd80(auStack_70,uVar1);
  FUN_089edb90(*(undefined4 *)(&DAT_08ac5d98 + param_1 * 4));
  uVar1 = FUN_089edb80();
  FUN_089edd80(uVar1,auStack_70);
  FUN_089edc0c(auStack_70,2);
  return;
}

