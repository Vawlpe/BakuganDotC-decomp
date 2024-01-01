#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895a03c(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  
  uVar9 = 0;
  iVar10 = param_1;
  iVar12 = param_1;
  do {
    if (*(char *)(iVar10 + 0x4f34) != '\0') {
      bVar1 = *(byte *)(iVar10 + 0x4f35);
      if (bVar1 < 5) {
        if (bVar1 == 1) {
          iVar11 = param_1 + uVar9;
          FUN_089f4a90(0,(float)(uint)*(byte *)(iVar10 + 0x4f37),
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4));
          iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4);
          *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
          FUN_089f46dc(*(undefined4 *)
                        (*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4));
          iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4);
          *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 0x20;
          FUN_089a51fc(0x3f99999a,0x3f99999a,0,
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4));
          bVar1 = *(byte *)(iVar11 + 0x4f68);
          iVar6 = *(int *)(param_1 + 0x1c);
          *(undefined4 *)(param_1 + (uint)bVar1 * 0x28 + 0x94) = 0;
          bVar2 = *(byte *)(iVar11 + 0x4f68);
          *(undefined4 *)(*(int *)(iVar6 + (uint)bVar1 * 4) + 0xbc) = 0;
          iVar8 = *(int *)(param_1 + 0x1c);
          iVar6 = param_1 + (uint)bVar2 * 0x28;
          *(undefined4 *)(iVar6 + 0x98) = 0;
          piVar5 = (int *)(iVar8 + (uint)bVar2 * 4);
          fVar15 = *(float *)(iVar12 + 0x4ed4);
          *(undefined4 *)(iVar6 + 0x9c) = *(undefined4 *)(*piVar5 + 0x90);
          iVar6 = *piVar5;
          if ((uVar9 & 1) == 0) {
            *(float *)(iVar6 + 0x60) = fVar15 - 64.0;
            uVar4 = (uint)*(byte *)(iVar11 + 0x4f68);
            uVar3 = *(undefined *)(iVar10 + 0x4f36);
            iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + uVar4 * 4);
            uVar14 = *(undefined4 *)(iVar12 + 0x4ed4);
            puVar7 = (undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f6c) * 4)
            ;
          }
          else {
            *(float *)(iVar6 + 0x60) = fVar15 + 64.0;
            FUN_089f4c84(*(undefined4 *)
                          (*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4));
            uVar4 = (uint)*(byte *)(iVar11 + 0x4f68);
            uVar3 = *(undefined *)(iVar10 + 0x4f36);
            iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + uVar4 * 4);
            uVar14 = *(undefined4 *)(iVar12 + 0x4ed4);
            puVar7 = (undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f6c) * 4)
            ;
          }
          iVar8 = param_1 + uVar4 * 0x28;
          uVar13 = *(undefined4 *)(iVar6 + 0x60);
          *(undefined4 *)(iVar8 + 0x90) = uVar14;
          *(undefined4 *)(iVar8 + 0x8c) = uVar13;
          FUN_0892bd88(*puVar7,uVar3);
          iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f6c) * 4);
          *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
          FUN_089f46dc(*(undefined4 *)
                        (*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f6c) * 4));
          iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f6c) * 4);
          *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 0x20;
          FUN_089a51fc(0x3f99999a,0x3f99999a,0,
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f6c) * 4));
          FUN_089f4a90((float)(*(byte *)(iVar10 + 0x4f37) / 3),
                       (float)((uint)*(byte *)(iVar10 + 0x4f37) % 3),
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f70) * 4));
          iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f70) * 4);
          *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
          FUN_089f46dc(*(undefined4 *)
                        (*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f70) * 4));
          iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f70) * 4);
          *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 0x20;
          FUN_089a51fc(0x3f99999a,0x3f99999a,0,
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f70) * 4));
          *(char *)(iVar10 + 0x4f35) = *(char *)(iVar10 + 0x4f35) + '\x01';
        }
        else if (bVar1 == 2) {
          iVar11 = param_1 + uVar9;
          bVar1 = *(byte *)(iVar11 + 0x4f68);
          iVar6 = param_1 + (uint)bVar1 * 0x28;
          fVar15 = *(float *)(iVar6 + 0x94) + 0.125;
          iVar8 = *(int *)(param_1 + 0x1c);
          fVar16 = fVar15 - 1.0;
          *(float *)(iVar6 + 0x94) = fVar15;
          *(float *)(*(int *)(iVar8 + (uint)bVar1 * 4) + 0xbc) =
               *(float *)(iVar6 + 0x98) + (1.0 - fVar16 * fVar16);
          iVar6 = param_1 + (uint)*(byte *)(iVar11 + 0x4f68) * 0x28;
          fVar15 = *(float *)(iVar6 + 0x94) - 1.0;
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) +
                    0x90) = *(float *)(iVar6 + 0x9c) - (1.0 - fVar15 * fVar15) * 0.2;
          iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4);
          iVar8 = param_1 + (uint)*(byte *)(iVar11 + 0x4f68) * 0x28;
          fVar15 = *(float *)(iVar8 + 0x94);
          fVar16 = *(float *)(iVar8 + 0x8c);
          if ((uVar9 & 1) == 0) {
            fVar15 = fVar15 - 1.0;
            *(float *)(iVar6 + 0x60) = fVar16 + (1.0 - fVar15 * fVar15) * 64.0;
            iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4);
            fVar15 = *(float *)(param_1 + (uint)*(byte *)(iVar11 + 0x4f68) * 0x28 + 0x94);
          }
          else {
            fVar15 = fVar15 - 1.0;
            *(float *)(iVar6 + 0x60) = fVar16 - (1.0 - fVar15 * fVar15) * 64.0;
            iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4);
            fVar15 = *(float *)(param_1 + (uint)*(byte *)(iVar11 + 0x4f68) * 0x28 + 0x94);
          }
          if (1.0 <= fVar15) {
            *(undefined4 *)(iVar6 + 0xbc) = 0x3f800000;
            *(undefined4 *)
             (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) + 0x90) =
                 0x3f800000;
            *(undefined4 *)
             (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) + 0x60) =
                 *(undefined4 *)(iVar12 + 0x4ed4);
            bVar1 = *(byte *)(iVar11 + 0x4f68);
            iVar6 = *(int *)(param_1 + 0x1c);
            *(undefined *)(iVar10 + 0x4f35) = 5;
            iVar6 = *(int *)(iVar6 + (uint)bVar1 * 4);
          }
          *(undefined4 *)(iVar6 + 0x94) = *(undefined4 *)(iVar6 + 0x90);
          iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4);
          FUN_089f4954(*(undefined4 *)(iVar6 + 0x90),*(undefined4 *)(iVar6 + 0x94),
                       *(undefined4 *)(iVar6 + 0x9c),iVar6,0);
          *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f6c) * 4) + 0xbc) =
               *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) + 0xbc);
          *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f6c) * 4) + 0x90) =
               *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) + 0x90);
          *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f6c) * 4) + 0x94) =
               *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) + 0x94);
          iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f6c) * 4);
          FUN_089f4954(*(undefined4 *)(iVar6 + 0x90),*(undefined4 *)(iVar6 + 0x94),
                       *(undefined4 *)(iVar6 + 0x9c),iVar6,0);
          *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f70) * 4) + 0xbc) =
               *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) + 0xbc);
          *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f70) * 4) + 0x90) =
               *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) + 0x90);
          *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f70) * 4) + 0x94) =
               *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) + 0x94);
          iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f70) * 4);
          FUN_089f4954(*(undefined4 *)(iVar6 + 0x90),*(undefined4 *)(iVar6 + 0x94),
                       *(undefined4 *)(iVar6 + 0x9c),iVar6,0);
        }
        else if (bVar1 == 3) {
          uVar4 = (uint)*(byte *)(param_1 + uVar9 + 0x4f68);
          iVar6 = *(int *)(param_1 + 0x1c);
          iVar8 = param_1 + uVar4 * 0x28;
          *(undefined4 *)(iVar8 + 0x94) = 0;
          piVar5 = (int *)(iVar6 + uVar4 * 4);
          *(undefined4 *)(iVar8 + 0x98) = *(undefined4 *)(*piVar5 + 0xbc);
          *(undefined4 *)(iVar8 + 0x9c) = *(undefined4 *)(*piVar5 + 0x90);
          uVar14 = *(undefined4 *)(iVar12 + 0x4ed4);
          *(undefined4 *)(iVar8 + 0x8c) = *(undefined4 *)(*piVar5 + 0x60);
          *(undefined4 *)(iVar8 + 0x90) = uVar14;
          *(undefined *)(iVar10 + 0x4f35) = 4;
        }
        else if (bVar1 == 4) {
          iVar11 = param_1 + uVar9;
          bVar1 = *(byte *)(iVar11 + 0x4f68);
          iVar6 = param_1 + (uint)bVar1 * 0x28;
          fVar15 = *(float *)(iVar6 + 0x94) + 0.125;
          iVar8 = *(int *)(param_1 + 0x1c);
          *(float *)(iVar6 + 0x94) = fVar15;
          *(float *)(*(int *)(iVar8 + (uint)bVar1 * 4) + 0xbc) =
               *(float *)(iVar6 + 0x98) - fVar15 * fVar15;
          iVar6 = param_1 + (uint)*(byte *)(iVar11 + 0x4f68) * 0x28;
          fVar15 = *(float *)(iVar6 + 0x94);
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) +
                    0x90) = *(float *)(iVar6 + 0x9c) + fVar15 * fVar15 * 0.2;
          iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4);
          iVar8 = param_1 + (uint)*(byte *)(iVar11 + 0x4f68) * 0x28;
          fVar16 = *(float *)(iVar8 + 0x94);
          fVar15 = *(float *)(iVar8 + 0x8c);
          if ((uVar9 & 1) == 0) {
            *(float *)(iVar6 + 0x60) = fVar15 - fVar16 * fVar16 * 64.0;
            iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4);
            fVar15 = *(float *)(param_1 + (uint)*(byte *)(iVar11 + 0x4f68) * 0x28 + 0x94);
          }
          else {
            *(float *)(iVar6 + 0x60) = fVar15 + fVar16 * fVar16 * 64.0;
            iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4);
            fVar15 = *(float *)(param_1 + (uint)*(byte *)(iVar11 + 0x4f68) * 0x28 + 0x94);
          }
          if (1.0 <= fVar15) {
            *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
            iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f6c) * 4);
            *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
            iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f70) * 4);
            *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
            bVar1 = *(byte *)(iVar11 + 0x4f68);
            iVar6 = *(int *)(param_1 + 0x1c);
            *(undefined *)(iVar10 + 0x4f35) = 5;
            iVar6 = *(int *)(iVar6 + (uint)bVar1 * 4);
          }
          *(undefined4 *)(iVar6 + 0x94) = *(undefined4 *)(iVar6 + 0x90);
          iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4);
          FUN_089f4954(*(undefined4 *)(iVar6 + 0x90),*(undefined4 *)(iVar6 + 0x94),
                       *(undefined4 *)(iVar6 + 0x9c),iVar6,0);
          *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f6c) * 4) + 0xbc) =
               *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) + 0xbc);
          *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f6c) * 4) + 0x90) =
               *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) + 0x90);
          *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f6c) * 4) + 0x94) =
               *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) + 0x94);
          iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f6c) * 4);
          FUN_089f4954(*(undefined4 *)(iVar6 + 0x90),*(undefined4 *)(iVar6 + 0x94),
                       *(undefined4 *)(iVar6 + 0x9c),iVar6,0);
          *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f70) * 4) + 0xbc) =
               *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) + 0xbc);
          *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f70) * 4) + 0x90) =
               *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) + 0x90);
          *(undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f70) * 4) + 0x94) =
               *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f68) * 4) + 0x94);
          iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar11 + 0x4f70) * 4);
          FUN_089f4954(*(undefined4 *)(iVar6 + 0x90),*(undefined4 *)(iVar6 + 0x94),
                       *(undefined4 *)(iVar6 + 0x9c),iVar6,0);
        }
        else if (*(char *)(iVar10 + 0x4f36) == '\0') {
          *(undefined *)(iVar10 + 0x4f35) = 3;
        }
        else {
          *(byte *)(iVar10 + 0x4f35) = bVar1 + 1;
        }
      }
      else {
        *(undefined *)(iVar10 + 0x4f34) = 0;
      }
    }
    uVar9 = uVar9 + 1;
    iVar10 = iVar10 + 0xc;
    iVar12 = iVar12 + 8;
  } while ((int)uVar9 < 4);
  return;
}

