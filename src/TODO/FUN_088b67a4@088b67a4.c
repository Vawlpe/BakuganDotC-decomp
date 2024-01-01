#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088b67a4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (DAT_08b00950 != 0) {
    iVar3 = *(int *)(DAT_08b00950 + 0x44);
    iVar2 = DAT_08b00950;
    while( true ) {
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar3 == param_1) {
        iVar1 = iVar1 + 1;
      }
      if (iVar2 == 0) break;
      iVar3 = *(int *)(iVar2 + 0x44);
    }
  }
  return iVar1;
}

