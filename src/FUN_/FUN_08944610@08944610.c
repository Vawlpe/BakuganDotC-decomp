#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08944610(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af4d0c;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  iVar4 = 0;
  iVar3 = param_1;
  do {
    *(undefined4 *)(iVar3 + 0x100) = 0;
    *(undefined4 *)(iVar3 + 0x104) = 0;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 8;
  } while (iVar4 < 0xd);
  iVar4 = 0;
  iVar3 = param_1;
  do {
    *(undefined4 *)(iVar3 + 0x168) = 0;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 0x1f6);
  iVar4 = 0;
  iVar3 = param_1;
  do {
    *(undefined4 *)(iVar3 + 0x8c) = 0;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 0x14);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_08909df4(param_1,1);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(4,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08ac0e60 = uVar2;
  memset_jak(uVar2,0,4);
  FUN_0890a560(param_1);
  return param_1;
}

