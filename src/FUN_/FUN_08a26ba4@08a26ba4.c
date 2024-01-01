#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_08a26ba4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int local_30 [4];
  
  if ((((param_1 != 0) && (param_5 != 0)) && (iVar1 = FUN_08a26070(param_2,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_08a267fc(param_2,param_3,param_4), iVar1 != 0)) {
    local_30[0] = param_5;
    FUN_08a26988(local_30,iVar1);
    return 1;
  }
  return 0;
}

