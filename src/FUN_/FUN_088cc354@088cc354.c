#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_088cc354(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)*param_1;
  if (puVar1 < param_1) {
    uVar2 = (uint)puVar1 >> 2;
    iVar3 = 0;
    puVar1 = param_1;
    if (uVar2 != 0) {
      do {
        iVar3 = iVar3 + 1;
        *puVar1 = *puVar1 + (int)param_1;
        puVar1 = puVar1 + 1;
      } while (iVar3 < (int)uVar2);
    }
  }
  else {
    uVar2 = (uint)((int)puVar1 - (int)param_1) >> 2;
  }
  return uVar2;
}

