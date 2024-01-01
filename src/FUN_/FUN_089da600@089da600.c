#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089da600(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    memcpy_jak(param_1 + 0x2c,param_2,0x54);
    uVar1 = *(undefined4 *)(param_1 + 0x7c);
    if (*(int *)(param_1 + 0x80) == 0) {
      (**(code **)(*(int *)(param_1 + 0x20) + 0x34))
                (param_1 + *(short *)(*(int *)(param_1 + 0x20) + 0x30),uVar1);
      uVar1 = *(undefined4 *)(param_1 + 0x7c);
    }
    memcpy_jak(*(undefined4 *)(param_1 + 0x80),param_2 + 0x54,uVar1);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x80);
    iVar2 = 0;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x80);
    iVar3 = 0;
    if (*(short *)(param_1 + 0x38) != 0) {
      do {
        piVar4 = (int *)(*(int *)(param_1 + 0x30) + iVar3 + 4);
        iVar2 = iVar2 + 1;
        *piVar4 = *piVar4 + *(int *)(param_1 + 0x80);
        iVar3 = iVar3 + 0x10;
      } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x38));
    }
  }
  return;
}

