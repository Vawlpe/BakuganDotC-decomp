#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08910298(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = &DAT_08af4964;
    FUN_089cec00(DAT_08ac5934);
    iVar1 = FUN_0881b22c();
    if (iVar1 == 0) {
      uVar3 = *(undefined *)(param_1 + 0x57);
    }
    else {
      iVar1 = param_1[9];
      if (iVar1 == 0) {
        uVar3 = *(undefined *)(param_1 + 0x57);
      }
      else {
        (**(code **)(*(int *)(iVar1 + 0x4c) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x4c) + 8),3);
        param_1[9] = 0;
        iVar1 = _DONE_GetPtr_DAT_08AB0300();
        *(undefined *)(*(int *)(iVar1 + 0xe4) + 0x3c) = 0;
        param_1[8] = WeirdBuff;
        uVar3 = *(undefined *)(param_1 + 0x57);
      }
    }
    *(undefined *)(param_1[8] + 0x3c) = uVar3;
    DAT_08ac0e78 = *param_1;
    FUN_08909df4(param_1,1);
    iVar1 = 0;
    puVar5 = param_1;
    do {
      iVar4 = puVar5[0x5c];
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0x74) + 0xc))
                  (iVar4 + *(short *)(*(int *)(iVar4 + 0x74) + 8),3);
        puVar5[0x5c] = 0;
      }
      iVar1 = iVar1 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar1 < 2);
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar2,0x1d,*param_1);
    FUN_089a3d30();
    FUN_08909ac0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

