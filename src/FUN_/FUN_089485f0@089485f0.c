#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089485f0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af4d44;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  memset_jak(param_1 + 0x84,0,0x28);
  memset_jak(param_1 + 0xac,0,0x28);
  memset_jak(param_1 + 0xd4,0,0x28);
  memset_jak(param_1 + 0xfc,0,0x28);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(8,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08ac0e60 = uVar2;
  memset_jak(uVar2,0,8);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar6 = 0;
  iVar5 = param_1;
  do {
    piVar3 = (int *)FUN_0880cc48();
    uVar6 = uVar6 + 1;
    if ((int)uVar6 < 0) {
      uVar4 = -(-uVar6 & 7) & 0x1f;
    }
    else {
      uVar4 = uVar6 & 7;
    }
    *(uint *)(iVar5 + 0x124) =
         (uint)*(byte *)(*piVar3 + ((int)(uVar6 + ((uint)((int)uVar6 >> 3) >> 0x1d)) >> 3) + 0x5be)
         & 1 << uVar4;
    iVar5 = iVar5 + 4;
  } while ((int)uVar6 < 0x14);
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x74) = 0;
  FUN_0890a560(param_1);
  return param_1;
}

