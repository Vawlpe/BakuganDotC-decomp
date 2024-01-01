#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08976488(int param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    FUN_089762c4(param_1,0);
    iVar1 = *(int *)(*(int *)(param_1 + 0x51c) + 0x14);
    (**(code **)(iVar1 + 0x34))
              (0x43fa0000,*(int *)(param_1 + 0x51c) + (int)*(short *)(iVar1 + 0x30));
    iVar1 = *(int *)(*(int *)(param_1 + 0x51c) + 0x14);
    (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x51c) + (int)*(short *)(iVar1 + 0x38));
  }
  else {
    FUN_089762c4(param_1,*(undefined *)(param_1 + 0x753));
    iVar1 = *(int *)(*(int *)(param_1 + 0x51c) + 0x14);
    (**(code **)(iVar1 + 0x34))
              (0x43fa0000,*(int *)(param_1 + 0x51c) + (int)*(short *)(iVar1 + 0x30));
    iVar1 = *(int *)(*(int *)(param_1 + 0x51c) + 0x14);
    (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x51c) + (int)*(short *)(iVar1 + 0x38));
  }
  return;
}

