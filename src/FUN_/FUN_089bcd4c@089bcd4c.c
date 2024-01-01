#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089bcd4c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_08ac51fc != 0) {
    if ((DAT_08ac51fc <= param_2) && (param_2 < DAT_08ac51fc + 0x400000)) {
      iVar3 = 1;
    }
    if (iVar3 == 0) {
      memcpy_jak(param_2,param_3,param_4);
      zz_sceKernelDcacheWritebackInvalidateRange(param_2,param_4);
      iVar3 = 1;
    }
    else {
      if (param_5 != 0) {
        FUN_089bb790(param_5);
      }
      FUN_089bb728(*(undefined4 *)(DAT_08ac51f8 + 4));
      if (((*(char *)(param_1 + 5) != '\0') &&
          (piVar2 = *(int **)(DAT_08ac51f8 + 8), piVar2 != (int *)0x0)) &&
         ((iVar1 = (**(code **)(*piVar2 + 0x1c))
                             ((int)piVar2 + (int)*(short *)(*piVar2 + 0x18),param_2), iVar1 != 0 ||
          (iVar1 = **(int **)(DAT_08ac51f8 + 8),
          iVar1 = (**(code **)(iVar1 + 0x1c))
                            ((int)*(int **)(DAT_08ac51f8 + 8) + (int)*(short *)(iVar1 + 0x18),
                             param_3), iVar1 != 0)))) {
        memcpy_jak(param_2,param_3,param_4);
        zz_sceKernelDcacheWritebackInvalidateRange(param_2,param_4);
        iVar3 = 1;
      }
      FUN_089bb790(*(undefined4 *)(DAT_08ac51f8 + 4));
      if (param_5 != 0) {
        FUN_089bb728(param_5);
      }
    }
  }
  return iVar3;
}

