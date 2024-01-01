#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f50bc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0x14);
    iVar1 = *(int *)(iVar4 + 4);
    while (iVar3 = iVar1, (**(code **)(iVar2 + 0x14))(iVar4 + *(short *)(iVar2 + 0x10)), iVar3 != 0)
    {
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar4 = iVar3;
      iVar1 = *(int *)(iVar3 + 4);
    }
  }
  return;
}

