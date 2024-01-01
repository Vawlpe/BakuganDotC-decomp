#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a03e70(void)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_08a03b24(DAT_08af11d8);
  while ((DAT_08af11d8 != (int **)0x0 && (*(char *)((int)DAT_08af11d8 + 0x2d) != '\0'))) {
    uVar2 = DAT_08af11d8[6];
    cVar1 = *(char *)(DAT_08af11d8 + 0xb);
    DAT_08af11d8 = (int **)*DAT_08af11d8;
    FUN_08a03728();
    if (cVar1 == '\0') {
      FUN_08a03728(uVar2);
    }
  }
  return;
}

