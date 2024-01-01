#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089624c8(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x51fa) +
                   (uint)*(ushort *)(param_1 + 0x51fc) * (param_2 & 0xff) + (param_3 & 0xff)) * 4);
  *(float *)(iVar1 + 100) =
       *(float *)(*(int *)(*(int *)(param_1 + 0x1c) +
                          ((uint)*(ushort *)(param_1 + 0x51aa) +
                           (uint)*(ushort *)(param_1 + 0x51ac) * (param_2 & 0xff) + (param_3 & 0xff)
                          ) * 4) + 100) - *(float *)(param_1 + 0x515c) * *(float *)(iVar1 + 0x94);
  return;
}

