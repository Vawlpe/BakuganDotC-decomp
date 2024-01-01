#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d4808(undefined4 param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  *param_2 = (byte)((int)(*(byte *)(param_3 + 1) & 0xf8) >> 3);
  param_2[1] = (byte)((*(byte *)(param_3 + 1) & 7) << 2) |
               (byte)((int)(*(byte *)(param_3 + 2) & 0xc0) >> 6);
  param_2[2] = (byte)((int)(*(byte *)(param_3 + 2) & 0x3e) >> 1);
  param_2[3] = (byte)((*(byte *)(param_3 + 2) & 1) << 4) |
               (byte)((int)(*(byte *)(param_3 + 3) & 0xf0) >> 4);
  param_2[4] = (byte)((*(byte *)(param_3 + 3) & 0xf) << 1) |
               (byte)((int)(*(byte *)(param_3 + 4) & 0x80) >> 7);
  param_2[5] = (byte)((int)(*(byte *)(param_3 + 4) & 0x7c) >> 3);
  param_2[6] = (byte)((*(byte *)(param_3 + 4) & 3) << 3) |
               (byte)((int)(*(byte *)(param_3 + 5) & 0xe0) >> 5);
  iVar2 = 0;
  param_2[7] = *(byte *)(param_3 + 5) & 0x1f;
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    if (bVar1 < 0x1a) {
      *pbVar3 = bVar1 + 0x41;
    }
    else {
      *pbVar3 = bVar1 - 0x1a;
      *pbVar3 = *pbVar3 + 0x30;
    }
    iVar2 = iVar2 + 1;
    pbVar3 = param_2 + iVar2;
  } while (iVar2 < 8);
  return;
}

