#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ec01c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((DAT_08ac5d90 != 0) && (iVar2 = *param_1, iVar2 != 0)) {
    (**(code **)(*(int *)(iVar2 + 0x74) + 0x1c))
              (param_1[4],iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 0x18));
    uVar1 = FUN_089f2178((float)param_1[4] + 0.5);
    FUN_089ed3b4(param_1[0x1f],uVar1);
  }
  return;
}

