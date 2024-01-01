#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08944758(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = &DAT_08af4d0c;
    FUN_089cec00(DAT_08ac5934);
    iVar1 = param_1[0x1c];
    if (iVar1 == 0) {
      iVar1 = param_1[0x1b];
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
      param_1[0x1c] = 0;
      iVar1 = param_1[0x1b];
    }
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
      param_1[0x1b] = 0;
    }
    iVar1 = 0;
    puVar3 = param_1;
    do {
      iVar2 = puVar3[0x23];
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x74) + 0xc))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 8),3);
        puVar3[0x23] = 0;
      }
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar1 < 0x14);
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

