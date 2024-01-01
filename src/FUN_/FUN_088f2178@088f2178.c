#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088f2178(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x269);
  uVar3 = 0;
  if (bVar1 < 7) {
    if (bVar1 < 5) {
      uVar3 = 1;
    }
    else {
      iVar2 = FUN_089bf93c(0x177,1);
      if (iVar2 == 0) {
        uVar3 = 1;
      }
    }
  }
  else if (bVar1 < 8) {
    iVar2 = FUN_089bf93c(0x176,1);
    if (iVar2 == 0) {
      iVar2 = *(int *)(DAT_08ac58c4 + 0xc);
      if (iVar2 < 1) {
        if (-1 < iVar2) {
          FUN_088eb6bc(param_1,0xa6);
          FUN_088b9f54(DAT_08ac5c90,0,0);
          uVar3 = 1;
        }
      }
      else if (iVar2 < 2) {
        FUN_088eb6bc(param_1,0xa7);
        FUN_088b9f54(DAT_08ac5c90,0,0);
        uVar3 = 1;
      }
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

