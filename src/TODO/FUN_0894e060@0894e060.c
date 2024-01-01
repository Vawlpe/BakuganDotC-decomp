#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894e060(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0xe);
  memset_jak((undefined *)(param_1 + 0x78),0,600);
  FUN_0894e024(param_1);
  *(undefined *)(param_1 + 0x74) = 0;
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar1 = 0;
  do {
    *(uint *)(*(int *)(iVar3 + iVar1) + 0xd0) =
         *(uint *)(*(int *)(iVar3 + iVar1) + 0xd0) & 0xfffffffe;
    iVar2 = iVar2 + 1;
    piVar4 = (int *)(*(int *)(param_1 + 0x1c) + iVar1);
    iVar1 = iVar1 + 4;
    *(undefined4 *)(*piVar4 + 0xbc) = 0;
    iVar3 = *(int *)(param_1 + 0x1c);
  } while (iVar2 < 0xf);
  *(uint *)(*(int *)(iVar3 + 0x38) + 0xd0) = *(uint *)(*(int *)(iVar3 + 0x38) + 0xd0) | 1;
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x38));
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
  FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x38));
  return;
}

