#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d6f4c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  memset_jak(*(undefined **)(param_1 + 8),0,*(int *)(param_1 + 0xc) << 4);
  **(undefined4 **)(param_1 + 4) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 4) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x18) = 0;
  FUN_089d7ac4(*(int *)(param_1 + 4) + 0x20,0,0,
               "c:/bullets/bkn2pspsys/src/pspsys/sys/Mem/COMemMng2.cpp",0x45);
  FUN_089d7ac4(*(int *)(param_1 + 4) + 0x30,0,0,
               "c:/bullets/bkn2pspsys/src/pspsys/sys/Mem/COMemMng2.cpp",0x46);
  uVar1 = FUN_089d7438(param_1);
  FUN_089d7ac4(uVar1,**(undefined4 **)(param_1 + 4),(*(undefined4 **)(param_1 + 4))[3],
               "c:/bullets/bkn2pspsys/src/pspsys/sys/Mem/COMemMng2.cpp",0x4d);
  FUN_089d843c(*(int *)(param_1 + 4) + 0x30,uVar1,1);
  *(int *)(*(int *)(param_1 + 4) + 0x10) = *(int *)(*(int *)(param_1 + 4) + 0x10) + 1;
  return;
}

