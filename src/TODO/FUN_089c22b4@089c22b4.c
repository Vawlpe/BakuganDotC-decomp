#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089c22b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = 0;
  iVar3 = *(int *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0x24) == '\0') {
    iVar5 = 0;
    if (0 < iVar3) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0x28) + iVar4);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x2c);
        }
        else if (*(int *)(iVar3 + 4) < 0) {
          iVar3 = *(int *)(param_1 + 0x2c);
        }
        else {
          *(undefined *)(iVar3 + 0x31) = 1;
          iVar1 = 1;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + iVar4) + 8) = 0;
          *(undefined *)(*(int *)(*(int *)(param_1 + 0x28) + iVar4) + 0x32) = 1;
          iVar3 = *(int *)(param_1 + 0x2c);
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar5 < iVar3);
    }
    iVar5 = 0;
    if ((iVar1 == 0) && (0 < iVar3)) {
      iVar3 = 0;
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0x28) + iVar3);
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 0x2c);
        }
        else {
          *(undefined4 *)(iVar4 + 0x34) = 0;
          *(undefined *)(*(int *)(*(int *)(param_1 + 0x28) + iVar3) + 0x32) = 1;
          iVar1 = 1;
          *(undefined *)(*(int *)(*(int *)(param_1 + 0x28) + iVar3) + 0x31) = 1;
          *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar3) = 0;
          iVar4 = *(int *)(param_1 + 0x2c);
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar5 < iVar4);
    }
  }
  else {
    iVar5 = 0;
    iVar1 = 1;
    if (0 < iVar3) {
      iVar1 = 0;
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0x28) + iVar1);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x2c);
        }
        else if (*(int *)(iVar3 + 4) < 0) {
          if (*(int *)(iVar3 + 0x34) == 0) {
            if (*(char *)(iVar3 + 0x32) == '\0') {
              uVar2 = DONE_Get_DAT_08AC5258();
              iVar3 = FUN_089c0444(uVar2,*(undefined4 *)(*(int *)(param_1 + 0x28) + iVar1));
              if (iVar3 == 0) {
                iVar3 = *(int *)(param_1 + 0x2c);
              }
              else {
                *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar1) = 0;
                iVar3 = *(int *)(param_1 + 0x2c);
              }
            }
            else {
              iVar3 = *(int *)(param_1 + 0x2c);
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0x2c);
          }
        }
        else {
          iVar3 = *(int *)(param_1 + 0x2c);
        }
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar5 < iVar3);
      iVar1 = 1;
    }
  }
  return iVar1;
}

