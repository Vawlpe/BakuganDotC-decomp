#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c0fc8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  
  uVar3 = DAT_08b00dd0;
  uVar2 = DAT_08b00dcc;
  puVar1 = DAT_08b00d40;
  *DAT_08b00d40 = DAT_08b00dc8;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  uVar4 = DAT_08b00dd4;
  *(undefined2 *)(puVar1 + 3) = *(undefined2 *)(puVar1 + 3);
  *(undefined2 *)((int)puVar1 + 0xe) = uVar4;
  *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(puVar1 + 4);
  FUN_088bcf60(param_1 + 0x20);
  return;
}

