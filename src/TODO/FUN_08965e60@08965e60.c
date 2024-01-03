#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08965e60(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 in_V7C;
  int local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50 [4];
  undefined4 local_40;
  float local_3c;
  float local_38;
  
  piVar3 = local_80;
  local_80[0] = 0x40;
  local_80[1] = 8;
  local_80[2] = 0xffffffc0;
  local_80[3] = 8;
  local_70 = 0x48;
  local_6c = 0x1c;
  local_68 = 0xffffffb8;
  local_64 = 0x1c;
  local_60 = 0x48;
  local_5c = 0x1c;
  local_58 = 0xffffffb8;
  local_54 = 0x1c;
  local_50[0] = 0;
  local_50[1] = 0xffffffec;
  local_50[2] = 10;
  local_50[3] = 0x14;
  local_40 = 0xfffffff6;
  if (*(char *)(param_1 + 0x4fb1) == '\0') {
    if (*(byte *)(param_1 + 0x4fb0) == 0) {
      piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
      uVar4 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
      if ((int)uVar4 < 0) {
        uVar7 = -(-uVar4 & 7) & 0x1f;
      }
      else {
        uVar7 = uVar4 & 7;
      }
      if ((((uint)*(byte *)(*piVar2 + ((int)(uVar4 + ((uint)((int)uVar4 >> 3) >> 0x1d)) >> 3) +
                           0x5be) & 1 << uVar7) == 0) || (*(char *)(param_1 + 0x75) != '\0')) {
        iVar9 = 0;
        iVar8 = *(int *)(param_1 + 0x1c);
        do {
          iVar10 = (uint)*(ushort *)(param_1 + 0x517e) + iVar9;
          iVar6 = iVar10 * 4;
          FUN_089f46dc(*(undefined4 *)(iVar8 + iVar6));
          iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) | 0x20;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0xdc) = 2;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0xbc) = 0x3f800000;
          FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
          iVar5 = (int)*(char *)(param_1 + 0x4cdb);
          iVar11 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          iVar8 = *(int *)(*(int *)(param_1 + 0x1c) +
                          ((uint)*(ushort *)(param_1 + 0x5172) + iVar5) * 4);
          if (*(char *)(param_1 + 0x4cda) < '\x03') {
            *(float *)(iVar11 + 0x60) =
                 *(float *)(iVar8 + 0x60) + (float)local_80[iVar5 * 2] +
                 (float)*(int *)((int)piVar3 + 0x30);
            *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 100) =
                 *(float *)(*(int *)(*(int *)(param_1 + 0x1c) +
                                    ((uint)*(ushort *)(param_1 + 0x5172) +
                                    (int)*(char *)(param_1 + 0x4cdb)) * 4) + 100) +
                 (float)local_80[*(char *)(param_1 + 0x4cdb) * 2 + 1];
            iVar8 = *(int *)(param_1 + 0x1c);
          }
          else {
            *(float *)(iVar11 + 0x60) =
                 *(float *)(iVar8 + 0x60) + (float)local_80[iVar5 * 2 + 4] +
                 (float)*(int *)((int)piVar3 + 0x30);
            *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 100) =
                 *(float *)(*(int *)(*(int *)(param_1 + 0x1c) +
                                    ((uint)*(ushort *)(param_1 + 0x5172) +
                                    (int)*(char *)(param_1 + 0x4cdb)) * 4) + 100) +
                 (float)local_80[*(char *)(param_1 + 0x4cdb) * 2 + 5];
            iVar8 = *(int *)(param_1 + 0x1c);
          }
          fVar12 = (float)iVar9;
          iVar11 = param_1 + iVar10 * 0x28;
          *(undefined4 *)(iVar11 + 0x94) = 0;
          *(undefined4 *)(iVar11 + 0x98) = 0x3f800000;
          fVar13 = *(float *)(*(int *)(iVar8 + iVar6) + 100);
          *(char *)(iVar11 + 0x84) = (char)iVar9;
          *(undefined *)(iVar11 + 0x7f) = 0;
          iVar9 = iVar9 + 1;
          piVar3 = (int *)((int)piVar3 + 4);
          *(char *)(iVar11 + 0x83) = (char)(int)(fVar12 * 10.0);
          *(short *)(iVar11 + 0x8e) = (short)(int)fVar13;
        } while (iVar9 < 4);
        *(char *)(param_1 + 0x4fb0) = *(char *)(param_1 + 0x4fb0) + '\x01';
      }
    }
    else if (*(byte *)(param_1 + 0x4fb0) < 2) {
      piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
      uVar4 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
      if ((int)uVar4 < 0) {
        uVar7 = -(-uVar4 & 7) & 0x1f;
      }
      else {
        uVar7 = uVar4 & 7;
      }
      if ((((uint)*(byte *)(*piVar3 + ((int)(uVar4 + ((uint)((int)uVar4 >> 3) >> 0x1d)) >> 3) +
                           0x5be) & 1 << uVar7) == 0) || (*(char *)(param_1 + 0x75) != '\0')) {
        iVar8 = 0;
        uVar1 = *(ushort *)(param_1 + 0x517e);
        while( true ) {
          iVar9 = (uint)uVar1 + iVar8;
          iVar11 = param_1 + iVar9 * 0x28;
          if (*(char *)(iVar11 + 0x83) == '\0') {
            FUN_0895ef0c(param_1,iVar9);
            iVar9 = iVar9 * 4;
            iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
            *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
            fVar13 = *(float *)(iVar11 + 0x94) + 0.025;
            *(float *)(iVar11 + 0x94) = fVar13;
            uVar14 = vmul_s(fVar13 * 3.141593,in_V7C);
            local_3c = (float)vcos_s(uVar14);
            *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0xbc) =
                 *(float *)(iVar11 + 0x98) - (1.0 - local_3c) * 0.5;
            uVar14 = vmul_s(*(float *)(iVar11 + 0x94) * 3.141593,in_V7C);
            local_38 = (float)vcos_s(uVar14);
            *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 100) =
                 (float)(int)*(short *)(iVar11 + 0x8e) - (1.0 - local_38) * 0.5 * 80.0;
            if (1.0 <= *(float *)(iVar11 + 0x94)) {
              uVar1 = *(ushort *)(param_1 + 0x5172);
              *(char *)(iVar11 + 0x84) = *(char *)(iVar11 + 0x84) + '\x01';
              uVar4 = (uint)*(byte *)(iVar11 + 0x84);
              iVar5 = *(int *)(param_1 + 0x1c);
              iVar10 = (int)*(char *)(param_1 + 0x4cdb);
              if (4 < uVar4) {
                *(undefined *)(iVar11 + 0x84) = 0;
                uVar4 = (uint)*(byte *)(iVar11 + 0x84);
              }
              iVar6 = *(int *)(iVar5 + iVar9);
              iVar5 = *(int *)(iVar5 + ((uint)uVar1 + iVar10) * 4);
              if (*(char *)(param_1 + 0x4cda) < '\x03') {
                *(float *)(iVar6 + 0x60) =
                     *(float *)(iVar5 + 0x60) + (float)local_80[iVar10 * 2] + (float)local_50[uVar4]
                ;
                *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 100) =
                     *(float *)(*(int *)(*(int *)(param_1 + 0x1c) +
                                        ((uint)*(ushort *)(param_1 + 0x5172) +
                                        (int)*(char *)(param_1 + 0x4cdb)) * 4) + 100) +
                     (float)local_80[*(char *)(param_1 + 0x4cdb) * 2 + 1];
                iVar5 = *(int *)(param_1 + 0x1c);
              }
              else {
                *(float *)(iVar6 + 0x60) =
                     *(float *)(iVar5 + 0x60) + (float)local_80[iVar10 * 2 + 4] +
                     (float)local_50[uVar4];
                *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 100) =
                     *(float *)(*(int *)(*(int *)(param_1 + 0x1c) +
                                        ((uint)*(ushort *)(param_1 + 0x5172) +
                                        (int)*(char *)(param_1 + 0x4cdb)) * 4) + 100) +
                     (float)local_80[*(char *)(param_1 + 0x4cdb) * 2 + 5];
                iVar5 = *(int *)(param_1 + 0x1c);
              }
              *(undefined4 *)(iVar11 + 0x94) = 0;
              *(undefined4 *)(iVar11 + 0x98) = 0x3f800000;
              *(short *)(iVar11 + 0x8e) = (short)(int)*(float *)(*(int *)(iVar5 + iVar9) + 100);
            }
          }
          else {
            *(char *)(iVar11 + 0x83) = *(char *)(iVar11 + 0x83) + -1;
          }
          iVar8 = iVar8 + 1;
          if (3 < iVar8) break;
          uVar1 = *(ushort *)(param_1 + 0x517e);
        }
      }
      else {
        iVar8 = 0;
        do {
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) +
                          ((uint)*(ushort *)(param_1 + 0x517e) + iVar8) * 4);
          iVar8 = iVar8 + 1;
          *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) & 0xfffffffe;
        } while (iVar8 < 4);
        *(undefined *)(param_1 + 0x4fb0) = 0;
      }
    }
  }
  return;
}

