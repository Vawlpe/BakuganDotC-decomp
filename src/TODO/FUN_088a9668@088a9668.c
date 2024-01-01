#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a9668(int param_1)

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
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_20;
  int local_1c;
  
  local_1c = FUN_088afad8(*(undefined4 *)(param_1 + 0x218));
  if ((local_1c != 0) && (*(int *)(param_1 + 0x160) == 0)) {
    local_20 = 0;
    FUN_089d8634();
    uVar15 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar16 = FUN_089d7d74(0x340,0,0);
    FUN_089d816c(uVar15);
    FUN_089d866c();
    iVar17 = local_20;
    if (iVar16 != 0) {
      local_50 = *(undefined4 *)(param_1 + 0x1e0);
      uStack_4c = *(undefined4 *)(param_1 + 0x1e4);
      uStack_48 = *(undefined4 *)(param_1 + 0x1e8);
      uStack_44 = *(undefined4 *)(param_1 + 0x1ec);
      FUN_088afe20(iVar16,local_1c,*(undefined4 *)(param_1 + 0x218),&local_50,0);
      iVar17 = iVar16;
    }
    *(int *)(param_1 + 0x160) = iVar17;
    iVar17 = *(int *)(iVar17 + 0x130);
    iVar16 = *(int *)(param_1 + 0x130);
    uVar3 = *(undefined4 *)(iVar16 + 0x84);
    uVar7 = *(undefined4 *)(iVar16 + 0x88);
    uVar11 = *(undefined4 *)(iVar16 + 0x8c);
    uVar15 = *(undefined4 *)(iVar16 + 0x90);
    uVar4 = *(undefined4 *)(iVar16 + 0x94);
    uVar8 = *(undefined4 *)(iVar16 + 0x98);
    uVar12 = *(undefined4 *)(iVar16 + 0x9c);
    uVar1 = *(undefined4 *)(iVar16 + 0xa0);
    uVar5 = *(undefined4 *)(iVar16 + 0xa4);
    uVar9 = *(undefined4 *)(iVar16 + 0xa8);
    uVar13 = *(undefined4 *)(iVar16 + 0xac);
    uVar2 = *(undefined4 *)(iVar16 + 0xb0);
    uVar6 = *(undefined4 *)(iVar16 + 0xb4);
    uVar10 = *(undefined4 *)(iVar16 + 0xb8);
    uVar14 = *(undefined4 *)(iVar16 + 0xbc);
    *(undefined4 *)(iVar17 + 0x80) = *(undefined4 *)(iVar16 + 0x80);
    *(undefined4 *)(iVar17 + 0x84) = uVar3;
    *(undefined4 *)(iVar17 + 0x88) = uVar7;
    *(undefined4 *)(iVar17 + 0x8c) = uVar11;
    *(undefined4 *)(iVar17 + 0x90) = uVar15;
    *(undefined4 *)(iVar17 + 0x94) = uVar4;
    *(undefined4 *)(iVar17 + 0x98) = uVar8;
    *(undefined4 *)(iVar17 + 0x9c) = uVar12;
    *(undefined4 *)(iVar17 + 0xa0) = uVar1;
    *(undefined4 *)(iVar17 + 0xa4) = uVar5;
    *(undefined4 *)(iVar17 + 0xa8) = uVar9;
    *(undefined4 *)(iVar17 + 0xac) = uVar13;
    *(undefined4 *)(iVar17 + 0xb0) = uVar2;
    *(undefined4 *)(iVar17 + 0xb4) = uVar6;
    *(undefined4 *)(iVar17 + 0xb8) = uVar10;
    *(undefined4 *)(iVar17 + 0xbc) = uVar14;
    FUN_088a8f2c(&local_50,*(int *)(param_1 + 0x130) + 0xb0,0x3fbf2100);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x160) + 0x130) + 0xb4) = uStack_4c;
    iVar17 = *(int *)(param_1 + 0x160);
    iVar16 = *(int *)(iVar17 + 0x130);
    uVar15 = *(undefined4 *)(iVar16 + 0xb4);
    uVar1 = *(undefined4 *)(iVar16 + 0xb8);
    uVar2 = *(undefined4 *)(iVar16 + 0xbc);
    *(undefined4 *)(iVar17 + 0x20) = *(undefined4 *)(iVar16 + 0xb0);
    *(undefined4 *)(iVar17 + 0x24) = uVar15;
    *(undefined4 *)(iVar17 + 0x28) = uVar1;
    *(undefined4 *)(iVar17 + 0x2c) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x160) + 0x34) = *(undefined4 *)(param_1 + 0x34);
  }
  return;
}

