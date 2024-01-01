#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08886638(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x22] = 0;
  *(undefined *)((int)param_1 + 0x8d) = 0;
  param_1[0x24] = 0;
  *(undefined *)(param_1 + 0x23) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  iVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2[0x2f] = 0;
    puVar2[0x32] = 0;
    puVar2[0x35] = 0xffffffff;
    puVar2[0x3a] = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 3);
  param_1[0x38] = 0xffffffff;
  param_1[0x39] = 0;
  param_1[0x40] = 0;
  iVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2[0x41] = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 6);
  iVar1 = 0;
  puVar2 = param_1 + 2;
  do {
    *(undefined *)(puVar2 + 1) = 0;
    *(undefined2 *)puVar2 = 0;
    *(undefined2 *)((int)puVar2 + 2) = 0;
    iVar1 = iVar1 + 1;
    puVar2 = (undefined4 *)((int)puVar2 + 6);
  } while (iVar1 < 0x15);
  FUN_088865f0(param_1,0);
  return;
}

