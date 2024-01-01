#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fa1ac(int param_1,int param_2)

{
  uint uVar1;
  int local_20;
  int local_1c;
  
  if (param_2 < -0x7ffeffec) {
    if (-0x7ffeffee < param_2) {
      uVar1 = zz_sceIoDevctl("fatms0:",0x2425823,0,0,&local_1c,4);
      if (-1 < (int)uVar1) {
        uVar1 = (uint)(local_1c == 1);
      }
      if ((int)uVar1 < 1) {
        param_2 = 2;
      }
    }
  }
  else if (param_2 == -0x7ffdfcdf) {
    uVar1 = zz_sceIoDevctl("fatms0:",0x2425823,0,0,&local_20,4);
    if (-1 < (int)uVar1) {
      uVar1 = (uint)(local_20 == 1);
    }
    if ((int)uVar1 < 1) {
      param_2 = 1;
    }
  }
  *(int *)(param_1 + 0xf8) = param_2;
  return;
}

