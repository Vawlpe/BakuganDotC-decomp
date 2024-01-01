#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898961c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 in_V7C;
  
  FUN_089a5278();
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  FUN_089a535c(param_1 + 0x164);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18));
  FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0xbc) = 0x3f800000;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
  *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xc0) = 0x3e99999a;
  *(undefined4 *)(iVar1 + 0xc4) = 0x3e99999a;
  *(undefined4 *)(iVar1 + 200) = 0x3e99999a;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x68) =
       *(undefined4 *)(param_1 + 0x834);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x60) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x8e0) * 4) + 0x60);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 100) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x8e0) * 4) + 100);
  FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc0),param_1 + 0x7f4);
  iVar4 = 0;
  iVar3 = 0;
  iVar1 = param_1;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) =
         *(undefined4 *)(iVar1 + 0x81c);
    if (iVar4 == *(char *)(param_1 + 0x8e0)) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(undefined4 *)(iVar2 + 0xc0) = 0x3e99999a;
      *(undefined4 *)(iVar2 + 0xc4) = 0x3e99999a;
      *(undefined4 *)(iVar2 + 200) = 0x3e99999a;
      *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
      FUN_08988620(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),1);
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(undefined4 *)(iVar2 + 0xc0) = 0;
      *(undefined4 *)(iVar2 + 0xc4) = 0;
      *(undefined4 *)(iVar2 + 200) = 0;
      *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
      FUN_08988620(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),0);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar4 < 6);
  iVar3 = 0x1f;
  iVar1 = 0x7c;
  iVar4 = param_1 + 0x7c;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
    iVar3 = iVar3 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) =
         *(undefined4 *)(iVar4 + 0x81c);
    iVar1 = iVar1 + 4;
    iVar4 = iVar4 + 4;
  } while (iVar3 < 0x25);
  iVar4 = 0;
  iVar3 = 0;
  iVar1 = param_1;
  do {
    if (*(char *)(iVar4 + *(char *)(param_1 + 0x8e1) * 6 + param_1 + 0x8ec) != -1) {
      uVar5 = vmul_s(*(float *)(param_1 + 0x91c) * 3.141593,in_V7C);
      fVar6 = (float)vcos_s(uVar5);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 0x34) + 100) =
           *(float *)(iVar1 + 0x928) - (1.0 - fVar6) * 0.5 * 4.0;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 8;
  } while (iVar4 < 6);
  return;
}

