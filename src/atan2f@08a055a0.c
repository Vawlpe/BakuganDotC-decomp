#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08a05674)

undefined4 atan2f(float param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_40;
  char *local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_18;
  
  uVar4 = FUN_08a092f8();
  iVar1 = isnanf(param_2);
  if ((((iVar1 == 0) && (iVar1 = isnanf(param_1), iVar1 == 0)) && (param_2 == 0.0)) &&
     (param_1 == 0.0)) {
    local_38 = __extendsfdf2(param_1);
    local_30 = __extendsfdf2(param_2);
    local_20 = 0;
    local_40 = 1;
    local_3c = "atan2f";
    local_24 = 0;
    local_28 = 0;
    iVar1 = FUN_08a05f20(&local_40);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)FUN_08a0f7b0();
      *puVar2 = 0x21;
    }
    if (local_20 != 0) {
      local_18 = local_20;
      piVar3 = (int *)FUN_08a0f7b0();
      *piVar3 = local_18;
    }
    uVar4 = FUN_08a0efb8(local_28,local_24);
    return uVar4;
  }
  return uVar4;
}

