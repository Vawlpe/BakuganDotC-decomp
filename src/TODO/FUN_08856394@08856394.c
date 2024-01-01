#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08856394(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_088b3260(&local_30,param_1);
  local_2c = local_2c + 100.0;
  FUN_0889d57c(&local_30,&local_30);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0xa90,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    local_40 = local_30;
    fStack_3c = local_2c;
    uStack_38 = uStack_28;
    uStack_34 = uStack_24;
    FUN_08855a58(iVar2,0x21,2,&local_40,0,0,0);
    iVar3 = iVar2;
  }
  *(undefined4 *)(iVar3 + 0xa7c) = param_1;
  iVar2 = FUN_0880d354();
  if (iVar2 == 0) {
    *(undefined4 *)(iVar3 + 0x90c) = 2;
  }
  else {
    *(undefined4 *)(iVar3 + 0x90c) = 0;
  }
  (**(code **)(*(int *)(iVar3 + 0x14) + 0x3c))(iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x38));
  return iVar3;
}

