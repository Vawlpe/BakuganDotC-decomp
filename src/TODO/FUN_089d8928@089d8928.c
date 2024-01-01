#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d8928(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14);
    while( true ) {
      iVar3 = *(int *)(iVar1 + 4);
      (**(code **)(iVar2 + 0xc))(iVar1 + *(short *)(iVar2 + 8),3);
      if (iVar3 == 0) break;
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar1 = iVar3;
    }
  }
  return;
}

