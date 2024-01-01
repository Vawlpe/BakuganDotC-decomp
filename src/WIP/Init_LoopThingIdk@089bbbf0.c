#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 _WIP_Init__LoopThingIdk(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &DAT_08ac51d8;
  do {
    iVar1 = _WIP_Init__LoopThingIdk_Step(*puVar2,0,0);
    iVar3 = iVar3 + 1;
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = puVar2 + 1;
  } while (iVar3 < 7);
  return 1;
}

