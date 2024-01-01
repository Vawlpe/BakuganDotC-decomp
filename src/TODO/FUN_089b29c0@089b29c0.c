#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b29c0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte local_1f [3];
  
  local_1f[0] = 0x18;
  local_1f[1] = 0xff;
  uVar5 = 0x14;
  iVar4 = 0;
  do {
    piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
    uVar6 = (int)uVar5 >> 2;
    iVar3 = *piVar1 + ((int)uVar5 >> 5);
    if ((int)uVar6 < 0) {
      uVar2 = -(-uVar6 & 7) & 0x1f;
    }
    else {
      uVar2 = uVar6 & 7;
    }
    *(byte *)(iVar3 + 0x8f) = *(byte *)(iVar3 + 0x8f) | (byte)(1 << uVar2);
    piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
    if ((int)uVar5 < 0) {
      uVar5 = -(-uVar5 & 3) & 0xff;
    }
    else {
      uVar5 = uVar5 & 3;
    }
    uVar5 = uVar6 * 4 + uVar5;
    iVar3 = *piVar1 + ((int)uVar5 >> 3);
    if ((int)uVar5 < 0) {
      uVar5 = -(-uVar5 & 7) & 0x1f;
    }
    else {
      uVar5 = uVar5 & 7;
    }
    *(byte *)(iVar3 + 0x91) = *(byte *)(iVar3 + 0x91) | (byte)(1 << uVar5);
    uVar5 = (uint)local_1f[iVar4];
    iVar4 = iVar4 + 1;
  } while (uVar5 != 0xff);
  FUN_089b2388();
  return;
}

