#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08823df8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  DAT_08ab9e4c = 0;
  DAT_08ab9e10 = DAT_08ab9e10 + 1;
  FUN_08823838();
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0x1fc);
    iVar1 = *(int *)(iVar4 + 4);
    while( true ) {
      iVar3 = iVar1;
      if (iVar2 == DAT_08abd4a0) {
        (**(code **)(*(int *)(iVar4 + 0x14) + 0x14))
                  (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x10));
      }
      if (iVar3 == 0) break;
      iVar2 = *(int *)(iVar3 + 0x1fc);
      iVar1 = *(int *)(iVar3 + 4);
      iVar4 = iVar3;
    }
  }
  return;
}

