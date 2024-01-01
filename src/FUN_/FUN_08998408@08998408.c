#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08998408(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 auStack_b0 [30];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined local_20 [4];
  undefined4 local_1c;
  
  memcpy_jak(auStack_b0,&DAT_08ac3ca8,0x78);
  memset_jak(param_2 + 0x21f0,0,0x60);
  iVar1 = FUN_089982c8(param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x2244) = param_1;
    uVar2 = (uint)*(byte *)(param_2 + *(char *)(param_2 + 0x109c) + 0x10a0);
    *(undefined4 *)(param_2 + 0x21f0) = *(undefined4 *)(param_2 + 0x21d0);
    *(undefined4 *)(param_2 + 0x21f4) = *(undefined4 *)(param_2 + 0x21d4);
    *(undefined4 *)(param_2 + 0x21f8) = *(undefined4 *)(param_2 + 0x21d8);
    *(undefined4 *)(param_2 + 0x2200) = *(undefined4 *)(param_2 + 0x21d0);
    *(undefined4 *)(param_2 + 0x2204) = *(undefined4 *)(param_2 + 0x21d4);
    *(undefined4 *)(param_2 + 0x2208) = *(undefined4 *)(param_2 + 0x21d8);
    uVar4 = auStack_b0[uVar2 * 3 + 1];
    *(undefined4 *)(param_2 + 0x2220) = auStack_b0[uVar2 * 3];
    uVar3 = auStack_b0[uVar2 * 3 + 2];
    *(undefined4 *)(param_2 + 0x2224) = uVar4;
    *(undefined4 *)(param_2 + 0x2228) = uVar3;
    FUN_0899830c(&local_30,param_2);
    local_38 = local_30;
    uVar3 = local_38;
    local_34 = local_2c;
    local_38._0_1_ = (undefined)local_30;
    *(undefined4 *)(param_2 + 0x2230) = local_2c;
    *(undefined *)(param_2 + 0x224a) = (undefined)local_38;
    local_38 = uVar3;
    FUN_0899830c(*(undefined4 *)(param_2 + 0x21f4),*(undefined4 *)(param_2 + 0x2224),&local_28,
                 param_2);
    local_38 = local_28;
    uVar3 = local_38;
    local_34 = local_24;
    local_38._0_1_ = (undefined)local_28;
    *(undefined4 *)(param_2 + 0x2234) = local_24;
    *(undefined *)(param_2 + 0x224b) = (undefined)local_38;
    local_38 = uVar3;
    FUN_0899830c(*(undefined4 *)(param_2 + 0x21f8),*(undefined4 *)(param_2 + 0x2228),local_20,
                 param_2);
    *(undefined4 *)(param_2 + 0x2238) = local_1c;
    *(undefined *)(param_2 + 0x224c) = local_20[0];
    *(undefined *)(param_2 + 0x2269) = *(undefined *)(param_2 + 0x224b);
  }
  return;
}

