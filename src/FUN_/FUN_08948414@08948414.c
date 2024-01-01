#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08948414(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = FUN_089f7720();
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_24 = 0;
  iVar2 = FUN_089f54d8(param_2,uVar1,&local_30,0);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x42000000;
  local_14 = 0x42000000;
  FUN_089f4060(iVar2,&local_20);
  FUN_089f4924(0x42000000,0x42000000,iVar2);
  *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
  return iVar2;
}

