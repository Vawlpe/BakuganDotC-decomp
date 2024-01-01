#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cd2ac(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af2d84;
    FUN_089cec00(DAT_08ac5934);
    iVar3 = 0;
    iVar2 = param_1;
    do {
      iVar1 = *(int *)(iVar2 + 0x10);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 3);
    *(undefined *)(*(int *)(param_1 + 0x1c) + 0x39) = 0;
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

