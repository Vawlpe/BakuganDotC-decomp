#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x088f3014)

bool FUN_088f2fd4(int param_1)

{
  byte bVar1;
  undefined auVar2 [12];
  undefined auVar3 [12];
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined4 in_V7D;
  undefined8 uVar13;
  
  bVar1 = *(byte *)(param_1 + 0xc);
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
  if (bVar1 == 0) {
    piVar10 = *(int **)(param_1 + 4);
    iVar11 = piVar10[6];
    iVar6 = piVar10[3] - iVar11;
    iVar7 = piVar10[4];
    iVar9 = piVar10[7];
    iVar5 = piVar10[5];
    iVar8 = piVar10[8];
    uVar12 = ((uint)*(ushort *)(param_1 + 10) << 0xc) / (uint)*(ushort *)(param_1 + 8);
    uVar13 = FUN_08a0d1f4(uVar12,0,iVar6,iVar6 >> 0x1f);
    *piVar10 = ((int)((ulonglong)uVar13 >> 0x20) << 0x14 | (uint)uVar13 >> 0xc) + iVar11;
    uVar13 = FUN_08a0d1f4(uVar12,0,iVar7 - iVar9,iVar7 - iVar9 >> 0x1f);
    piVar10[1] = ((int)((ulonglong)uVar13 >> 0x20) << 0x14 | (uint)uVar13 >> 0xc) + piVar10[7];
    uVar13 = FUN_08a0d1f4(uVar12,0,iVar5 - iVar8,iVar5 - iVar8 >> 0x1f);
    piVar10[2] = ((int)((ulonglong)uVar13 >> 0x20) << 0x14 | (uint)uVar13 >> 0xc) + piVar10[8];
    iVar5 = DAT_08ac5c90;
    piVar10 = *(int **)(param_1 + 4);
    auVar3._4_4_ = (float)piVar10[1] * 0.0002441406;
    auVar3._0_4_ = (float)*piVar10 * 0.0002441406;
    auVar3._8_4_ = (float)piVar10[2] * 0.0002441406;
    auVar2 = vscl_t(auVar3,0x41a00000);
    *(int *)(DAT_08ac5c90 + 0x50) = auVar2._0_4_;
    *(int *)(iVar5 + 0x54) = auVar2._4_4_;
    *(int *)(iVar5 + 0x58) = auVar2._8_4_;
    *(undefined4 *)(iVar5 + 0x5c) = in_V7D;
    uVar4 = *(ushort *)(param_1 + 10);
  }
  else if (bVar1 < 2) {
    iVar5 = *(int *)(param_1 + 4);
    iVar7 = *(int *)(iVar5 + 0x48);
    iVar6 = *(int *)(iVar5 + 0x3c) - iVar7;
    iVar8 = *(int *)(iVar5 + 0x40) - *(int *)(iVar5 + 0x4c);
    iVar9 = *(int *)(iVar5 + 0x44) - *(int *)(iVar5 + 0x50);
    uVar12 = ((uint)*(ushort *)(param_1 + 10) << 0xc) / (uint)*(ushort *)(param_1 + 8);
    uVar13 = FUN_08a0d1f4(uVar12,0,iVar6,iVar6 >> 0x1f);
    *(uint *)(iVar5 + 0x30) =
         ((int)((ulonglong)uVar13 >> 0x20) << 0x14 | (uint)uVar13 >> 0xc) + iVar7;
    uVar13 = FUN_08a0d1f4(uVar12,0,iVar8,iVar8 >> 0x1f);
    *(uint *)(iVar5 + 0x34) =
         ((int)((ulonglong)uVar13 >> 0x20) << 0x14 | (uint)uVar13 >> 0xc) + *(int *)(iVar5 + 0x4c);
    uVar13 = FUN_08a0d1f4(uVar12,0,iVar9,iVar9 >> 0x1f);
    *(uint *)(iVar5 + 0x38) =
         ((int)((ulonglong)uVar13 >> 0x20) << 0x14 | (uint)uVar13 >> 0xc) + *(int *)(iVar5 + 0x50);
    iVar5 = DAT_08ac5c90;
    iVar6 = *(int *)(param_1 + 4);
    auVar2._4_4_ = (float)*(int *)(iVar6 + 0x34) * 0.0002441406;
    auVar2._0_4_ = (float)*(int *)(iVar6 + 0x30) * 0.0002441406;
    auVar2._8_4_ = (float)*(int *)(iVar6 + 0x38) * 0.0002441406;
    auVar2 = vscl_t(auVar2,0x41a00000);
    *(int *)(DAT_08ac5c90 + 0x60) = auVar2._0_4_;
    *(int *)(iVar5 + 100) = auVar2._4_4_;
    *(int *)(iVar5 + 0x68) = auVar2._8_4_;
    *(undefined4 *)(iVar5 + 0x6c) = in_V7D;
    uVar4 = *(ushort *)(param_1 + 10);
  }
  else if (bVar1 < 3) {
    iVar5 = *(int *)(param_1 + 4);
    *(ushort *)(iVar5 + 0x60) =
         *(ushort *)(iVar5 + 100) +
         (short)((int)(((uint)*(ushort *)(iVar5 + 0x62) - (uint)*(ushort *)(iVar5 + 100)) *
                      (uint)*(ushort *)(param_1 + 10)) / (int)(uint)*(ushort *)(param_1 + 8));
    *(float *)(DAT_08ac5c90 + 0x158) = (float)(uint)*(ushort *)(*(int *)(param_1 + 4) + 0x60);
    uVar4 = *(ushort *)(param_1 + 10);
  }
  else {
    uVar4 = *(ushort *)(param_1 + 10);
  }
  return *(ushort *)(param_1 + 8) <= uVar4;
}

