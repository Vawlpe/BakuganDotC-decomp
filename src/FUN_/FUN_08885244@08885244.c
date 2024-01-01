#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08885244(int *param_1)

{
  int iVar1;
  int in_V72;
  int in_V76;
  int in_V7A;
  int in_V7E;
  
  param_1[4] = in_V72;
  param_1[5] = in_V76;
  param_1[6] = in_V7A;
  param_1[7] = in_V7E;
  *(undefined *)(param_1 + 8) = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = param_1[3];
  if (iVar1 == 0) {
    iVar1 = FUN_08826804((*(uint *)(*param_1 + 0x14c) & 3) * 2 + 10);
    param_1[2] = iVar1;
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_089f5700(DAT_08ac5c6c,"kemuri1");
    param_1[1] = iVar1;
    *(undefined4 *)(iVar1 + 0xb0) = 0;
    *(undefined4 *)(iVar1 + 0xb4) = 0;
    *(undefined4 *)(iVar1 + 0xb8) = 0;
    *(undefined4 *)(iVar1 + 0xbc) = 0x3f000000;
    *(undefined4 *)(param_1[1] + 0xe0) = 2;
    *(uint *)(param_1[1] + 0xd0) = *(uint *)(param_1[1] + 0xd0) & 0xfffffffe;
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_089f5700(DAT_08ac5c6c,"kemuri1");
    param_1[1] = iVar1;
    *(undefined4 *)(iVar1 + 0xb0) = 0;
    *(undefined4 *)(iVar1 + 0xb4) = 0;
    *(undefined4 *)(iVar1 + 0xb8) = 0;
    *(undefined4 *)(iVar1 + 0xbc) = 0x3f000000;
    *(undefined4 *)(param_1[1] + 0xe0) = 2;
    *(uint *)(param_1[1] + 0xd0) = *(uint *)(param_1[1] + 0xd0) & 0xfffffffe;
  }
  else if (iVar1 == 4) {
    iVar1 = FUN_089f5700(DAT_08ac5c6c,"kemuri1");
    param_1[1] = iVar1;
    *(undefined4 *)(iVar1 + 0xb0) = 0;
    *(undefined4 *)(iVar1 + 0xb4) = 0;
    *(undefined4 *)(iVar1 + 0xb8) = 0;
    *(undefined4 *)(iVar1 + 0xbc) = 0x3f000000;
    *(undefined4 *)(param_1[1] + 0xe0) = 2;
    *(uint *)(param_1[1] + 0xd0) = *(uint *)(param_1[1] + 0xd0) & 0xfffffffe;
  }
  return;
}

