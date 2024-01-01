#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088edb1c(int param_1,uint param_2,short param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30) + (param_2 & 0xff) * 100;
  *(short *)(iVar1 + 0x54) =
       *(short *)(iVar1 + 0x4e) + (short)(int)((float)(int)param_3 * 65536.0 * 0.002777778);
  return;
}

