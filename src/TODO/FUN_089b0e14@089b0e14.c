#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b0e14(int param_1,char param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  param_3 = param_3 & 0xff;
  iVar2 = param_3 * 4;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x18);
  if (param_2 == '\0') {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  }
  else if (*(char *)(param_1 + param_3 + 0x579) == '\0') {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  }
  else {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x18));
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x18);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x18));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x18) + 0xbc) = 0;
    param_1 = param_1 + param_3 * 0x28;
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined *)(param_1 + 0x16f) = 0;
  }
  return;
}

