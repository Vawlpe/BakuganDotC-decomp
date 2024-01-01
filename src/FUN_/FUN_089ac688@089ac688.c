#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ac688(int param_1,undefined param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x68),param_1 + 0x488,3
              );
  return;
}

