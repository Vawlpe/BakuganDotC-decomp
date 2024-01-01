#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08996eb4(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = &DAT_08af50c4;
    FUN_089cec00(DAT_08ac5934);
    FUN_08909df4(param_1,1);
    iVar1 = FUN_08996448(param_1);
    if (iVar1 == 1) {
      *(undefined *)(param_1[8] + 0x3c) = *(undefined *)(param_1 + 0x443);
      iVar1 = param_1[0x7c1];
    }
    else {
      *(undefined *)(param_1[8] + 0x3c) = 0;
      iVar1 = param_1[0x7c1];
    }
    if (iVar1 == 0) {
      iVar1 = param_1[0x89b];
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
      param_1[0x7c1] = 0;
      iVar1 = param_1[0x89b];
    }
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
      param_1[0x89b] = 0;
    }
    FUN_089a3d30();
    iVar1 = 0;
    puVar3 = param_1;
    do {
      iVar2 = puVar3[0x488];
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x74) + 0xc))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 8),3);
        puVar3[0x488] = 0;
      }
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 0x89;
    } while (iVar1 < 3);
    DAT_08ac0e78 = *param_1;
    FUN_089e2950(param_1 + 0x7c4,2);
    FUN_08909ac0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

