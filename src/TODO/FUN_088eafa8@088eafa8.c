#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088eafa8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x51);
  while (uVar4 != 0) {
    uVar4 = uVar4 - 1 & 0xff;
    iVar5 = param_1 + uVar4 * 4;
    piVar2 = *(int **)(iVar5 + 0x10);
    iVar3 = *piVar2;
    iVar3 = (**(code **)(iVar3 + 0x2c))((int)piVar2 + (int)*(short *)(iVar3 + 0x28));
    if ((iVar3 == param_2) &&
       (piVar2 = *(int **)(iVar5 + 0x10), iVar3 = *piVar2,
       uVar1 = (**(code **)(iVar3 + 0x34))((int)piVar2 + (int)*(short *)(iVar3 + 0x30)),
       uVar1 == (param_3 & 0xff))) {
      FUN_088eac94(param_1,uVar4);
    }
  }
  return;
}

