#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cd960(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  FUN_089bb728(param_1[1]);
  if ((-1 < param_2) && (param_2 < 8)) {
    iVar2 = DAT_08ac5924 + param_2 * 8;
    if (*(int *)(iVar2 + 4) == 0) {
      *(undefined4 *)(iVar2 + 4) = 1;
      iVar2 = FUN_089bbed0(1);
      if ((0 < iVar2) && (iVar2 = zz_sceKernelWakeupThread(iVar2), iVar2 == 0)) {
        uVar1 = 1;
        *param_1 = *param_1 + 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  FUN_089bb790(param_1[1]);
  return uVar1;
}

