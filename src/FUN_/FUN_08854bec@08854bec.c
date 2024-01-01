#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08854bec(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  param_1[0x5a] = &DAT_08af1964;
  *param_1 = 0;
  param_1[0x18] = in_V72;
  param_1[0x19] = in_V76;
  param_1[0x1a] = in_V7A;
  param_1[0x1b] = in_V7E;
  param_1[0x1c] = in_V72;
  param_1[0x1d] = in_V76;
  param_1[0x1e] = in_V7A;
  param_1[0x1f] = in_V7E;
  iVar1 = FUN_08854bb0(param_1,0x17);
  *(undefined4 *)(iVar1 + 0x80) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x88) = 0xffffffff;
  iVar3 = 0;
  iVar2 = iVar1;
  do {
    *(undefined4 *)(iVar2 + 0xf8) = 0;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 0x1b);
  *(undefined4 *)(iVar1 + 0x164) = 0xffffffff;
  return;
}

