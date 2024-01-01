#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ebeb8(int param_1,undefined param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  *(undefined *)(*(int *)(param_1 + 0x24) + 1) = param_2;
  iVar4 = FUN_089edb80();
  iVar5 = FUN_089edb80();
  uVar1 = *(undefined4 *)(iVar5 + 0x24);
  uVar2 = *(undefined4 *)(iVar5 + 0x28);
  uVar3 = *(undefined4 *)(iVar5 + 0x2c);
  *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar5 + 0x20);
  *(undefined4 *)(iVar4 + 0x34) = uVar1;
  *(undefined4 *)(iVar4 + 0x38) = uVar2;
  *(undefined4 *)(iVar4 + 0x3c) = uVar3;
  iVar4 = (int)*(char *)(*(int *)(param_1 + 0x24) + 1);
  fVar6 = ABS((float)iVar4 * 0.0625);
  if (iVar4 < 1) {
    iVar4 = FUN_089edb80();
    *(float *)(iVar4 + 0x4c) = fVar6;
    *(undefined4 *)(iVar4 + 0x40) = 0;
    *(undefined4 *)(iVar4 + 0x44) = 0;
    *(undefined4 *)(iVar4 + 0x48) = 0;
  }
  else {
    iVar4 = FUN_089edb80();
    *(float *)(iVar4 + 0x4c) = fVar6;
    *(undefined4 *)(iVar4 + 0x40) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0x44) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0x48) = 0x3f800000;
  }
  return;
}

