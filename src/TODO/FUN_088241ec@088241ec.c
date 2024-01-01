#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088241ec(int param_1,int param_2,undefined4 *param_3)

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
  
  FUN_089d8634();
  uVar15 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar16 = FUN_089d7d74(0x220,0,0);
  FUN_089d816c(uVar15);
  FUN_089d866c();
  iVar17 = 0;
  if (iVar16 != 0) {
    FUN_0881d618(iVar16,param_1,*(undefined4 *)(*(int *)(param_1 + 0x88) + param_2 * 0x20));
    iVar17 = iVar16;
  }
  iVar17 = FUN_089f5194(param_1,iVar17);
  uVar15 = param_3[0xd];
  uVar5 = param_3[0xe];
  uVar10 = param_3[0xf];
  *(undefined4 *)(iVar17 + 0x60) = param_3[0xc];
  *(undefined4 *)(iVar17 + 100) = uVar15;
  *(undefined4 *)(iVar17 + 0x68) = uVar5;
  *(undefined4 *)(iVar17 + 0x6c) = uVar10;
  uVar1 = param_3[1];
  uVar6 = param_3[2];
  uVar11 = param_3[3];
  uVar15 = param_3[4];
  uVar2 = param_3[5];
  uVar7 = param_3[6];
  uVar12 = param_3[7];
  uVar5 = param_3[8];
  uVar3 = param_3[9];
  uVar8 = param_3[10];
  uVar13 = param_3[0xb];
  uVar10 = param_3[0xc];
  uVar4 = param_3[0xd];
  uVar9 = param_3[0xe];
  uVar14 = param_3[0xf];
  *(undefined4 *)(iVar17 + 0x20) = *param_3;
  *(undefined4 *)(iVar17 + 0x24) = uVar1;
  *(undefined4 *)(iVar17 + 0x28) = uVar6;
  *(undefined4 *)(iVar17 + 0x2c) = uVar11;
  *(undefined4 *)(iVar17 + 0x30) = uVar15;
  *(undefined4 *)(iVar17 + 0x34) = uVar2;
  *(undefined4 *)(iVar17 + 0x38) = uVar7;
  *(undefined4 *)(iVar17 + 0x3c) = uVar12;
  *(undefined4 *)(iVar17 + 0x40) = uVar5;
  *(undefined4 *)(iVar17 + 0x44) = uVar3;
  *(undefined4 *)(iVar17 + 0x48) = uVar8;
  *(undefined4 *)(iVar17 + 0x4c) = uVar13;
  *(undefined4 *)(iVar17 + 0x50) = uVar10;
  *(undefined4 *)(iVar17 + 0x54) = uVar4;
  *(undefined4 *)(iVar17 + 0x58) = uVar9;
  *(undefined4 *)(iVar17 + 0x5c) = uVar14;
  return;
}

