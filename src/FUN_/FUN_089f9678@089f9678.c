#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f9678(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x100) = &DAT_08af5894;
    iVar3 = 0;
    iVar2 = param_1;
    do {
      iVar1 = *(int *)(iVar2 + 0x38);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
        *(undefined4 *)(iVar2 + 0x38) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 2);
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_089bb668(*(int *)(param_1 + 0x44),3);
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

