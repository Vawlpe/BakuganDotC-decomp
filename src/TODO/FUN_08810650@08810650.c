#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08810650(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_20 = FUN_089c9da8();
  local_24 = FUN_089c9da8(param_1);
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_34 = 0.0;
  local_40 = FUN_089c9e3c(param_1);
  local_3c = FUN_089c9e3c(param_1);
  local_38 = FUN_089c9e3c(param_1);
  local_34 = (float)FUN_089c9e3c(param_1);
  local_34 = local_34 * 0.01745329;
  iVar1 = FUN_089c9d1c(param_1);
  local_28 = FUN_089c9d1c(param_1);
  local_2c = 0;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0xa90,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar4 = local_2c;
  if (iVar3 != 0) {
    local_50 = local_40;
    uStack_4c = local_3c;
    uStack_48 = local_38;
    fStack_44 = local_34;
    FUN_08855a58(iVar3,0x21,2,&local_50,local_24,local_20,local_28);
    iVar4 = iVar3;
  }
  *(undefined4 *)(iVar4 + 0x150) = 5;
  FUN_088625e8(iVar4,5);
  fVar5 = (float)iVar1;
  if (fVar5 < 0.0) {
    iVar1 = 0;
  }
  else if (5.0 < fVar5) {
    iVar1 = 5;
  }
  else {
    iVar1 = (int)fVar5;
  }
  *(int *)(iVar4 + 0x90c) = iVar1;
  return 0;
}

