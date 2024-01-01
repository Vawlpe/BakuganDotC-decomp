#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088ff440(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_08816a90();
  if (iVar1 != 0) {
    uVar2 = FUN_08816aac(0x2726);
    iVar1 = FUN_08816e58(uVar2);
    if (iVar1 == 0) {
      uVar3 = 1;
    }
  }
  iVar1 = FUN_089bf93c(0x2726,1);
  if (iVar1 != 0) {
    uVar3 = 1;
  }
  return uVar3;
}

