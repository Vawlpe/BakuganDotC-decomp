#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * _malloc_r(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar3 = 0x10;
  if (0x1e < (int)(param_2 + 0x13U)) {
    uVar3 = param_2 + 0x13U & 0xfffffff0;
  }
  FUN_089b9a68();
  puVar4 = PTR_PTR_DAT_08ac4728;
  if (uVar3 < 0x1f8) {
    puVar8 = *(undefined **)((int)&PTR_DAT_08ac4724 + uVar3);
    if (puVar8 != &DAT_08ac4718 + uVar3) {
      uVar3 = *(uint *)(puVar8 + 4);
      iVar1 = *(int *)(puVar8 + 0xc);
      iVar5 = *(int *)(puVar8 + 8);
      *(int *)(iVar5 + 0xc) = iVar1;
      *(int *)(iVar1 + 8) = iVar5;
      *(uint *)(puVar8 + (uVar3 & 0xfffffffc) + 4) =
           *(uint *)(puVar8 + (uVar3 & 0xfffffffc) + 4) | 1;
      FUN_089b9aa4();
      return (undefined4 *)(puVar8 + 8);
    }
    uVar6 = (uVar3 >> 3) + 2;
  }
  else {
    uVar15 = uVar3 >> 9;
    if (uVar15 == 0) {
      uVar6 = uVar3 >> 3;
    }
    else if (uVar15 < 5) {
      uVar6 = (uVar3 >> 6) + 0x38;
    }
    else if (uVar15 < 0x15) {
      uVar6 = uVar15 + 0x5b;
    }
    else if (uVar15 < 0x55) {
      uVar6 = (uVar3 >> 0xc) + 0x6e;
    }
    else if (uVar15 < 0x155) {
      uVar6 = (uVar3 >> 0xf) + 0x77;
    }
    else {
      uVar6 = 0x7e;
      if (uVar15 < 0x555) {
        uVar6 = (uVar3 >> 0x12) + 0x7c;
      }
    }
    puVar8 = (&PTR_DAT_08ac4724)[uVar6 * 2];
    if (puVar8 != &DAT_08ac4718 + uVar6 * 8) {
      uVar15 = *(uint *)(puVar8 + 4);
      while( true ) {
        uVar15 = uVar15 & 0xfffffffc;
        if (0xf < (int)(uVar15 - uVar3)) break;
        puVar10 = *(undefined **)(puVar8 + 0xc);
        if (-1 < (int)(uVar15 - uVar3)) {
          iVar1 = *(int *)(puVar8 + 8);
          *(undefined **)(iVar1 + 0xc) = puVar10;
          *(int *)(puVar10 + 8) = iVar1;
          *(uint *)(puVar8 + uVar15 + 4) = *(uint *)(puVar8 + uVar15 + 4) | 1;
          FUN_089b9aa4();
          return (undefined4 *)(puVar8 + 8);
        }
        if (puVar10 == &DAT_08ac4718 + uVar6 * 8) goto LAB_089b9180;
        uVar15 = *(uint *)(puVar10 + 4);
        puVar8 = puVar10;
      }
      uVar6 = uVar6 - 1;
    }
LAB_089b9180:
    uVar6 = uVar6 + 1;
  }
  if ((undefined **)PTR_PTR_DAT_08ac4728 != &PTR_DAT_08ac4720) {
    uVar15 = *(uint *)(PTR_PTR_DAT_08ac4728 + 4);
    uVar14 = uVar15 & 0xfffffffc;
    uVar9 = uVar14 - uVar3;
    if (0xf < (int)uVar9) {
      *(uint *)(PTR_PTR_DAT_08ac4728 + 4) = uVar3 | 1;
      puVar8 = PTR_PTR_DAT_08ac4728 + uVar3;
      PTR_PTR_DAT_08ac4728 = puVar8;
      PTR_PTR_DAT_08ac472c = puVar8;
      *(undefined ***)(puVar8 + 0xc) = &PTR_DAT_08ac4720;
      *(undefined ***)(puVar8 + 8) = &PTR_DAT_08ac4720;
      *(uint *)(puVar8 + 4) = uVar9 | 1;
      *(uint *)(puVar8 + uVar9) = uVar9;
      FUN_089b9aa4();
      return (undefined4 *)(puVar4 + 8);
    }
    PTR_PTR_DAT_08ac472c = (undefined *)&PTR_DAT_08ac4720;
    PTR_PTR_DAT_08ac4728 = (undefined *)&PTR_DAT_08ac4720;
    if (-1 < (int)uVar9) {
      *(uint *)(puVar4 + uVar14 + 4) = *(uint *)(puVar4 + uVar14 + 4) | 1;
      FUN_089b9aa4();
      return (undefined4 *)(puVar4 + 8);
    }
    uVar9 = uVar15 >> 9;
    if (uVar14 < 0x200) {
      DAT_08ac471c = DAT_08ac471c | 1 << ((int)(uVar15 >> 3) >> 2 & 0x1fU);
      uVar15 = uVar15 & 0xfffffff8;
      iVar1 = *(int *)((int)&PTR_DAT_08ac4720 + uVar15);
      *(undefined **)(puVar4 + 0xc) = &DAT_08ac4718 + uVar15;
      *(int *)(puVar4 + 8) = iVar1;
      *(undefined **)((int)&PTR_DAT_08ac4720 + uVar15) = puVar4;
      *(undefined **)(iVar1 + 0xc) = puVar4;
    }
    else {
      if (uVar9 == 0) {
        uVar7 = uVar15 >> 3;
      }
      else if (uVar9 < 5) {
        uVar7 = (uVar15 >> 6) + 0x38;
      }
      else if (uVar9 < 0x15) {
        uVar7 = uVar9 + 0x5b;
      }
      else if (uVar9 < 0x55) {
        uVar7 = (uVar15 >> 0xc) + 0x6e;
      }
      else if (uVar9 < 0x155) {
        uVar7 = (uVar15 >> 0xf) + 0x77;
      }
      else {
        uVar7 = 0x7e;
        if (uVar9 < 0x555) {
          uVar7 = (uVar15 >> 0x12) + 0x7c;
        }
      }
      puVar8 = &DAT_08ac4718 + uVar7 * 8;
      puVar10 = (&PTR_DAT_08ac4720)[uVar7 * 2];
      if (puVar10 == puVar8) {
        DAT_08ac471c = DAT_08ac471c | 1 << ((int)uVar7 >> 2 & 0x1fU);
      }
      else {
        for (; puVar10 != puVar8; puVar10 = *(undefined **)(puVar10 + 8)) {
          if ((*(uint *)(puVar10 + 4) & 0xfffffffc) <= uVar14) {
            puVar8 = *(undefined **)(puVar10 + 0xc);
            goto LAB_089b9354;
          }
        }
        puVar8 = *(undefined **)(puVar10 + 0xc);
      }
LAB_089b9354:
      *(undefined **)(puVar4 + 0xc) = puVar8;
      *(undefined **)(puVar4 + 8) = puVar10;
      *(undefined **)(puVar8 + 8) = puVar4;
      *(undefined **)(puVar10 + 0xc) = puVar4;
    }
  }
  uVar15 = 1 << ((int)(uVar6 + ((uint)((int)uVar6 >> 2) >> 0x1e)) >> 2 & 0x1fU);
  if (uVar15 <= DAT_08ac471c) {
    if ((uVar15 & DAT_08ac471c) == 0) {
      uVar6 = uVar6 & 0xfffffffc;
      do {
        uVar15 = uVar15 << 1;
        uVar6 = uVar6 + 4;
      } while ((uVar15 & DAT_08ac471c) == 0);
    }
    iVar1 = uVar6 << 3;
    uVar14 = DAT_08ac471c;
    do {
      puVar11 = *(undefined4 **)((int)&PTR_DAT_08ac4724 + iVar1);
      puVar2 = (undefined4 *)(&DAT_08ac4718 + iVar1);
      uVar9 = uVar6;
      while( true ) {
        if (puVar11 != puVar2) {
          uVar7 = puVar11[1];
          while( true ) {
            uVar7 = uVar7 & 0xfffffffc;
            uVar13 = uVar7 - uVar3;
            if (0xf < (int)uVar13) {
              iVar5 = puVar11[3];
              puVar11[1] = uVar3 | 1;
              iVar1 = puVar11[2];
              *(int *)(iVar1 + 0xc) = iVar5;
              puVar4 = (undefined *)((int)puVar11 + uVar3);
              *(int *)(iVar5 + 8) = iVar1;
              PTR_PTR_DAT_08ac4728 = puVar4;
              PTR_PTR_DAT_08ac472c = puVar4;
              *(undefined ***)(puVar4 + 0xc) = &PTR_DAT_08ac4720;
              *(undefined ***)(puVar4 + 8) = &PTR_DAT_08ac4720;
              *(uint *)(puVar4 + 4) = uVar13 | 1;
              *(uint *)(puVar4 + uVar13) = uVar13;
              FUN_089b9aa4();
              return puVar11 + 2;
            }
            if (-1 < (int)uVar13) {
              *(uint *)((int)puVar11 + uVar7 + 4) = *(uint *)((int)puVar11 + uVar7 + 4) | 1;
              iVar5 = puVar11[3];
              iVar1 = puVar11[2];
              *(int *)(iVar1 + 0xc) = iVar5;
              *(int *)(iVar5 + 8) = iVar1;
              FUN_089b9aa4();
              return puVar11 + 2;
            }
            puVar11 = (undefined4 *)puVar11[3];
            if (puVar11 == puVar2) break;
            uVar7 = puVar11[1];
          }
        }
        puVar12 = puVar2 + 2;
        uVar7 = uVar9 + 1;
        if ((int)uVar9 < 0x3f) {
          puVar12 = puVar2 + 4;
          uVar7 = uVar9 + 2;
        }
        puVar2 = (undefined4 *)(&DAT_08ac4718 + iVar1);
        if ((uVar7 & 3) == 0) break;
        puVar11 = (undefined4 *)puVar12[3];
        puVar2 = puVar12;
        uVar9 = uVar7;
      }
      do {
        puVar11 = puVar2 + -2;
        if ((uVar6 & 3) == 0) {
          uVar14 = uVar14 & ~uVar15;
          DAT_08ac471c = uVar14;
          break;
        }
        puVar12 = (undefined4 *)*puVar2;
        uVar6 = uVar6 - 1;
        puVar2 = puVar11;
      } while (puVar12 == puVar11);
      uVar15 = uVar15 << 1;
      if ((uVar14 < uVar15) || (uVar15 == 0)) break;
      iVar1 = uVar7 << 3;
      uVar6 = uVar7;
      if ((uVar15 & uVar14) == 0) {
        do {
          uVar15 = uVar15 << 1;
          uVar7 = uVar7 + 4;
        } while ((uVar15 & uVar14) == 0);
        iVar1 = uVar7 * 8;
        uVar6 = uVar7;
      }
    } while( true );
  }
  uVar15 = (*(uint *)(PTR_DAT_08ac4720 + 4) & 0xfffffffc) - uVar3;
  if (((*(uint *)(PTR_DAT_08ac4720 + 4) & 0xfffffffc) < uVar3) ||
     (puVar4 = PTR_DAT_08ac4720, (int)uVar15 < 0x10)) {
    FUN_089b8cc4(param_1,uVar3);
    uVar15 = (*(uint *)(PTR_DAT_08ac4720 + 4) & 0xfffffffc) - uVar3;
    if (((*(uint *)(PTR_DAT_08ac4720 + 4) & 0xfffffffc) < uVar3) ||
       (puVar4 = PTR_DAT_08ac4720, (int)uVar15 < 0x10)) {
      FUN_089b9aa4(param_1);
      return (undefined4 *)0x0;
    }
  }
  *(uint *)(puVar4 + 4) = uVar3 | 1;
  PTR_DAT_08ac4720 = puVar4 + uVar3;
  *(uint *)(PTR_DAT_08ac4720 + 4) = uVar15 | 1;
  FUN_089b9aa4(param_1);
  return (undefined4 *)(puVar4 + 8);
}

