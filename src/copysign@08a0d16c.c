#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined8 copysign(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  return CONCAT44(param_2 & 0x7fffffff | param_4 & 0x80000000,param_1);
}

