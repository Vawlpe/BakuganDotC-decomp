#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a023b0(int param_1)

{
  byte bVar1;
  undefined auVar2 [64];
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  
  if (*(char *)(param_1 + 0xe4) == '\0') {
    iVar8 = *(int *)(param_1 + 0x20);
    if (iVar8 != 0) {
      uVar7 = *(uint *)(param_1 + 0x9c);
      if (uVar7 <= *(ushort *)(iVar8 + 10)) {
        uVar3 = *(ushort *)(iVar8 + 8);
        uVar5 = 0;
        puVar6 = *(ushort **)(param_1 + 0xa0);
        if (uVar3 != 0) {
          do {
            if (uVar7 < *puVar6) break;
            uVar7 = *(uint *)(param_1 + 0x9c);
            if (uVar7 == *puVar6) {
              pfVar10 = (float *)(puVar6 + 2);
              if (*(int *)(param_1 + 0x94) == 0) {
                fVar12 = (float)(uint)*(ushort *)(*(int *)(param_1 + 0x28) + 4) * 2.0;
                fVar11 = (float)(uint)*(ushort *)(*(int *)(param_1 + 0x28) + 6) * 2.0;
              }
              else {
                fVar12 = 1.0;
                fVar11 = 1.0;
              }
              bVar1 = *(byte *)(puVar6 + 1);
              if (bVar1 < 5) {
                if (bVar1 == 1) {
                  iVar4 = *(int *)(param_1 + 0x28);
                  if (*(short *)(iVar4 + 0xc) == 1) {
                    *(float *)(param_1 + 0x60) =
                         *(float *)(param_1 + 0x60) + (float)(int)*(short *)(iVar4 + 8);
                    *(float *)(param_1 + 100) =
                         *(float *)(param_1 + 100) + (float)(int)*(short *)(iVar4 + 10);
                    fVar15 = *pfVar10;
                  }
                  else {
                    fVar15 = *pfVar10;
                  }
                  *(float *)(param_1 + 0x30) = fVar15 * fVar12;
                  *(float *)(param_1 + 0x40) = *(float *)(puVar6 + 4) * fVar11;
                  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(puVar6 + 6);
                  *(float *)(param_1 + 0x34) = *(float *)(puVar6 + 8) * fVar12;
                  *(float *)(param_1 + 0x44) = *(float *)(puVar6 + 10) * fVar11;
                  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(puVar6 + 0xc);
                  uVar3 = *(ushort *)(iVar8 + 8);
                }
                else if (bVar1 == 2) {
                  uVar13 = *(undefined4 *)(puVar6 + 4);
                  uVar16 = *(undefined4 *)(puVar6 + 6);
                  uVar14 = *(undefined4 *)(puVar6 + 8);
                  *(float *)(param_1 + 0x70) = *pfVar10;
                  *(undefined4 *)(param_1 + 0x74) = uVar13;
                  *(undefined4 *)(param_1 + 0x78) = uVar16;
                  *(undefined4 *)(param_1 + 0x7c) = uVar14;
                  uVar3 = *(ushort *)(iVar8 + 8);
                }
                else if (bVar1 == 3) {
                  uVar13 = *(undefined4 *)(puVar6 + 4);
                  uVar16 = *(undefined4 *)(puVar6 + 6);
                  uVar14 = *(undefined4 *)(puVar6 + 8);
                  *(float *)(param_1 + 0x80) = *pfVar10;
                  *(undefined4 *)(param_1 + 0x84) = uVar13;
                  *(undefined4 *)(param_1 + 0x88) = uVar16;
                  *(undefined4 *)(param_1 + 0x8c) = uVar14;
                  uVar3 = *(ushort *)(iVar8 + 8);
                }
                else {
                  if (bVar1 == 4) {
                    *(undefined *)(param_1 + 0xe4) = 1;
                    return;
                  }
                  auVar2 = vmidt_q();
                  *(int *)(param_1 + 0x30) = auVar2._0_4_;
                  *(int *)(param_1 + 0x34) = auVar2._16_4_;
                  *(int *)(param_1 + 0x38) = auVar2._32_4_;
                  *(int *)(param_1 + 0x3c) = auVar2._48_4_;
                  *(int *)(param_1 + 0x40) = auVar2._4_4_;
                  *(int *)(param_1 + 0x44) = auVar2._20_4_;
                  *(int *)(param_1 + 0x48) = auVar2._36_4_;
                  *(int *)(param_1 + 0x4c) = auVar2._52_4_;
                  *(int *)(param_1 + 0x50) = auVar2._8_4_;
                  *(int *)(param_1 + 0x54) = auVar2._24_4_;
                  *(int *)(param_1 + 0x58) = auVar2._40_4_;
                  *(int *)(param_1 + 0x5c) = auVar2._56_4_;
                  *(int *)(param_1 + 0x60) = auVar2._12_4_;
                  *(int *)(param_1 + 100) = auVar2._28_4_;
                  *(int *)(param_1 + 0x68) = auVar2._44_4_;
                  *(int *)(param_1 + 0x6c) = auVar2._60_4_;
                  iVar4 = *(int *)(param_1 + 0x28);
                  iVar8 = *(int *)(param_1 + 0x20);
                  if (*(short *)(iVar4 + 0xc) == 1) {
                    *(float *)(param_1 + 0x60) =
                         *(float *)(param_1 + 0x60) + (float)(int)*(short *)(iVar4 + 8);
                    *(float *)(param_1 + 100) =
                         *(float *)(param_1 + 100) + (float)(int)*(short *)(iVar4 + 10);
                  }
                  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) * fVar12;
                  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) * fVar11;
                  *(float *)(param_1 + 0x60) = *pfVar10;
                  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(puVar6 + 4);
                  uVar3 = *(ushort *)(iVar8 + 8);
                }
                uVar9 = (uint)*(byte *)((int)puVar6 + 3);
              }
              else {
                uVar9 = (uint)*(byte *)((int)puVar6 + 3);
              }
            }
            else {
              uVar9 = (uint)*(byte *)((int)puVar6 + 3);
            }
            uVar5 = uVar5 + 1;
            puVar6 = (ushort *)((int)puVar6 + uVar9 + 4);
          } while (uVar5 < uVar3);
          uVar7 = *(uint *)(param_1 + 0x9c);
        }
        *(ushort **)(param_1 + 0xa0) = puVar6;
      }
      *(uint *)(param_1 + 0x9c) = uVar7 + 1;
    }
  }
  else if (param_1 != 0) {
    (**(code **)(*(int *)(param_1 + 0x14) + 0xc))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 8),3);
    return;
  }
  return;
}

