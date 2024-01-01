#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f4380(int param_1,undefined4 param_2,undefined param_3,undefined param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  undefined auStack_a0 [128];
  
  FUN_089b4c84(auStack_a0,"f%01d_%02d.cset",param_2,param_3);
  uVar1 = FUN_089be1b8(DAT_08ac520c,auStack_a0);
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar3 = FUN_089d7d74(uVar1,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  uVar2 = FUN_089be054(DAT_08ac520c,auStack_a0);
  memcpy_jak(uVar3,uVar2,uVar1);
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x84);
  uVar9 = 0;
  pfVar10 = (float *)(*(int *)(param_1 + 0x84) + 4);
  do {
    fVar12 = *pfVar10 * 4096.0;
    if (0.0 < *pfVar10) {
      fVar12 = fVar12 + 0.5;
    }
    else {
      fVar12 = fVar12 - 0.5;
    }
    *pfVar10 = (float)(int)fVar12;
    fVar12 = pfVar10[1] * 4096.0;
    if (0.0 < pfVar10[1]) {
      fVar12 = fVar12 + 0.5;
    }
    else {
      fVar12 = fVar12 - 0.5;
    }
    pfVar10[1] = (float)(int)fVar12;
    fVar12 = pfVar10[2] * 4096.0;
    if (0.0 < pfVar10[2]) {
      fVar12 = fVar12 + 0.5;
    }
    else {
      fVar12 = fVar12 - 0.5;
    }
    pfVar10[2] = (float)(int)fVar12;
    uVar9 = uVar9 + 1 & 0xff;
    *(short *)(pfVar10 + 3) =
         (short)(int)((float)(uint)*(ushort *)(pfVar10 + 3) * 65536.0 * 0.002777778);
    uVar6 = **(uint **)(param_1 + 0x80);
    pfVar10 = pfVar10 + 0xb;
  } while (uVar9 < uVar6);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  pbVar4 = (byte *)FUN_089d7d74(uVar6,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  uVar9 = 0;
  iVar11 = *(int *)(param_1 + 0x80) + 4;
  do {
    iVar5 = FUN_088f5124(iVar11);
    if (iVar5 == 0) {
      puVar7 = *(uint **)(param_1 + 0x80);
    }
    else {
      pbVar4[*(byte *)(param_1 + 0xc9)] = (byte)uVar9;
      *(char *)(param_1 + 0xc9) = *(char *)(param_1 + 0xc9) + '\x01';
      puVar7 = *(uint **)(param_1 + 0x80);
    }
    uVar9 = uVar9 + 1 & 0xff;
    iVar11 = iVar11 + 0x2c;
  } while (uVar9 < *puVar7);
  uVar9 = 0;
  pbVar8 = pbVar4;
  do {
    FUN_088f40e4(param_1,uVar9,(uint)*pbVar8,*(int *)(param_1 + 0x80) + (uint)*pbVar8 * 0x2c + 4,
                 param_4);
    uVar9 = uVar9 + 1 & 0xff;
    pbVar8 = pbVar4 + uVar9;
  } while (uVar9 < *(byte *)(param_1 + 0xc9));
  FUN_089d8634();
  FUN_089d7fd8(pbVar4,0,0);
  FUN_089d866c();
  FUN_088f4320(param_1);
  return;
}

