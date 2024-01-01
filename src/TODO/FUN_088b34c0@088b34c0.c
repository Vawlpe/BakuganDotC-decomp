#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088b34c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_089d8710(param_1,0);
  *(undefined **)(param_1 + 0x14) = &DAT_08af2b84;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x60) = in_V72;
  *(undefined4 *)(param_1 + 100) = in_V76;
  *(undefined4 *)(param_1 + 0x68) = in_V7A;
  *(undefined4 *)(param_1 + 0x6c) = in_V7E;
  *(undefined4 *)(param_1 + 0x70) = in_V72;
  *(undefined4 *)(param_1 + 0x74) = in_V76;
  *(undefined4 *)(param_1 + 0x78) = in_V7A;
  *(undefined4 *)(param_1 + 0x7c) = in_V7E;
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x20) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 2);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x30) = in_V72;
  *(undefined4 *)(param_1 + 0x34) = in_V76;
  *(undefined4 *)(param_1 + 0x38) = in_V7A;
  *(undefined4 *)(param_1 + 0x3c) = in_V7E;
  *(undefined4 *)(param_1 + 0x40) = in_V72;
  *(undefined4 *)(param_1 + 0x44) = in_V76;
  *(undefined4 *)(param_1 + 0x48) = in_V7A;
  *(undefined4 *)(param_1 + 0x4c) = in_V7E;
  *(undefined4 *)(param_1 + 0x44) = 0xbfc90fdb;
  iVar1 = DAT_08abd628;
  if (DAT_08abd628 == 0) {
    FUN_088b3438(0,0);
  }
  FUN_089d8984(param_1,iVar1);
  return param_1;
}

