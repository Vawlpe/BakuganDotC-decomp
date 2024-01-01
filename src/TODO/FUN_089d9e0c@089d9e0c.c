#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d9e0c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_60 [76];
  
  iVar1 = FUN_089d9d58();
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x20) + 0x14))
                      (iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 0x10));
    return uVar2;
  }
  strcpy(auStack_60,param_2);
  strcat(auStack_60,&DAT_08aa2f80);
  iVar1 = FUN_089d9914(param_1,auStack_60);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x20) + 0x14))
                      (iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 0x10));
    return uVar2;
  }
  return 0;
}

