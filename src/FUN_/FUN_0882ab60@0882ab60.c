#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_0882ab60(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089bf238(param_1,0);
  param_1[3] = &DAT_08af171c;
  if ((DAT_08ab9f64 == '\0') && (param_2 != 0)) {
    DAT_08ab9f64 = '\x01';
    param_1[0x148] = param_2;
    param_1[0x14a] = param_3;
    DAT_08ab9f60 = FUN_089d79a4(0x20000,1);
    param_1[0x14b] = DAT_08ab9f60;
    memset_jak(DAT_08ab9f60,0,0x20000);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x140,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_089d8710(iVar2,0);
      *(undefined **)(iVar2 + 0x14) = &DAT_08af5864;
      *(undefined4 *)(iVar2 + 0x11c) = 0;
      iVar3 = iVar2;
    }
    param_1[0x149] = iVar3;
    FUN_089f72ac(iVar3,"PlayerBlurTex",param_1[0x14b]);
    param_1[0x14c] = 0;
    param_1[0x14d] = 0;
    param_1[0x14f] = 0;
    DAT_08ab9f68 = 0;
    param_1[0x150] = 0;
    *(undefined *)(param_1 + 0x151) = 0;
    *(undefined *)(param_1 + 0x152) = 1;
    *(undefined *)((int)param_1 + 0x545) = 0;
    if (0xb4 < param_4) {
      param_4 = 0xb4;
    }
    param_1[0x14e] = param_4;
    param_1[4] = 0x3ed6872b;
    param_1[5] = 0x3edb22d1;
    param_1[6] = 0xbf4d0e56;
    param_1[7] = 0;
  }
  else {
    param_1[0x150] = 5;
  }
  *(undefined *)((int)param_1 + 0x546) = 0;
  *(undefined *)((int)param_1 + 0x547) = 0;
  FUN_089bfbf0(param_1,0);
  *param_1 = 0x189;
  return param_1;
}

