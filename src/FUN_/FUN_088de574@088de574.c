#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088de574(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar4 = (float)FUN_089df5dc();
  if (*(int *)(param_1 + 0x140) == 1) {
    uVar2 = *(uint *)(param_1 + 0x31c);
    bVar1 = false;
    if ((uVar2 & 1) == 0) {
      if (*(int *)(param_1 + 0x394) == 0x2e) {
        if ((DAT_08abf620 < fVar4) && (fVar4 < DAT_08abf624)) {
          bVar1 = true;
          *(uint *)(param_1 + 0x31c) = uVar2 ^ 1;
        }
      }
      else if ((0.4 < fVar4) && (fVar4 < 0.9)) {
        bVar1 = true;
        *(uint *)(param_1 + 0x31c) = uVar2 ^ 1;
      }
    }
    else if (0.9 < fVar4) {
      bVar1 = true;
      *(uint *)(param_1 + 0x31c) = uVar2 ^ 1;
    }
    if (bVar1) {
      uVar3 = 3;
      if ((*(uint *)(param_1 + 0x31c) & 1) != 0) {
        uVar3 = 2;
      }
      FUN_088de50c(param_1,uVar3);
    }
  }
  return;
}

