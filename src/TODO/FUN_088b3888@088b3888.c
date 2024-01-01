#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088b3888(float param_1,float param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_088243d8(DAT_08abd5b0,100,param_3 + 0x30);
  FUN_08823804(iVar1);
  *(float *)(iVar1 + 0x1d0) = param_1 * 0.005;
  *(float *)(iVar1 + 0x1d4) = param_2 * 0.005;
  return iVar1;
}

