#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08808c30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af145c;
  local_20 = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = local_20;
  if (iVar2 != 0) {
    FUN_089f4f54(iVar2,0);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  uVar1 = FUN_089f7720("load_icon0");
  local_30 = 0x43e60000;
  local_2c = 0x437e0000;
  local_28 = 0;
  local_24 = 0;
  iVar3 = FUN_089f54d8(iVar3,uVar1,&local_30,0);
  *(int *)(param_1 + 0x18) = iVar3;
  *(undefined4 *)(iVar3 + 0xbc) = 0;
  *(undefined4 *)(iVar3 + 0xb0) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0xb8) = 0x3f800000;
  FUN_089f4534(0x41400000,0x41400000,*(undefined4 *)(param_1 + 0x18));
  FUN_089f3eb8(*(undefined4 *)(param_1 + 0x18),3);
  *(uint *)(*(int *)(param_1 + 0x18) + 0xd0) = *(uint *)(*(int *)(param_1 + 0x18) + 0xd0) | 0x20;
  *(undefined *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}

