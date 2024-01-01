#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fbe84(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x24);
    iVar3 = iVar1;
    while ((iVar2 != param_2 && (param_2 != 0))) {
      iVar3 = *(int *)(iVar3 + 4);
      if (iVar3 == 0) {
        return;
      }
      iVar2 = *(int *)(iVar3 + 0x24);
    }
    if (iVar1 == iVar3) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar3 + 4);
    }
    if ((DAT_08ac61e0 != 0) && (iVar1 = FUN_089d774c(DAT_08ac61e0,iVar3), iVar1 != 0)) {
      (**(code **)(*(int *)(iVar3 + 0x20) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0x20) + 8),2);
      iVar3 = 0;
    }
    if (iVar3 != 0) {
      (**(code **)(*(int *)(iVar3 + 0x20) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0x20) + 8),3);
    }
  }
  return;
}

