#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e1004(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_08b02150 != 0) {
    iVar2 = *(int *)(DAT_08b02150 + 0xc);
    iVar1 = DAT_08b02150;
    while( true ) {
      iVar3 = *(int *)(iVar1 + 4);
      if (iVar2 == 0) {
        (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
      }
      else {
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
      if (iVar3 == 0) break;
      iVar2 = *(int *)(iVar3 + 0xc);
      iVar1 = iVar3;
    }
  }
  return;
}

