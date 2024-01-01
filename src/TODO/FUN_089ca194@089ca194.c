#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ca194(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_089c9ed8(param_1,2);
  iVar2 = FUN_089c9da8(param_1);
  *piVar1 = *piVar1 / iVar2;
  return 0;
}

