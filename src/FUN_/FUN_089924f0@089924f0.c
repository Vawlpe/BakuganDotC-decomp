#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089924f0(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = &DAT_08af5054;
    FUN_089cec00(DAT_08ac5934);
    iVar2 = param_1[0x25];
    if (iVar2 == 0) {
      iVar2 = param_1[0x24];
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x74) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 8),3);
      param_1[0x25] = 0;
      iVar2 = param_1[0x24];
    }
    if (iVar2 == 0) {
      iVar2 = param_1[0x1c];
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x74) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 8),3);
      param_1[0x24] = 0;
      iVar2 = param_1[0x1c];
    }
    if (iVar2 == 0) {
      iVar2 = param_1[0x1b];
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x20) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 8),3);
      param_1[0x1c] = 0;
      iVar2 = param_1[0x1b];
    }
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x20) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 8),3);
      param_1[0x1b] = 0;
    }
    uVar1 = FUN_0880cc48();
    FUN_0880cd9c(uVar1,0x1d,*param_1);
    FUN_08909ac0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

