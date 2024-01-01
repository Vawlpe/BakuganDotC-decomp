#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08850004(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = FUN_089f2178(0x43f98000);
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  FUN_089f1be8(uVar1,&local_40,2,0);
  uVar4 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x43f00000;
  local_24 = 0x43880000;
  iVar2 = FUN_089bfa40(0x19a);
  if (iVar2 != 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x378);
  }
  uVar3 = FUN_089f7720("back_04");
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_34 = uVar4;
  FUN_089f2e84(uVar1,&DAT_08b007d0,&local_30,&local_30,uVar3,&local_40);
  return;
}

