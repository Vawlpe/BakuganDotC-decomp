#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088934ec(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x1a0);
  bVar2 = 0;
  if ((((*(uint *)(iVar3 + 0x144) & 0x30000000) == 0) && (*(int *)(iVar3 + 0x140) != 4)) &&
     (*(int *)(iVar3 + 0x140) != 5)) {
    iVar4 = *(int *)(iVar3 + 0x140);
  }
  else {
    bVar2 = 1;
    iVar4 = *(int *)(iVar3 + 0x140);
  }
  bVar1 = 0;
  if (2 < iVar4) {
    if (6 < iVar4) {
      iVar3 = *(int *)(iVar3 + 0x140);
      goto LAB_0889356c;
    }
    bVar1 = 1;
  }
  iVar3 = *(int *)(iVar3 + 0x140);
LAB_0889356c:
  *(byte *)(param_1 + 0x14) = bVar2 | bVar1 | iVar3 == 3;
  (**(code **)(*(int *)(param_1 + 0x48) + 0x14))
            (param_1 + *(short *)(*(int *)(param_1 + 0x48) + 0x10));
  return;
}

