#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891be74(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  
  cVar5 = '\0';
  uVar4 = 0;
  do {
    piVar1 = (int *)FUN_0880cc48();
    uVar2 = uVar4 & 0xff;
    if ((int)uVar2 < 0) {
      uVar3 = -(-uVar2 & 7) & 0x1f;
    }
    else {
      uVar3 = uVar4 & 7;
    }
    if (((uint)*(byte *)(*piVar1 + ((int)uVar2 >> 3) + 0x88) & 1 << uVar3) != 0) {
      cVar5 = cVar5 + '\x01';
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 3);
  *(char *)(param_1 + 0x224d) = cVar5;
  return;
}

