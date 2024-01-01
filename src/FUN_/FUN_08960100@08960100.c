#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08960100(int param_1,char param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (param_3 & 0xffff) * 4;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 0x10;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) =
       *(undefined4 *)(param_1 + iVar3 + 0x3b38);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
  *(undefined4 *)(iVar1 + 0xc0) = 0;
  *(undefined4 *)(iVar1 + 0xc4) = 0;
  *(undefined4 *)(iVar1 + 200) = 0;
  *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3);
  if (param_2 == '\x01') {
    FUN_089a51fc(0x3f800000,0x3f800000,0);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3);
  }
  FUN_089a5408(0,param_2,uVar2,param_1 + (param_3 & 0xffff) * 0x28 + 0x78,3);
  return;
}

