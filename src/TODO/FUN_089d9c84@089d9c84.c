#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d9c84(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_60 [76];
  
  iVar3 = 0;
  for (iVar2 = *(int *)(DAT_08ac5bcc + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    iVar1 = (**(code **)(*(int *)(iVar2 + 0x20) + 0x2c))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 0x28),param_2);
    if (iVar1 != 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
  }
  strcpy(auStack_60,param_2);
  strcat(auStack_60,&DAT_08aa2f80);
  iVar2 = FUN_089d9914(param_1,auStack_60);
  if (iVar2 != 0) {
    return iVar3;
  }
  return -1;
}

