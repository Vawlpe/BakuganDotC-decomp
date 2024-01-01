#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cef2c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_08a1e368();
  FUN_08a1e4a4(0,&DAT_08b01140,DAT_08ac5930);
  uVar3 = DAT_08b001bc;
  uVar2 = DAT_08b001b8;
  uVar1 = DAT_08b001b4;
  *param_1 = DAT_08b001b0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[3] = 0;
  FUN_089cea80(param_1);
  FUN_08a1ee00();
  FUN_08a1eea4(0,0);
  FUN_08a1ee68(4,FUN_089ce864);
  FUN_08a1ee68(1,FUN_089ce888);
  param_1[4] = 0xffffffff;
  param_1[7] = 1;
  *(undefined *)((int)param_1 + 0x91) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_08a1ef10(1);
  zz_sceDisplayWaitVblankStartCB();
  FUN_089cf22c(param_1);
  return;
}

