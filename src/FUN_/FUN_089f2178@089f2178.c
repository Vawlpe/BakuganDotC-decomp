#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f2178(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_08ac5dc8 + 1;
  iVar3 = DAT_08ac5dc4 + DAT_08ac5dc8 * 0x34;
  iVar1 = 0;
  DAT_08ac5dc8 = iVar2;
  if (iVar3 != 0) {
    FUN_089f1248(iVar3);
    iVar1 = iVar3;
  }
  FUN_089d8dfc(iVar1,&DAT_08b02c60);
  return;
}

