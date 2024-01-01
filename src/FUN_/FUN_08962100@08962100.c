#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08962100(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x51de) + *(ushort *)(param_1 + 0x51e0) * param_2 +
                  param_3) * 4);
  *(float *)(iVar1 + 100) =
       *(float *)(*(int *)(*(int *)(param_1 + 0x1c) +
                          ((uint)*(ushort *)(param_1 + 0x51aa) +
                           *(ushort *)(param_1 + 0x51ac) * param_2 + param_3) * 4) + 100) +
       *(float *)(param_1 + param_2 * 0x10 + param_3 * 4 + 0x5118) * *(float *)(iVar1 + 0x94);
  return;
}

