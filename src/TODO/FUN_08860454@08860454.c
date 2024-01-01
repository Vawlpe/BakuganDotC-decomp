#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08860454(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_08aba808 != (int *)0x0) {
    iVar2 = *DAT_08aba808;
  }
  while (iVar2 != 0) {
    if (iVar2 == param_1) {
      iVar2 = *(int *)(iVar2 + 4);
    }
    else {
      iVar1 = FUN_08860344(iVar2);
      if (iVar1 == param_1) {
        FUN_08860438(iVar2);
        iVar1 = (**(code **)(*(int *)(iVar2 + 0x14) + 0x6c))
                          (iVar2 + *(short *)(*(int *)(iVar2 + 0x14) + 0x68));
        if (iVar1 == 0) {
          iVar2 = *(int *)(iVar2 + 4);
        }
        else if (*(int *)(iVar2 + 0x6cc) == 0) {
          iVar2 = *(int *)(iVar2 + 4);
        }
        else {
          *(undefined4 *)(*(int *)(iVar2 + 0x6cc) + 0x96c) = 0;
          iVar2 = *(int *)(iVar2 + 4);
        }
      }
      else {
        iVar2 = *(int *)(iVar2 + 4);
      }
    }
  }
  return;
}

