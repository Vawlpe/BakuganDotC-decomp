#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08979340(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x12a4);
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x14) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x14) + 8),3);
      *(undefined4 *)(param_1 + 0x12a4) = 0;
      *(undefined4 *)(param_1 + 0x12a4) = 0;
    }
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 4;
  } while (iVar3 < 7);
  uVar1 = FUN_089d9674();
  FUN_089d9740(uVar1,0);
  return;
}

