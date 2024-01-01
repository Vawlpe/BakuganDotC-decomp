#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a234f8(int param_1,uint *param_2,uint *param_3,uint *param_4,int *param_5,uint *param_6,
                 int *param_7,undefined4 *param_8)

{
  int iVar1;
  
  iVar1 = param_1 * 0x68;
  *param_2 = (uint)(byte)(&DAT_08afdf48)[iVar1];
  *param_3 = (uint)(byte)(&DAT_08afdf47)[iVar1];
  *param_4 = (uint)(byte)(&DAT_08afdf55)[iVar1];
  *param_5 = (int)(char)(&DAT_08afdf44)[iVar1];
  *param_6 = (uint)(byte)(&DAT_08afdf45)[iVar1];
  *param_7 = (int)(char)(&DAT_08afdf46)[iVar1];
  *param_8 = (&DAT_08afdf24)[param_1 * 0x1a];
  return;
}

