#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08999400(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_0880d354();
  if ((iVar2 == 0) || (iVar2 = FUN_0880d36c(), iVar2 != 1)) {
    if (param_2 == '\0') {
      iVar6 = 0x22;
      iVar2 = 0x88;
      do {
        iVar6 = iVar6 + 1;
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        iVar2 = iVar2 + 4;
      } while (iVar6 < 0x2a);
      iVar2 = 0x5b;
      iVar6 = 0x16c;
      do {
        iVar2 = iVar2 + 1;
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        iVar6 = iVar6 + 4;
      } while (iVar2 < 0x5d);
    }
    else {
      iVar6 = 0x22;
      iVar2 = 0x88;
      do {
        if (iVar6 < 0x25) {
          if (0x22 < iVar6) {
            uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2);
            if (iVar6 < 0x24) {
              FUN_089a56a0(uVar4,2);
            }
            else {
              FUN_089a56a0(uVar4,1);
            }
          }
        }
        else if (iVar6 < 0x26) {
          FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2),3);
        }
        else if (iVar6 < 0x27) {
          FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2),0);
        }
        iVar3 = FUN_08996448(param_1);
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
        if ((iVar3 == 1) && (iVar6 == 0x26)) {
          *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
        }
        else if (iVar6 == 0x26) {
          *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
        }
        else {
          *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
        }
        if (iVar6 < 0x26) {
          if (0x24 < iVar6) {
            cVar1 = *(char *)(param_1 + 0x10bb);
LAB_08999628:
            if (cVar1 == '\0') {
              *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
              iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
            }
            else {
              *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
              iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
            }
          }
        }
        else if (iVar6 == 0x29) {
          cVar1 = *(char *)(param_1 + 0x10bb);
          goto LAB_08999628;
        }
        if (iVar6 != 0x26) {
          *(undefined4 *)(iVar3 + 0x128) = 4;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
        }
        iVar6 = iVar6 + 1;
        *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
        iVar2 = iVar2 + 4;
      } while (iVar6 < 0x2a);
      iVar6 = 0x5b;
      iVar2 = 0x16c;
      do {
        iVar3 = FUN_08996448(param_1);
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
        if (iVar3 == 1) {
          *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
        }
        else {
          *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
        }
        iVar6 = iVar6 + 1;
        *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
        iVar2 = iVar2 + 4;
      } while (iVar6 < 0x5d);
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
    if (param_2 == '\0') {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      FUN_089a5c30();
    }
    else {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x88) + 0xbc) = 0x3f800000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
      FUN_089a5b10(*(undefined4 *)(iVar2 + 0x60),*(float *)(iVar2 + 100) - 6.0,5);
    }
  }
  return;
}

