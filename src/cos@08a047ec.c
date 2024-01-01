#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08a04864)

undefined4 cos(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_10 = param_1;
  local_c = param_2;
  if ((param_2 & 0x7fffffff) < 0x3fe921fc) {
    uVar2 = FUN_08a0a804(param_1,param_2,0,0);
    return uVar2;
  }
  if (0x7fefffff < (param_2 & 0x7fffffff)) {
    return 0;
  }
  uVar1 = FUN_08a0826c(param_1,param_2,&local_20);
  uVar1 = uVar1 & 3;
  if (uVar1 == 0) {
    uVar2 = FUN_08a0a804(local_20,local_1c,local_18,local_14);
    return uVar2;
  }
  if (1 < uVar1) {
    if (2 < uVar1) {
      uVar2 = FUN_08a0b888(local_20,local_1c,local_18,local_14,1);
      return uVar2;
    }
    uVar3 = FUN_08a0a804(local_20,local_1c,local_18,local_14);
    uVar2 = __negdf2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    return uVar2;
  }
  uVar3 = FUN_08a0b888(local_20,local_1c,local_18,local_14,1);
  uVar2 = __negdf2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  return uVar2;
}

