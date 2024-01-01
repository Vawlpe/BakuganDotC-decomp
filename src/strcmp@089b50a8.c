#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int strcmp(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  do {
    if (bVar1 == 0) {
      bVar1 = *param_1;
LAB_089b50d0:
      return (uint)bVar1 - (uint)*param_2;
    }
    if (bVar1 != *param_2) {
      bVar1 = *param_1;
      goto LAB_089b50d0;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    bVar1 = *param_1;
  } while( true );
}

