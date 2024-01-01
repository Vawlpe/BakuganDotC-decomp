#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896d610(int param_1,char param_2)

{
  char cVar1;
  
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x2b30) = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + *(char *)(param_1 + 0x29be) * 4 +
                      (int)*(char *)(param_1 + *(char *)(param_1 + 0x77) + 0x74) + 0x29ec);
    if (cVar1 == -1) {
      *(undefined4 *)(param_1 + 0x2b30) = 0;
    }
    else {
      FUN_0896d3f0(param_1,cVar1);
      *(undefined4 *)(param_1 + 0x2b30) = 0x3f800000;
    }
  }
  *(undefined *)(param_1 + 0x2b65) = 1;
  return;
}

