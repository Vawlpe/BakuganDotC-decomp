#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a225c8(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  DAT_08af13b0 = 0xffffffff;
  iVar2 = -0x7fbafff6;
  if (param_1 - 1 < 0x20) {
    uVar4 = 0;
    DAT_08afdee4 = param_1;
    if (param_1 != 0) {
      puVar5 = &DAT_08afed1c;
      puVar3 = &DAT_08afdef8;
      do {
        puVar3[1] = 5;
        *(undefined4 *)(puVar3 + 0x18) = 0;
        *(undefined4 *)(puVar3 + 4) = 0;
        FUN_08a23550(puVar3);
        uVar1 = DAT_08afdee4;
        *puVar3 = (char)uVar4;
        uVar4 = uVar4 + 1;
        *puVar5 = puVar3;
        puVar3 = puVar3 + 0x68;
        puVar5 = puVar5 + 1;
      } while (uVar4 < uVar1);
    }
    DAT_08afdef0 = DAT_08afdee4;
    iVar2 = zz_sceKernelCreateLwMutex(&DAT_08afebfc,"SceLibsndpPrevExcl",0,0,0);
    if (-1 < iVar2) {
      DAT_08af13b0 = 0;
      iVar2 = 0;
      DAT_08afebf8 = 0;
    }
  }
  return iVar2;
}

