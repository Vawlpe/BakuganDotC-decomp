#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089be61c(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  FUN_089d8634();
  uVar5 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar6 = FUN_089d7d74(0x1011,0,0);
  FUN_089d816c(uVar5);
  FUN_089d866c();
  memset_jak(iVar6,0,0xfee);
  uVar9 = 0xfee;
  uVar10 = 0;
  uVar11 = 0;
  do {
    pbVar8 = param_1;
    pbVar4 = param_1 + 1;
    uVar12 = uVar11;
    if ((uVar11 & 0x100) == 0) {
      uVar12 = (uint)*param_1;
      uVar11 = uVar12 | 0xff00;
      pbVar8 = param_1 + 1;
      pbVar4 = param_1 + 2;
    }
    param_1 = pbVar4;
    if ((uVar12 & 1) == 0) {
      bVar1 = *param_1;
      bVar2 = *pbVar8;
      param_1 = param_1 + 1;
      uVar12 = bVar1 & 0xf;
      iVar7 = 0;
      do {
        bVar3 = *(byte *)(iVar6 + (((uint)bVar2 | (bVar1 & 0xf0) << 4) + iVar7 & 0xfff));
        *param_2 = bVar3;
        *(byte *)(iVar6 + uVar9) = bVar3;
        iVar7 = iVar7 + 1;
        param_2 = param_2 + 1;
        uVar9 = uVar9 + 1 & 0xfff;
      } while (iVar7 <= (int)(uVar12 + 2));
      uVar10 = uVar10 + uVar12 + 3;
      if (param_3 <= uVar10) goto LAB_089be778;
    }
    else {
      bVar1 = *pbVar8;
      *param_2 = bVar1;
      uVar10 = uVar10 + 1;
      param_2 = param_2 + 1;
      if (param_3 <= uVar10) {
LAB_089be778:
        if (iVar6 != 0) {
          FUN_089d8634();
          FUN_089d7fd8(iVar6,0,0);
          FUN_089d866c();
        }
        return;
      }
      *(byte *)(iVar6 + uVar9) = bVar1;
      uVar9 = uVar9 + 1 & 0xfff;
    }
    uVar11 = uVar11 >> 1;
  } while( true );
}

