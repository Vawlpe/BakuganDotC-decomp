#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void _free_r(undefined4 param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined *puVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  
  if (param_2 == 0) {
    return;
  }
  FUN_089b9a68();
  piVar4 = (int *)(param_2 + -8);
  uVar3 = *(uint *)(param_2 + -4) & 0xfffffffe;
  puVar5 = (undefined *)((int)piVar4 + uVar3);
  uVar10 = *(uint *)(puVar5 + 4) & 0xfffffffc;
  uVar8 = *(uint *)(param_2 + -4) & 1;
  if (puVar5 == PTR_DAT_08ac4720) {
    uVar10 = uVar10 + uVar3;
    if (uVar8 == 0) {
      iVar2 = *piVar4;
      piVar4 = (int *)((int)piVar4 - iVar2);
      iVar6 = piVar4[3];
      iVar9 = piVar4[2];
      uVar10 = iVar2 + uVar10;
      *(int *)(iVar9 + 0xc) = iVar6;
      *(int *)(iVar6 + 8) = iVar9;
    }
    piVar4[1] = uVar10 | 1;
    PTR_DAT_08ac4720 = (undefined *)piVar4;
    if (DAT_08ac4b20 <= uVar10) {
      FUN_089b988c(param_1,DAT_08ac4b24);
    }
    FUN_089b9aa4(param_1);
    return;
  }
  *(uint *)(puVar5 + 4) = uVar10;
  bVar7 = false;
  if (uVar8 == 0) {
    iVar2 = *piVar4;
    piVar4 = (int *)((int)piVar4 - iVar2);
    ppuVar1 = (undefined **)piVar4[2];
    uVar3 = iVar2 + uVar3;
    if (ppuVar1 == &PTR_DAT_08ac4720) {
      bVar7 = true;
    }
    else {
      puVar11 = (undefined *)piVar4[3];
      ppuVar1[3] = puVar11;
      *(undefined ***)(puVar11 + 8) = ppuVar1;
    }
  }
  if ((*(uint *)(puVar5 + uVar10 + 4) & 1) == 0) {
    uVar3 = uVar10 + uVar3;
    ppuVar1 = *(undefined ***)(puVar5 + 8);
    if (bVar7) {
      puVar5 = *(undefined **)(puVar5 + 0xc);
    }
    else {
      if (ppuVar1 == &PTR_DAT_08ac4720) {
        PTR_PTR_DAT_08ac4728 = (undefined *)piVar4;
        PTR_PTR_DAT_08ac472c = (undefined *)piVar4;
        piVar4[3] = (int)&PTR_DAT_08ac4720;
        bVar7 = true;
        piVar4[2] = (int)&PTR_DAT_08ac4720;
        goto LAB_089b9734;
      }
      puVar5 = *(undefined **)(puVar5 + 0xc);
    }
    ppuVar1[3] = puVar5;
    *(undefined ***)(puVar5 + 8) = ppuVar1;
  }
LAB_089b9734:
  piVar4[1] = uVar3 | 1;
  *(uint *)((int)piVar4 + uVar3) = uVar3;
  if (!bVar7) {
    uVar10 = uVar3 >> 9;
    if (uVar3 < 0x200) {
      DAT_08ac471c = DAT_08ac471c | 1 << ((int)(uVar3 >> 3) >> 2 & 0x1fU);
      uVar3 = uVar3 & 0xfffffff8;
      iVar2 = *(int *)((int)&PTR_DAT_08ac4720 + uVar3);
      piVar4[3] = (int)(&DAT_08ac4718 + uVar3);
      piVar4[2] = iVar2;
      *(int **)((int)&PTR_DAT_08ac4720 + uVar3) = piVar4;
      *(int **)(iVar2 + 0xc) = piVar4;
    }
    else {
      if (uVar10 == 0) {
        uVar8 = uVar3 >> 3;
      }
      else if (uVar10 < 5) {
        uVar8 = (uVar3 >> 6) + 0x38;
      }
      else if (uVar10 < 0x15) {
        uVar8 = uVar10 + 0x5b;
      }
      else if (uVar10 < 0x55) {
        uVar8 = (uVar3 >> 0xc) + 0x6e;
      }
      else if (uVar10 < 0x155) {
        uVar8 = (uVar3 >> 0xf) + 0x77;
      }
      else {
        uVar8 = 0x7e;
        if (uVar10 < 0x555) {
          uVar8 = (uVar3 >> 0x12) + 0x7c;
        }
      }
      puVar11 = &DAT_08ac4718 + uVar8 * 8;
      puVar5 = (&PTR_DAT_08ac4720)[uVar8 * 2];
      if (puVar5 == puVar11) {
        DAT_08ac471c = DAT_08ac471c | 1 << ((int)uVar8 >> 2 & 0x1fU);
      }
      else {
        for (; puVar5 != puVar11; puVar5 = *(undefined **)(puVar5 + 8)) {
          if ((*(uint *)(puVar5 + 4) & 0xfffffffc) <= uVar3) {
            puVar11 = *(undefined **)(puVar5 + 0xc);
            goto LAB_089b9868;
          }
        }
        puVar11 = *(undefined **)(puVar5 + 0xc);
      }
LAB_089b9868:
      piVar4[3] = (int)puVar11;
      piVar4[2] = (int)puVar5;
      *(int **)(puVar11 + 8) = piVar4;
      *(int **)(puVar5 + 0xc) = piVar4;
    }
  }
  FUN_089b9aa4();
  return;
}

