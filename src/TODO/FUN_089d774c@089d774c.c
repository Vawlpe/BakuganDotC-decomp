#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d774c(int *param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 - *param_1) / (uint)param_1[3];
  puVar2 = (uint *)param_1[2];
  uVar1 = 0;
  if (uVar3 <= (uint)param_1[4]) {
    for (; 0x1f < uVar3; uVar3 = uVar3 - 0x20) {
      puVar2 = puVar2 + 1;
    }
    uVar1 = 1;
    *puVar2 = *puVar2 & (1 << (uVar3 & 0x1f) ^ 0xffffffffU);
  }
  return uVar1;
}

