#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08977154(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_089a5278();
  *(undefined4 *)(param_1 + 0x508) = 0;
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(char *)(param_1 + 0x503) == '\0') {
    iVar5 = 3;
    iVar4 = 0xc;
    iVar3 = param_1 + 0xc;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(iVar1 + iVar4));
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
           *(undefined4 *)(iVar3 + 0x484);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 4;
      iVar1 = *(int *)(param_1 + 0x1c);
    } while (iVar5 < 6);
    iVar5 = 10;
    iVar4 = 0x28;
    iVar3 = param_1 + 0x28;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(iVar1 + iVar4));
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
           *(undefined4 *)(iVar3 + 0x484);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 4;
      iVar1 = *(int *)(param_1 + 0x1c);
    } while (iVar5 < 0xc);
    iVar4 = 6;
    iVar3 = 0x18;
    do {
      piVar2 = (int *)(iVar1 + iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      *(uint *)(*piVar2 + 0xd0) = *(uint *)(*piVar2 + 0xd0) & 0xfffffffe;
      iVar1 = *(int *)(param_1 + 0x1c);
    } while (iVar4 < 10);
    *(uint *)(*(int *)(iVar1 + 4) + 0xd0) = *(uint *)(*(int *)(iVar1 + 4) + 0xd0) & 0xfffffffe;
  }
  else {
    iVar4 = 3;
    iVar3 = 0xc;
    do {
      piVar2 = (int *)(iVar1 + iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      *(uint *)(*piVar2 + 0xd0) = *(uint *)(*piVar2 + 0xd0) & 0xfffffffe;
      iVar1 = *(int *)(param_1 + 0x1c);
    } while (iVar4 < 6);
    iVar4 = 10;
    iVar3 = 0x28;
    do {
      piVar2 = (int *)(iVar1 + iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      *(uint *)(*piVar2 + 0xd0) = *(uint *)(*piVar2 + 0xd0) & 0xfffffffe;
      iVar1 = *(int *)(param_1 + 0x1c);
    } while (iVar4 < 0xc);
    iVar5 = 6;
    iVar4 = 0x18;
    iVar3 = param_1 + 0x18;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(iVar1 + iVar4));
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
           *(undefined4 *)(iVar3 + 0x484);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 4;
      iVar1 = *(int *)(param_1 + 0x1c);
    } while (iVar5 < 10);
    *(uint *)(*(int *)(iVar1 + 4) + 0xd0) = *(uint *)(*(int *)(iVar1 + 4) + 0xd0) | 1;
  }
  FUN_089a535c(param_1 + 0x254);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30));
  FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x30) + 0xbc) = 0x3f800000;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
  *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xc0) = 0x3e99999a;
  *(undefined4 *)(iVar1 + 0xc4) = 0x3e99999a;
  *(undefined4 *)(iVar1 + 200) = 0x3e99999a;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x30) + 0x68) =
       *(undefined4 *)(param_1 + 0x4b4);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x30) + 0x60) =
       *(undefined4 *)
        (*(int *)(*(int *)(param_1 + 0x1c) +
                  *(char *)(param_1 + *(char *)(param_1 + 0x503) + 0x500) * 4 + 0x34) + 0x60);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x30) + 100) =
       *(undefined4 *)
        (*(int *)(*(int *)(param_1 + 0x1c) +
                  *(char *)(param_1 + *(char *)(param_1 + 0x503) + 0x500) * 4 + 0x34) + 100);
  FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 100),param_1 + 0x45c);
  iVar4 = 0xd;
  iVar3 = 0x34;
  iVar1 = param_1 + 0x34;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) =
         *(undefined4 *)(iVar1 + 0x484);
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
    if (iVar4 + -0xd == (int)*(char *)(param_1 + *(char *)(param_1 + 0x503) + 0x500)) {
      *(undefined4 *)(iVar5 + 0xc0) = 0x3e99999a;
      *(undefined4 *)(iVar5 + 0xc4) = 0x3e99999a;
      *(undefined4 *)(iVar5 + 200) = 0x3e99999a;
      *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
      FUN_08974b08(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),1);
    }
    else {
      *(undefined4 *)(iVar5 + 0xc0) = 0;
      *(undefined4 *)(iVar5 + 0xc4) = 0;
      *(undefined4 *)(iVar5 + 200) = 0;
      *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
      FUN_08974b08(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),0);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar4 < 0x12);
  return;
}

