#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ac4a0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    fVar1 = 0.85;
    if (*(int *)(param_1 + 0x218) == 0x1b) {
      fVar1 = 0.6;
    }
    if (DAT_08aba77f == '\0') {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 700)) {
        iVar4 = 0;
        do {
          iVar3 = *(int *)(*(int *)(param_1 + 0x164) + iVar4);
          if (iVar3 != 0) {
            *(undefined4 *)(iVar3 + 0xbc) = 0;
          }
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < *(int *)(param_1 + 700));
      }
    }
    else {
      iVar2 = 0;
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 700)) {
        do {
          iVar3 = *(int *)(*(int *)(param_1 + 0x164) + iVar4);
          if (iVar3 == 0) {
            iVar3 = *(int *)(param_1 + 700);
          }
          else {
            *(float *)(iVar3 + 0xbc) = *(float *)(param_1 + 0x6c) * fVar1;
            iVar3 = *(int *)(param_1 + 700);
          }
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < iVar3);
      }
    }
  }
  return;
}

