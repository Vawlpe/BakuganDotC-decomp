#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08928df8(int param_1,uint param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 auStack_150 [160];
  
  param_2 = param_2 & 0xff;
  memcpy_jak(auStack_150,&DAT_08ac11f0,0x140);
  uVar1 = auStack_150[param_2 * 0x10 + 1];
  uVar2 = auStack_150[param_2 * 0x10 + 2];
  *(undefined2 *)(param_1 + 0x49a) = auStack_150[param_2 * 0x10];
  uVar3 = auStack_150[param_2 * 0x10 + 3];
  *(undefined2 *)(param_1 + 0x49c) = uVar1;
  uVar1 = auStack_150[param_2 * 0x10 + 4];
  *(undefined2 *)(param_1 + 0x49e) = uVar2;
  uVar2 = auStack_150[param_2 * 0x10 + 5];
  *(undefined2 *)(param_1 + 0x4a0) = uVar3;
  uVar3 = auStack_150[param_2 * 0x10 + 6];
  *(undefined2 *)(param_1 + 0x4a2) = uVar1;
  uVar1 = auStack_150[param_2 * 0x10 + 7];
  *(undefined2 *)(param_1 + 0x4a4) = uVar2;
  uVar2 = auStack_150[param_2 * 0x10 + 8];
  *(undefined2 *)(param_1 + 0x4a6) = uVar3;
  uVar3 = auStack_150[param_2 * 0x10 + 9];
  *(undefined2 *)(param_1 + 0x4a8) = uVar1;
  uVar1 = auStack_150[param_2 * 0x10 + 10];
  *(undefined2 *)(param_1 + 0x4aa) = uVar2;
  uVar2 = auStack_150[param_2 * 0x10 + 0xb];
  *(undefined2 *)(param_1 + 0x4ac) = uVar3;
  uVar3 = auStack_150[param_2 * 0x10 + 0xc];
  *(undefined2 *)(param_1 + 0x4ae) = uVar1;
  uVar1 = auStack_150[param_2 * 0x10 + 0xd];
  *(undefined2 *)(param_1 + 0x4b0) = uVar2;
  uVar2 = auStack_150[param_2 * 0x10 + 0xe];
  *(undefined2 *)(param_1 + 0x4b2) = uVar3;
  uVar3 = auStack_150[param_2 * 0x10 + 0xf];
  *(undefined2 *)(param_1 + 0x4b4) = uVar1;
  *(undefined2 *)(param_1 + 0x4b6) = uVar2;
  *(undefined2 *)(param_1 + 0x4b8) = uVar3;
  return;
}

