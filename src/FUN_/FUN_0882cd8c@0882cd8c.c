#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882cd8c(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_2 == '\0') {
    iVar1 = FUN_0882cd68(param_1);
    if (iVar1 == 0) {
      FUN_0882c2cc(0xe,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xbe8) = 100;
    }
  }
  else {
    iVar1 = strlen(param_4);
    if (0x3f < iVar1) {
      FUN_0882c2cc(0xe,0);
      return;
    }
    FUN_0882c2cc(0xe,1);
    *(undefined4 *)(param_1 + 0xbec) = param_5;
    *(float *)(param_1 + 0xbfc) = 240.0 - (float)iVar1 * 3.5;
    FUN_089ead80(param_1 + 0xba8,param_4);
    *(undefined4 *)(param_1 + 0xbe8) = 1;
    *(undefined4 *)(param_1 + 0xbf4) = param_3;
  }
  return;
}

