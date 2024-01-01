#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089ce8c0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  memset_jak((undefined *)(param_1 + 0x4c),0,0x44);
  uVar1 = 0x110;
  iVar2 = 8;
  do {
    iVar2 = param_1 + iVar2 * 4;
    uVar3 = uVar1 & 0x1f;
    uVar1 = uVar1 + 1;
    *(uint *)(iVar2 + 0x4c) = *(uint *)(iVar2 + 0x4c) | 1 << uVar3;
    iVar2 = (int)uVar1 >> 5;
  } while ((int)uVar1 < 0x150);
  *(undefined *)(param_1 + 0x90) = 0;
  return param_1;
}

