#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a16034(int param_1,ushort param_2,ushort param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(short *)(param_1 + 0xc) != 0)) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0x16) = ~param_2 & *(ushort *)(iVar1 + 0x16) | param_2 & param_3;
    }
  }
  return;
}

