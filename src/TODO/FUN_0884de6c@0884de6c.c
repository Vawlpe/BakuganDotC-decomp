#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0884de6c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_089bf93c(0x1e1,1);
  if (iVar2 == 0) {
    iVar2 = FUN_08860344(param_2);
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x14) + 100))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0x14) + 0x60));
    if (iVar2 == 0) {
      iVar2 = FUN_08860344(param_2);
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x14) + 0x54))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 0x14) + 0x50));
      if (iVar2 == 0) {
        return 0;
      }
      cVar1 = *(char *)(param_2 + 0x158);
    }
    else {
      cVar1 = *(char *)(param_2 + 0x158);
    }
    if (cVar1 != '\0') {
      DAT_08aba77f = 0;
      FUN_088acc50(param_2);
      FUN_089bf754(0x1e1,param_2);
      *(undefined4 *)(param_1 + 0x440) = 5;
      *(undefined4 *)(param_1 + 0x444) = 5;
      FUN_0889d9c8();
      return 1;
    }
  }
  return 0;
}

