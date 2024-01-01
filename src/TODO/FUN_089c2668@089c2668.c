#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c2668(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x24);
  while (iVar3 = iVar2, iVar3 != 0) {
    iVar1 = FUN_089c22b4(iVar3);
    iVar2 = *(int *)(iVar3 + 4);
    if (iVar1 == 0) {
      if ((*(int *)(DAT_08ac5278 + 4) != 0) &&
         (iVar1 = FUN_089d774c(*(int *)(DAT_08ac5278 + 4),iVar3), iVar1 != 0)) {
        (**(code **)(*(int *)(iVar3 + 0x20) + 0xc))
                  (iVar3 + *(short *)(*(int *)(iVar3 + 0x20) + 8),2);
        iVar3 = 0;
      }
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x20) + 0xc))
                  (iVar3 + *(short *)(*(int *)(iVar3 + 0x20) + 8),3);
      }
    }
  }
  return;
}

