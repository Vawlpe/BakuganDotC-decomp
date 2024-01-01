#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d76ac(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  uVar3 = 0;
  if (0 < param_1[4]) {
    puVar2 = (uint *)param_1[2];
    uVar1 = *puVar2;
    while( true ) {
      uVar5 = 1 << (uVar3 & 0x1f);
      if ((uVar1 & uVar5) == 0) {
        *puVar2 = uVar1 | uVar5;
        return *param_1 + param_1[3] * iVar4;
      }
      uVar3 = uVar3 + 1;
      if (uVar1 == 0xffffffff) {
        iVar4 = iVar4 + 0x20;
        puVar2 = puVar2 + 1;
        uVar3 = 0;
      }
      else {
        if (0x1f < (int)uVar3) {
          puVar2 = puVar2 + 1;
          uVar3 = 0;
        }
        iVar4 = iVar4 + 1;
      }
      if (param_1[4] <= iVar4) break;
      uVar1 = *puVar2;
    }
  }
  return 0;
}

