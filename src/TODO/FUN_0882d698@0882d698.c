#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882d698(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_088664fc(param_2);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x1d8);
  if (iVar1 == 0) {
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
  }
  else {
    if ((*(uint *)(iVar2 + 0xd0) & 1) == 0) {
      if (*(int *)(param_2 + 0x170) == 0) {
        uVar3 = *(uint *)(iVar2 + 0xd0);
      }
      else {
        FUN_08854e78(*(int *)(param_2 + 0x170),0x15,1);
        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x1d8);
        uVar3 = *(uint *)(iVar2 + 0xd0);
      }
    }
    else {
      uVar3 = *(uint *)(iVar2 + 0xd0);
    }
    *(uint *)(iVar2 + 0xd0) = uVar3 | 1;
  }
  return;
}

