#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889adb4(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined auStack_80 [40];
  undefined2 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  
  FUN_089b4c84(auStack_80,"ComScript%02d.bin",param_2);
  puVar1 = (undefined *)FUN_089be054(DAT_08ac520c,auStack_80);
  *(undefined *)(param_1 + 2) = *puVar1;
  *(undefined *)(param_1 + 3) = puVar1[1];
  *(undefined *)(param_1 + 4) = puVar1[2];
  *(undefined *)(param_1 + 5) = puVar1[3];
  *(undefined *)(param_1 + 6) = puVar1[4];
  local_58 = *(undefined2 *)(puVar1 + 5);
  *(undefined2 *)(param_1 + 8) = local_58;
  puVar12 = (undefined4 *)(puVar1 + 8);
  *(undefined *)(param_1 + 10) = puVar1[7];
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar3 = FUN_089d7d74(0x20,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  iVar13 = 0;
  iVar14 = 0;
  do {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar14);
    if (iVar13 < *(short *)(param_1 + 8)) {
      local_54 = *puVar12;
      *puVar4 = local_54;
      local_30 = *(int *)(*(int *)(param_1 + 0xc) + iVar14);
      local_2c = 0;
      iVar6 = local_30 * 0x48;
      puVar12 = puVar12 + 1;
      FUN_089d8634();
      uVar2 = FUN_089d81a4();
      FUN_089d816c(1);
      local_34 = FUN_089d7d74(iVar6 + 0x10,0,0);
      FUN_089d816c(uVar2);
      FUN_089d866c();
      if (local_34 != 0) {
        local_2c = FUN_08a02cb4(local_34 + DAT_08af1178,local_30,0x48,&LAB_08a2a9a8,0);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar14 + 4) = local_2c;
      iVar6 = 0;
      piVar5 = (int *)(*(int *)(param_1 + 0xc) + iVar14);
      iVar7 = 0;
      if (0 < *piVar5) {
        do {
          local_50 = *(undefined2 *)puVar12;
          puVar8 = (undefined2 *)(piVar5[1] + iVar7);
          *puVar8 = local_50;
          *(undefined *)(puVar8 + 1) = *(undefined *)((int)puVar12 + 2);
          *(undefined *)((int)puVar8 + 3) = *(undefined *)((int)puVar12 + 3);
          local_4e = *(undefined2 *)(puVar12 + 1);
          puVar8[2] = local_4e;
          local_4c = *(undefined2 *)((int)puVar12 + 6);
          puVar8[3] = local_4c;
          *(undefined *)(puVar8 + 4) = *(undefined *)(puVar12 + 2);
          *(undefined *)((int)puVar8 + 9) = *(undefined *)((int)puVar12 + 9);
          uVar11 = *(undefined *)((int)puVar12 + 10);
          iVar9 = 0;
          puVar4 = (undefined4 *)((int)puVar12 + 0xb);
          puVar10 = puVar8;
          do {
            puVar12 = puVar4;
            *(undefined *)(puVar10 + 6) = uVar11;
            local_48 = *puVar12;
            *(undefined4 *)(puVar10 + 8) = local_48;
            *(undefined *)(puVar10 + 10) = *(undefined *)(puVar12 + 1);
            iVar9 = iVar9 + 1;
            uVar11 = *(undefined *)((int)puVar12 + 5);
            puVar10 = puVar10 + 6;
            puVar4 = (undefined4 *)((int)puVar12 + 6);
          } while (iVar9 < 3);
          *(undefined *)(puVar8 + 0x18) = uVar11;
          local_44 = *(undefined4 *)((int)puVar12 + 6);
          *(undefined4 *)(puVar8 + 0x1a) = local_44;
          local_40 = *(undefined4 *)((int)puVar12 + 10);
          *(undefined4 *)(puVar8 + 0x1c) = local_40;
          *(undefined *)(puVar8 + 0x1e) = *(undefined *)((int)puVar12 + 0xe);
          *(undefined *)((int)puVar8 + 0x3d) = *(undefined *)((int)puVar12 + 0xf);
          local_3c = *(undefined2 *)(puVar12 + 4);
          puVar8[0x20] = local_3c;
          local_38 = *(undefined4 *)((int)puVar12 + 0x12);
          iVar6 = iVar6 + 1;
          *(undefined4 *)(puVar8 + 0x22) = local_38;
          puVar12 = (undefined4 *)((int)puVar12 + 0x16);
          piVar5 = (int *)(*(int *)(param_1 + 0xc) + iVar14);
          iVar7 = iVar7 + 0x48;
        } while (iVar6 < *piVar5);
      }
    }
    else {
      *puVar4 = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar14 + 4) = 0;
    }
    iVar13 = iVar13 + 1;
    iVar14 = iVar14 + 8;
  } while (iVar13 < 4);
  return;
}

