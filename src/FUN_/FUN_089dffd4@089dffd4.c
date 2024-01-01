#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dffd4(int param_1,char param_2)

{
  *(ushort *)
   (*(int *)(*(int *)(param_1 + 0x130) + 0x14) + (uint)*(byte *)(param_1 + 0x134) * 0x30 + 0xe) =
       (ushort)(param_2 == '\x01');
  return;
}

