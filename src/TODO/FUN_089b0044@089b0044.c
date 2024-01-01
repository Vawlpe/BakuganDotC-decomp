#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b0044(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x14);
  memset_jak((undefined *)(param_1 + 0x78),0,0x500);
  FUN_089b0008(param_1);
  *(undefined *)(param_1 + 0x74) = 0;
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0xbc) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0xc);
  return;
}

