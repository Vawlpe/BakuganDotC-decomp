#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a19ddc(undefined4 *param_1,short *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint *puVar5;
  ushort *puVar6;
  short *psVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  ushort *puVar13;
  ushort *puVar14;
  int *piVar15;
  int iVar16;
  ushort *puVar17;
  ushort *puVar18;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  puVar18 = (ushort *)(*(int *)(param_2 + 2) + (int)param_2);
  puVar17 = puVar18;
  if (-1 < *param_2) {
    puVar17 = (ushort *)((int)param_2 + *(int *)(param_2 + 4));
  }
  if (puVar17 < puVar18) {
    local_44 = 0;
    local_3c = 0;
    local_40 = 0;
    local_34 = 0;
    local_38 = 0;
    uVar9 = (uint)*puVar17;
LAB_08a19edc:
    if ((uVar9 & 0x7fff) - 4 < 0x13) {
      sVar8 = (short)uVar9;
      switch(uVar9 & 0x7fff) {
      case 4:
        puVar14 = (ushort *)(*(int *)(puVar17 + 2) + (int)puVar17);
        puVar13 = puVar14;
        if (-1 < sVar8) {
          puVar13 = (ushort *)((int)puVar17 + *(int *)(puVar17 + 4));
        }
        iVar2 = 0;
        if (puVar13 < puVar14) {
          iVar2 = 0;
          uVar1 = *puVar13;
          do {
            switch(uVar1 & 0x7fff) {
            case 0x14:
              FUN_08a12d94(*param_1,0,0x10,0x20);
              iVar12 = *(int *)(puVar13 + 2);
              break;
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x1d:
            case 0x1e:
            case 0x1f:
            case 0x20:
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2a:
            case 0x2b:
            case 0x2c:
            case 0x2d:
            case 0x2e:
            case 0x2f:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
            case 0x3a:
            case 0x3b:
            case 0x3c:
            case 0x3d:
            case 0x3e:
            case 0x3f:
            case 0x40:
            case 0x41:
            case 0x42:
            case 0x45:
            case 0x48:
            case 0x49:
            case 0x4a:
            case 0x4b:
            case 0x4c:
            case 0x4d:
              goto switchD_08a1a020_caseD_15;
            case 0x43:
              piVar15 = (int *)(puVar13 + 4);
              if (-1 < (short)uVar1) {
                piVar15 = (int *)((uint)puVar13[1] + (int)puVar13);
              }
              FUN_08a12d94(*param_1,0,0x10,*piVar15 << 2);
              goto switchD_08a1a020_caseD_15;
            case 0x44:
              piVar15 = (int *)(puVar13 + 4);
              if (-1 < (short)uVar1) {
                piVar15 = (int *)((uint)puVar13[1] + (int)puVar13);
              }
              FUN_08a12d94(*param_1,0,4,*piVar15 << 1);
              FUN_08a12d94(*param_1,0,0x40,*piVar15 << 6);
              iVar12 = *(int *)(puVar13 + 2);
              break;
            case 0x46:
              FUN_08a12d94(*param_1,0,0x10,0x10);
              iVar12 = *(int *)(puVar13 + 2);
              break;
            case 0x47:
              FUN_08a12d94(*param_1,0,0x40,0x40);
              iVar12 = *(int *)(puVar13 + 2);
              break;
            case 0x4e:
              iVar2 = iVar2 + 1;
switchD_08a1a020_caseD_15:
              iVar12 = *(int *)(puVar13 + 2);
              break;
            default:
              iVar12 = *(int *)(puVar13 + 2);
            }
            puVar13 = (ushort *)(iVar12 + (int)puVar13);
            if (puVar14 <= puVar13) break;
            uVar1 = *puVar13;
          } while( true );
        }
        FUN_08a12d94(*param_1,0,4,iVar2 << 2);
        local_34 = local_34 + 1;
        puVar17 = (ushort *)(*(int *)(puVar17 + 2) + (int)puVar17);
        if (puVar18 <= puVar17) goto LAB_08a19f38;
        uVar9 = (uint)*puVar17;
        goto LAB_08a19edc;
      case 5:
        iVar2 = *(int *)(puVar17 + 2);
        param_1[2] = puVar17;
        puVar13 = (ushort *)(iVar2 + (int)puVar17);
        if (-1 < sVar8) {
          puVar13 = (ushort *)((int)puVar17 + *(int *)(puVar17 + 4));
        }
        local_48 = 0;
        for (; puVar13 < (ushort *)(iVar2 + (int)puVar17);
            puVar13 = (ushort *)(iVar12 + (int)puVar13)) {
          iVar12 = *(int *)(puVar13 + 2);
          if ((*puVar13 & 0x7fff) == 6) {
            puVar6 = (ushort *)(iVar12 + (int)puVar13);
            puVar14 = puVar6;
            if (-1 < (short)*puVar13) {
              puVar14 = (ushort *)((int)puVar13 + *(int *)(puVar13 + 4));
            }
            if (puVar14 < puVar6) {
              uVar9 = 0xffffffff;
              iVar12 = 0;
              local_4c = 0;
              local_50 = 0;
              do {
                while( true ) {
                  uVar1 = *puVar14;
                  uVar4 = uVar1 & 0x7fff;
                  if (uVar4 != 99) break;
                  FUN_08a12d94(*param_1,0,0x10,0x10);
                  iVar3 = *(int *)(puVar14 + 2);
LAB_08a1a0f8:
                  puVar14 = (ushort *)(iVar3 + (int)puVar14);
                  if (puVar6 <= puVar14) goto LAB_08a1a19c;
                }
                if (uVar4 < 100) {
                  if (uVar4 == 0x16) {
                    local_50 = 8;
                  }
                  else if (uVar4 == 0x62) {
                    piVar15 = (int *)(puVar14 + 4);
                    if (-1 < (short)uVar1) {
                      piVar15 = (int *)((uint)puVar14[1] + (int)puVar14);
                    }
                    FUN_08a12d94(*param_1,0,4,*piVar15 << 1);
                    iVar3 = *(int *)(puVar14 + 2);
                    goto LAB_08a1a0f8;
                  }
                  iVar3 = *(int *)(puVar14 + 2);
                  goto LAB_08a1a0f8;
                }
                if (((uVar4 != 0x68) && (uVar4 != 0x6a)) && (uVar4 != 0x66)) {
                  iVar3 = *(int *)(puVar14 + 2);
                  goto LAB_08a1a0f8;
                }
                puVar5 = (uint *)(puVar14 + 4);
                if (-1 < (short)uVar1) {
                  puVar5 = (uint *)((uint)puVar14[1] + (int)puVar14);
                }
                uVar9 = *puVar5 & 0xfff;
                uVar10 = puVar5[3];
                if (uVar4 != 0x66) {
                  uVar10 = 1;
                }
                iVar12 = iVar12 + uVar10;
                local_4c = local_4c + puVar5[2] * puVar5[3];
                puVar14 = (ushort *)(*(int *)(puVar14 + 2) + (int)puVar14);
              } while (puVar14 < puVar6);
LAB_08a1a19c:
              if (iVar12 < 1) {
                iVar12 = *(int *)(puVar13 + 2);
                local_48 = local_48 + 1;
                goto LAB_08a1a088;
              }
              psVar7 = (short *)param_1[2];
              if (psVar7 != (short *)0x0) {
                puVar14 = (ushort *)(*(int *)(psVar7 + 2) + (int)psVar7);
                if (-1 < *psVar7) {
                  puVar14 = (ushort *)((int)psVar7 + *(int *)(psVar7 + 4));
                }
                for (; puVar14 < (ushort *)(*(int *)(psVar7 + 2) + (int)psVar7);
                    puVar14 = (ushort *)((int)puVar14 + iVar3)) {
                  if ((*puVar14 & 0x7fff) == 7) {
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0xffffffff) goto LAB_08a1a4dc;
                    iVar3 = *(int *)(puVar14 + 2);
                  }
                  else {
                    iVar3 = *(int *)(puVar14 + 2);
                  }
                }
              }
              puVar14 = (ushort *)0x0;
LAB_08a1a4dc:
              piVar15 = (int *)(puVar14 + 4);
              if (-1 < (short)*puVar14) {
                piVar15 = (int *)((uint)puVar14[1] + (int)puVar14);
              }
              iVar16 = *piVar15;
              iVar3 = 4;
              if (local_50 != 0) {
                iVar3 = 10;
              }
              FUN_08a1444c(1,*param_1);
              FUN_08a12d94(*param_1,1,4,(iVar3 + iVar12) * 4);
              FUN_08a12d94(*param_1,1,4,
                           (iVar16 >> 0x18) * (((uint)(iVar16 << 0xb) >> 0x1d) + 1) * local_4c);
              FUN_08a12d94(*param_1,1,4,local_50 * 0xc);
              iVar12 = *(int *)(puVar13 + 2);
            }
            local_48 = local_48 + 1;
          }
LAB_08a1a088:
        }
        local_38 = local_38 + 1;
        FUN_08a14478(local_48,*param_1);
        puVar17 = (ushort *)(*(int *)(puVar17 + 2) + (int)puVar17);
        if (puVar18 <= puVar17) goto LAB_08a19f38;
        uVar9 = (uint)*puVar17;
        goto LAB_08a19edc;
      case 8:
        FUN_08a19a44(param_1,puVar17);
        puVar14 = (ushort *)(*(int *)(puVar17 + 2) + (int)puVar17);
        puVar13 = puVar14;
        if (-1 < (short)*puVar17) {
          puVar13 = (ushort *)((int)puVar17 + *(int *)(puVar17 + 4));
        }
        if (puVar13 < puVar14) {
          uVar1 = *puVar13;
          while( true ) {
            iVar2 = *(int *)(puVar13 + 2);
            if ((uVar1 & 0x7fff) == 9) {
              puVar11 = (ushort *)(iVar2 + (int)puVar13);
              puVar6 = puVar11;
              if (-1 < (short)uVar1) {
                puVar6 = (ushort *)((int)puVar13 + *(int *)(puVar13 + 4));
              }
              if (puVar6 < puVar11) {
                do {
                  if ((*puVar6 & 0x7fff) == 0x98) {
                    FUN_08a12d94(*param_1,0,0x10,0x10);
                    iVar2 = *(int *)(puVar6 + 2);
                  }
                  else if ((*puVar6 & 0x7fff) == 0x9a) {
                    FUN_08a12d94(*param_1,0,0x40,0x40);
                    iVar2 = *(int *)(puVar6 + 2);
                  }
                  else {
                    iVar2 = *(int *)(puVar6 + 2);
                  }
                  puVar6 = (ushort *)(iVar2 + (int)puVar6);
                } while (puVar6 < puVar11);
                iVar2 = *(int *)(puVar13 + 2);
              }
            }
            puVar13 = (ushort *)(iVar2 + (int)puVar13);
            if (puVar14 <= puVar13) break;
            uVar1 = *puVar13;
          }
        }
        local_40 = local_40 + 1;
        FUN_08a143f4(param_1[5],*param_1);
        puVar17 = (ushort *)(*(int *)(puVar17 + 2) + (int)puVar17);
        if (puVar18 <= puVar17) goto LAB_08a19f38;
        uVar9 = (uint)*puVar17;
        goto LAB_08a19edc;
      case 10:
        local_3c = local_3c + 1;
        puVar17 = (ushort *)(*(int *)(puVar17 + 2) + (int)puVar17);
        if (puVar18 <= puVar17) goto LAB_08a19f38;
        uVar9 = (uint)*puVar17;
        goto LAB_08a19edc;
      case 0xb:
        iVar2 = *(int *)(puVar17 + 2);
        param_1[3] = puVar17;
        puVar14 = (ushort *)(iVar2 + (int)puVar17);
        puVar13 = puVar14;
        if (-1 < sVar8) {
          puVar13 = (ushort *)((int)puVar17 + *(int *)(puVar17 + 4));
        }
        iVar2 = 0;
        if (puVar13 < puVar14) {
          do {
            uVar1 = *puVar13;
            while ((uVar1 & 0x7fff) != 0xb3) {
              puVar13 = (ushort *)(*(int *)(puVar13 + 2) + (int)puVar13);
              if (puVar14 <= puVar13) goto LAB_08a1a470;
              uVar1 = *puVar13;
            }
            puVar6 = puVar13 + 4;
            if (-1 < (short)uVar1) {
              puVar6 = (ushort *)((uint)puVar13[1] + (int)puVar13);
            }
            psVar7 = (short *)param_1[3];
            uVar9 = *(uint *)(puVar6 + 6) & 0xfff;
            if (psVar7 == (short *)0x0) {
LAB_08a1a408:
              puVar6 = (ushort *)0x0;
            }
            else {
              puVar11 = (ushort *)(*(int *)(psVar7 + 2) + (int)psVar7);
              puVar6 = puVar11;
              if (-1 < *psVar7) {
                puVar6 = (ushort *)((int)psVar7 + *(int *)(psVar7 + 4));
              }
              if (puVar11 <= puVar6) goto LAB_08a1a408;
              do {
                if ((*puVar6 & 0x7fff) == 0xc) {
                  uVar9 = uVar9 - 1;
                  if (uVar9 == 0xffffffff) goto LAB_08a1a40c;
                  iVar12 = *(int *)(puVar6 + 2);
                }
                else {
                  iVar12 = *(int *)(puVar6 + 2);
                }
                puVar6 = (ushort *)((int)puVar6 + iVar12);
              } while (puVar6 < puVar11);
              puVar6 = (ushort *)0x0;
            }
LAB_08a1a40c:
            iVar12 = 0;
            if (-1 < (short)*puVar6) {
              iVar12 = *(int *)(puVar6 + 4) - *(int *)(puVar6 + 6);
            }
            FUN_08a12d94(*param_1,0,4,iVar12);
            puVar13 = (ushort *)(*(int *)(puVar13 + 2) + (int)puVar13);
            iVar2 = iVar2 + 1;
          } while (puVar13 < puVar14);
LAB_08a1a470:
          FUN_08a1436c(iVar2,*param_1);
          FUN_08a12d94(*param_1,0,4,iVar2 << 1);
          iVar2 = *(int *)(puVar17 + 2);
        }
        else {
          FUN_08a1436c(0,*param_1);
          FUN_08a12d94(*param_1,0,4,0);
          iVar2 = *(int *)(puVar17 + 2);
        }
        local_44 = local_44 + 1;
        puVar17 = (ushort *)(iVar2 + (int)puVar17);
        if (puVar18 <= puVar17) goto LAB_08a19f38;
        uVar9 = (uint)*puVar17;
        goto LAB_08a19edc;
      case 0x14:
        FUN_08a12d94(*param_1,0,0x10,0x20);
        puVar17 = (ushort *)(*(int *)(puVar17 + 2) + (int)puVar17);
        if (puVar17 < puVar18) goto code_r0x08a1a4c8;
        goto LAB_08a19f38;
      case 0x16:
        FUN_08a12d94(*param_1,1,4,0x60);
      default:
        iVar2 = *(int *)(puVar17 + 2);
      }
    }
    else {
      iVar2 = *(int *)(puVar17 + 2);
    }
    puVar17 = (ushort *)(iVar2 + (int)puVar17);
    if (puVar17 < puVar18) {
      uVar9 = (uint)*puVar17;
      goto LAB_08a19edc;
    }
LAB_08a19f38:
    if (local_44 != 0) {
      FUN_08a144d4(local_34,*param_1);
      FUN_08a144a8(local_38,*param_1);
      FUN_08a14420(local_40,*param_1);
      FUN_08a143c8(local_3c,*param_1);
      FUN_08a14398(local_44 + 1,*param_1);
      FUN_08a12d94(*param_1,0,4,local_34 << 1);
      return;
    }
  }
  else {
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
  }
  FUN_08a144d4(local_34,*param_1);
  FUN_08a144a8(local_38,*param_1);
  FUN_08a14420(local_40,*param_1);
  FUN_08a143c8(local_3c,*param_1);
  FUN_08a14398(0,*param_1);
  FUN_08a12d94(*param_1,0,4,local_34 << 1);
  return;
code_r0x08a1a4c8:
  uVar9 = (uint)*puVar17;
  goto LAB_08a19edc;
}

