#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a03f1c(undefined4 param_1,undefined param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined auStack_10 [4];
  
  uVar3 = 0;
  piVar2 = DAT_08af120c;
  if (DAT_08af120c != (int *)0x0) {
    do {
      if (*(char *)(piVar2 + 1) == '\x02') break;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
  if ((piVar2[2] != 0) &&
     (iVar1 = FUN_08a03920(piVar2[2],param_1,param_2,param_3,0,0,0,auStack_10), iVar1 != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}

