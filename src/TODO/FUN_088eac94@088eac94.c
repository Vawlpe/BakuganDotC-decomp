#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088eac94(int param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  
  param_2 = param_2 & 0xff;
  if (param_2 < *(byte *)(param_1 + 0x51)) {
    iVar3 = param_1 + param_2 * 4;
    piVar2 = *(int **)(iVar3 + 0x10);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18),0);
      piVar2 = *(int **)(iVar3 + 0x10);
      if (piVar2 == (int *)0x0) {
        bVar1 = *(byte *)(param_1 + 0x51);
      }
      else {
        (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),3);
        *(undefined4 *)(iVar3 + 0x10) = 0;
        bVar1 = *(byte *)(param_1 + 0x51);
      }
      for (; param_2 < bVar1; param_2 = param_2 + 1 & 0xff) {
        iVar3 = param_1 + param_2 * 4;
        *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 0x14);
      }
      *(undefined4 *)(param_1 + (uint)bVar1 * 4 + 0x10) = 0;
      *(byte *)(param_1 + 0x51) = bVar1 - 1;
    }
  }
  return;
}

