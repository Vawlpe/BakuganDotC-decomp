#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899abbc(int param_1)

{
  int iVar1;
  byte abStack_2b8 [632];
  byte local_40 [4];
  undefined local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  byte abStack_38 [40];
  
  local_40[0] = 0x24;
  local_40[1] = 3;
  local_40[2] = 7;
  local_40[3] = 0x13;
  local_3c = 0xf;
  local_3b = 0xb;
  local_3a = 0x25;
  local_39 = 0x1b;
  memcpy_jak(abStack_38,&DAT_08ac3c80,0x28);
  iVar1 = FUN_08996448(param_1);
  if (iVar1 == 0) {
    *(uint *)(DAT_08ac58c4 + 4) = (uint)local_40[*(char *)(param_1 + 0x109c)];
  }
  else {
    FUN_089c9b74(0x20,DAT_08ac58c8);
    *(uint *)(DAT_08ac58c4 + 4) =
         (uint)abStack_38[*(char *)(param_1 + 0x109c) * 4 + (int)*(char *)(param_1 + 0x109e)];
  }
  return;
}

