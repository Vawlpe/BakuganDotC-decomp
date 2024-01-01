#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08824a4c(int param_1,int param_2,undefined4 *param_3,int param_4)

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
  int iVar16;
  int iVar17;
  
  iVar17 = *(int *)(param_1 + 0x1c);
  while (iVar16 = iVar17, iVar16 != 0) {
    iVar17 = *(int *)(iVar16 + 4);
    if (((param_2 == -1) || (*(int *)(iVar16 + 0x16c) == param_2)) &&
       ((param_4 == 0 || (*(int *)(iVar16 + 0x160) == param_4)))) {
      uVar4 = param_3[1];
      uVar8 = param_3[2];
      uVar12 = param_3[3];
      uVar1 = param_3[4];
      uVar5 = param_3[5];
      uVar9 = param_3[6];
      uVar13 = param_3[7];
      uVar2 = param_3[8];
      uVar6 = param_3[9];
      uVar10 = param_3[10];
      uVar14 = param_3[0xb];
      uVar3 = param_3[0xc];
      uVar7 = param_3[0xd];
      uVar11 = param_3[0xe];
      uVar15 = param_3[0xf];
      *(undefined4 *)(iVar16 + 0x20) = *param_3;
      *(undefined4 *)(iVar16 + 0x24) = uVar4;
      *(undefined4 *)(iVar16 + 0x28) = uVar8;
      *(undefined4 *)(iVar16 + 0x2c) = uVar12;
      *(undefined4 *)(iVar16 + 0x30) = uVar1;
      *(undefined4 *)(iVar16 + 0x34) = uVar5;
      *(undefined4 *)(iVar16 + 0x38) = uVar9;
      *(undefined4 *)(iVar16 + 0x3c) = uVar13;
      *(undefined4 *)(iVar16 + 0x40) = uVar2;
      *(undefined4 *)(iVar16 + 0x44) = uVar6;
      *(undefined4 *)(iVar16 + 0x48) = uVar10;
      *(undefined4 *)(iVar16 + 0x4c) = uVar14;
      *(undefined4 *)(iVar16 + 0x50) = uVar3;
      *(undefined4 *)(iVar16 + 0x54) = uVar7;
      *(undefined4 *)(iVar16 + 0x58) = uVar11;
      *(undefined4 *)(iVar16 + 0x5c) = uVar15;
    }
  }
  return;
}

