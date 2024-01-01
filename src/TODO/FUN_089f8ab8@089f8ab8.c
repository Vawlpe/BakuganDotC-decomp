#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f8ab8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_08b02c70 != 0) {
    iVar2 = *(int *)(DAT_08b02c70 + 0x14);
    iVar1 = DAT_08b02c70;
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

