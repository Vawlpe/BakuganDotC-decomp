#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08937f3c(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = &DAT_08af4b24;
    FUN_089cec00(DAT_08ac5934);
    iVar1 = FUN_089bfa40(500);
    if (iVar1 != 0) {
      FUN_089bf300(iVar1,1);
    }
    FUN_08909df4(param_1,1);
    *(undefined *)(param_1[8] + 0x3c) = *(undefined *)((int)param_1 + 0x5ed);
    iVar1 = 0;
    puVar4 = param_1;
    do {
      iVar3 = puVar4[0x18e];
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x74) + 0xc))
                  (iVar3 + *(short *)(*(int *)(iVar3 + 0x74) + 8),3);
        puVar4[0x18e] = 0;
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar1 < 2);
    DAT_08ac0e78 = *param_1;
    if (param_1[0x1e5] != 0) {
      FUN_089de940(param_1[0x1e5],0);
      param_1[0x1e5] = 0;
      FUN_08937f00(param_1);
      iVar1 = param_1[0x1e6];
      if (iVar1 == 0) {
        iVar1 = param_1[0x1e7];
      }
      else {
        (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
        param_1[0x1e6] = 0;
        param_1[0x1e6] = 0;
        iVar1 = param_1[0x1e7];
      }
      if (iVar1 != 0) {
        DAT_08ac5c90 = iVar1;
      }
    }
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar2,0x34,0);
    FUN_08909ac0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

