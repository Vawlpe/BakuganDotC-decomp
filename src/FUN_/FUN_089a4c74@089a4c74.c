#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a4c74(byte *param_1,uint param_2,uint param_3,byte param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte local_10 [16];
  
  pbVar6 = local_10;
  param_3 = param_3 & 0xff;
  uVar4 = 1;
  uVar3 = 1;
  if (1 < param_3) {
    iVar5 = 8;
    do {
      uVar4 = uVar4 * 2 + iVar5;
      uVar3 = uVar3 + 1;
      iVar5 = uVar4 * 8;
    } while (uVar3 < param_3);
  }
  iVar5 = 0;
  for (; uVar4 != 1; uVar4 = uVar4 / 10) {
    *pbVar6 = (byte)(param_2 / uVar4);
    bVar1 = *pbVar6;
    pbVar6 = local_10 + iVar5 + 1;
    param_2 = param_2 - bVar1 * uVar4;
    iVar5 = iVar5 + 1;
  }
  *pbVar6 = (byte)param_2;
  uVar4 = 0;
  pbVar6 = param_1;
  if (param_3 != 0) {
    do {
      pbVar2 = local_10 + uVar4;
      uVar4 = uVar4 + 1;
      *pbVar6 = *pbVar2;
      pbVar6 = param_1 + uVar4;
    } while (uVar4 < param_3);
  }
  *pbVar6 = param_4;
  return;
}

