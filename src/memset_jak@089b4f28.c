#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * memset_jak(undefined *param_1,undefined param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = param_3 + -1;
  puVar3 = param_1;
  if (param_3 != 0) {
    do {
      *puVar3 = param_2;
      puVar3 = puVar3 + 1;
      bVar1 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  }
  return param_1;
}

