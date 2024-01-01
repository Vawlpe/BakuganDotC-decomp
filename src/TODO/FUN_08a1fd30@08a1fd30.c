#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a1fd30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = zz_sceKernelCreateLwMutex(&DAT_08afdaa0,"SceLibsndpSmfExcl",0,0,0);
  if (-1 < iVar1) {
    iVar1 = FUN_08a28ea0(param_2);
    if (iVar1 == 0) {
      FUN_08a218f8(param_2);
      iVar1 = FUN_08a225c8(param_1);
      if (iVar1 == 0) {
        puVar2 = &DAT_08afd89c;
        iVar1 = 0x7f;
        do {
          iVar1 = iVar1 + -1;
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        } while (-1 < iVar1);
        iVar1 = 0;
        do {
          iVar3 = iVar1 + 1;
          FUN_08a218e4(iVar1,0x7f);
          iVar1 = iVar3;
        } while (iVar3 < 0x20);
        DAT_08af13ac = 0;
        DAT_08afda9c = param_1;
        return 0;
      }
    }
    zz_sceKernelDeleteLwMutex(&DAT_08afdaa0);
    DAT_08af13ac = 0xffffffff;
  }
  return iVar1;
}

