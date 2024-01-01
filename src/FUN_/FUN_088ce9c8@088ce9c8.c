#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ce9c8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = FUN_089f7720();
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_14 = 0;
  iVar2 = FUN_089f54d8(param_2,uVar1,&local_20,0);
  *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
  return;
}

