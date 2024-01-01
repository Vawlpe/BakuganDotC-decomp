#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e5f8c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x3a0) != 10) {
    *(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x3a0);
  }
  FUN_088df48c(param_1);
  *(undefined4 *)(param_1 + 0x3a0) = 10;
  FUN_088def24(0x3e4ccccd,param_1,0,1,0);
  iVar2 = param_1 + 0x1b0;
  *(undefined *)(*(int *)(param_1 + 0x350) + 0x40) = 0;
  if (*(int *)(param_1 + 0x3e0) != 0) {
    iVar2 = param_1 + 0x3f0;
  }
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x428) = 0;
    iVar1 = FUN_088249a8(DAT_08ac5c70,0x29,iVar2);
    if (iVar1 == 0) {
      iVar2 = FUN_088249a8(DAT_08ac5c70,0x2a,iVar2);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x428) = 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x428) = 1;
    }
    if (*(int *)(param_1 + 0x428) != 0) {
      FUN_088e5bec(param_1,0xffffffff,1,1);
    }
  }
  return;
}

