#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0883f608(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_0883f58c();
  iVar2 = FUN_0880d2e0();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0880cc48();
    iVar1 = iVar1 + *(int *)(*piVar3 + 0x464);
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (9999999 < iVar1) {
    iVar1 = 9999999;
  }
  return iVar1;
}

