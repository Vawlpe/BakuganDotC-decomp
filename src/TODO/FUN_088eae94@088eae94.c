#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088eae94(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  do {
    iVar2 = param_1 + iVar2;
    piVar1 = *(int **)(iVar2 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),0);
      piVar1 = *(int **)(iVar2 + 0x10);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
    }
    uVar3 = uVar3 + 1 & 0xff;
    iVar2 = uVar3 << 2;
  } while (uVar3 < 0x10);
  *(undefined *)(param_1 + 0x51) = 0;
  *(undefined *)(param_1 + 0x50) = 0;
  return;
}

