#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089f2b8c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = zz_sceGeEdramGetAddr();
  if ((((-1 < param_1) && (param_1 < 0x1e0)) && (-1 < param_2)) && (param_2 < 0x110)) {
    return *(uint *)((DAT_08ac5db0 ^ 1) * 0x88000 + iVar1 + (param_1 + param_2 * 0x200) * 4) >> 0x18
    ;
  }
  return 0;
}

