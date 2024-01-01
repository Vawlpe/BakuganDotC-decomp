#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cda14(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  FUN_089bb728(*(undefined4 *)(param_1 + 4));
  if ((-1 < param_2) && (param_2 < 8)) {
    iVar3 = DAT_08ac5924 + param_2 * 8;
    iVar1 = *(int *)(iVar3 + 4);
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        uVar2 = 1;
      }
    }
    else if (iVar1 == 3) {
      *(undefined4 *)(iVar3 + 4) = 4;
      iVar1 = FUN_089bbed0(1);
      if ((0 < iVar1) && (iVar1 = zz_sceKernelWakeupThread(iVar1), iVar1 == 0)) {
        uVar2 = 1;
      }
    }
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 4));
  return uVar2;
}

