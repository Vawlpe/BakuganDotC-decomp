#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a1e368(void)

{
  int iVar1;
  undefined *local_30;
  undefined4 *local_2c;
  undefined *local_28;
  undefined4 *local_24;
  
  iVar1 = -0x7fffffe0;
  if (DAT_08afcf54 == 0) {
    DAT_08afcf68 = zz_sceGeEdramGetAddr();
    FUN_08a1f924();
    iVar1 = zz_sceKernelCreateEventFlag("SceGuSignal",0x200,1,0);
    if (-1 < iVar1) {
      local_28 = &LAB_08a1f8f0;
      local_30 = &LAB_08a1f870;
      local_2c = &DAT_08afcf24;
      local_24 = &DAT_08afcf24;
      DAT_08afcf50 = iVar1;
      iVar1 = zz_sceGeSetCallback(&local_30);
      if (iVar1 < 0) {
        zz_sceKernelDeleteEventFlag(DAT_08afcf50,0,0xffffffff,0);
      }
      else {
        DAT_08afcf74 = iVar1;
        iVar1 = zz_sceGeListEnQueue(&DAT_08aa58a0);
        if (-1 < iVar1) {
          DAT_08afcf6c = iVar1;
          zz_sceGeListSync(iVar1);
          zz_sceGeDrawSync(0);
          DAT_08afcf54 = 1;
          return 0;
        }
        zz_sceKernelDeleteEventFlag(DAT_08afcf50,0);
        zz_sceGeUnsetCallback(DAT_08afcf74);
        DAT_08afcf74 = 0xffffffff;
      }
      DAT_08afcf50 = 0xffffffff;
    }
  }
  return iVar1;
}

