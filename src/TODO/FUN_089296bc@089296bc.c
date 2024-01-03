#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089296bc(int param_1)

{
  int *piVar1;
  
  FUN_0890a598(param_1,0);
  piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
  *(ushort *)(*piVar1 + 0x82) =
       *(ushort *)(*piVar1 + 0x82) | (ushort)(1 << (*(byte *)(param_1 + 0x485) & 0x1f));
  return;
}

