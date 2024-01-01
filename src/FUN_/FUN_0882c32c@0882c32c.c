#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882c32c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x19c);
  iVar2 = 0;
  iVar1 = 0;
  *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
  do {
    iVar2 = iVar2 + 1;
    iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar1 + 0x39c);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 1);
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x474) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 3);
  return;
}

