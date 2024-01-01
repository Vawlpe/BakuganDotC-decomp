#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a8624(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = *(int *)(param_1 + 0x18);
  local_30 = *(undefined4 *)(iVar2 + 0x20);
  uStack_2c = *(undefined4 *)(iVar2 + 0x24);
  uStack_28 = *(undefined4 *)(iVar2 + 0x28);
  uStack_24 = *(undefined4 *)(iVar2 + 0x2c);
  puVar1 = (undefined4 *)FUN_088b7784(4);
  iVar2 = FUN_088a97e8(puVar1[1],*puVar1,puVar1[2],0);
  if (iVar2 != 6) {
    FUN_088b65c4(iVar2,&local_30,param_2,1,param_1);
    FUN_088a85f8(param_1);
  }
  return;
}

