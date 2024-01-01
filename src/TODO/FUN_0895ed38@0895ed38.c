#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895ed38(int param_1,char param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (uint)*(ushort *)(param_1 + 0x5174) + (param_3 & 0xff);
  iVar3 = iVar4 * 4;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
  if (param_2 == '\0') {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3);
  }
  else {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3);
  }
  FUN_089a5408(0x3fc00000,param_2,uVar2,param_1 + iVar4 * 0x28 + 0x78,3);
  return;
}

