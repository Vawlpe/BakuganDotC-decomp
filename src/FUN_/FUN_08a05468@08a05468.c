#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08a05518)

undefined4 FUN_08a05468(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 local_40;
  char *local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_18;
  
  uVar4 = FUN_08a08e94();
  iVar1 = isnanf(param_1);
  if ((iVar1 == 0) && (fVar5 = (float)fabsf(param_1), 1.0 < fVar5)) {
    local_40 = 1;
    local_3c = "acosf";
    local_20 = 0;
    local_38 = __extendsfdf2(param_1);
    local_24 = 0;
    local_28 = 0;
    local_30 = local_38;
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
