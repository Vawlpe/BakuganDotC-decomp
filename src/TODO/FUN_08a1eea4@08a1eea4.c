#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a1eea4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = zz_sceGeDrawSync(param_2);
    return uVar1;
  default:
    return 0;
  case 3:
    uVar1 = DAT_08afcf6c;
    break;
  case 4:
    uVar1 = DAT_08afcf70;
  }
  uVar1 = zz_sceGeListSync(uVar1);
  return uVar1;
}

