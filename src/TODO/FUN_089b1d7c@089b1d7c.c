#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089b1d7c(ushort param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar2 = DONE_Get_DAT_08AAC9E0();
  uVar1 = FUN_0880d0ac(uVar2,0x30);
  return (uVar1 & param_1) != 0;
}

