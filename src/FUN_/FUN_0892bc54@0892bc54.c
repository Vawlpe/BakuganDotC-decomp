#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892bc54(int param_1,undefined param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 auStack_210 [126];
  
  memcpy_jak(auStack_210,&DAT_08ac13ec,0x1f8);
  uVar1 = FUN_0892bc18(param_2);
  iVar3 = 0;
  puVar2 = auStack_210 + (uVar1 & 0xff) * 0x15;
  do {
    uVar5 = puVar2[1];
    uVar4 = puVar2[2];
    *(undefined4 *)(param_1 + 0xb0) = *puVar2;
    *(undefined4 *)(param_1 + 0xb4) = uVar5;
    *(undefined4 *)(param_1 + 0xb8) = uVar4;
    *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
    if (4 < iVar3) {
      *(undefined4 *)(param_1 + 0xdc) = 2;
    }
    iVar3 = iVar3 + 1;
    param_1 = *(int *)(param_1 + 4);
    puVar2 = puVar2 + 3;
  } while (iVar3 < 7);
  return;
}

