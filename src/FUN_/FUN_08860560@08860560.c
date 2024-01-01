#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08860560(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x210);
  uVar2 = 0;
  if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x134) == 9)) && (*(int *)(iVar1 + 0x138) != 0)) &&
     (iVar1 = FUN_088acd4c(*(undefined4 *)(iVar1 + 0x138)), iVar1 != 0)) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x210) + 0x138);
  }
  return uVar2;
}

