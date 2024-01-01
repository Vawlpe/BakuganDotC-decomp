#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08893280(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  uVar2 = 0;
  while( true ) {
    if (uVar2 < 3) {
      iVar3 = *(int *)(iVar1 + uVar2 * 4 + 0x508);
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x508);
    }
    if ((iVar3 != -1) && (param_2 + *(int *)(iVar1 + 8) * 4 + -4 == iVar3)) break;
    uVar2 = uVar2 + 1 & 0xff;
    if (1 < uVar2) {
      return 0xfffffffe;
    }
  }
  return uVar2;
}

