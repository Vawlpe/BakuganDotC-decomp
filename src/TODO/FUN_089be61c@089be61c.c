#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089be61c(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined *ptr;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  FUN_089d8634();
  uVar5 = FUN_089d81a4();
  FUN_089d816c(1);
  ptr = (undefined *)FUN_089d7d74(0x1011,0,0);
  FUN_089d816c(uVar5);
  FUN_089d866c();
  memset_jak(ptr,0,0xfee);
  uVar8 = 0xfee;
  uVar9 = 0;
  uVar10 = 0;
  do {
    pbVar7 = param_1;
    pbVar4 = param_1 + 1;
    uVar11 = uVar10;
    if ((uVar10 & 0x100) == 0) {
      uVar11 = (uint)*param_1;
      uVar10 = uVar11 | 0xff00;
      pbVar7 = param_1 + 1;
      pbVar4 = param_1 + 2;
    }
    param_1 = pbVar4;
    if ((uVar11 & 1) == 0) {
      bVar1 = *param_1;
      bVar2 = *pbVar7;
      param_1 = param_1 + 1;
      uVar11 = bVar1 & 0xf;
      iVar6 = 0;
      do {
        bVar3 = ptr[((uint)bVar2 | (bVar1 & 0xf0) << 4) + iVar6 & 0xfff];
        *param_2 = bVar3;
        ptr[uVar8] = bVar3;
        iVar6 = iVar6 + 1;
        param_2 = param_2 + 1;
        uVar8 = uVar8 + 1 & 0xfff;
      } while (iVar6 <= (int)(uVar11 + 2));
      uVar9 = uVar9 + uVar11 + 3;
      if (param_3 <= uVar9) goto LAB_089be778;
    }
    else {
      bVar1 = *pbVar7;
      *param_2 = bVar1;
      uVar9 = uVar9 + 1;
      param_2 = param_2 + 1;
      if (param_3 <= uVar9) {
LAB_089be778:
        if (ptr != (undefined *)0x0) {
          FUN_089d8634();
          FUN_089d7fd8(ptr,0,0);
          FUN_089d866c();
        }
        return;
      }
      ptr[uVar8] = bVar1;
      uVar8 = uVar8 + 1 & 0xfff;
    }
    uVar10 = uVar10 >> 1;
  } while( true );
}

