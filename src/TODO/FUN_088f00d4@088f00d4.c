#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088f00d4(int param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  ushort *puVar4;
  ushort uVar5;
  
  puVar4 = (ushort *)(*(int *)(param_1 + 0x18) + (param_2 & 0xffff) * 4);
  uVar2 = puVar4[1];
  pcVar3 = (char *)(*(int *)(param_1 + 0x1c) + (uint)*puVar4 * 4);
  uVar5 = 0;
  if (uVar2 < 6) {
    while ((((cVar1 = *pcVar3, cVar1 == -0x61 || (cVar1 == -0x60)) || (cVar1 == -0x5f)) ||
           ((cVar1 == -0x5e || (cVar1 == -0x6e))))) {
      uVar5 = uVar5 + 1;
      pcVar3 = pcVar3 + 4;
      if (uVar2 <= uVar5) {
        return 1;
      }
    }
  }
  return 0;
}

