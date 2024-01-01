#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089524b8(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = &DAT_08af4e5c;
    FUN_089cec00(DAT_08ac5934);
    iVar1 = FUN_0881b22c();
    if (iVar1 == 0) {
      DAT_08ac0e78 = *param_1;
    }
    else {
      iVar1 = FUN_0880d354();
      if (iVar1 == 0) {
        DAT_08ac0e78 = *param_1;
      }
      else {
        iVar1 = param_1[9];
        if (iVar1 != 0) {
          (**(code **)(*(int *)(iVar1 + 0x4c) + 0xc))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x4c) + 8),3);
          param_1[9] = 0;
        }
        iVar1 = FUN_0881b254();
        *(undefined *)(*(int *)(iVar1 + 0xe4) + 0x3c) = 0;
        param_1[8] = DAT_08ac5928;
        DAT_08ac0e78 = *param_1;
      }
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

