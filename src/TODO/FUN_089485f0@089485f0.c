#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089485f0(int param_1)

{
  undefined4 uVar1;
  undefined *ptr;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af4d44;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  memset_jak((undefined *)(param_1 + 0x84),0,0x28);
  memset_jak((undefined *)(param_1 + 0xac),0,0x28);
  memset_jak((undefined *)(param_1 + 0xd4),0,0x28);
  memset_jak((undefined *)(param_1 + 0xfc),0,0x28);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  ptr = (undefined *)FUN_089d7d74(8,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08ac0e60 = ptr;
  memset_jak(ptr,0,8);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar5 = 0;
  iVar4 = param_1;
  do {
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    uVar5 = uVar5 + 1;
    if ((int)uVar5 < 0) {
      uVar3 = -(-uVar5 & 7) & 0x1f;
    }
    else {
      uVar3 = uVar5 & 7;
    }
    *(uint *)(iVar4 + 0x124) =
         (uint)*(byte *)(*piVar2 + ((int)(uVar5 + ((uint)((int)uVar5 >> 3) >> 0x1d)) >> 3) + 0x5be)
         & 1 << uVar3;
    iVar4 = iVar4 + 4;
  } while ((int)uVar5 < 0x14);
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x74) = 0;
  FUN_0890a560(param_1);
  return param_1;
}

