#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08901958(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint *local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  uint local_30;
  uint local_2c;
  
  uVar1 = FUN_089f2178(0);
  puVar2 = (uint *)FUN_089f1308(uVar1);
  local_50[0] = puVar2;
  puVar3 = (uint *)FUN_0889d4c0();
  *puVar2 = *puVar3 & 0xffffff | 0xcf000000;
  local_30 = puVar3[1];
  puVar2[1] = local_30 >> 8 | 0xcd000000;
  local_2c = puVar3[2];
  local_50[0] = puVar2 + 3;
  puVar2[2] = local_2c >> 8 | 0xce000000;
  iVar7 = param_1 + 0x100;
  local_50[0] = (uint *)FUN_089f1490(local_50[0],iVar7,1);
  local_50[0] = (uint *)FUN_088ff77c(param_1,local_50[0],*(undefined4 *)(param_1 + 0xf0),0);
  local_50[0] = (uint *)FUN_088ff77c(param_1,local_50[0],DAT_08abd5bc,0);
  FUN_089f13c8(uVar1,local_50[0]);
  DAT_08ac601d = DAT_08aba780;
  *(undefined4 *)(param_1 + 0x254) = 0x42a00000;
  DAT_08ab9eb8 = 0;
  FUN_08826304(uVar1);
  DAT_08ab9eb8 = DAT_08aba780;
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_088ffa34(param_1,uVar1,*(int *)(param_1 + 0xe4));
  }
  *(undefined4 *)(param_1 + 0x254) = 0;
  if (0.0001 < *(float *)(param_1 + 0x76c)) {
    FUN_089f2ddc(uVar1,param_1 + 0x760);
  }
  local_50[0] = (uint *)FUN_089f1308(uVar1);
  local_50[0] = (uint *)FUN_089f1490(local_50[0],iVar7,1);
  iVar4 = *(int *)(param_1 + 0x4c4);
  if ((iVar4 != 0) && (0.0 < *(float *)(iVar4 + 0x6c))) {
    (**(code **)(*(int *)(iVar4 + 0x14) + 0x44))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x40),local_50);
  }
  local_50[0] = (uint *)FUN_088ff80c(param_1,local_50[0],param_1 + 0x4f0);
  local_50[0] = (uint *)FUN_088ff77c(param_1,local_50[0],*(undefined4 *)(param_1 + 0x4e0),0);
  FUN_089e2574(local_50,**(undefined4 **)(param_1 + 0xf0),1);
  uVar5 = 0;
  if (DAT_08abd5bc != (undefined4 *)0x0) {
    uVar5 = *DAT_08abd5bc;
  }
  FUN_089e2574(local_50,uVar5,1);
  FUN_089e2574(local_50,*(undefined4 *)(param_1 + 0x4f0),1);
  FUN_089e2574(local_50,**(undefined4 **)(param_1 + 0x4e0),1);
  *(undefined4 *)(param_1 + 0x254) = 0x42480000;
  local_50[0] = (uint *)FUN_089e3014(iVar7,local_50[0],4);
  FUN_089f13c8(uVar1,local_50[0]);
  FUN_089f0a74(uVar1);
  if ((*(byte *)(*(int *)(param_1 + 0xdc) + 4) & 0x20) != 0) {
    DAT_08abff86 = DAT_08abff86 == '\0';
  }
  *(undefined4 *)(param_1 + 0x254) = 0;
  iVar4 = FUN_089054c0(*(undefined4 *)(param_1 + 0x654));
  if (iVar4 == 0) {
    FUN_089f50a0(*(undefined4 *)(param_1 + 0xe0),uVar1,iVar7,0);
    if (*(int *)(param_1 + 0xec) != 0) {
      FUN_089f50a0(*(int *)(param_1 + 0xec),uVar1,iVar7,0);
    }
    FUN_088262bc(uVar1);
    DAT_08ac601d = 0;
    DAT_08ab9eb8 = 0;
    if (*(int *)(param_1 + 0xe8) != 0) {
      FUN_08824ab8(*(int *)(param_1 + 0xe8),uVar1,iVar7);
      FUN_089f50a0(*(undefined4 *)(param_1 + 0xe8),uVar1,iVar7,0);
    }
  }
  uVar1 = FUN_089f2178(0x40000000);
  fVar10 = *(float *)(param_1 + 0x688);
  fVar9 = *(float *)(param_1 + 0x684);
  if ((fVar10 != 0.0) || (fVar9 != 0.0)) {
    fVar8 = (fVar9 - fVar10) * 0.2;
    if (0.1 < fVar8) {
      fVar6 = 0.1;
    }
    else {
      fVar6 = -0.1;
      if (-0.1 <= fVar8) {
        fVar6 = fVar8;
      }
    }
    if (fVar9 < fVar10) {
      fVar6 = *(float *)(param_1 + 0x68c) - 0.002;
      *(float *)(param_1 + 0x68c) = fVar6;
    }
    else {
      *(undefined4 *)(param_1 + 0x68c) = 0;
    }
    fVar10 = fVar10 + fVar6;
    *(float *)(param_1 + 0x688) = fVar10;
    if (fVar10 < 0.0) {
      *(undefined4 *)(param_1 + 0x688) = 0;
      fVar10 = 0.0;
    }
    if (0.0 < fVar10) {
      local_34 = fVar10 * 0.8;
      local_40 = 0x3f800000;
      local_3c = 0x3f800000;
      local_38 = 0x3f800000;
      FUN_089f1be8(uVar1,&local_40,1,0);
    }
  }
  FUN_089f17b0(uVar1,0);
  if (*(char *)(param_1 + 0x758) != '\0') {
    FUN_089f31d4(0x43700000,0x43080000,0x42f00000,0x42880000,0x3f000000,uVar1,&DAT_08b00190);
  }
  FUN_08826328(uVar1);
  DAT_08ac601d = 1;
  DAT_08ab9eb8 = 1;
  FUN_089f1458(uVar1);
  FUN_089f303c(uVar1,&DAT_08a99d84,&DAT_08a99d8c,1,2);
  FUN_089f303c(uVar1,&DAT_08a99d88,&DAT_08a99d94,1,3);
  uVar1 = FUN_089f2178(0x44834000);
  if (0.0 < *(float *)(param_1 + 0x67c)) {
    FUN_089f2ddc(uVar1,param_1 + 0x670);
  }
  return;
}

