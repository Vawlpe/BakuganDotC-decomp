#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898294c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0890a520(param_1);
    uVar1 = FUN_089f2178(0x42480000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),1);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar1);
    uVar1 = FUN_089f2178(0x43480000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),2);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar1);
    uVar1 = FUN_089f2178(0x43960000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),4);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar1);
    uVar1 = FUN_089f2178(0x43c80000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),8);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar1);
    uVar1 = FUN_089f2178(0x43fa0000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),0x10);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar1);
  }
  iVar4 = 0;
  iVar3 = param_1;
  do {
    if (*(char *)(iVar3 + 0xcb4) != '\0') {
      local_50 = 0;
      local_4c = 0;
      local_48 = 0x43f00000;
      local_44 = 0x43880000;
      if (iVar4 == 0) {
        uVar1 = FUN_089f2178(0x437a0000);
      }
      else {
        uVar1 = FUN_089f2178(0x43af0000);
      }
      uVar2 = FUN_089f1308(uVar1);
      uVar2 = FUN_089f1418(uVar2);
      uVar2 = FUN_089e3014(DAT_08ac5c8c,uVar2,0xffffffff);
      uVar2 = FUN_089f202c(uVar2,&DAT_08b00190,0,1);
      local_54 = *(undefined4 *)(iVar3 + 0xcb8);
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      uVar2 = FUN_089f2c88(uVar1,uVar2,&local_50,&local_60);
      FUN_089f13c8(uVar1,uVar2);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 2);
  FUN_08982878(param_1);
  return;
}

