#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088577e4(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 undefined4 *param_5,int *param_6,int *param_7,int *param_8)

{
  uint uVar1;
  
  *param_2 = 0x15;
  if (*(char *)(param_1 + 0xa39) != '\0') {
    param_1 = param_1 + param_4 * 4;
    *param_2 = *(undefined4 *)(param_1 + 0x9a0);
    *param_3 = *(undefined4 *)(param_1 + 0x9ac);
    *param_5 = *(undefined4 *)(param_1 + 0x9fc);
    *param_6 = (int)*(float *)(param_1 + 0xa08);
    *param_7 = (int)*(float *)(param_1 + 0xa14);
    *param_8 = (int)*(float *)(param_1 + 0xa20);
    return;
  }
  if (*(int *)(param_1 + 0xa30) != 0) {
    uVar1 = vrndi_s();
    param_1 = param_1 + ((uVar1 >> 0x10) * *(int *)(param_1 + 0xa30) >> 0x10) * 4;
    *param_2 = *(undefined4 *)(param_1 + 0x9a0);
    *param_3 = *(undefined4 *)(param_1 + 0x9ac);
    *param_5 = *(undefined4 *)(param_1 + 0x9fc);
    *param_6 = (int)*(float *)(param_1 + 0xa08);
    *param_7 = (int)*(float *)(param_1 + 0xa14);
    *param_8 = (int)*(float *)(param_1 + 0xa20);
  }
  return;
}

