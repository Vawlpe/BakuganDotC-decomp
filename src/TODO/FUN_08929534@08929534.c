#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08929534(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  memset_jak((undefined *)(param_1 + 0x74),0,0x410);
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x3d);
  uVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0xbc) = 0;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (uVar3 < 0x1a);
  return;
}

