#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e7b98(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_088be274();
  if ((*(int *)(iVar2 + 0x61c) == 5) || (bVar1 = false, *(int *)(iVar2 + 0x61c) == 0x1e)) {
    bVar1 = true;
  }
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_1 + 0x42c);
    FUN_088e5bec(param_1,0xffffffff,1,1);
    iVar2 = *(int *)(param_1 + 0x428);
    if (0 < iVar2) {
      if (iVar2 < 2) {
        FUN_088e5bec(param_1,0x29,1,1);
      }
      else if (iVar2 < 3) {
        FUN_088e5bec(param_1,0x2a,1,1);
      }
    }
  }
  FUN_088df5d8(param_1);
  return;
}

