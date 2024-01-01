#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a00ca4(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  uVar5 = 2;
  iVar2 = FUN_089c9da8();
  iVar3 = FUN_089c9da8(param_1);
  bVar1 = false;
  if ((((-1 < iVar2) && (iVar2 < 3)) && (-1 < iVar3)) && (iVar3 < 0xe)) {
    bVar1 = true;
  }
  if (bVar1) {
    if (iVar2 < 1) {
      if (-1 < iVar2) {
        iVar2 = *(int *)(&DAT_08aacb90 + iVar3 * 4);
        if (iVar2 != 0) {
          (**(code **)(*(int *)(iVar2 + 0x20) + 0xc))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 8),2);
          *(int *)(&DAT_08aacb90 + iVar3 * 4) = 0;
        }
        uVar5 = 0;
      }
    }
    else if (iVar2 < 2) {
      puVar6 = (undefined4 *)(&DAT_08aacb90 + iVar3 * 4);
      puVar7 = &DAT_08afaac8 + iVar3 * 0x40;
      puVar8 = (&PTR_DAT_08aacb58)[iVar3];
      switch(iVar3) {
      case 3:
      case 6:
      case 8:
      case 0xb:
      case 0xd:
        uVar4 = FUN_0880dc94();
        FUN_089b4c84(puVar7,puVar8,uVar4);
        puVar8 = (undefined *)*puVar6;
        break;
      default:
        strcpy(puVar7,puVar8);
        puVar8 = (undefined *)*puVar6;
      }
      if (puVar8 == (undefined *)0x0) {
        puVar9 = &DAT_08afa710 + iVar3 * 0x44;
        puVar8 = (undefined *)0x0;
        if (puVar9 != (undefined *)0x0) {
          FUN_089bd9b4(puVar9);
          puVar8 = puVar9;
        }
        *puVar6 = puVar8;
      }
      iVar2 = FUN_089bda88(puVar8,puVar7,10,(&DAT_08a34bff)[iVar3],0);
      if (iVar2 != 0) {
        uVar5 = 0;
      }
    }
    else if (((iVar2 < 3) && (*(int *)(&DAT_08aacb90 + iVar3 * 4) != 0)) &&
            (iVar2 = FUN_089bdb90(*(int *)(&DAT_08aacb90 + iVar3 * 4),1), iVar2 != 0)) {
      uVar5 = 0;
    }
  }
  return uVar5;
}

