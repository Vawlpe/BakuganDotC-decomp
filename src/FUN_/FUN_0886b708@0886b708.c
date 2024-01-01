#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0886b708(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(*(int *)(param_1 + 0x5ac) + *(int *)(param_1 + 0x5b4) * 4);
  iVar1 = FUN_08870eb4(param_1);
  if (iVar1 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x648) = 10;
  FUN_08871dc8(param_1);
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x400000;
  if (puVar3 == (uint *)0x0) {
LAB_0886b780:
    iVar1 = *(int *)(param_1 + 0x5c8);
  }
  else {
    if ((*puVar3 & 2) != 0) {
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x8000000;
      goto LAB_0886b780;
    }
    iVar1 = *(int *)(param_1 + 0x5c8);
  }
  iVar2 = *(int *)(param_1 + 0x5bc);
  *(int *)(param_1 + 0x5c8) = iVar1 + 1;
  if (iVar2 < 1) {
    if ((-1 < iVar2) && (iVar1 = FUN_089df684(0x3f666666,param_1), iVar1 != 0)) {
      FUN_0886ab40(param_1,2);
    }
  }
  else {
    if (iVar2 < 3) {
      if (1 < iVar2) {
        if (*(int *)(param_1 + 0x5d0) < 1) {
          iVar1 = FUN_089df684(0x3f666666,param_1);
          if (iVar1 != 0) {
            *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffbfffff;
            iVar1 = FUN_0886ab40(param_1,3);
            if (iVar1 == 0) {
              *(undefined4 *)(param_1 + 0x140) = 2;
            }
            *(undefined4 *)(param_1 + 0x5bc) = 3;
          }
        }
        else if (*(char *)(param_1 + 0xb0) != '\0') {
          *(undefined *)(param_1 + 0xb0) = 0;
          *(int *)(param_1 + 0x5d0) = *(int *)(param_1 + 0x5d0) + -1;
        }
        goto LAB_0886b894;
      }
    }
    else if (3 < iVar2) goto LAB_0886b894;
    iVar1 = FUN_089df684(0x3f666666,param_1);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x140) = 2;
    }
  }
LAB_0886b894:
  FUN_0886ae70(param_1);
  return;
}

