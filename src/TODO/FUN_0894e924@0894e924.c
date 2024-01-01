#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894e924(int param_1,char param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_3 & 0xff) + 6;
  iVar2 = iVar3 * 4;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
  if (param_2 == '\0') {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  }
  else if (*(char *)(param_1 + (param_3 & 0xff) + 0x2d1) == '\0') {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  }
  else {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0xbc) = 0;
    param_1 = param_1 + iVar3 * 0x28;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0x7f) = 0;
  }
  return;
}

