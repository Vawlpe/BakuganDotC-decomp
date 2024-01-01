#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fd51c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(param_1 + 8) + 4);
  puVar4 = (undefined4 *)
           (**(code **)(iVar5 + 0x14))(*(int *)(param_1 + 8) + (int)*(short *)(iVar5 + 0x10));
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)(param_1 + 0xa0) = *puVar4;
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  return;
}

