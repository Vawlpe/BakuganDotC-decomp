#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0884cf94(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x538) != -1) {
    return *(int *)(param_1 + 0x538);
  }
  iVar1 = *(int *)(DAT_08ac58c4 + 4);
  if (iVar1 < 0x14) {
    return ((int)(iVar1 + ((uint)(iVar1 >> 2) >> 0x1e)) >> 2) + 0xb;
  }
  if (((iVar1 == 0x24) || (iVar1 == 0x26)) || (iVar2 = 0x10, iVar1 == 0x27)) {
    iVar2 = 0x14;
  }
  return iVar2;
}

