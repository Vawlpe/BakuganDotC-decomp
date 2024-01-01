#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08998fdc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_089a5278();
  *(undefined4 *)(param_1 + 0x10bc) = 0;
  FUN_089a535c(param_1 + 0x434);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x60);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60));
  FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 0xbc) = 0x3f800000;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x60);
  *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xc0) = 0x3e99999a;
  *(undefined4 *)(iVar1 + 0xc4) = 0x3e99999a;
  *(undefined4 *)(iVar1 + 200) = 0x3e99999a;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 0x68) =
       *(undefined4 *)(param_1 + 0xf84);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 0x60) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109c) * 4) + 0x60);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 100) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109c) * 4) + 100);
  FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x174),param_1 + 0xefc);
  iVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = 0;
  iVar1 = param_1;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(iVar2 + iVar3));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) =
         *(undefined4 *)(iVar1 + 0xf24);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
    if (iVar4 == *(char *)(param_1 + 0x109c)) {
      *(undefined4 *)(iVar2 + 0xc0) = 0x3e99999a;
      *(undefined4 *)(iVar2 + 0xc4) = 0x3e99999a;
      *(undefined4 *)(iVar2 + 200) = 0x3e99999a;
      *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
      FUN_08998b3c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),1);
      iVar2 = *(int *)(param_1 + 0x1c);
    }
    else {
      *(undefined4 *)(iVar2 + 0xc0) = 0;
      *(undefined4 *)(iVar2 + 0xc4) = 0;
      *(undefined4 *)(iVar2 + 200) = 0;
      *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
      FUN_08998b3c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),0);
      iVar2 = *(int *)(param_1 + 0x1c);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar4 < 8);
  iVar4 = 8;
  iVar3 = 0x20;
  iVar1 = param_1 + 0x20;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(iVar2 + iVar3));
    iVar4 = iVar4 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) =
         *(undefined4 *)(iVar1 + 0xf24);
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 4;
    iVar2 = *(int *)(param_1 + 0x1c);
  } while (iVar4 < 0x10);
  iVar4 = 0x10;
  iVar3 = 0x40;
  iVar1 = param_1 + 0x40;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(iVar2 + iVar3));
    iVar4 = iVar4 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) =
         *(undefined4 *)(iVar1 + 0xf24);
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 4;
    iVar2 = *(int *)(param_1 + 0x1c);
  } while (iVar4 < 0x18);
  iVar4 = 0x2a;
  iVar3 = 0xa8;
  iVar1 = param_1 + 0xa8;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(iVar2 + iVar3));
    iVar4 = iVar4 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) =
         *(undefined4 *)(iVar1 + 0xf24);
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 4;
    iVar2 = *(int *)(param_1 + 0x1c);
  } while (iVar4 < 0x32);
  iVar1 = *(int *)(iVar2 + 0x6c);
  if (((uint)*(byte *)(param_1 + 0x10b9) & 1 << ((int)*(char *)(param_1 + 0x109c) & 0x1fU)) == 0) {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x80);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x84);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  }
  else {
    if (*(char *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10b0) == '\0') {
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
    }
    else {
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
    }
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    FUN_08998b98(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x6c),
                 *(undefined *)(param_1 + 0x109c));
    FUN_08998c68(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x68),
                 *(undefined *)(param_1 + 0x109c),*(undefined *)(param_1 + 0x109e));
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x80);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x84);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  }
  return;
}

