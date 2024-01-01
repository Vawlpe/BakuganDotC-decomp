#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c6120(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  FUN_089bb728(*(undefined4 *)(param_1 + 0x8bd4));
  iVar1 = 0;
  iVar2 = param_1;
  do {
    if (*(int *)(iVar2 + 0x9fc) == param_2) {
      uVar4 = FUN_089c5fe8(param_1,iVar1);
      uVar3 = *(undefined4 *)(param_1 + 0x8bd4);
      goto LAB_089c6190;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x430;
  } while (iVar1 < 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x8bd4);
LAB_089c6190:
  FUN_089bb790(uVar3);
  return uVar4;
}

