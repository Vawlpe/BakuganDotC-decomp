#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089739a4(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x520) != '\0') && (iVar1 = *(int *)(param_1 + 0x51c), iVar1 != 0)) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x34))
              (0x3f000000,iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x30));
    iVar1 = *(int *)(*(int *)(param_1 + 0x51c) + 0x14);
    (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x51c) + (int)*(short *)(iVar1 + 0x38));
  }
  return;
}

