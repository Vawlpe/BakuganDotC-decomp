#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089e01dc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x130);
  iVar1 = FUN_08a15998(iVar2);
  return *(undefined4 *)
          (*(int *)(*(int *)(iVar2 + 0x10) + (*(uint *)(*(int *)(iVar1 + 8) + 0x24) & 0x3ff) * 0x10
                   + 4) + 8);
}

