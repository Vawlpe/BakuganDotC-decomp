#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dcf60(uint **param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = DAT_08ac5c4c & 0xf00;
  uVar1 = DAT_08ac5c4c;
  if (DAT_08ac5c4c == 0) {
    uVar3 = 0;
    if ((param_1[9][8] & 0x1000000) != 0) {
      uVar1 = (uint)*(ushort *)((int)param_1[9] + 10);
      uVar3 = uVar1 & 0xf00;
    }
  }
  puVar2 = (uint *)0x2000000;
  if (uVar3 == 0) {
    puVar2 = (uint *)0x0;
  }
  param_1[0x11] = puVar2;
  uVar3 = 0;
  if (uVar1 == 0) {
    uVar1 = 0xc0000100;
    if (*(short *)(param_1[9] + 2) == 0x86) {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 1;
    uVar1 = (int)(char)(&DAT_08aa2f97)[uVar1 & 0xf] << 8 | 0xc0000000;
  }
  puVar2 = *param_1;
  *param_1 = puVar2 + 1;
  *puVar2 = uVar1 | uVar3;
  puVar2 = *param_1;
  *param_1 = puVar2 + 1;
  *puVar2 = 0xc1000302;
  return;
}

