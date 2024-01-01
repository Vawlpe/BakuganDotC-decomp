#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c6f34(int param_1)

{
  undefined4 uVar1;
  
  DAT_08ac5878 = DAT_08ac5878 + 1;
  zz_sceAudioOutput2Reserve(0x100);
  FUN_08a1fd30(0x14,0x100);
  FUN_08a23be0();
  FUN_08a23de8(0,0);
  FUN_08a23de8(1,0);
  FUN_08a23de8(2,0);
  FUN_08a23d10(0,0x100);
  FUN_08a23d10(1,0x100);
  FUN_08a23d10(2,0x100);
  *(undefined4 *)(param_1 + 8) = 4;
  uVar1 = _DONE_GetPtr_DAT_08AC51F8();
  FUN_089bced0(uVar1,FUN_089c6b6c);
  uVar1 = _DONE_GetPtr_DAT_08AC51F8();
  FUN_089bcfa4(uVar1,FUN_089c6bfc);
  return;
}

