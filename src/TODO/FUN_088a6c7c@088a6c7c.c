#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a6c7c(void)

{
  int iVar1;
  undefined *puVar3;
  int iVar2;
  
  puVar3 = &DAT_08abd53c;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    *puVar3 = 0;
    puVar3 = &DAT_08abd53d + iVar2;
    iVar2 = iVar1;
  } while (iVar1 < 7);
  return;
}

