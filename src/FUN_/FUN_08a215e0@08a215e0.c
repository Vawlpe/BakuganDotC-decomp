#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a215e0(undefined *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (((param_1 != (undefined *)0x0) &&
      (CONCAT13(*param_1,CONCAT12(param_1[1],CONCAT11(param_1[2],param_1[3]))) == 0x50504844)) &&
     (param_2 != (undefined4 *)0x0)) {
    puVar1 = param_1 + *(int *)(param_1 + 0x14);
    uVar2 = 0xffffffff;
    if (*(int *)(param_1 + 0x14) != -1) {
      *param_2 = puVar1;
      uVar2 = 0;
      if (CONCAT13(*puVar1,CONCAT12(puVar1[1],CONCAT11(puVar1[2],puVar1[3]))) != 0x5050544e) {
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}

