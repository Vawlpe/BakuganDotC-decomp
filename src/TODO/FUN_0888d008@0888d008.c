#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888d008(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1 + 0x2d8;
  do {
    FUN_0888cfe4(iVar2);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 300;
  } while (iVar3 < 4);
  iVar3 = 0;
  iVar2 = param_1;
  do {
    if ((iVar3 != *(int *)(param_1 + 0x91c)) && (iVar1 = *(int *)(iVar2 + 0x920), iVar1 != 0)) {
      (**(code **)(*(int *)(iVar1 + 0x48) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x48) + 8));
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 5);
  *(undefined4 *)(param_1 + 0x9d4) = 0;
  *(undefined4 *)(param_1 + 0x9d8) = 0;
  *(undefined4 *)(param_1 + 0x9dc) = 0;
  *(undefined4 *)(param_1 + 0x934) = 0;
  *(undefined4 *)(param_1 + 0x970) = 0;
  *(undefined4 *)(param_1 + 0x9a0) = 0;
  return;
}

