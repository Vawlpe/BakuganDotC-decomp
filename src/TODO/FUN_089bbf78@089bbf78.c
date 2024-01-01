#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bbf78(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_089bbed0();
  if ((0 < iVar1) && (iVar1 = zz_sceKernelWakeupThread(), iVar1 == 0)) {
    uVar2 = 1;
    (&DAT_08ac4f94)[param_1 * 0x20] = 0;
  }
  return uVar2;
}

