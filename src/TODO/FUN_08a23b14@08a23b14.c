#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a23b14(uint param_1,int param_2,int param_3,int param_4,uint *param_5,uint *param_6)

{
  int iVar1;
  
  iVar1 = param_3 + param_4 + -0x40;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (0x7f < iVar1) {
    iVar1 = 0x7f;
  }
  if (iVar1 == 0) {
    *param_5 = param_1;
    *param_6 = 0;
  }
  else if (iVar1 < 0x40) {
    *param_5 = param_1;
    *param_6 = param_1 * iVar1 >> 6;
  }
  else {
    if (iVar1 < 0x41) {
      *param_5 = param_1;
    }
    else {
      *param_5 = param_1 * (0x7f - iVar1) >> 6;
    }
    *param_6 = param_1;
  }
  *param_5 = (*param_5 * param_2) / 0x7f;
  *param_6 = (*param_6 * param_2) / 0x7f;
  return;
}

