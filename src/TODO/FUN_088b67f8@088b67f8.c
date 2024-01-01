#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088b67f8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_08b00950 != 0) {
    iVar3 = *(int *)(DAT_08b00950 + 0x5c);
    iVar2 = DAT_08b00950;
    while( true ) {
      iVar1 = *(int *)(iVar2 + 4);
      if ((iVar3 == 0) && (*(int *)(iVar2 + 0x18) == param_1)) {
        return 1;
      }
      if (iVar1 == 0) break;
      iVar3 = *(int *)(iVar1 + 0x5c);
      iVar2 = iVar1;
    }
  }
  return 0;
}

