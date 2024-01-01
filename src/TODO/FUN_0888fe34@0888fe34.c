#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

short * FUN_0888fe34(int param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  bool bVar2;
  short *psVar3;
  uint *puVar4;
  short *psVar5;
  int *piVar6;
  code *pcVar7;
  uint uVar8;
  int *piVar9;
  code *pcVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int **ppiVar15;
  short *psVar16;
  uint uVar17;
  float fVar18;
  short local_48;
  short sStack_46;
  int local_40;
  
  uVar11 = *param_3;
  pcVar10 = (code *)param_3[1];
  puVar4 = *(uint **)(param_2 + 0x4c);
  if (puVar4 != (uint *)0x0) {
    psVar16 = (short *)puVar4[1];
    uVar17 = 0;
    if (*puVar4 != 0) {
      local_40 = 0;
      do {
        local_48 = (short)uVar11;
        if ((*(uint *)(psVar16 + 0x22) & 1 << (*(uint *)(param_1 + 0x2c0) & 0x1f)) == 0) {
          uVar8 = 0;
LAB_08890024:
          sStack_46 = (short)((uint)uVar11 >> 0x10);
          uVar14 = 0;
          iVar13 = param_1 + local_48;
          psVar3 = psVar16;
          do {
            if (uVar8 == 0) {
              bVar1 = *(byte *)((int)psVar16 + 3);
              uVar8 = 0;
              goto LAB_0889009c;
            }
            iVar12 = iVar13;
            pcVar7 = pcVar10;
            if (sStack_46 != 0) {
              psVar5 = (short *)(*(int *)(pcVar10 + iVar13) + sStack_46 * 8);
              iVar12 = iVar13 + *psVar5;
              pcVar7 = *(code **)(psVar5 + 2);
            }
            uVar8 = (*pcVar7)(*(undefined4 *)(psVar3 + 8),iVar12,*(undefined *)(psVar3 + 6),
                              *(undefined *)(psVar3 + 10));
            uVar14 = uVar14 + 1;
            psVar3 = psVar3 + 6;
          } while (uVar14 < 3);
          bVar1 = *(byte *)((int)psVar16 + 3);
LAB_0889009c:
          piVar6 = (int *)(param_2 + 0x50 + (uint)bVar1 * 0x10);
          if (uVar8 == 0) {
            if (((*(char *)((int)piVar6 + 0xd) == '\0') && (uVar17 < (uint)piVar6[1])) &&
               (*(int *)(*piVar6 + local_40) != 0)) {
              *(int *)(*piVar6 + local_40) = 0;
              *(undefined *)(piVar6 + 3) = 0;
            }
          }
          else {
            iVar13 = *(int *)(param_1 + 0x1a4) + -1;
            fVar18 = (float)iVar13;
            if (iVar13 < 0) {
              fVar18 = fVar18 + 4.294967e+09;
            }
            uVar8 = (uint)(ushort)psVar16[2] +
                    ((int)((float)((uint)(ushort)psVar16[3] - (uint)(ushort)psVar16[2]) *
                          fVar18 * 0.1111111) & 0xffffU) & 0xffff;
            if (((*(char *)((int)piVar6 + 0xd) == '\0') && (uVar17 < (uint)piVar6[1])) &&
               (*(uint *)(*piVar6 + local_40) != uVar8)) {
              *(uint *)(*piVar6 + local_40) = uVar8;
              *(undefined *)(piVar6 + 3) = 0;
            }
          }
        }
        else {
          uVar8 = *(uint *)(param_1 + 0x918);
          switch((uint)*(byte *)(psVar16 + 1)) {
          case 1:
          case 3:
          case 5:
          case 7:
          case 0x19:
            bVar2 = (uVar8 & 2) != 0;
            break;
          case 2:
          case 4:
          case 6:
          case 8:
          case 0x18:
            bVar2 = (uVar8 & 4) != 0;
            break;
          default:
            bVar2 = (uVar8 & 1 << (*(byte *)(psVar16 + 1) & 0x1f)) != 0;
            break;
          case 0xb:
          case 0x10:
            bVar2 = (uVar8 & 0x800) != 0;
            break;
          case 0xe:
          case 0x1a:
            bVar2 = (uVar8 & 0x4000) != 0;
            break;
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
            bVar2 = (uVar8 & 0x40000) != 0;
          }
          if (!bVar2) {
            uVar8 = 0;
            goto LAB_08890024;
          }
          iVar13 = FUN_0888f9dc(param_1);
          if (iVar13 == 0) {
            uVar8 = 0;
            goto LAB_08890024;
          }
          if (*(short *)(param_2 + 0x48) < 0) {
            if (*(uint *)(param_1 + 0x1a4) < (uint)*(byte *)(psVar16 + 4)) {
              uVar8 = 0;
            }
            else {
              uVar8 = (uint)*(byte *)((int)psVar16 + 9) < *(uint *)(param_1 + 0x1a4) ^ 1;
            }
            goto LAB_08890024;
          }
          if (*psVar16 == *(short *)(param_2 + 0x48)) {
            return psVar16;
          }
        }
        local_40 = local_40 + 4;
        uVar17 = uVar17 + 1;
        psVar16 = psVar16 + 0x24;
      } while (uVar17 < *puVar4);
    }
    uVar17 = 9;
    ppiVar15 = (int **)(param_2 + 0xe0);
    do {
      if ((*ppiVar15 != (int *)0x0) && (*(char *)(ppiVar15 + 3) == '\0')) {
        piVar6 = (int *)0x0;
        ppiVar15[2] = (int *)0x0;
        if (ppiVar15[1] != (int *)0x0) {
          iVar13 = 0;
          do {
            piVar6 = (int *)((int)piVar6 + 1);
            ppiVar15[2] = (int *)((int)ppiVar15[2] + *(int *)((int)*ppiVar15 + iVar13));
            iVar13 = iVar13 + 4;
          } while (piVar6 < ppiVar15[1]);
        }
        *(undefined *)(ppiVar15 + 3) = 1;
      }
      piVar6 = ppiVar15[2];
      if ((piVar6 != (int *)0x0) && (iVar13 = FUN_089bed14(99), iVar13 < (int)piVar6)) break;
      uVar17 = uVar17 - 1 & 0xff;
      ppiVar15 = (int **)(param_2 + 0x50 + uVar17 * 0x10);
    } while (uVar17 != 0);
    if ((*ppiVar15 != (int *)0x0) && (*(char *)(ppiVar15 + 3) == '\0')) {
      piVar6 = (int *)0x0;
      ppiVar15[2] = (int *)0x0;
      if (ppiVar15[1] != (int *)0x0) {
        iVar13 = 0;
        do {
          piVar6 = (int *)((int)piVar6 + 1);
          ppiVar15[2] = (int *)((int)ppiVar15[2] + *(int *)((int)*ppiVar15 + iVar13));
          iVar13 = iVar13 + 4;
        } while (piVar6 < ppiVar15[1]);
      }
      *(undefined *)(ppiVar15 + 3) = 1;
    }
    if (ppiVar15[2] != (int *)0x0) {
      piVar6 = (int *)0xffffffff;
      if ((*ppiVar15 != (int *)0x0) && (*(char *)(ppiVar15 + 3) == '\0')) {
        piVar9 = (int *)0x0;
        ppiVar15[2] = (int *)0x0;
        if (ppiVar15[1] != (int *)0x0) {
          iVar13 = 0;
          do {
            piVar9 = (int *)((int)piVar9 + 1);
            ppiVar15[2] = (int *)((int)ppiVar15[2] + *(int *)((int)*ppiVar15 + iVar13));
            iVar13 = iVar13 + 4;
          } while (piVar9 < ppiVar15[1]);
        }
        *(undefined *)(ppiVar15 + 3) = 1;
      }
      if (ppiVar15[2] != (int *)0x0) {
        iVar13 = FUN_089bed14(ppiVar15[2]);
        piVar6 = (int *)0x0;
        iVar12 = 0;
        if (ppiVar15[1] != (int *)0x0) {
          piVar9 = *ppiVar15;
          do {
            iVar12 = iVar12 + *piVar9;
            if (iVar13 < iVar12) break;
            piVar6 = (int *)((int)piVar6 + 1);
            piVar9 = piVar9 + 1;
          } while (piVar6 < ppiVar15[1]);
        }
      }
      return (short *)(puVar4[1] + (int)piVar6 * 0x48);
    }
  }
  return (short *)0x0;
}

