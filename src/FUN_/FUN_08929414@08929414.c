#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08929414(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0890a520(param_1);
    if (*(char *)(param_1 + 0x488) != '\0') {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x43f00000;
      local_14 = 0x43880000;
      uVar1 = FUN_089f2178(0x447a0000);
      uVar2 = FUN_089f1308(uVar1);
      uVar2 = FUN_089f1418(uVar2);
      uVar2 = FUN_089e3014(DAT_08ac5c8c,uVar2,0xffffffff);
      uVar2 = FUN_089f202c(uVar2,&DAT_08b00190,0,1);
      local_24 = *(undefined4 *)(param_1 + 0x48c);
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      uVar2 = FUN_089f2c88(uVar1,uVar2,&local_20,&local_30);
      FUN_089f13c8(uVar1,uVar2);
    }
    uVar1 = FUN_089f2178(0x44fa0000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),1);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar1);
  }
  FUN_0892934c(param_1);
  return;
}

