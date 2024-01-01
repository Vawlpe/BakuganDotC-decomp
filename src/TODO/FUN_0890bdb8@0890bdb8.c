#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0890bdb8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(&DAT_08a9b2e8 + *(int *)(DAT_08ac58c4 + 4) * 4);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (7 < iVar2) {
    iVar2 = 7;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (1 < param_1) {
    param_1 = 1;
  }
  iVar2 = (&DAT_08a9b388)[iVar2 * 2 + param_1];
  if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
    iVar2 = -2;
  }
  if (iVar2 == -1) {
    uVar3 = vrndi_s();
    iVar1 = ((uVar3 >> 0x10) * 6 >> 0x10) + 0xb;
  }
  else {
    iVar1 = 0;
    if (iVar2 == -2) {
      do {
        iVar1 = FUN_089bed14(6);
        iVar1 = iVar1 + 0xb;
      } while (iVar1 == 0xe);
    }
    else if (iVar2 != -3) {
      iVar1 = iVar2 + 9;
    }
  }
  return iVar1;
}

