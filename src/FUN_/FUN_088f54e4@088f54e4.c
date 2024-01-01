#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f54e4(void)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar3 = 0;
  iVar1 = FUN_088f505c(0x215);
  puVar2 = &DAT_08a994ec;
  if (iVar1 == 0) {
    puVar4 = &DAT_08a99418;
    do {
      FUN_088f52e0(*puVar4);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < 0x54);
    iVar1 = 0;
  }
  else {
    puVar4 = &DAT_08a994c2;
    do {
      FUN_088f52e0(*puVar4);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < 0x15);
    iVar1 = 0;
  }
  do {
    FUN_088f542c(*puVar2);
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0x193);
  return;
}

