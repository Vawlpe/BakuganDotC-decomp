#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08985d54(int param_1,undefined param_2)

{
  int iVar1;
  
  memset_jak(param_1 + 0xefc,0,0xc);
  *(undefined *)(param_1 + 0xefc) = param_2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xcc);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  return;
}

