#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088ace70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x218);
  uVar1 = 0;
  if (iVar2 < 0x56) {
    if (iVar2 == 0x1a) {
      uVar1 = 1;
    }
  }
  else if (iVar2 < 0x6d) {
    if (iVar2 < 0x58) {
      uVar1 = 1;
    }
  }
  else if (iVar2 < 0x6e) {
    uVar1 = 1;
  }
  return uVar1;
}

