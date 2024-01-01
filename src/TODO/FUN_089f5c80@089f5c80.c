#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f5c80(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xd0);
    while( true ) {
      iVar3 = *(int *)(iVar1 + 4);
      *(uint *)(iVar1 + 0xd0) = uVar2 | param_2;
      if (iVar3 == 0) break;
      uVar2 = *(uint *)(iVar3 + 0xd0);
      iVar1 = iVar3;
    }
  }
  return;
}

