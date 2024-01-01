#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c72d4(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 4);
      if (iVar1 == 0) {
        iVar1 = *(int *)(iVar2 + 8);
      }
      else {
        (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
        iVar1 = *(int *)(iVar2 + 8);
      }
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
      }
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

