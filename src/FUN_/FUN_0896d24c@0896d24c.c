#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896d24c(int param_1,char param_2)

{
  char cVar1;
  
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x2b2c) = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + *(char *)(param_1 + 0x29be) * 4 +
                      (int)*(char *)(param_1 + *(char *)(param_1 + 0x77) + 0x74) + 0x29ec);
    if (cVar1 == -1) {
      *(undefined4 *)(param_1 + 0x2b2c) = 0;
    }
    else {
      FUN_0896d124(param_1,cVar1);
      *(undefined4 *)(param_1 + 0x2b2c) = 0x3f800000;
    }
  }
  *(undefined *)(param_1 + 0x2b64) = 1;
  return;
}

