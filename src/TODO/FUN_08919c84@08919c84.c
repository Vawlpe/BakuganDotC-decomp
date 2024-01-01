#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08919c84(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_089a5278();
  *(undefined4 *)(param_1 + 0x89c) = 0;
  FUN_089a535c(param_1 + 800);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44));
  FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x44) + 0xbc) = 0x3f800000;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
  *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xc0) = 0x3e99999a;
  *(undefined4 *)(iVar1 + 0xc4) = 0x3e99999a;
  *(undefined4 *)(iVar1 + 200) = 0x3e99999a;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x44) + 0x60) =
       *(undefined4 *)
        (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x14) + 0x60);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x44) + 100) =
       *(undefined4 *)
        (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x14) + 100);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x44) + 0x68) =
       *(undefined4 *)(param_1 + 0x6fc);
  FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x9c),param_1 + 0x690);
  iVar4 = 5;
  iVar3 = 0x14;
  iVar1 = param_1 + 0x14;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
    iVar4 = iVar4 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) =
         *(undefined4 *)(iVar1 + 0x6b8);
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar4 < 0xb);
  iVar4 = 0xb;
  iVar3 = 0x2c;
  iVar1 = param_1 + 0x2c;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
    iVar4 = iVar4 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) =
         *(undefined4 *)(iVar1 + 0x6b8);
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar4 < 0x11);
  iVar5 = 0x12;
  iVar4 = 0x48;
  iVar3 = param_1 + 0x48;
  iVar1 = param_1 + 0x90;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
         *(undefined4 *)(iVar3 + 0x6b8);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x60) =
         *(float *)(iVar1 + 0x6f0) + *(float *)(param_1 + 0x900);
    iVar5 = iVar5 + 1;
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
    iVar4 = iVar4 + 4;
    *(float *)(*piVar2 + 100) = *(float *)(iVar1 + 0x6f4) + *(float *)(param_1 + 0x904);
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 8;
  } while (iVar5 < 0x18);
  return;
}

