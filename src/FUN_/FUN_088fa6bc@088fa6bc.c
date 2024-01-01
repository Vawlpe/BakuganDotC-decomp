#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fa6bc(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_088fa1d8();
  iVar2 = (int)**(short **)(param_1 + 0x30);
  iVar1 = *(int *)(DAT_08abfc50 + 0xc);
  if ((*(short *)(param_1 + 0x48) != iVar2) || (*(int *)(param_1 + 0x40) != iVar1)) {
    FUN_088fa50c(param_1,iVar2);
    FUN_088fa054(param_1,iVar2);
    *(int *)(param_1 + 0x40) = iVar1;
    *(undefined2 *)(param_1 + 0x48) = **(undefined2 **)(param_1 + 0x30);
  }
  return;
}

