#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b2f94(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af51dc;
    FUN_089cec00(DAT_08ac5934);
    *(undefined4 *)(DAT_08ac5934 + 0x1c) = *(undefined4 *)(param_1 + 0x84);
    iVar1 = *(int *)(param_1 + 0x6c);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    FUN_08909ac0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

