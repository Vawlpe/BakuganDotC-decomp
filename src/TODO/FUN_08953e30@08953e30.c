#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08953e30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1 + 0x2c;
  *(undefined4 *)(param_1 + 0xa40) = 0;
  iVar3 = 0xb;
  iVar2 = 0x2c;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    iVar3 = iVar3 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) =
         *(undefined4 *)(iVar1 + 0x578);
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar3 < 0x11);
  iVar3 = 0x11;
  iVar2 = 0x44;
  iVar1 = param_1 + 0x44;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    iVar3 = iVar3 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) =
         *(undefined4 *)(iVar1 + 0x578);
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar3 < 0x14);
  FUN_089a535c(param_1 + 0x3c0);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x54) + 0x128) = 2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x54);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x54));
  FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x54));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x54) + 0xbc) = 0x3f800000;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x54);
  *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xc0) = 0x3e99999a;
  *(undefined4 *)(iVar1 + 0xc4) = 0x3e99999a;
  *(undefined4 *)(iVar1 + 200) = 0x3e99999a;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x54) + 0x60) =
       *(undefined4 *)
        (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xa44) * 4 + 0x44) + 0x60);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x54) + 100) =
       *(undefined4 *)
        (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xa44) * 4 + 0x44) + 100);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x54) + 0x68) =
       *(undefined4 *)(param_1 + 0x5cc);
  FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x54),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x70),param_1 + 0x4d8);
  return;
}

