#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088598a8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  if ((-1 < param_2) && (param_2 < 9)) {
    param_2 = param_2 * 0x30;
    uVar1 = *(undefined4 *)(&DAT_08a67164 + param_2);
    uVar2 = *(undefined4 *)(&DAT_08a67168 + param_2);
    uVar3 = *(undefined4 *)(&DAT_08a6716c + param_2);
    *param_1 = *(undefined4 *)(&DAT_08a67160 + param_2);
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
  }
  return;
}

