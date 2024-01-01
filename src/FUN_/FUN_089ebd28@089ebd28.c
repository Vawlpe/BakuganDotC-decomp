#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089ebd28(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  param_1[6] = 0;
  param_1[8] = 0x43700000;
  param_1[9] = 0x43080000;
  param_1[10] = 0x43700000;
  param_1[0xb] = 0x43080000;
  FUN_089ec090(param_1,0);
  param_1[5] = 0x44ed8000;
  param_1[4] = 0x44ed8000;
  param_1[7] = 0;
  param_1[3] = 999;
  *(undefined *)(param_1 + 0x1e) = 0;
  *(undefined *)((int)param_1 + 0x59) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffff;
  param_1[2] = 1;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x10,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar5 = 0;
  if (iVar4 != 0) {
    FUN_089eaf90(iVar4);
    iVar5 = iVar4;
  }
  param_1[0x1d] = iVar5;
  *param_1 = 0;
  uVar2 = DAT_08b0019c;
  uVar1 = DAT_08b00198;
  uVar3 = DAT_08b00194;
  param_1[0xc] = DAT_08b00190;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar2;
  uVar2 = DAT_08b001bc;
  uVar1 = DAT_08b001b8;
  uVar3 = DAT_08b001b4;
  param_1[0x10] = DAT_08b001b0;
  param_1[0x11] = uVar3;
  param_1[0x12] = uVar1;
  param_1[0x13] = uVar2;
  *(undefined *)(param_1 + 0x16) = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x50,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar5 = 0;
  if (iVar4 != 0) {
    FUN_089ed6c8(iVar4,0);
    iVar5 = iVar4;
  }
  param_1[0x1f] = iVar5;
  FUN_089ed7b0(iVar5,0,0);
  iVar5 = param_1[0x1f];
  *(undefined4 *)(iVar5 + 0x10) = 0x3f000000;
  *(undefined4 *)(iVar5 + 0x14) = 0x3f000000;
  *(undefined4 *)(iVar5 + 0x18) = 0x3f000000;
  *(undefined4 *)(iVar5 + 0x1c) = 0x3f800000;
  param_1[1] = 0;
  return param_1;
}

