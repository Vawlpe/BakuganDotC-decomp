#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08941aa0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  if (param_2 == '\0') {
    iVar4 = 0;
    iVar1 = 0;
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0x90) + iVar1);
      iVar2 = *(int *)(iVar5 + 0xc);
      iVar5 = (**(code **)(iVar2 + 0x1c))(iVar5 + *(short *)(iVar2 + 0x18),0);
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar4 < 2);
  }
  else {
    iVar5 = 0;
    piVar3 = &DAT_08a9cf98;
    iVar1 = *(int *)(param_1 + 0x90);
    iVar4 = 0;
    do {
      iVar2 = *(int *)(*(int *)(iVar1 + iVar4) + 0xc);
      (**(code **)(iVar2 + 0x1c))(*(int *)(iVar1 + iVar4) + (int)*(short *)(iVar2 + 0x18),1);
      FUN_089411b0(*(undefined4 *)(*(int *)(param_1 + 0x90) + iVar4),piVar3[1]);
      iVar1 = *(int *)(*(int *)(param_1 + 0x90) + *(int *)(param_1 + 0xa0) * 4);
      iVar2 = *(int *)(iVar1 + 0xc);
      (**(code **)(iVar2 + 0x2c))(iVar1 + *(short *)(iVar2 + 0x28),0);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *piVar3 * 4) + 0x68) = 0xc3000000;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      piVar3 = piVar3 + 2;
      iVar1 = *(int *)(param_1 + 0x90);
    } while (iVar5 < 2);
    iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0xa0) * 4);
    iVar4 = *(int *)(iVar1 + 0xc);
    (**(code **)(iVar4 + 0x2c))(iVar1 + *(short *)(iVar4 + 0x28),1);
  }
  return uVar6;
}

