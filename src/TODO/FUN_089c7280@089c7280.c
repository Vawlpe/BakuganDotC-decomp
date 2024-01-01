#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089c7280(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *param_1 = 0x100;
  param_1[1] = 0x400;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x38,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar6 = 0;
  if (iVar2 != 0) {
    FUN_089bb5dc(iVar2,"COSound_Bgm",2);
    iVar6 = iVar2;
  }
  param_1[0x22f4] = iVar6;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x38,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar6 = 0;
  if (iVar2 != 0) {
    FUN_089bb5dc(iVar2,"COSound_Se",2);
    iVar6 = iVar2;
  }
  param_1[0x22f5] = iVar6;
  param_1[2] = 1;
  param_1[6] = 0;
  *(undefined *)(param_1 + 7) = 0;
  *(undefined *)((int)param_1 + 0x1d) = 0;
  *(undefined *)(DAT_08ac5870 + 1) = 0x7f;
  *(undefined *)((int)DAT_08ac5870 + 5) = 0x40;
  *(undefined *)((int)DAT_08ac5870 + 6) = 0x7f;
  *(undefined *)((int)DAT_08ac5870 + 7) = 0x40;
  iVar6 = 0;
  DAT_08ac5870[2] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0x10000;
  puVar5 = param_1;
  do {
    puVar5[0x28] = 0;
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar6 < 0x20);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar3 = FUN_089d7d74(0x100,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar6 = 0;
  *DAT_08ac5870 = uVar3;
  puVar5 = param_1;
  do {
    puVar5[0x278] = 0xffffffff;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0x44,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar2 = 0;
    if (iVar4 != 0) {
      FUN_089bd9b4(iVar4);
      iVar2 = iVar4;
    }
    puVar5[0x279] = iVar2;
    FUN_089d8d28();
    *(undefined *)(puVar5[0x279] + 0x28) = 0;
    *(undefined2 *)(puVar5 + 0x27c) = 0;
    puVar5[0x27a] = 1;
    puVar5[0x27b] = 0;
    puVar5[0x275] = 0;
    puVar5[0x276] = 0;
    puVar5[0x277] = 0;
    *(undefined *)(puVar5 + 0x27e) = 0;
    *(undefined *)((int)puVar5 + 0x9f9) = 0;
    puVar5[0x174] = 0;
    puVar5[0x27f] = 0xffffffff;
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 0x10c;
  } while (iVar6 < 0x20);
  memset_jak((undefined *)(param_1 + 0x74),0,0x400);
  iVar6 = 0;
  puVar5 = param_1;
  do {
    puVar5[0x74] = 0;
    puVar5[0x77] = 0xffffffff;
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 8;
  } while (iVar6 < 0x20);
  FUN_089c5b6c(0x3f800000,param_1);
  FUN_089c5cfc(0x3f333333,param_1);
  FUN_089c5dac(0x3f800000,param_1);
  iVar6 = 0;
  puVar5 = param_1;
  do {
    puVar5[0x6b] = 0x3f800000;
    puVar5[0x6a] = 0x3f800000;
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 2;
  } while (iVar6 < 5);
  DAT_08ac5870[0x84] = 0;
  DAT_08ac5870[0x85] = 0;
  DAT_08ac5870[0x86] = 0;
  *(undefined *)(param_1 + 0x22f9) = 0;
  *(undefined *)((int)param_1 + 0x8be5) = 0;
  return param_1;
}

