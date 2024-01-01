#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a4b5c(byte *param_1,uint param_2,uint param_3,byte param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte local_10;
  byte local_f [15];
  
  pbVar5 = &local_10;
  pbVar8 = &local_10;
  uVar3 = 1;
  param_3 = param_3 & 0xff;
  uVar6 = 1;
  uVar7 = 0;
  if (1 < param_3) {
    iVar4 = 8;
    do {
      uVar3 = uVar3 * 2 + iVar4;
      uVar6 = uVar6 + 1;
      iVar4 = uVar3 * 8;
    } while (uVar6 < param_3);
  }
  iVar4 = 0;
  for (; uVar3 != 1; uVar3 = uVar3 / 10) {
    *pbVar5 = (byte)(param_2 / uVar3);
    bVar1 = *pbVar5;
    pbVar5 = local_f + iVar4;
    param_2 = param_2 - bVar1 * uVar3;
    iVar4 = iVar4 + 1;
  }
  *pbVar5 = (byte)param_2;
  bVar2 = false;
  pbVar5 = param_1;
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      bVar1 = *pbVar8;
      if (uVar3 < param_3 - 1) {
        if (bVar1 == 0) {
          if (bVar2) {
            *pbVar5 = 0;
            uVar7 = uVar7 + 1 & 0xff;
            pbVar5 = param_1 + uVar7;
          }
        }
        else {
          *pbVar5 = bVar1;
          uVar7 = uVar7 + 1 & 0xff;
          bVar2 = true;
          pbVar5 = param_1 + uVar7;
        }
      }
      else {
        *pbVar5 = bVar1;
        uVar7 = uVar7 + 1 & 0xff;
        pbVar5 = param_1 + uVar7;
      }
      uVar6 = uVar3 + 1;
      pbVar8 = local_f + uVar3;
      uVar3 = uVar6;
    } while (uVar6 < param_3);
  }
  *pbVar5 = param_4;
  return;
}

