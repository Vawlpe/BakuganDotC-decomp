#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08971e64(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 0x35;
    iVar3 = 0xd4;
    do {
      iVar4 = iVar4 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x39);
    iVar4 = 0x19;
    iVar3 = 100;
    do {
      iVar4 = iVar4 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x1a);
    FUN_08971e30(param_1);
  }
  else {
    iVar4 = 0x35;
    iVar3 = 0xd4;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (iVar4 < 0x36) {
        if (iVar4 < 0x35) {
          uVar2 = *(uint *)(iVar1 + 0xd0);
        }
        else {
          FUN_089a56a0(iVar1,2);
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
LAB_08971f08:
          uVar2 = *(uint *)(iVar1 + 0xd0);
        }
      }
      else {
        if (iVar4 < 0x37) {
          FUN_089a56a0(iVar1,1);
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
          goto LAB_08971f08;
        }
        uVar2 = *(uint *)(iVar1 + 0xd0);
      }
      *(uint *)(iVar1 + 0xd0) = uVar2 | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0xbc) = 0x3f800000;
      iVar1 = FUN_0880d354();
      if ((iVar1 != 0) && (iVar1 = FUN_0880d36c(), iVar1 == 1)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x39);
    iVar4 = 0x19;
    iVar3 = 100;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0xbc) = 0x3f800000;
      FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
      iVar1 = FUN_0880d354();
      if ((iVar1 != 0) && (iVar1 = FUN_0880d36c(), iVar1 == 1)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
        FUN_08971d1c(*(undefined4 *)(iVar1 + 0x60),*(float *)(iVar1 + 100) - 6.0,param_1,5);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x1a);
  }
  return;
}

