#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined8 floor(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_24;
  
  uVar5 = CONCAT44(param_2,param_1);
  uVar3 = (int)param_2 >> 0x14 & 0x7ff;
  uVar4 = uVar3 - 0x3ff;
  local_24 = param_2;
  if ((int)uVar4 < 0x14) {
    if ((int)uVar4 < 0) {
      uVar5 = __adddf3(param_1,param_2,0x8800759c,0x7e37e43c);
      iVar1 = FUN_08a0ed34((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
      if (0 < iVar1) {
        if ((int)param_2 < 0) {
          if ((param_2 & 0x7fffffff | param_1) != 0) {
            param_1 = 0;
            local_24 = 0xbff00000;
          }
        }
        else {
          param_1 = 0;
          local_24 = 0;
        }
      }
    }
    else {
      uVar3 = 0xfffff >> (uVar4 & 0x1f);
      if ((param_2 & uVar3 | param_1) == 0) goto LAB_089b9ca8;
      uVar5 = __adddf3(param_1,param_2,0x8800759c,0x7e37e43c);
      iVar1 = FUN_08a0ed34((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
      if (0 < iVar1) {
        if ((int)param_2 < 0) {
          param_2 = param_2 + (0x100000 >> (uVar4 & 0x1f));
        }
        local_24 = param_2 & ~uVar3;
        param_1 = 0;
      }
    }
  }
  else {
    if (0x33 < (int)uVar4) {
      if (uVar4 == 0x400) {
        uVar5 = __adddf3(param_1,param_2,param_1,param_2);
      }
      return uVar5;
    }
    uVar3 = 0xffffffff >> (uVar3 - 0x413 & 0x1f);
    if ((param_1 & uVar3) == 0) {
LAB_089b9ca8:
      return CONCAT44(param_2,param_1);
    }
    uVar5 = __adddf3(param_1,param_2,0x8800759c,0x7e37e43c);
    iVar1 = FUN_08a0ed34((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
    if (0 < iVar1) {
      uVar2 = param_1;
      if ((int)param_2 < 0) {
        if (uVar4 == 0x14) {
          param_2 = param_2 + 1;
        }
        else {
          uVar2 = param_1 + (1 << (0x34 - uVar4 & 0x1f));
          if (uVar2 < param_1) {
            param_2 = param_2 + 1;
          }
        }
      }
      param_1 = uVar2 & ~uVar3;
      local_24 = param_2;
    }
  }
  return CONCAT44(local_24,param_1);
}

