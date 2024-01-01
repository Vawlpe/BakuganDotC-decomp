#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ede00(int param_1,uint param_2,undefined param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + (param_2 & 0xff) * 100 + 0x30);
  if (iVar1 != 0) {
    FUN_088ea7f4(iVar1,(int)*(short *)(param_1 + 0x262),(*(byte *)(param_1 + 0x273) & 8) == 0,
                 param_3);
  }
  return;
}

