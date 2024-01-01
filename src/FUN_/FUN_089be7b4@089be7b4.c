#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089be7b4(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte **ppbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  
  uVar11 = param_1[4];
  uVar13 = 0;
  uVar10 = 1;
  pbVar6 = (byte *)param_1[7];
  if (param_1[3] == 0) {
    pbVar6 = pbVar6 + 4;
    param_1[3] = 1;
    param_1[7] = (uint)pbVar6;
    uVar13 = 4;
  }
  uVar4 = *param_1;
  uVar2 = param_1[1];
  uVar9 = param_1[2];
  uVar8 = param_1[5];
  uVar7 = param_1[6];
  ppbVar5 = (byte **)(param_1 + 8);
LAB_089be810:
  while (uVar11 != 3) {
    pbVar12 = pbVar6;
    if (uVar11 != 1) {
      uVar8 = uVar8 >> 1;
      uVar11 = 1;
      if ((uVar8 & 0x100) != 0) goto LAB_089be84c;
      bVar1 = *pbVar6;
      uVar13 = uVar13 + 1;
      pbVar6 = pbVar6 + 1;
      uVar8 = bVar1 | 0xff00;
      pbVar12 = pbVar6;
      if (uVar13 < param_2) goto LAB_089be84c;
      goto LAB_089be960;
    }
LAB_089be84c:
    pbVar6 = pbVar12 + 1;
    uVar13 = uVar13 + 1;
    if ((uVar8 & 1) == 0) {
      uVar4 = (uint)*pbVar12;
      uVar11 = 3;
      if (uVar13 < param_2) {
        bVar1 = *pbVar6;
        goto LAB_089be8d0;
      }
      goto LAB_089be960;
    }
    bVar1 = *pbVar12;
    pbVar12 = *ppbVar5;
    *ppbVar5 = pbVar12 + 1;
    *pbVar12 = bVar1;
    uVar7 = uVar7 + 1;
    uVar11 = 2;
    if (param_1[9] <= uVar7) {
      uVar10 = 0;
      goto LAB_089be960;
    }
    *(byte *)((int)param_1 + uVar9 + 0x29) = bVar1;
    uVar9 = uVar9 + 1 & 0xfff;
    if (param_2 <= uVar13) {
      param_1[4] = 2;
LAB_089be964:
      *param_1 = uVar4;
      param_1[1] = uVar2;
      param_1[2] = uVar9;
      param_1[5] = uVar8;
      param_1[6] = uVar7;
      param_1[7] = (uint)pbVar6;
      return uVar10;
    }
  }
  bVar1 = *pbVar6;
LAB_089be8d0:
  uVar11 = 4;
  uVar3 = bVar1 & 0xf;
  uVar4 = uVar4 | (bVar1 & 0xf0) << 4;
  uVar2 = uVar3 + 2;
  pbVar6 = pbVar6 + 1;
  uVar13 = uVar13 + 1;
  iVar14 = 0;
  do {
    pbVar12 = *ppbVar5;
    bVar1 = *(byte *)((int)param_1 + (uVar4 + iVar14 & 0xfff) + 0x29);
    *ppbVar5 = pbVar12 + 1;
    *pbVar12 = bVar1;
    *(byte *)((int)param_1 + uVar9 + 0x29) = bVar1;
    iVar14 = iVar14 + 1;
    uVar9 = uVar9 + 1 & 0xfff;
  } while (iVar14 <= (int)uVar2);
  uVar7 = uVar7 + uVar3 + 3;
  if (uVar7 < param_1[9]) {
    if (uVar13 < param_2) goto LAB_089be810;
  }
  else {
    uVar10 = 0;
  }
LAB_089be960:
  param_1[4] = uVar11;
  goto LAB_089be964;
}

