#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ec090(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar2 = *(int *)(param_1 + 0x18);
  uVar3 = 0;
  if (iVar2 != 0) {
    FUN_089d8634();
    FUN_089d7fd8(iVar2,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (param_2 != 0) {
    iVar2 = FUN_089eb248(*(undefined4 *)(param_1 + 0x74));
    local_20 = 0;
    local_1c = 0;
    if (iVar2 != 0) {
      local_18 = 0;
      FUN_088184e8(iVar2,param_2,&local_18,&local_20,&local_1c);
      uVar3 = local_1c;
      *(undefined4 *)(param_1 + 0x28) = local_20;
      *(undefined4 *)(param_1 + 0x2c) = local_18;
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar3 = FUN_089d7d74(uVar3,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x18) = uVar3;
      memcpy_jak(uVar3,param_2,local_1c);
      uVar3 = 1;
    }
  }
  return uVar3;
}

