#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08a27f68(short *param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != (short *)0x0) && (0x35 < param_2)) {
    bVar1 = *param_1 == 0x4d42;
  }
  return bVar1;
}

