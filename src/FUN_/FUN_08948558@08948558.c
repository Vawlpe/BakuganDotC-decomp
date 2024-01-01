#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08948558(int param_1)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  local_40 = 0x42900000;
  local_3c = 0x42be0000;
  local_38 = 0x43a40000;
  local_34 = 0x42e60000;
  FUN_089f4060(param_1,&local_40);
  FUN_089f4924(0x43a40000,0x42e60000,param_1);
  *(undefined4 *)(param_1 + 0x60) = 0x42900000;
  *(undefined4 *)(param_1 + 100) = 0x42be0000;
  return param_1;
}

