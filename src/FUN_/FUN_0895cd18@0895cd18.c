#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895cd18(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4);
  iVar1 = *piVar2;
  param_1 = param_1 + (uint)*(ushort *)(param_1 + 0x5176) * 0x28;
  if (param_2 == '\0') {
    uVar3 = *(undefined4 *)(iVar1 + 0x90);
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x9c) = uVar3;
    return;
  }
  uVar3 = *(undefined4 *)(iVar1 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(*piVar2 + 0xbc);
  return;
}

