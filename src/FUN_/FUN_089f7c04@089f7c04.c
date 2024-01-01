#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f7c04(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ('\x01' < *(char *)(*(int *)(param_2 + 0xa0) + 0x11)) {
    *(undefined4 *)(*(int *)(param_2 + 0xa0) + 0x1c) = param_1;
    uVar2 = (uint)(*(float *)(*(int *)(param_2 + 0xa0) + 0x1c) * 16.0);
    uVar1 = 0x7f;
    if (((int)uVar2 < 0x80) && (uVar1 = uVar2, (int)uVar2 < -0x80)) {
      uVar1 = 0xffffff80;
    }
    *(uint *)(*(int *)(param_2 + 0xb0) + (*(int *)(param_2 + 0x130) + -1) * 4) =
         (uVar1 & 0xff) << 0x10 | 0xc8000000 | (uint)*(byte *)(*(int *)(param_2 + 0xa0) + 0x25);
  }
  return;
}

