#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088e6078(int param_1,undefined (*param_2) [12])

{
  undefined auVar1 [12];
  undefined4 uVar2;
  
  auVar1 = vsub_t(*param_2,*(undefined (*) [12])(param_1 + 0x20));
  uVar2 = vdot_t(auVar1,auVar1);
  return uVar2;
}

