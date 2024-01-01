#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892b3bc(int param_1)

{
  undefined uVar1;
  int *piVar2;
  
  piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
  uVar1 = FUN_0892adcc(param_1,0,*(uint *)(*piVar2 + 0x48c) & 0xff);
  *(undefined *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x1cf4) = 0;
  *(undefined *)(param_1 + 0x75) = *(undefined *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x1cf8) = 0;
  *(undefined4 *)(param_1 + 0x1cfc) = 0;
  piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
  *(char *)(param_1 + 0x1b7e) = (char)*(undefined4 *)(*piVar2 + 0x48c);
  FUN_0892b17c(param_1);
  memset_jak((undefined *)(param_1 + 0x1c94),0,0x24);
  memset_jak((undefined *)(param_1 + 0x1cb8),0,4);
  memset_jak((undefined *)(param_1 + 0x1cbc),0,4);
  return;
}

