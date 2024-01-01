#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * memcpy_jak(undefined *param_1,undefined *param_2,int param_3)

{
  bool bVar1;
  undefined uVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = param_1;
  iVar4 = param_3 + -1;
  if (param_3 != 0) {
    do {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar2;
      param_1 = param_1 + 1;
      bVar1 = iVar4 != 0;
      iVar4 = iVar4 + -1;
    } while (bVar1);
  }
  return puVar3;
}

