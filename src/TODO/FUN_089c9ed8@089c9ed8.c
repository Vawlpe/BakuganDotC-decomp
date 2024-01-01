#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089c9ed8(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)**(ushort **)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = (int)*(ushort **)(param_1 + 0x30) + param_2;
  *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0x44) + '\x01';
  if (uVar1 < 0x1000) {
    return *(int *)(param_1 + 0x34) + uVar1 * 4;
  }
  return DAT_08ac58c4 + (uVar1 - 0x1000 & 0xffff) * 4;
}

