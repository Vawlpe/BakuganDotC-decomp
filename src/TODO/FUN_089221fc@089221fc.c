#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089221fc(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  
  uVar6 = param_2 & 0xff;
  iVar1 = FUN_08922184();
  uVar5 = (undefined)param_2;
  if ((iVar1 == 1) &&
     (piVar2 = (int *)DONE_Get_DAT_08AAC9E0(),
     ((uint)*(ushort *)(*piVar2 + 0x82) & 1 << (param_2 & 0x1f)) == 0)) {
    switch(uVar6) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 7:
      *(undefined *)(param_1 + 0x2100) = uVar5;
      return 1;
    case 5:
    case 6:
    }
  }
  if ((uVar6 == 9) &&
     (piVar2 = (int *)DONE_Get_DAT_08AAC9E0(),
     ((uint)*(ushort *)(*piVar2 + 0x82) & 1 << (param_2 & 0x1f)) == 0)) {
    bVar8 = 0;
    uVar7 = 0;
    do {
      piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
      if ((int)uVar7 < 0) {
        uVar4 = -(-uVar7 & 7) & 0x1f;
      }
      else {
        uVar4 = uVar7 & 7;
      }
      if (((uint)*(byte *)(*piVar2 + ((int)(uVar7 + ((uint)((int)uVar7 >> 3) >> 0x1d)) >> 3) + 0x51a
                          ) & 1 << uVar4) != 0) {
        bVar8 = bVar8 + 1;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 0x50);
    if (2 < bVar8) {
      *(undefined *)(param_1 + 0x2100) = uVar5;
      return 1;
    }
  }
  if (((uVar6 == 6) &&
      (piVar2 = (int *)DONE_Get_DAT_08AAC9E0(),
      ((uint)*(ushort *)(*piVar2 + 0x82) & 1 << (param_2 & 0x1f)) == 0)) &&
     (iVar1 = FUN_089b1d7c(8), iVar1 == 1)) {
    FUN_089b1cac(0,8);
    uVar3 = DONE_Get_DAT_08AAC9E0();
    iVar1 = FUN_0880d0ac(uVar3,0x32);
    if (iVar1 == 1) {
      *(undefined *)(param_1 + 0x2100) = uVar5;
      return 1;
    }
  }
  return 0;
}

