#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e19a8(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x418) == 0) {
    uVar3 = FUN_088b9450(0x3dcccccd,param_2,3,0);
    *(undefined4 *)(param_1 + 0x418) = uVar3;
  }
  if (param_3 != (undefined4 *)0x0) {
    iVar4 = *(int *)(param_1 + 0x418);
    uVar3 = param_3[1];
    uVar1 = param_3[2];
    uVar2 = param_3[3];
    *(undefined4 *)(iVar4 + 0x20) = *param_3;
    *(undefined4 *)(iVar4 + 0x24) = uVar3;
    *(undefined4 *)(iVar4 + 0x28) = uVar1;
    *(undefined4 *)(iVar4 + 0x2c) = uVar2;
    FUN_088b87bc(param_3[3],*(undefined4 *)(param_1 + 0x418));
  }
  *(undefined4 *)(param_1 + 0x4a0) = param_2;
  return;
}

