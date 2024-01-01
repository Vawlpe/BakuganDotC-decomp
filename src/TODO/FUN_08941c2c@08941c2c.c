#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08941c2c(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  if (param_2 == '\0') {
    iVar4 = 0;
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x90) + iVar3);
      iVar2 = *(int *)(iVar1 + 0xc);
      iVar1 = (**(code **)(iVar2 + 0x24))(iVar1 + *(short *)(iVar2 + 0x20),0);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x90) + iVar3);
        iVar2 = *(int *)(iVar1 + 0xc);
        (**(code **)(iVar2 + 0x2c))(iVar1 + *(short *)(iVar2 + 0x28),0);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 2);
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x90) + iVar3);
      iVar2 = *(int *)(iVar1 + 0xc);
      (**(code **)(iVar2 + 0x24))(iVar1 + *(short *)(iVar2 + 0x20),1);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 2);
  }
  return uVar5;
}

