#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882365c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  
  if (*(int *)(param_1 + 0x208) != DAT_08ab9e10) {
    DAT_08ab9dc8 = DAT_08ab9dc8 + 1;
    iVar18 = 1;
    if (*(int *)(param_1 + 0x164) != 0) {
      puVar16 = *(undefined4 **)(param_1 + 0x164);
      uVar4 = puVar16[1];
      uVar8 = puVar16[2];
      uVar12 = puVar16[3];
      uVar1 = puVar16[4];
      uVar5 = puVar16[5];
      uVar9 = puVar16[6];
      uVar13 = puVar16[7];
      uVar2 = puVar16[8];
      uVar6 = puVar16[9];
      uVar10 = puVar16[10];
      uVar14 = puVar16[0xb];
      uVar3 = puVar16[0xc];
      uVar7 = puVar16[0xd];
      uVar11 = puVar16[0xe];
      uVar15 = puVar16[0xf];
      *(undefined4 *)(param_1 + 0x20) = *puVar16;
      *(undefined4 *)(param_1 + 0x24) = uVar4;
      *(undefined4 *)(param_1 + 0x28) = uVar8;
      *(undefined4 *)(param_1 + 0x2c) = uVar12;
      *(undefined4 *)(param_1 + 0x30) = uVar1;
      *(undefined4 *)(param_1 + 0x34) = uVar5;
      *(undefined4 *)(param_1 + 0x38) = uVar9;
      *(undefined4 *)(param_1 + 0x3c) = uVar13;
      *(undefined4 *)(param_1 + 0x40) = uVar2;
      *(undefined4 *)(param_1 + 0x44) = uVar6;
      *(undefined4 *)(param_1 + 0x48) = uVar10;
      *(undefined4 *)(param_1 + 0x4c) = uVar14;
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      *(undefined4 *)(param_1 + 0x54) = uVar7;
      *(undefined4 *)(param_1 + 0x58) = uVar11;
      *(undefined4 *)(param_1 + 0x5c) = uVar15;
    }
    iVar17 = *(int *)(param_1 + 0x174);
    while( true ) {
      *(int *)(param_1 + 0x174) = iVar17 + 1;
      iVar17 = FUN_0881d5d0(param_1,*(undefined4 *)(param_1 + 0x170));
      if (iVar17 == 0) {
        if (*(int *)(param_1 + 0x21c) == 0) {
          FUN_089f5124(*(undefined4 *)(param_1 + 0x214),param_1);
          return;
        }
        iVar18 = 0;
        iVar17 = FUN_0881ec44(param_1,*(undefined4 *)(param_1 + 0x21c),1,1);
        if (iVar17 < 0) {
          FUN_089f5124(*(undefined4 *)(param_1 + 0x214),param_1);
          return;
        }
      }
      else {
        iVar18 = FUN_0881ec44(param_1,iVar17,*(int *)(param_1 + 0x21c) == 0,iVar18);
        if (iVar18 < 0) {
          FUN_089f5124(*(undefined4 *)(param_1 + 0x214),param_1);
          return;
        }
        if ((*(int *)(param_1 + 0x21c) != 0) &&
           (iVar17 = FUN_0881ec44(param_1,*(undefined4 *)(param_1 + 0x21c),1,1), iVar17 < 0)) {
          FUN_089f5124(*(undefined4 *)(param_1 + 0x214),param_1);
          return;
        }
      }
      if (iVar18 < 1) break;
      iVar17 = *(int *)(param_1 + 0x174);
    }
    FUN_0881dfb0(param_1);
  }
  return;
}

