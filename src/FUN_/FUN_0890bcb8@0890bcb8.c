#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0890bcb8(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(&DAT_08a9b208 + *(int *)(DAT_08ac58c4 + 4) * 4);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (7 < iVar1) {
    iVar1 = 7;
  }
  if (param_1 == 2) {
    uVar3 = vrndi_s();
    param_1 = (uVar3 >> 0x10) * 2 >> 0x10;
  }
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  else if (1 < (int)param_1) {
    param_1 = 1;
  }
  iVar2 = (&DAT_08a9b2a8)[iVar1 * 2 + param_1];
  iVar1 = 0;
  if (iVar2 == -1) {
    uVar3 = vrndi_s();
    return (((uVar3 >> 0x10) << 3) >> 0x10) + 1;
  }
  if (iVar2 != -2) {
    iVar1 = iVar2 + 1;
  }
  return iVar1;
}

