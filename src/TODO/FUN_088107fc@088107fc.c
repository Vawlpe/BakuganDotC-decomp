#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088107fc(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = (undefined4 *)FUN_089c9ed8(param_1,2);
  iVar2 = FUN_089c9da8(param_1);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_14 = 0;
  local_20 = FUN_089c9e3c(param_1);
  local_1c = FUN_089c9e3c(param_1);
  local_18 = FUN_089c9e3c(param_1);
  local_14 = FUN_089c9e3c(param_1);
  uVar3 = FUN_089c9da8(param_1);
  uVar3 = FUN_088a8cf8(*(int *)(&DAT_08a34900 + (iVar2 / 6) * 4) + iVar2 % 6,&local_20,uVar3);
  *puVar1 = uVar3;
  return 0;
}

