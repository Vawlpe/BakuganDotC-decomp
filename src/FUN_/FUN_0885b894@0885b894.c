#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0885b894(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,char param_5,
                undefined4 param_6)

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
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_0885e18c();
  *(undefined **)(param_3 + 0x14) = &DAT_08af1b0c;
  uVar1 = param_4[1];
  uVar6 = param_4[2];
  uVar11 = param_4[3];
  *(undefined4 *)(param_3 + 0x20) = *param_4;
  *(undefined4 *)(param_3 + 0x24) = uVar1;
  *(undefined4 *)(param_3 + 0x28) = uVar6;
  *(undefined4 *)(param_3 + 0x2c) = uVar11;
  iVar16 = *(int *)(param_3 + 0x130);
  uVar1 = param_4[1];
  uVar6 = param_4[2];
  uVar11 = param_4[3];
  *(undefined4 *)(iVar16 + 0xb0) = *param_4;
  *(undefined4 *)(iVar16 + 0xb4) = uVar1;
  *(undefined4 *)(iVar16 + 0xb8) = uVar6;
  *(undefined4 *)(iVar16 + 0xbc) = uVar11;
  *(undefined4 *)(param_3 + 0x150) = 6;
  if (param_5 != '\0') {
    FUN_088636fc(param_1,param_2,param_3);
    FUN_088625e8(param_3,param_6);
    iVar16 = *(int *)(param_3 + 0x130);
    uVar2 = *(undefined4 *)(iVar16 + 0x84);
    uVar7 = *(undefined4 *)(iVar16 + 0x88);
    uVar12 = *(undefined4 *)(iVar16 + 0x8c);
    uVar1 = *(undefined4 *)(iVar16 + 0x90);
    uVar3 = *(undefined4 *)(iVar16 + 0x94);
    uVar8 = *(undefined4 *)(iVar16 + 0x98);
    uVar13 = *(undefined4 *)(iVar16 + 0x9c);
    uVar6 = *(undefined4 *)(iVar16 + 0xa0);
    uVar4 = *(undefined4 *)(iVar16 + 0xa4);
    uVar9 = *(undefined4 *)(iVar16 + 0xa8);
    uVar14 = *(undefined4 *)(iVar16 + 0xac);
    uVar11 = *(undefined4 *)(iVar16 + 0xb0);
    uVar5 = *(undefined4 *)(iVar16 + 0xb4);
    uVar10 = *(undefined4 *)(iVar16 + 0xb8);
    uVar15 = *(undefined4 *)(iVar16 + 0xbc);
    *(undefined4 *)(param_3 + 0x220) = *(undefined4 *)(iVar16 + 0x80);
    *(undefined4 *)(param_3 + 0x224) = uVar2;
    *(undefined4 *)(param_3 + 0x228) = uVar7;
    *(undefined4 *)(param_3 + 0x22c) = uVar12;
    *(undefined4 *)(param_3 + 0x230) = uVar1;
    *(undefined4 *)(param_3 + 0x234) = uVar3;
    *(undefined4 *)(param_3 + 0x238) = uVar8;
    *(undefined4 *)(param_3 + 0x23c) = uVar13;
    *(undefined4 *)(param_3 + 0x240) = uVar6;
    *(undefined4 *)(param_3 + 0x244) = uVar4;
    *(undefined4 *)(param_3 + 0x248) = uVar9;
    *(undefined4 *)(param_3 + 0x24c) = uVar14;
    *(undefined4 *)(param_3 + 0x250) = uVar11;
    *(undefined4 *)(param_3 + 0x254) = uVar5;
    *(undefined4 *)(param_3 + 600) = uVar10;
    *(undefined4 *)(param_3 + 0x25c) = uVar15;
    if (*(int *)(param_3 + 0x20c) == 0) {
      iVar16 = *(int *)(param_3 + 0x208);
    }
    else {
      *(undefined *)(*(int *)(param_3 + 0x20c) + 0x10c) = 1;
      iVar16 = *(int *)(param_3 + 0x208);
    }
    if (iVar16 != 0) {
      *(undefined *)(*(int *)(param_3 + 0x208) + 0x10c) = 1;
    }
  }
  *(undefined4 *)(param_3 + 0x268) = 2;
  *(undefined4 *)(param_3 + 0x144) = 0;
  *(undefined *)(param_3 + 0x158) = 0;
  *(undefined4 *)(param_3 + 0x80) = in_V72;
  *(undefined4 *)(param_3 + 0x84) = in_V76;
  *(undefined4 *)(param_3 + 0x88) = in_V7A;
  *(undefined4 *)(param_3 + 0x8c) = in_V7E;
  *(undefined *)(param_3 + 0x670) = 0;
  return param_3;
}

