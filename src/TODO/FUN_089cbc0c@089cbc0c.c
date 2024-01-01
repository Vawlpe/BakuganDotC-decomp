#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089cbc0c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_08b01130 != 0) {
    uVar2 = *(undefined4 *)(DAT_08b01130 + 0x50);
    iVar3 = DAT_08b01130;
    while( true ) {
      iVar1 = strcasecmp(uVar2,param_1);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = *(int *)(iVar3 + 4);
      if (iVar3 == 0) break;
      uVar2 = *(undefined4 *)(iVar3 + 0x50);
    }
  }
  return 0;
}

