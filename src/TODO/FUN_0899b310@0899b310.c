#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899b310(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x6c);
  if (param_2 == '\0') {
    cVar1 = *(char *)(param_1 + 0x109c);
    if (((uint)*(byte *)(param_1 + 0x10b9) & 1 << ((int)cVar1 & 0x1fU)) == 0) {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x6c);
    }
    else if (*(char *)(param_1 + cVar1 + 0x10b0) == '\0') {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x6c);
    }
    else {
      FUN_08998b98(param_1,iVar2,cVar1);
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x6c);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x6c);
    }
    FUN_089a54cc(0x3fc00000,0xc2800000,0,0,uVar3,param_1 + 0x4ac,7);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
    if (((uint)*(byte *)(param_1 + 0x10b9) & 1 << ((int)*(char *)(param_1 + 0x109c) & 0x1fU)) == 0)
    {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x68);
    }
    else {
      FUN_08998c68(param_1,iVar2,*(char *)(param_1 + 0x109c),*(undefined *)(param_1 + 0x109e));
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x68);
    }
    FUN_089a54cc(0x3fc00000,0xc2800000,0,0,uVar3,param_1 + 0x484,7);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x80);
    if (((uint)*(byte *)(param_1 + 0x10b9) & 1 << ((int)*(char *)(param_1 + 0x109c) & 0x1fU)) == 0)
    {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x80);
    }
    else {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x80);
    }
    *(undefined4 *)(iVar2 + 0xb0) = 0;
    *(undefined4 *)(iVar2 + 0xb4) = 0;
    *(undefined4 *)(iVar2 + 0xb8) = 0;
    *(undefined4 *)(iVar2 + 0xbc) = 0;
    FUN_089a54cc(0x3fc00000,0xc2800000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x80),
                 param_1 + 0x574,7);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x84);
    if (((uint)*(byte *)(param_1 + 0x10b9) & 1 << ((int)*(char *)(param_1 + 0x109c) & 0x1fU)) == 0)
    {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x84);
    }
    else {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x84);
    }
    *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xb8) = 0;
    *(undefined4 *)(iVar2 + 0xbc) = 0;
    FUN_089a54cc(0x3fc00000,0xc2800000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x84),
                 param_1 + 0x59c,7);
  }
  else {
    FUN_089a54cc(0x3f800000,0,0xc2800000,param_2,iVar2,param_1 + 0x4ac,7);
    FUN_089a54cc(0x3f800000,0,0xc2800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x68),
                 param_1 + 0x484,7);
    FUN_089a54cc(0x3f800000,0,0xc2800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x80),
                 param_1 + 0x574,7);
    FUN_089a54cc(0x3f800000,0,0xc2800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x84),
                 param_1 + 0x59c,7);
  }
  return;
}

