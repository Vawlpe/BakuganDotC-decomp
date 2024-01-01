#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f1574(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar5 = local_30;
  if ((*(byte *)(param_1 + 0x273) & 1) != 0) {
    *(byte *)(param_1 + 0x273) = *(byte *)(param_1 + 0x273) & 0xfb;
  }
  local_30[0] = 4;
  local_30[1] = 0x10;
  local_30[2] = 0x11;
  local_30[3] = 0x12;
  local_20 = 0x13;
  local_1c = 0x14;
  iVar4 = 0;
  do {
    piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
    uVar2 = *puVar5;
    if ((int)uVar2 < 0) {
      uVar3 = -(-uVar2 & 7) & 0x1f;
    }
    else {
      uVar3 = uVar2 & 7;
    }
    if (((uint)*(byte *)(*piVar1 + ((int)(uVar2 + ((uint)((int)uVar2 >> 3) >> 0x1d)) >> 3) + 0x50e)
        & 1 << uVar3) == 0) break;
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar4 < 6);
  DAT_08b00dc4 = 3;
  if (iVar4 != 6) {
    DAT_08b00dc4 = 6;
  }
  return;
}

