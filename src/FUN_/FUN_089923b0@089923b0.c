#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089923b0(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0880cc48();
  return (*(ushort *)(*piVar1 + 0x6a6) & 4) != 0;
}

