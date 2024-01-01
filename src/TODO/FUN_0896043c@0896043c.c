#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896043c(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x51be) + (param_2 & 0xff)) * 4);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x51a6) + (param_2 & 0xff)) * 4);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4fb4) * 4);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  return;
}

