#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0886b464(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x16c);
  *(int *)(param_1 + 0x65c) = *(int *)(param_1 + 0x65c) + 1;
  uVar2 = 0xffffffff;
  if ((uVar1 & 0x80) == 0) {
    if ((uVar1 & 0x100) == 0) {
      iVar3 = *(int *)(param_1 + 0x140);
      if (iVar3 < 9) {
        if (6 < iVar3) {
          if (iVar3 < 8) {
            uVar2 = 3;
            if ((uVar1 & 0x10000) != 0) {
              uVar2 = 4;
            }
          }
          else {
            uVar2 = (uint)((*(uint *)(param_1 + 0x144) & 0x80000) != 0);
          }
        }
      }
      else if (iVar3 < 10) {
        uVar2 = 5;
      }
      else if (iVar3 < 0xb) {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 7;
    }
  }
  else {
    uVar2 = 6;
  }
  if (-1 < (int)uVar2) {
    FUN_08854e78(*(undefined4 *)(param_1 + 0x170),uVar2,1);
  }
  return;
}

