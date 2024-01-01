#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x0889850c)
// WARNING: Removing unreachable block (ram,0x08898348)
// WARNING: Removing unreachable block (ram,0x08898284)
// WARNING: Removing unreachable block (ram,0x08898114)
// WARNING: Removing unreachable block (ram,0x08898100)
// WARNING: Removing unreachable block (ram,0x08898224)
// WARNING: Removing unreachable block (ram,0x08898448)
// WARNING: Removing unreachable block (ram,0x088985d0)

void FUN_08897ee4(int param_1,uint *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  int *local_40;
  uint local_3c;
  int local_38;
  
  uVar6 = *param_2;
  if (uVar6 < 5) {
    if (uVar6 == 1) {
      if ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x144) & 0x400000) == 0) {
        FUN_08897ec4(param_1,param_2);
        *(undefined *)((int)param_2 + 0x1d) = 1;
      }
      else {
        iVar7 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x64c);
        if (iVar7 != 0) {
          if (iVar7 == 4) {
            FUN_08897ec4(param_1,param_2);
            iVar7 = *(int *)(param_1 + 0x1a0);
            goto LAB_0889891c;
          }
          *param_2 = 2;
          iVar7 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x5b8);
          bVar11 = false;
          if ((3 < iVar7) && (iVar7 < 6)) {
            bVar11 = true;
          }
          uVar6 = 0;
          for (uVar12 = 0; uVar3 = FUN_08897e38(param_1), uVar12 < uVar3; uVar12 = uVar12 + 1) {
            iVar10 = FUN_08897e54(param_1,uVar12);
            if ((iVar10 == iVar7) && (uVar3 = FUN_08897e74(param_1,uVar12), uVar6 < uVar3)) {
              uVar6 = FUN_08897e74(param_1,uVar12);
            }
          }
          if (bVar11) {
            iVar10 = *(int *)(*(int *)(param_1 + 0x1a0) + 8);
            if (iVar10 < 8) {
              if (6 < iVar10) {
LAB_088980f0:
                if ((int)uVar6 < 5) {
                  uVar6 = 5;
                }
              }
            }
            else if (iVar10 == 0xd) goto LAB_088980f0;
          }
          local_3c = 0;
          local_40 = (int *)0x0;
          local_38 = 0;
          if (uVar6 != 0) {
            FUN_089d8634();
            uVar8 = FUN_089d81a4();
            FUN_089d816c(1);
            local_40 = (int *)FUN_089d7d74(uVar6 << 2,0,0);
            FUN_089d816c(uVar8);
            FUN_089d866c();
            uVar12 = 0;
            local_3c = uVar6;
            if (uVar6 != 0) {
              iVar10 = 0;
              do {
                uVar12 = uVar12 + 1;
                *(undefined4 *)((int)local_40 + iVar10) = 1;
                iVar10 = iVar10 + 4;
              } while (uVar12 < uVar6);
            }
          }
          fVar15 = *(float *)(param_1 + 0x9e8);
          uVar12 = 0;
          fVar14 = 100.0;
          if (0 < (int)uVar6) {
            iVar10 = 0;
            do {
              if (fVar14 < 2.147484e+09) {
                iVar5 = (int)fVar14;
              }
              else {
                iVar5 = (int)(fVar14 - 2.147484e+09) + -0x80000000;
              }
              if ((uVar12 < local_3c) && (*(int *)((int)local_40 + iVar10) != iVar5)) {
                *(int *)((int)local_40 + iVar10) = iVar5;
              }
              fVar14 = fVar15 * fVar14;
              if (fVar14 < 0.0) {
                fVar14 = 0.0;
              }
              uVar12 = uVar12 + 1;
              iVar10 = iVar10 + 4;
            } while ((int)uVar12 < (int)uVar6);
          }
          uVar6 = 0xffffffff;
          if (local_40 != (int *)0x0) {
            uVar12 = 0;
            local_38 = 0;
            piVar9 = local_40;
            if (local_3c != 0) {
              do {
                uVar12 = uVar12 + 1;
                local_38 = local_38 + *piVar9;
                piVar9 = piVar9 + 1;
              } while (uVar12 < local_3c);
            }
          }
          if (local_38 != 0) {
            iVar10 = FUN_089bed14(local_38);
            uVar6 = 0;
            iVar5 = 0;
            piVar9 = local_40;
            if (local_3c != 0) {
              do {
                iVar5 = iVar5 + *piVar9;
                if (iVar10 < iVar5) break;
                uVar6 = uVar6 + 1;
                piVar9 = piVar9 + 1;
              } while (uVar6 < local_3c);
            }
          }
          param_2[6] = (uint)(float)(uVar6 + 1);
          if (!bVar11) {
            uVar12 = FUN_08897e38(param_1);
            if (local_40 != (int *)0x0) {
              FUN_089d8634();
              FUN_089d7fd8(local_40,0,0);
              FUN_089d866c();
              local_40 = (int *)0x0;
            }
            local_3c = 0;
            local_38 = 0;
            if (uVar12 != 0) {
              FUN_089d8634();
              uVar8 = FUN_089d81a4();
              FUN_089d816c(1);
              local_40 = (int *)FUN_089d7d74(uVar12 << 2,0,0);
              FUN_089d816c(uVar8);
              FUN_089d866c();
              uVar3 = 0;
              local_3c = uVar12;
              if (uVar12 != 0) {
                iVar10 = 0;
                do {
                  uVar3 = uVar3 + 1;
                  *(undefined4 *)((int)local_40 + iVar10) = 1;
                  iVar10 = iVar10 + 4;
                } while (uVar3 < uVar12);
              }
            }
            uVar3 = 0xffffffff;
            uVar12 = 0xffffffff;
            iVar10 = 0;
            for (uVar13 = 0; uVar4 = FUN_08897e38(param_1), uVar13 < uVar4; uVar13 = uVar13 + 1) {
              iVar5 = FUN_08897e54(param_1,uVar13);
              if (iVar5 == iVar7) {
                iVar5 = FUN_08897e74(param_1,uVar13);
                if (iVar5 != uVar6 + 1) {
                  if ((uVar13 < local_3c) && (*(int *)((int)local_40 + iVar10) != 0)) {
                    *(int *)((int)local_40 + iVar10) = 0;
                  }
                  uVar4 = FUN_08897e74(param_1,uVar13);
                  if (uVar3 < uVar4) {
                    uVar3 = FUN_08897e74(param_1,uVar13);
                    uVar12 = uVar13;
                  }
                }
              }
              else if ((uVar13 < local_3c) && (*(int *)((int)local_40 + iVar10) != 0)) {
                *(int *)((int)local_40 + iVar10) = 0;
              }
              iVar10 = iVar10 + 4;
            }
            uVar6 = 0xffffffff;
            if (local_40 != (int *)0x0) {
              uVar3 = 0;
              local_38 = 0;
              piVar9 = local_40;
              if (local_3c != 0) {
                do {
                  uVar3 = uVar3 + 1;
                  local_38 = local_38 + *piVar9;
                  piVar9 = piVar9 + 1;
                } while (uVar3 < local_3c);
              }
            }
            if (local_38 != 0) {
              iVar7 = FUN_089bed14(local_38);
              uVar6 = 0;
              iVar10 = 0;
              piVar9 = local_40;
              if (local_3c != 0) {
                do {
                  iVar10 = iVar10 + *piVar9;
                  if (iVar7 < iVar10) break;
                  uVar6 = uVar6 + 1;
                  piVar9 = piVar9 + 1;
                } while (uVar6 < local_3c);
              }
            }
            param_2[5] = uVar6;
            if ((int)uVar6 < 0) {
              if (uVar12 == 0xffffffff) {
                *param_2 = 3;
              }
              else {
                param_2[5] = uVar12;
              }
            }
          }
          if (local_40 != (int *)0x0) {
            FUN_089d8634();
            FUN_089d7fd8(local_40,0,0);
            FUN_089d866c();
          }
        }
      }
    }
    else if (uVar6 == 2) {
      if ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x144) & 0x400000) == 0) {
        FUN_08897ec4(param_1,param_2);
        iVar7 = *(int *)(param_1 + 0x1a0);
        goto LAB_0889891c;
      }
      iVar7 = *(int *)(param_1 + 0x1a0);
      if (*(int *)(iVar7 + 0x64c) != 0) {
        if (*(int *)(iVar7 + 0x64c) == 4) {
          FUN_08897ec4(param_1,param_2);
          iVar7 = *(int *)(param_1 + 0x1a0);
          goto LAB_0889891c;
        }
        if (500.0 <= *(float *)(iVar7 + 0x180)) {
          FUN_08897ec4(param_1,param_2);
          iVar7 = *(int *)(param_1 + 0x1a0);
          goto LAB_0889891c;
        }
        iVar7 = *(int *)(iVar7 + 0x5c0);
        iVar10 = iVar7 + 1;
        if (iVar10 == 0) {
          iVar7 = *(int *)(param_1 + 0x1a0);
          goto LAB_0889891c;
        }
        iVar5 = FUN_08897e74(param_1,param_2[5]);
        if (iVar5 == iVar7 + 2) {
          iVar7 = FUN_08860344(*(undefined4 *)(param_1 + 0x1a0));
          if (iVar7 == 0) {
            fVar15 = (float)param_2[6];
          }
          else {
            iVar7 = FUN_08860344(*(undefined4 *)(param_1 + 0x1a0));
            iVar7 = (**(code **)(*(int *)(iVar7 + 0x14) + 0x54))
                              (iVar7 + *(short *)(*(int *)(iVar7 + 0x14) + 0x50));
            if (iVar7 == 0) {
              fVar15 = (float)param_2[6];
            }
            else {
              iVar7 = FUN_08860344(*(undefined4 *)(param_1 + 0x1a0));
              if ((*(uint *)(iVar7 + 0x144) & 0x200000) == 0) {
                fVar15 = (float)param_2[6];
              }
              else {
                fVar15 = (float)FUN_08887d20(iVar7 + 0x434);
                iVar7 = FUN_089bed14(99);
                if (iVar7 < (int)(fVar15 * 0.001 * 100.0)) {
                  *param_2 = 3;
                  goto LAB_08898918;
                }
                fVar15 = (float)param_2[6];
              }
            }
          }
        }
        else {
          fVar15 = (float)param_2[6];
        }
        if ((int)fVar15 == iVar10) {
          *param_2 = 3;
        }
        else {
          iVar7 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x5b8);
          bVar11 = false;
          if ((3 < iVar7) && (iVar7 < 6)) {
            bVar11 = true;
          }
          if (bVar11) {
            FUN_088995b8(param_1 + 0x1b0);
            FUN_08899534(param_1 + 0x1b0);
            iVar7 = *(int *)(param_1 + 0x1a0);
            goto LAB_0889891c;
          }
          iVar7 = FUN_08897e90(param_1,param_2[5],iVar10);
          if (0 < iVar7) {
            if (iVar7 < 2) {
              FUN_088995b8(param_1 + 0x1b0);
              iVar7 = *(int *)(param_1 + 0x1a0);
            }
            else if (iVar7 < 3) {
              FUN_088995d4(param_1 + 0x1b0);
              iVar7 = *(int *)(param_1 + 0x1a0);
            }
            else {
              iVar7 = *(int *)(param_1 + 0x1a0);
            }
            goto LAB_0889891c;
          }
        }
      }
    }
    else {
      if (uVar6 == 3) {
        iVar7 = *(int *)(param_1 + 0x96c);
        bVar2 = 0;
        if (iVar7 == 0) {
LAB_088988bc:
          iVar7 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x64c);
        }
        else {
          iVar10 = *(int *)(iVar7 + 0x140);
          bVar1 = 0;
          if ((2 < *(int *)(iVar7 + 0x140)) && (bVar1 = 0, *(int *)(iVar7 + 0x140) < 7)) {
            bVar1 = 1;
          }
          if ((bool)(((iVar10 == 5 || iVar10 == 3) || iVar10 == 4) |
                    (*(uint *)(iVar7 + 0x144) & 0x30000000) != 0 | bVar1)) {
            bVar2 = 1;
            goto LAB_088988bc;
          }
          iVar7 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x64c);
        }
        if (!(bool)(bVar2 | iVar7 == 4 |
                   (*(uint *)(*(int *)(param_1 + 0x1a0) + 0x144) & 0x400000) == 0))
        goto LAB_08898918;
        FUN_08897ec4(param_1,param_2);
        uVar8 = *(undefined4 *)(param_1 + 0x1a0);
      }
      else {
        if (uVar6 != 4) {
          iVar7 = 0;
          if (param_3 < 1) {
            if (-1 < param_3) {
              iVar7 = FUN_088995b8(param_1 + 0x1b0);
            }
          }
          else if (param_3 < 2) {
            iVar7 = FUN_088995d4(param_1 + 0x1b0);
          }
          else if (param_3 < 3) {
            iVar7 = FUN_08899578(param_1 + 0x1b0);
          }
          if (iVar7 != 0) {
            *param_2 = 1;
            *(undefined *)((int)param_2 + 0x1d) = 1;
          }
          goto LAB_08898918;
        }
        uVar8 = *(undefined4 *)(param_1 + 0x1a0);
      }
      FUN_088601c8(uVar8);
      *(undefined *)(param_2 + 7) = 1;
    }
  }
LAB_08898918:
  iVar7 = *(int *)(param_1 + 0x1a0);
LAB_0889891c:
  if (*(int *)(iVar7 + 0x198) != 0) {
    *(undefined *)((int)param_2 + 0x1d) = 0;
  }
  return;
}

