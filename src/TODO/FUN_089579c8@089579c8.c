#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089579c8(undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 auStack_50 [16];
  
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0x43700000;
  local_70[3] = 0x43880000;
  local_60 = 0x43700000;
  local_5c = 0;
  param_3 = param_3 & 0xff;
  local_58 = 0x43700000;
  local_54 = 0x43880000;
  memcpy_jak(auStack_50,&DAT_08ac3428,0x40);
  if (*(char *)(param_2 + 0x4cda) < '\x03') {
    uVar3 = local_70[param_3 * 4];
    uVar4 = local_70[param_3 * 4 + 1];
    uVar1 = local_70[param_3 * 4 + 2];
    uVar2 = local_70[param_3 * 4 + 3];
  }
  else {
    uVar3 = auStack_50[param_3 * 4];
    uVar4 = auStack_50[param_3 * 4 + 1];
    uVar1 = auStack_50[param_3 * 4 + 2];
    uVar2 = auStack_50[param_3 * 4 + 3];
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return;
}

