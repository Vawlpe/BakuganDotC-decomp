#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cbb84(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_08b01130 != 0) {
    iVar1 = *(int *)(DAT_08b01130 + 4);
    iVar3 = DAT_08b01130;
    while( true ) {
      iVar2 = iVar1;
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x20) + 0xc))
                  (iVar3 + *(short *)(*(int *)(iVar3 + 0x20) + 8),3);
      }
      if (iVar2 == 0) break;
      iVar1 = *(int *)(iVar2 + 4);
      iVar3 = iVar2;
    }
    DAT_08b01130 = 0;
  }
  FUN_089cb9cc("program/boot.lzs");
  return;
}

