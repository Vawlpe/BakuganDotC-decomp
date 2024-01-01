#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089879f8(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  memset_jak(param_1 + 0x8ec,0xff,0x15);
  memset_jak(param_1 + 0x901,0,0x15);
  uVar3 = 0;
  do {
    piVar1 = (int *)FUN_0880cc48();
    iVar4 = (int)(uVar3 + ((uint)((int)uVar3 >> 3) >> 0x1d)) >> 3;
    if ((int)uVar3 < 0) {
      uVar2 = -(-uVar3 & 7) & 0x1f;
    }
    else {
      uVar2 = uVar3 & 7;
    }
    if (((uint)*(byte *)(*piVar1 + iVar4 + 0x5fe) & 1 << uVar2) != 0) {
      *(char *)(param_1 + uVar3 + 0x8ec) = (char)uVar3;
      piVar1 = (int *)FUN_0880cc48();
      if ((int)uVar3 < 0) {
        uVar2 = -(-uVar3 & 7) & 0x1f;
      }
      else {
        uVar2 = uVar3 & 7;
      }
      if (((uint)*(byte *)(*piVar1 + iVar4 + 0x601) & 1 << uVar2) == 0) {
        *(undefined *)(param_1 + uVar3 + 0x901) = 1;
      }
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x15);
  return;
}

