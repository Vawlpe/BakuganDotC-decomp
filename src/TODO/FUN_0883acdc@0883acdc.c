#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0883acdc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_089b4c84(param_1 + 0x864,"VO_%d.at3",param_2);
  iVar1 = _DONE_NotZero_DAT_08AC61E8();
  if (iVar1 != 0) {
    uVar2 = FUN_089fce94();
    iVar1 = FUN_089fd350(uVar2,param_1 + 0x864);
    if ((iVar1 != 0) && (iVar1 = FUN_089c2b10(0), iVar1 != 0)) {
      uVar2 = FUN_089c2b48(0);
      iVar1 = FUN_089c32e0(uVar2);
      if (iVar1 == -1) {
        uVar2 = FUN_089c2b48(0);
        iVar3 = FUN_089c357c(uVar2,param_2,0,0);
      }
      else {
        FUN_089c879c(0,0);
      }
      if (iVar3 == 0) {
        FUN_089c8734(0,param_2,0,0);
      }
    }
  }
  return iVar3;
}

