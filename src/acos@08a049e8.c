#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08a04ab0)

undefined4 acos(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 local_50;
  undefined *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_28;
  
  uVar1 = FUN_08a061ec();
  iVar2 = isnan(param_1,param_2);
  if (iVar2 == 0) {
    uVar5 = fabs(param_1,param_2);
    iVar2 = FUN_08a0ed34((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0x3ff00000);
    if (0 < iVar2) {
      local_50 = 1;
      local_4c = &DAT_08aa4480;
      local_30 = 0;
      local_34 = 0;
      local_38 = 0;
      local_48 = param_1;
      local_44 = param_2;
      local_40 = param_1;
      local_3c = param_2;
      iVar2 = FUN_08a05f20(&local_50);
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)FUN_08a0f7b0();
        *puVar3 = 0x21;
      }
      if (local_30 != 0) {
        local_28 = local_30;
        piVar4 = (int *)FUN_08a0f7b0();
        *piVar4 = local_28;
      }
      return local_38;
    }
  }
  return uVar1;
}

