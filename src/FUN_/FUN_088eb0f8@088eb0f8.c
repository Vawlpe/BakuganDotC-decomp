#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088eb0f8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(char *)(param_1 + 0x51) != '\0') {
    iVar3 = 0;
    do {
      iVar3 = param_1 + iVar3;
      iVar2 = **(int **)(iVar3 + 0x10);
      (**(code **)(iVar2 + 0x1c))((int)*(int **)(iVar3 + 0x10) + (int)*(short *)(iVar2 + 0x18),0);
      piVar1 = *(int **)(iVar3 + 0x10);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
        *(undefined4 *)(iVar3 + 0x10) = 0;
      }
      uVar4 = uVar4 + 1 & 0xff;
      iVar3 = uVar4 << 2;
    } while (uVar4 < *(byte *)(param_1 + 0x51));
  }
  *(undefined *)(param_1 + 0x51) = 0;
  return;
}

