#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dc708(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int local_10;
  int local_c;
  
  if ((param_2 & 0x80000000) != 0) {
    local_10 = *param_1;
    piVar2 = (int *)(undefined *)0x0;
    if (param_1[2] != 0) {
      piVar2 = &local_10;
    }
    local_c = param_1[2] - local_10;
    iVar1 = FUN_08a111b4(param_1[10],piVar2,&local_c,0xffff);
    *param_1 = *param_1 + iVar1;
    if (iVar1 == 0) {
      param_1[2] = 0;
    }
  }
  return;
}

