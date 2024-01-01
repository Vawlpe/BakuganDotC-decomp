#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08910f64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0880d354();
  iVar3 = *(int *)(param_1 + 0x78) * 4;
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(&DAT_08a9b754 + *(int *)(param_1 + 0x150) * 0x1c + iVar3);
  }
  else {
    uVar2 = *(undefined4 *)(&DAT_08a9b888 + iVar3);
  }
  return uVar2;
}

