#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_089c7f30(int param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined local_50;
  
  iVar7 = 0;
  local_50 = 0;
  iVar8 = 0;
  iVar5 = param_1;
  do {
    if (*(int *)(iVar5 + 0x1d0) != 0) {
      iVar4 = *(int *)(iVar5 + 0x1dc);
      bVar2 = false;
      if ((iVar4 != -1) && (iVar3 = FUN_08a20cbc(), iVar7 = iVar4, iVar3 == 0)) {
        bVar2 = true;
      }
      if (bVar2) {
        uVar6 = *(uint *)(iVar5 + 0x1d0) >> 0x1c & 7;
        iVar4 = param_1 + uVar6 * 8;
        fVar11 = *(float *)(iVar4 + 0x1ac);
        *(ushort *)(iVar5 + 0x1d6) = *(ushort *)(iVar5 + 0x1d6) | 1;
        fVar10 = *(float *)(iVar4 + 0x1a8);
        fVar11 = fVar11 - fVar10;
        local_50 = 1;
        if (fVar11 != 0.0) {
          if (fVar11 < 0.0) {
            iVar3 = FUN_089ceba4(DAT_08ac5934);
            fVar10 = fVar10 - 1.0 / (float)iVar3;
            *(float *)(iVar4 + 0x1a8) = fVar10;
            if (fVar10 < *(float *)(iVar4 + 0x1ac)) {
              *(float *)(iVar4 + 0x1a8) = *(float *)(iVar4 + 0x1ac);
            }
          }
          else {
            iVar3 = FUN_089ceba4(DAT_08ac5934);
            fVar10 = fVar10 + 1.0 / (float)iVar3;
            *(float *)(iVar4 + 0x1a8) = fVar10;
            if (*(float *)(iVar4 + 0x1ac) < fVar10) {
              *(float *)(iVar4 + 0x1a8) = *(float *)(iVar4 + 0x1ac);
            }
          }
        }
        fVar10 = *(float *)(iVar5 + 0x1e0);
        if (0.0 < fVar10) {
          iVar3 = FUN_089ceba4(DAT_08ac5934);
          fVar10 = fVar10 - 1.0 / (float)iVar3;
          *(float *)(iVar5 + 0x1e0) = fVar10;
          if (0.0 < fVar10) {
            fVar11 = *(float *)(iVar5 + 0x1e4);
            if (uVar6 == 4) {
              fVar9 = (float)FUN_089c5dfc(param_1);
              fVar9 = *(float *)(iVar4 + 0x1a8) * fVar9;
            }
            else {
              fVar9 = (float)FUN_089c5c78(param_1);
              fVar9 = *(float *)(iVar4 + 0x1a8) * fVar9;
            }
            uVar6 = (uint)(fVar9 * (1.0 - (0.125 - fVar10) * 8.0) * 127.0 * fVar11);
            if (0x7f < uVar6) {
              uVar6 = 0x7f;
            }
            FUN_08a20a7c(iVar7,uVar6);
          }
          else {
            *(undefined4 *)(iVar5 + 0x1e0) = 0;
            FUN_08a203c0(*(undefined4 *)(iVar5 + 0x1d0));
          }
        }
        else if (fVar11 != 0.0) {
          fVar11 = *(float *)(iVar5 + 0x1e4);
          fVar10 = *(float *)(iVar4 + 0x1a8);
          if (uVar6 == 4) {
            fVar9 = (float)FUN_089c5dfc(param_1);
          }
          else {
            fVar9 = (float)FUN_089c5c78(param_1);
          }
          uVar6 = (uint)(fVar11 * fVar10 * fVar9 * 127.0);
          if (0x7f < uVar6) {
            uVar6 = 0x7f;
          }
          FUN_08a20a7c(iVar7,uVar6);
          *(undefined2 *)(iVar5 + 0x1d4) = 0;
        }
      }
      else {
        if ((*(ushort *)(iVar5 + 0x1d6) & 1) == 0) {
          if (*(float *)(iVar5 + 0x1e0) <= 0.0) goto LAB_089c8218;
          uVar1 = *(ushort *)(iVar5 + 0x1d4);
        }
        else {
          uVar1 = *(ushort *)(iVar5 + 0x1d4);
        }
        *(undefined4 *)(iVar5 + 0x1d0) = 0;
        *(undefined4 *)(iVar5 + 0x1e0) = 0;
        *(ushort *)(iVar5 + 0x1d4) = uVar1 & 0xfffe;
        *(undefined4 *)(iVar5 + 0x1dc) = 0xffffffff;
        *(ushort *)(iVar5 + 0x1d6) = *(ushort *)(iVar5 + 0x1d6) & 0xfffe;
      }
    }
LAB_089c8218:
    iVar8 = iVar8 + 1;
    iVar5 = iVar5 + 0x20;
    if (0x1f < iVar8) {
      return local_50;
    }
  } while( true );
}

