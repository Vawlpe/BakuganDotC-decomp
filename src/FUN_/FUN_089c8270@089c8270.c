#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c8270(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  int local_40;
  uint local_3c;
  
  uVar7 = 0;
  FUN_089c77cc();
  iVar10 = 0;
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x1a0) < 0) {
    FUN_08a2063c();
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    iVar10 = 0;
    do {
      *(undefined4 *)(iVar2 + 0xa0) = 0;
      iVar10 = iVar10 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar10 < 0x20);
  }
  else {
    do {
      iVar5 = *(int *)(iVar2 + 0xa0);
      if (iVar5 != 0) {
        uVar8 = *(uint *)(iVar2 + 0x20);
        iVar9 = 0;
        if (((int)uVar8 < 0) && (-0xb < (int)uVar8)) {
          iVar6 = -1;
          iVar4 = 0;
          iVar3 = param_1;
          do {
            if ((*(int *)(iVar3 + 0x1d0) == iVar5) &&
               (uVar1 = *(uint *)(iVar3 + 0x1dc), -1 < (int)uVar1)) {
              iVar6 = 1 << (uVar1 & 0x1f);
              uVar7 = uVar1;
              break;
            }
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x20;
          } while (iVar4 < 0x20);
          if (iVar6 == -1) {
            uVar1 = FUN_08a208bc(0,iVar5);
            if (uVar1 == 0) {
              *(undefined4 *)(iVar2 + 0xa0) = 0;
              goto LAB_089c85c8;
            }
            uVar7 = 0;
            do {
              if ((uVar1 & 1) != 0) break;
              uVar7 = uVar7 + 1;
              uVar1 = uVar1 >> 1;
            } while ((int)uVar7 < 0x20);
          }
          uVar1 = uVar8 + 6;
          if (uVar1 < 6) {
            if (uVar8 == 0xfffffffa) {
              iVar9 = FUN_08a204bc(uVar7,*(undefined4 *)(iVar2 + 0x120));
            }
            else if (uVar1 == 1) {
              iVar9 = FUN_08a20b0c(uVar7,*(undefined4 *)(iVar2 + 0x120));
            }
            else if (uVar1 == 2) {
              iVar9 = *(int *)(iVar2 + 0x120);
              uVar8 = *(uint *)(iVar2 + 0xa0) >> 0x1c & 7;
              iVar3 = 0;
              iVar4 = param_1 + uVar8 * 8;
              iVar5 = param_1;
              do {
                iVar3 = iVar3 + 1;
                if (*(uint *)(iVar5 + 0x1d0) == *(uint *)(iVar2 + 0xa0)) {
                  *(ushort *)(iVar5 + 0x1d4) = *(ushort *)(iVar5 + 0x1d4) | 1;
                  iVar3 = FUN_089c5c1c(param_1);
                  if (iVar3 < 1) {
                    fVar11 = 0.0;
                  }
                  else {
                    fVar11 = (float)iVar9 / (float)iVar3;
                  }
                  *(float *)(iVar5 + 0x1e4) = fVar11;
                  break;
                }
                iVar5 = iVar5 + 0x20;
              } while (iVar3 < 0x20);
              if (uVar8 == 4) {
                fVar11 = (float)FUN_089c5dfc(param_1);
                fVar11 = *(float *)(iVar4 + 0x1a8) * fVar11;
              }
              else {
                fVar11 = (float)FUN_089c5c78(param_1);
                fVar11 = *(float *)(iVar4 + 0x1a8) * fVar11;
              }
              iVar9 = FUN_08a20a7c(uVar7,(int)(fVar11 * (float)iVar9));
            }
            else if (uVar1 == 3) {
              iVar9 = FUN_08a209ec(uVar7,*(undefined4 *)(iVar2 + 0x120));
            }
            else if (uVar1 != 4) {
              iVar9 = FUN_08a20958(uVar7);
            }
          }
        }
        else {
          local_3c = uVar8 & 0xfffff;
          local_40 = -1;
          FUN_089c6280(param_1,uVar8,&local_40,&local_3c);
          if (-1 < local_40) {
            iVar3 = 0;
            iVar5 = FUN_089c6a24(param_1,uVar8,*(undefined4 *)(iVar2 + 0xa0));
            if (-1 < iVar5) {
              iVar4 = param_1 + iVar5 * 0x20;
              iVar3 = FUN_08a20814(*(undefined4 *)(param_1 + local_40 * 0x430 + 0x9e0),local_3c,0x40
                                   ,*(undefined4 *)(iVar2 + 0xa0),iVar4 + 0x1e8);
              if (-1 < iVar3) {
                *(int *)(iVar4 + 0x1dc) = iVar3;
                iVar4 = param_1 + iVar3 * 0x20;
                *(ushort *)(iVar4 + 0x1d6) = *(ushort *)(iVar4 + 0x1d6) & 0xfffe;
              }
            }
            if (iVar3 < 0) {
              *(undefined4 *)(param_1 + iVar5 * 0x20 + 0x1d0) = 0;
            }
          }
        }
        if (iVar9 == 0) {
          *(undefined4 *)(iVar2 + 0xa0) = 0;
        }
      }
LAB_089c85c8:
      iVar10 = iVar10 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar10 < 0x20);
  }
  FUN_089c7f30(param_1);
  return;
}

