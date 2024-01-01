#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08811418(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  
  iVar1 = FUN_089c9d1c();
  uVar2 = FUN_089c9d1c(param_1);
  fVar5 = (float)FUN_089c9e3c(param_1);
  uVar6 = FUN_089c9e3c(param_1);
  uVar7 = FUN_089c9e3c(param_1);
  local_24 = (float)FUN_089c9e3c(param_1);
  local_24 = local_24 * 0.01745329;
  local_30 = fVar5;
  local_2c = uVar6;
  local_28 = uVar7;
  iVar3 = FUN_088ab67c(uVar2);
  iVar4 = FUN_0884b248();
  if ((iVar4 != 0) && (iVar3 != 0)) {
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        FUN_0889d57c(&local_30,iVar3 + 0x20);
        local_24 = 1.570796 - local_24;
        if (3.141593 < local_24) {
          local_24 = local_24 - 6.283185;
        }
        else if (local_24 <= -3.141593) {
          local_24 = local_24 + 6.283185;
        }
        *(float *)(iVar3 + 0x34) = local_24;
      }
    }
    else if ((iVar1 < 2) && (FUN_088ac94c(local_30,iVar3), local_30 == 0.0)) {
      (**(code **)(*(int *)(iVar3 + 0x14) + 0x5c))
                (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x58));
    }
  }
  return 0;
}

