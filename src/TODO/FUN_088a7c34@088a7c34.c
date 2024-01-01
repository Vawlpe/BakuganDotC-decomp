#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a7c34(int param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_0882487c(0,DAT_08ac5c70,0xffffffff,param_1);
    FUN_088248c8(0,DAT_08ac5c70,0xffffffff,*(int *)(param_1 + 0x130) + 0xb0);
    FUN_088248c8(0,DAT_08ac5c70,0xffffffff,param_1 + 0x350);
    FUN_088248c8(0,DAT_08ac5c70,0xffffffff,param_1 + 0x360);
    FUN_088248c8(0,DAT_08ac5c70,0xffffffff,param_1 + 0x370);
    FUN_0882487c(0,DAT_08abd5b0,0xffffffff,param_1);
  }
  else {
    FUN_0882487c(0x3f800000,DAT_08ac5c70,0xffffffff,param_1);
    FUN_088248c8(0x3f800000,DAT_08ac5c70,0xffffffff,*(int *)(param_1 + 0x130) + 0xb0);
    FUN_088248c8(0x3f800000,DAT_08ac5c70,0xffffffff,param_1 + 0x350);
    FUN_088248c8(0x3f800000,DAT_08ac5c70,0xffffffff,param_1 + 0x360);
    FUN_088248c8(0x3f800000,DAT_08ac5c70,0xffffffff,param_1 + 0x370);
    FUN_0882487c(0x3f800000,DAT_08abd5b0,0xffffffff,param_1);
    FUN_0882487c(0x3e4ccccd,DAT_08abd5b0,0xfe,param_1);
    FUN_0882487c(0x3e4ccccd,DAT_08abd5b0,0xff,param_1);
  }
  return;
}

