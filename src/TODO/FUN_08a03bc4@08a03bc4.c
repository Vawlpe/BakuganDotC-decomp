#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a03bc4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_08af11d8;
  iVar2 = DAT_08af11d8 + 0x34;
  *(int *)(DAT_08af11d8 + 0x34) = DAT_08af120c;
  DAT_08af120c = iVar2;
  *(undefined *)(iVar1 + 0x30) = 1;
  return;
}

