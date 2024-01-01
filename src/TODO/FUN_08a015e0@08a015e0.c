#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_08a015e0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *param_1 = &DAT_08af5a4c;
  param_1[2] = param_4;
  param_1[1] = param_2;
  *param_2 = (int)(param_2 + 0x10);
  *(undefined4 *)(param_1[1] + 4) = param_3;
  *(undefined4 *)(param_1[1] + 8) = 0;
  *(int *)(param_1[1] + 0xc) = *(int *)(param_1[1] + 4) + -0x40;
  *(undefined4 *)(param_1[1] + 0x10) = 0;
  *(undefined4 *)(param_1[1] + 0x18) = 0;
  FUN_089d7aac(param_1[1] + 0x20,0,"c:/bullets/bkn2pspsys/src/pspsys/sys/Mem/COMemMng.cpp",0x58);
  FUN_089d7aac(param_1[1] + 0x30,0,"c:/bullets/bkn2pspsys/src/pspsys/sys/Mem/COMemMng.cpp",0x59);
  *(undefined4 *)(param_1[1] + 0x28) = 0;
  *(undefined4 *)(param_1[1] + 0x38) = 0;
  uVar1 = *(undefined4 *)param_1[1];
  FUN_089d7aac(uVar1,((undefined4 *)param_1[1])[3] + -0x10,
               "c:/bullets/bkn2pspsys/src/pspsys/sys/Mem/COMemMng.cpp",0x5e);
  FUN_089d843c(param_1[1] + 0x30,uVar1,1);
  *(int *)(param_1[1] + 0x10) = *(int *)(param_1[1] + 0x10) + 1;
  *(undefined *)(param_1 + 3) = 0;
  *(undefined *)((int)param_1 + 0xd) = 1;
  return param_1;
}

