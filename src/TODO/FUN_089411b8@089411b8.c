#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089411b8(int param_1)

{
  undefined4 uVar1;
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af4c64;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  DAT_08ac0e70 = 1;
  *(undefined *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar4 = FUN_089d7d74(8,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  iVar7 = 0;
  iVar10 = 0;
  piVar12 = &DAT_08a9cf98;
  do {
    *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar10) = 0;
    iVar7 = iVar7 + 1;
    iVar10 = iVar10 + 4;
  } while (iVar7 < 2);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar7 = FUN_089bfa40(1999);
  if (iVar7 != 0) {
    uVar3 = FUN_0894de24();
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  iVar7 = 0;
  iVar10 = 0;
  do {
    iVar8 = *piVar12;
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar5 = FUN_089d7d74(0x18,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    iVar11 = 0;
    if (iVar5 != 0) {
      FUN_08940e18(iVar5,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8 * 4),
                   PTR_DAT_08ab0228 + iVar8 * 0x14);
      iVar11 = iVar5;
    }
    *(int *)(*(int *)(param_1 + 0x90) + iVar10) = iVar11;
    iVar7 = iVar7 + 1;
    piVar12 = piVar12 + 2;
    iVar10 = iVar10 + 4;
  } while (iVar7 < 2);
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar6 = (undefined4 *)FUN_089d7d74(0x10,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  puVar9 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    FUN_089eaf90(puVar6);
    puVar9 = puVar6;
  }
  *(undefined4 **)(param_1 + 0x94) = puVar9;
  *puVar9 = 0x469c4000;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar10 = FUN_089d7d74(0x50,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar7 = 0;
  if (iVar10 != 0) {
    FUN_089ed6c8(iVar10,0);
    iVar7 = iVar10;
  }
  *(int *)(param_1 + 0x98) = iVar7;
  *(undefined4 *)(iVar7 + 0x10) = 0x3f000000;
  *(undefined4 *)(iVar7 + 0x14) = 0x3f59999a;
  *(undefined4 *)(iVar7 + 0x18) = 0x3f000000;
  *(undefined4 *)(iVar7 + 0x1c) = 0;
  FUN_089ed7b0(*(undefined4 *)(param_1 + 0x98),0x124,0x10);
  *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x44) = 0;
  FUN_089ed6a0(*(undefined4 *)(param_1 + 0x98),0);
  iVar7 = FUN_089edb58();
  if (iVar7 != 0) {
    iVar7 = FUN_089edb80();
    auVar2._12_4_ = 0x3f800000;
    auVar2._0_12_ = ZEXT812(0);
    uVar13 = vcmp_q(1,*(undefined (*) [16])(iVar7 + 0x40),auVar2);
    if ((uVar13 >> 5 & 1) != 0) {
      iVar7 = FUN_089edb80();
      *(undefined4 *)(iVar7 + 0x40) = 0;
      *(undefined4 *)(iVar7 + 0x44) = 0;
      *(undefined4 *)(iVar7 + 0x48) = 0;
      *(undefined4 *)(iVar7 + 0x4c) = 0;
      uVar3 = FUN_089edb80();
      iVar7 = FUN_089edf70(uVar3);
      if (iVar7 == 0) {
        iVar7 = FUN_089edb80();
        iVar10 = FUN_089edb80();
        uVar3 = *(undefined4 *)(iVar10 + 0x44);
        uVar4 = *(undefined4 *)(iVar10 + 0x48);
        uVar1 = *(undefined4 *)(iVar10 + 0x4c);
        *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar10 + 0x40);
        *(undefined4 *)(iVar7 + 0x24) = uVar3;
        *(undefined4 *)(iVar7 + 0x28) = uVar4;
        *(undefined4 *)(iVar7 + 0x2c) = uVar1;
      }
      else {
        uVar3 = FUN_089edb80();
        FUN_089edf24(uVar3,0x1e);
      }
    }
  }
  iVar7 = DONE_NotZero_DAT_08AAC9E0();
  if (iVar7 != 0) {
    uVar3 = DONE_Get_DAT_08AAC9E0();
    FUN_0880d808(uVar3,0x7eff);
    uVar3 = DONE_Get_DAT_08AAC9E0();
    FUN_0880d0e8(uVar3,1);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  iVar7 = FUN_08816a90();
  if (iVar7 == 0) {
    FUN_08816868();
  }
  iVar7 = FUN_08816aac();
  *(undefined4 *)(iVar7 + 4) = 0x46cb2000;
  return param_1;
}

