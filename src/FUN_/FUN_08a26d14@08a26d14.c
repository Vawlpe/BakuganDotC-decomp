#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08a26d14(int *param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != (int *)0x0) && (0xf < param_2)) {
    bVar1 = *param_1 == 0x324d4954;
  }
  return bVar1;
}

