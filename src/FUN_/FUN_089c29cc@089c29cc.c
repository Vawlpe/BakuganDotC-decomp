#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c29cc(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int local_20;
  int *local_1c;
  
  if (((-1 < param_1) && (param_1 < 2)) && (*(int **)(&DAT_08ac5604 + param_1 * 4) == (int *)0x0)) {
    local_1c = (int *)0x0;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    piVar2 = (int *)FUN_089d7d74(0xd4,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    piVar3 = local_1c;
    if (piVar2 != (int *)0x0) {
      FUN_089c30a0(piVar2);
      piVar3 = piVar2;
    }
    *(int **)(&DAT_08ac5604 + param_1 * 4) = piVar3;
    *piVar3 = param_1;
    memset_jak(&local_20,0,4);
    local_20 = param_1;
    FUN_089bbcbc(param_1 + 9,&local_20,4);
  }
  return;
}

