#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a1ffbc(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint *local_40;
  int local_3c;
  int *local_38;
  
  uVar2 = 0;
  uVar5 = 0;
  if (((DAT_08af13ac != -1) && (param_1 < 0x80)) && (piVar3 = &DAT_08afd89c + param_1, *piVar3 != 0)
     ) {
    zz_sceKernelLockLwMutex(&DAT_08afdaa0,1,0);
    iVar1 = FUN_08a214d4(*(undefined4 *)*piVar3,param_3,&local_40);
    uVar2 = uVar5;
    if ((iVar1 == 0) && (uVar5 = 0, *local_40 != 0)) {
      do {
        local_38 = piVar3;
        uVar4 = uVar5 + 1;
        iVar1 = FUN_08a21434(*(undefined4 *)*local_38,local_40[uVar5 + 4],&local_3c);
        if ((-1 < iVar1) &&
           ((*(uint *)(local_3c + 0x10) <= param_4 && (param_4 <= *(uint *)(local_3c + 0x14))))) {
          uVar5 = FUN_08a20d08(param_1,local_40[uVar5 + 4],param_2,param_4,0,param_5,param_7,param_6
                              );
          if (-1 < (int)uVar5) {
            uVar2 = uVar2 | 1 << (uVar5 & 0x1f);
          }
        }
        uVar5 = uVar4;
        piVar3 = local_38;
      } while (uVar4 < *local_40);
    }
    zz_sceKernelUnlockLwMutex(&DAT_08afdaa0,1);
  }
  return uVar2;
}

