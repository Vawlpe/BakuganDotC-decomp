#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08840904)
// WARNING: Removing unreachable block (ram,0x08840840)
// WARNING: Removing unreachable block (ram,0x088408b8)

void FUN_0884071c(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  iVar3 = 0;
  do {
    iVar1 = *(int *)(iVar1 + iVar3 + 0x174);
    pfVar2 = (float *)(iVar1 + 100);
    *pfVar2 = *pfVar2 - 2.0;
    if (*(float *)(iVar1 + 100) < -24.0) {
      *pfVar2 = *pfVar2 + 320.0;
      iVar1 = *(int *)(param_1 + 0x58);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x58);
    }
    iVar1 = *(int *)(iVar1 + iVar3 + 0x218);
    pfVar2 = (float *)(iVar1 + 100);
    *pfVar2 = *pfVar2 - 2.0;
    if (*(float *)(iVar1 + 100) < -24.0) {
      *pfVar2 = *pfVar2 + 320.0;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar1 = *(int *)(param_1 + 0x58);
  } while (iVar4 < 0x29);
  iVar1 = *(int *)(iVar1 + 0x154);
  pfVar2 = (float *)(iVar1 + 100);
  *pfVar2 = *pfVar2 - 2.5;
  if (*(float *)(iVar1 + 100) < -144.0) {
    uVar5 = vrndi_s();
    *pfVar2 = (float)((uVar5 >> 0x10) * 300 >> 0x10) + 432.0 + *pfVar2;
    uVar5 = vrndi_s();
    if ((uVar5 >> 0x10) * 2 >> 0x10 != 0) {
      uVar5 = vrndi_s();
      *(float *)(iVar1 + 0x60) = (float)(((uVar5 >> 0x10) * 0x1c >> 0x10) + 8);
      return;
    }
    uVar5 = vrndi_s();
    *(float *)(iVar1 + 0x60) = (float)(((uVar5 >> 0x10) * 0x1c >> 0x10) + 0x1a4);
  }
  return;
}

