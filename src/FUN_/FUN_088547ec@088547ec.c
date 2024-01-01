#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088547ec(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af192c;
    FUN_089cec00(DAT_08ac5934);
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    DAT_08ac601c = 1;
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

