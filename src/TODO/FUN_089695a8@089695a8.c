#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089695a8(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = &DAT_08af4ecc;
    FUN_089cec00(DAT_08ac5934);
    iVar3 = 0;
    puVar2 = param_1;
    do {
      iVar1 = puVar2[0xaa1];
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
        puVar2[0xaa1] = 0;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < 2);
    DAT_08ac0e78 = *param_1;
    FUN_08909ac0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

