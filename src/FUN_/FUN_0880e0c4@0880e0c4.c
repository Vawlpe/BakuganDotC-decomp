#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880e0c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined auStack_70 [28];
  undefined auStack_54 [40];
  
  memset_jak(auStack_70,0,0x19);
  memset_jak(auStack_54,0,0x27);
  iVar1 = FUN_0880d2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_0880cc48();
    iVar1 = FUN_0880d840(uVar2,auStack_70);
    if (iVar1 != 0) {
      FUN_089eac40(auStack_54,auStack_70);
    }
  }
  iVar1 = FUN_0880d2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_0880cc48();
    uVar2 = FUN_0880dba8(uVar2);
    switch(uVar2) {
    case 1:
      PTR_PTR_DAT_08aacaf4 = (undefined *)&PTR_DAT_08aacaa0;
      break;
    case 2:
      PTR_PTR_DAT_08aacaf4 = (undefined *)&PTR_DAT_08aacaac;
      break;
    case 3:
      PTR_PTR_DAT_08aacaf4 = (undefined *)&PTR_DAT_08aacab8;
      break;
    case 4:
      PTR_PTR_DAT_08aacaf4 = (undefined *)&PTR_DAT_08aacac4;
      break;
    case 5:
      PTR_PTR_DAT_08aacaf4 = (undefined *)&PTR_DAT_08aacad0;
      break;
    case 6:
      PTR_PTR_DAT_08aacaf4 = (undefined *)&PTR_DAT_08aacadc;
      break;
    case 0xc:
      PTR_PTR_DAT_08aacaf4 = (undefined *)&PTR_DAT_08aacae8;
    }
  }
  strcpy(param_1,*(undefined4 *)PTR_PTR_DAT_08aacaf4);
  FUN_089b4c84(param_1 + 0x80,*(undefined4 *)(PTR_PTR_DAT_08aacaf4 + 4),auStack_54);
  iVar5 = 0;
  uVar2 = FUN_0880cc48();
  iVar1 = FUN_0880d4e4(uVar2,0);
  uVar6 = 0;
  do {
    piVar3 = (int *)FUN_0880cc48();
    uVar6 = uVar6 + 1;
    if ((int)uVar6 < 0) {
      uVar4 = -(-uVar6 & 7) & 0x1f;
    }
    else {
      uVar4 = uVar6 & 7;
    }
    if (((uint)*(byte *)(*piVar3 + ((int)(uVar6 + ((uint)((int)uVar6 >> 3) >> 0x1d)) >> 3) + 0x50e)
        & 1 << uVar4) != 0) {
      iVar5 = iVar5 + 1;
    }
  } while ((int)uVar6 < 0x14);
  FUN_089b4c84(param_1 + 0x100,*(undefined4 *)(PTR_PTR_DAT_08aacaf4 + 8),iVar1 / 0xe10,
               (iVar1 % 0xe10) / 0x3c,(iVar1 % 0xe10) % 0x3c,iVar5);
  return;
}

