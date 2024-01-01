#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d9bc4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_08ac5bcc + 4);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x20);
    while( true ) {
      iVar1 = (**(code **)(iVar1 + 0x2c))(iVar2 + *(short *)(iVar1 + 0x28),param_2);
      if (iVar1 != 0) {
        if (*(char *)(param_1 + 0xc) != '\0') {
          FUN_089d97b0(param_1,iVar2);
          return 0;
        }
        return 1;
      }
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 == 0) break;
      iVar1 = *(int *)(iVar2 + 0x20);
    }
  }
  return 0;
}

