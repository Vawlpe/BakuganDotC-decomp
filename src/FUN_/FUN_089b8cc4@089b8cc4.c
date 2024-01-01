#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b8cc4(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  
  puVar2 = DAT_08ac4b28;
  puVar1 = PTR_DAT_08ac4720;
  uVar7 = *(uint *)(PTR_DAT_08ac4720 + 4) & 0xfffffffc;
  puVar9 = PTR_DAT_08ac4720 + uVar7;
  uVar8 = DAT_08ac4b24 + param_2 + 0x10;
  if (DAT_08ac4b28 != (undefined *)0xffffffff) {
    uVar8 = DAT_08ac4b24 + param_2 + 0x100fU & 0xfffff000;
  }
  puVar4 = (undefined *)FUN_089bacc4(param_1,uVar8);
  if ((puVar4 != (undefined *)0xffffffff) && ((puVar9 <= puVar4 || (puVar1 == &DAT_08ac4718)))) {
    DAT_08ac4b34 = DAT_08ac4b34 + uVar8;
    if (puVar4 == puVar9) {
      *(uint *)(PTR_DAT_08ac4720 + 4) = uVar7 + uVar8 | 1;
    }
    else {
      puVar3 = puVar4;
      if (DAT_08ac4b28 != (undefined *)0xffffffff) {
        DAT_08ac4b34 = puVar4 + ((int)DAT_08ac4b34 - (int)puVar9);
        puVar3 = DAT_08ac4b28;
      }
      DAT_08ac4b28 = puVar3;
      if (((uint)(puVar4 + 8) & 0xf) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0x10 - ((uint)(puVar4 + 8) & 0xf);
        puVar4 = puVar4 + iVar6;
      }
      iVar6 = iVar6 + (0x1000 - ((uint)(puVar4 + uVar8) & 0xfff));
      iVar5 = FUN_089bacc4(param_1,iVar6);
      if (iVar5 == -1) {
        DAT_08ac4b34 = (undefined *)
                       ((int)DAT_08ac4b34 -
                       (int)(puVar4 + (-(int)puVar9 -
                                      (iVar6 - (0x1000 - ((uint)(puVar4 + uVar8) & 0xfff))))));
        FUN_089bacc4(param_1,-uVar8);
        DAT_08ac4b28 = puVar2;
        return;
      }
      DAT_08ac4b34 = DAT_08ac4b34 + iVar6;
      PTR_DAT_08ac4720 = puVar4;
      *(uint *)(puVar4 + 4) = (iVar5 - (int)puVar4) + iVar6 | 1;
      if (puVar1 != &DAT_08ac4718) {
        if (uVar7 < 0x10) {
          *(undefined4 *)(PTR_DAT_08ac4720 + 4) = 1;
          return;
        }
        uVar7 = uVar7 - 0xc & 0xfffffff0;
        *(uint *)(puVar1 + 4) = *(uint *)(puVar1 + 4) & 1 | uVar7;
        *(undefined4 *)(puVar1 + uVar7 + 4) = 5;
        *(undefined4 *)(puVar1 + uVar7 + 8) = 5;
        if (0xf < uVar7) {
          _free_r(param_1,puVar1 + 8);
        }
      }
    }
    if (DAT_08ac4b2c < DAT_08ac4b34) {
      DAT_08ac4b2c = DAT_08ac4b34;
    }
    if (DAT_08ac4b30 < DAT_08ac4b34) {
      DAT_08ac4b30 = DAT_08ac4b34;
    }
  }
  return;
}

