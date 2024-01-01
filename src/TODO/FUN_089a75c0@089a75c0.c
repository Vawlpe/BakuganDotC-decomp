#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a75c0(int param_1,char param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_3 & 0xff) * 4;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x28);
  if (param_2 == '\0') {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  }
  else if (((uint)*(byte *)(param_1 + 0x673) & 1 << (param_3 & 0x1f)) == 0) {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  }
  else {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x28));
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x28);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x28) + 0x90) = 0x3f800000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x28) + 0x94) = 0x3f800000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x28) + 0x9c) = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x28);
    FUN_089f4954(*(undefined4 *)(iVar1 + 0x90),*(undefined4 *)(iVar1 + 0x94),
                 *(undefined4 *)(iVar1 + 0x9c),iVar1,0);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x28) + 0xbc) = 0;
    param_1 = param_1 + (param_3 & 0xff) * 0x28;
    *(undefined4 *)(param_1 + 0x224) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(undefined *)(param_1 + 0x20f) = 0;
  }
  return;
}

