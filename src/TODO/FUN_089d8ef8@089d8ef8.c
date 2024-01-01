#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d8ef8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_08ac5bc0 != 0) {
    iVar4 = *(int *)(DAT_08ac5bc0 + 4);
    if (iVar4 == 0) {
      iVar4 = *(int *)(DAT_08ac5bc0 + 4);
    }
    else {
      iVar2 = *(int *)(iVar4 + 0x2c);
      while( true ) {
        bVar1 = false;
        if (iVar2 == param_1) {
          bVar1 = true;
          iVar3 = *(int *)(iVar4 + 4);
        }
        else {
          iVar2 = strcmp(iVar2,param_1);
          iVar3 = *(int *)(iVar4 + 4);
          if (iVar2 == 0) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          (**(code **)(*(int *)(iVar4 + 0x20) + 0xc))
                    (iVar4 + *(short *)(*(int *)(iVar4 + 0x20) + 8),3);
        }
        if (iVar3 == 0) break;
        iVar2 = *(int *)(iVar3 + 0x2c);
        iVar4 = iVar3;
      }
      iVar4 = *(int *)(DAT_08ac5bc0 + 4);
    }
    if ((iVar4 == 0) && (DAT_08ac5bc0 != 0)) {
      (**(code **)(*(int *)(DAT_08ac5bc0 + 0x20) + 0xc))
                (DAT_08ac5bc0 + *(short *)(*(int *)(DAT_08ac5bc0 + 0x20) + 8),3);
      DAT_08ac5bc0 = 0;
    }
  }
  return;
}

