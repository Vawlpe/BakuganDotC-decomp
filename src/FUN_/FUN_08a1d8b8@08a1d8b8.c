#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a1d8b8(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  undefined4 local_910 [4];
  float local_900;
  float local_8fc;
  float local_8f8;
  float local_8f4;
  undefined4 local_8f0;
  undefined auStack_8c0 [108];
  undefined *local_854;
  int local_850;
  int local_84c;
  undefined4 local_848;
  uint local_844 [513];
  uint local_40;
  uint local_3c;
  
  if (((param_1 != 0) && (*(short *)(param_1 + 0x20) != 0)) &&
     ((*(short *)(param_1 + 0x18) != 0 || (*(short *)(param_1 + 0x1c) != 0)))) {
    local_854 = auStack_8c0;
    FUN_08a12a64();
    iVar16 = 0;
    uVar13 = (uint)*(ushort *)(param_1 + 0x20);
    iVar14 = uVar13 + 1;
    local_84c = 0;
    if (iVar14 != 0) {
      iVar12 = *(int *)(param_1 + 0x14);
      iVar15 = 0;
      do {
        uVar4 = (uint)*(ushort *)(iVar12 + 0xc);
        if (uVar4 != 0) {
          iVar11 = 0;
          iVar6 = *(int *)(iVar12 + 4);
          do {
            iVar6 = iVar6 + iVar11 * 0x10;
            uVar4 = 0x4b;
            if (1 < *(byte *)(iVar6 + 0xd) - 0x49) {
              uVar4 = (uint)*(byte *)(iVar6 + 0xd);
            }
            uVar4 = (uint)*(ushort *)(iVar6 + 0xe) | uVar4 << 0x10;
            if ((iVar11 < local_84c) &&
               (iVar9 = iVar11, (local_844[iVar11 + -1] & 0xffffff) == uVar4)) {
LAB_08a1d9f0:
              if (iVar9 < 0) goto LAB_08a1db88;
LAB_08a1d9f8:
              uVar3 = *(ushort *)(iVar6 + 2);
            }
            else {
              if (0 < local_84c) {
                iVar9 = 0;
                if (uVar4 == (local_848 & 0xffffff)) goto LAB_08a1d9f8;
                for (iVar9 = 1; local_84c != iVar9; iVar9 = iVar9 + 1) {
                  if (uVar4 == (local_844[iVar9 + -1] & 0xffffff)) goto LAB_08a1d9f0;
                }
              }
              iVar9 = -1;
LAB_08a1db88:
              if (local_84c < 0x200) {
                local_844[local_84c + -1] = uVar4;
                iVar9 = local_84c;
                local_84c = local_84c + 1;
              }
              if (iVar9 < 0) {
                return 0;
              }
              uVar3 = *(ushort *)(iVar6 + 2);
            }
            if ((uVar3 & 2) == 0) {
              *(char *)((int)local_844 + iVar9 * 4 + -1) =
                   *(char *)((int)local_844 + iVar9 * 4 + -1) + '\x01';
              uVar3 = *(ushort *)(iVar12 + 0xc);
            }
            else {
              uVar3 = *(ushort *)(iVar12 + 0xc);
            }
            uVar4 = (uint)uVar3;
            iVar11 = iVar11 + 1;
            if ((int)uVar4 <= iVar11) break;
            iVar6 = *(int *)(iVar12 + 4);
          } while( true );
        }
        iVar15 = iVar15 + 1;
        iVar16 = iVar16 + uVar4;
        iVar12 = iVar12 + 0x30;
      } while (iVar15 != iVar14);
    }
    puVar10 = &local_848;
    if (local_84c * iVar14 != iVar16) {
      if (0 < local_84c) {
        puVar5 = &local_848;
        iVar16 = 0;
        puVar10 = puVar5;
        do {
          iVar16 = iVar16 + 1;
          if (*(char *)((int)puVar5 + 3) != '\0') {
            *puVar10 = *puVar5;
            puVar10 = puVar10 + 1;
          }
          puVar5 = puVar5 + 1;
        } while (iVar16 < local_84c);
      }
      puVar18 = &local_848;
      local_84c = (int)puVar10 - (int)puVar18 >> 2;
      local_850 = param_1;
      if (iVar14 != 0) {
        iVar14 = 0;
        do {
          iVar14 = iVar14 + 1;
          FUN_08a1436c(local_84c,local_854);
          FUN_08a12d94(local_854,0,4,local_84c << 1);
          uVar13 = (uint)*(ushort *)(param_1 + 0x20);
        } while (iVar14 < (int)(uVar13 + 1));
      }
      if (0 < local_84c) {
        iVar14 = 0;
        puVar17 = puVar18;
        do {
          iVar16 = 0;
          switch(*(undefined *)((int)puVar17 + 2)) {
          case 0x42:
          case 0x4f:
          case 0x86:
            iVar16 = 4;
            break;
          case 0x43:
            iVar16 = 0x20;
            break;
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x4e:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5a:
          case 0x5b:
          case 0x5c:
          case 0x5d:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x61:
          case 0x62:
          case 99:
          case 100:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6a:
          case 0x6b:
          case 0x6c:
          case 0x6d:
          case 0x6e:
          case 0x6f:
          case 0x70:
          case 0x71:
          case 0x72:
          case 0x73:
          case 0x74:
          case 0x75:
          case 0x76:
          case 0x77:
          case 0x78:
          case 0x79:
          case 0x7a:
          case 0x7b:
          case 0x7c:
          case 0x7d:
          case 0x7e:
          case 0x7f:
          case 0x80:
          case 0x81:
          case 0x87:
          case 0x88:
          case 0x89:
          case 0x8a:
          case 0x8b:
          case 0x8c:
          case 0x8d:
          case 0x8e:
          case 0x8f:
          case 0x90:
          case 0x91:
          case 0x92:
          case 0x93:
          case 0x94:
          case 0x95:
          case 0x96:
          case 0x97:
          case 0x99:
          case 0x9a:
          case 0x9b:
          case 0x9c:
          case 0x9d:
          case 0x9e:
          case 0x9f:
          case 0xa0:
          case 0xa1:
          case 0xa2:
          case 0xa3:
          case 0xa4:
          case 0xa5:
          case 0xa6:
          case 0xa7:
          case 0xa8:
          case 0xa9:
          case 0xaa:
          case 0xab:
          case 0xac:
          case 0xad:
          case 0xae:
          case 0xaf:
          case 0xb0:
          case 0xb1:
          case 0xb2:
          case 0xb3:
          case 0xb4:
          case 0xb5:
          case 0xb6:
          case 0xb7:
          case 0xb8:
          case 0xb9:
          case 0xba:
          case 0xbb:
          case 0xbc:
          case 0xbd:
          case 0xbe:
          case 0xbf:
          case 0xc0:
          case 0xc1:
          case 0xc2:
          case 0xc3:
          case 0xc4:
          case 0xc5:
          case 0xc6:
          case 199:
          case 200:
          case 0xc9:
          case 0xca:
          case 0xcb:
          case 0xcc:
          case 0xcd:
          case 0xce:
          case 0xcf:
          case 0xd0:
          case 0xd1:
          case 0xd2:
          case 0xd3:
          case 0xd4:
          case 0xd5:
          case 0xd6:
          case 0xd7:
          case 0xd8:
          case 0xd9:
          case 0xda:
          case 0xdb:
          case 0xdc:
          case 0xdd:
          case 0xde:
          case 0xdf:
          case 0xe0:
            iVar16 = 0;
            break;
          case 0x47:
            iVar16 = 0x40;
            break;
          case 0x48:
          case 0x4c:
          case 0x4d:
          case 0xe1:
            iVar16 = 0xc;
            break;
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x82:
          case 0x84:
          case 0x85:
          case 0x98:
            iVar16 = 0x10;
            break;
          case 0x83:
            iVar16 = 0x14;
          }
          FUN_08a12d94(local_854,0,4,iVar16 + 4);
          iVar14 = iVar14 + 1;
          puVar17 = puVar17 + 1;
        } while (iVar14 < local_84c);
        uVar13 = (uint)*(ushort *)(param_1 + 0x20);
      }
      iVar14 = *(int *)(param_1 + 0x14) + uVar13 * 0x30;
      if (*(short *)(iVar14 + 0xc) != 0) {
        iVar15 = 0;
        iVar16 = *(int *)(iVar14 + 8);
        iVar12 = *(int *)(iVar14 + 4);
        do {
          FUN_08a17f48(0,0x3f800000,iVar12,iVar16,param_1);
          iVar15 = iVar15 + 1;
          iVar16 = iVar16 + 2;
          iVar12 = iVar12 + 0x10;
        } while (iVar15 < (int)(uint)*(ushort *)(iVar14 + 0xc));
      }
      iVar14 = FUN_08a136f0(auStack_8c0);
      if (iVar14 != 0) {
        uVar13 = (uint)*(ushort *)(param_1 + 0x20);
        if (uVar13 != 0xffffffff) {
          iVar14 = *(int *)(param_1 + 0x14);
          iVar12 = 0;
          iVar16 = FUN_08a14504(local_84c,local_854);
          uVar2 = FUN_08a12ee4(local_854,0,4,local_84c << 1);
          memset_jak(uVar2,0,local_84c << 1);
          uVar13 = (uint)*(ushort *)(iVar14 + 0xc);
          iVar15 = 0;
          if (uVar13 == 0) goto LAB_08a1e264;
          iVar6 = *(int *)(iVar14 + 4);
          do {
            iVar9 = 0;
            iVar11 = 0;
            do {
              iVar11 = iVar6 + iVar11;
              if ((*(ushort *)(iVar11 + 2) & 2) == 0) {
                uVar4 = 0x4b;
                if (1 < *(byte *)(iVar11 + 0xd) - 0x49) {
                  uVar4 = (uint)*(byte *)(iVar11 + 0xd);
                }
                uVar4 = (uint)*(ushort *)(iVar11 + 0xe) | uVar4 << 0x10;
                if ((iVar9 < local_84c) &&
                   (iVar8 = iVar9, (local_844[iVar9 + -1] & 0xffffff) == uVar4)) {
LAB_08a1e194:
                  if (-1 < iVar8) {
LAB_08a1e19c:
                    FUN_08a1cbc0(iVar16 + iVar8 * 0x10,iVar11,0,local_854);
                    uVar13 = (uint)*(ushort *)(iVar14 + 0xc);
                    iVar6 = *(int *)(iVar14 + 4);
                  }
                }
                else if (0 < local_84c) {
                  iVar8 = 0;
                  if ((local_848 & 0xffffff) == uVar4) goto LAB_08a1e19c;
                  for (iVar8 = 1; local_84c != iVar8; iVar8 = iVar8 + 1) {
                    if ((local_844[iVar8 + -1] & 0xffffff) == uVar4) goto LAB_08a1e194;
                  }
                }
              }
              iVar9 = iVar9 + 1;
              iVar11 = iVar9 * 0x10;
            } while (iVar9 < (int)uVar13);
            while( true ) {
              FUN_08a146ac(iVar6);
              iVar15 = iVar15 + 1;
              thunk_FUN_08a13244(0,*(undefined4 *)(iVar14 + 8));
              *(int *)(iVar14 + 4) = iVar16;
              iVar12 = iVar12 + 0x30;
              *(short *)(iVar14 + 0xc) = (short)local_84c;
              uVar13 = (uint)*(ushort *)(param_1 + 0x20);
              *(undefined4 *)(iVar14 + 8) = uVar2;
              if ((int)(uVar13 + 1) <= iVar15) goto LAB_08a1dbc4;
              iVar14 = *(int *)(param_1 + 0x14) + iVar12;
              iVar16 = FUN_08a14504(local_84c,local_854);
              uVar2 = FUN_08a12ee4(local_854,0,4,local_84c << 1);
              memset_jak(uVar2,0,local_84c << 1);
              uVar13 = (uint)*(ushort *)(iVar14 + 0xc);
              if (uVar13 != 0) break;
LAB_08a1e264:
              iVar6 = *(int *)(iVar14 + 4);
            }
            iVar6 = *(int *)(iVar14 + 4);
          } while( true );
        }
LAB_08a1dbc4:
        iVar16 = 0;
        iVar14 = local_84c;
        if (0 < local_84c) {
          do {
            if (uVar13 != 0xffffffff) {
              iVar12 = 0;
              iVar6 = 0;
              iVar15 = 0;
              while( true ) {
                iVar11 = *(int *)(*(int *)(param_1 + 0x14) + iVar15 + 4) + iVar16 * 0x10;
                if (*(int *)(iVar11 + 4) != 0) goto LAB_08a1dbf4;
                if (iVar12 != 0) break;
                local_3c = *puVar18;
                uVar4 = (local_3c << 8) >> 0x18;
                uVar7 = local_3c & 0xffff;
                if (0x16 < uVar4 - 0x82) {
                  if ((uVar7 + 1 & 0xffff0000) == 0) {
                    iVar12 = iVar11;
                    if (*(ushort *)(local_850 + 0x18) <= uVar7) goto LAB_08a1dbf4;
                    uVar7 = *(int *)(local_850 + 4) + uVar7 * 0xc0;
                  }
                  iVar12 = iVar11;
                  if (uVar7 != 0) {
                    if (uVar4 < 0x4c) {
                      puVar10 = (undefined4 *)(uVar7 + 0x60);
                      if (uVar4 < 0x49) {
                        if (uVar4 == 0x43) {
                          puVar10 = *(undefined4 **)(uVar7 + 0xc);
                          uVar13 = (uint)*(ushort *)(uVar7 + 0x1a);
                          if (puVar10 == (undefined4 *)0x0) {
                            puVar10 = (undefined4 *)&DAT_08aa55a0;
                            uVar13 = 8;
                          }
                          else if (uVar13 == 0) goto LAB_08a1deb8;
                        }
                        else {
                          if (uVar4 < 0x44) {
                            if (uVar4 == 0x42) {
                              uVar4 = *(uint *)(uVar7 + 0x24);
                              if ((int)uVar4 < 0) {
                                uVar13 = 1;
                                local_40 = 1;
                                local_900 = (float)(uVar4 & 1 | uVar4 >> 1);
                                local_900 = local_900 + local_900;
                              }
                              else {
                                uVar13 = 1;
                                local_40 = 1;
                                local_900 = (float)uVar4;
                              }
                              goto LAB_08a1dec8;
                            }
                            uVar13 = (uint)*(ushort *)(param_1 + 0x20);
                            goto LAB_08a1dbf4;
                          }
                          if (uVar4 == 0x47) {
                            puVar10 = *(undefined4 **)(uVar7 + 0x30);
                            uVar13 = 0x10;
                            if (puVar10 == (undefined4 *)0x0) {
                              puVar10 = &DAT_08aa5240;
                            }
                          }
                          else {
                            if (uVar4 != 0x48) {
                              uVar13 = (uint)*(ushort *)(param_1 + 0x20);
                              goto LAB_08a1dbf4;
                            }
                            puVar10 = (undefined4 *)(uVar7 + 0x50);
                            uVar13 = 3;
                          }
                        }
                      }
                      else {
                        uVar13 = 4;
                      }
LAB_08a1deb0:
                      memcpy_jak(&local_900,puVar10,uVar13 << 2);
                      goto LAB_08a1deb8;
                    }
                    if (uVar4 == 0x4f) {
                      local_900 = *(float *)(uVar7 + 0x28);
                      uVar13 = 1;
                      local_40 = 1;
                      goto LAB_08a1dec8;
                    }
                    if (uVar4 < 0x50) {
                      if (uVar4 < 0x4e) {
LAB_08a1dea4:
                        puVar10 = (undefined4 *)(uVar7 + 0x70);
                        uVar13 = 3;
                        goto LAB_08a1deb0;
                      }
                      uVar13 = (uint)*(ushort *)(param_1 + 0x20);
                    }
                    else {
                      if (uVar4 == 0xe1) goto LAB_08a1dea4;
                      uVar13 = (uint)*(ushort *)(param_1 + 0x20);
                    }
                  }
                  goto LAB_08a1dbf4;
                }
                if ((uVar7 + 1 & 0xffff0000) == 0) {
                  iVar12 = iVar11;
                  if (*(ushort *)(local_850 + 0x1c) <= uVar7) goto LAB_08a1dbf4;
                  uVar7 = *(int *)(local_850 + 0xc) + uVar7 * 0x10;
                }
                iVar12 = iVar11;
                if (uVar7 == 0) goto LAB_08a1dbf4;
                switch(uVar4 - 0x82) {
                case 0:
                  local_910[0] = FUN_08a15f24(uVar7);
                  uVar13 = 4;
                  FUN_08a13dd0(&local_900,local_910);
                  break;
                case 1:
                  local_910[0] = FUN_08a15eb0(uVar7);
                  local_8f0 = FUN_08a15f6c(uVar7);
                  uVar13 = 5;
                  FUN_08a13dd0(&local_900,local_910);
                  break;
                case 2:
                  local_910[0] = FUN_08a15dd0(uVar7);
                  uVar13 = 4;
                  FUN_08a13dd0(&local_900,local_910);
                  break;
                case 3:
                  local_910[0] = FUN_08a15eb0(uVar7);
                  uVar13 = 4;
                  FUN_08a13dd0(&local_900,local_910);
                  break;
                case 4:
                  local_900 = (float)FUN_08a15e18(uVar7);
                  uVar13 = 1;
                  local_40 = 1;
                  goto LAB_08a1dec8;
                case 5:
                case 6:
                  uVar13 = 1;
                  local_40 = 1;
                  local_900 = 0.0;
                  goto LAB_08a1dec8;
                default:
                  uVar13 = (uint)*(ushort *)(param_1 + 0x20);
                  goto LAB_08a1dbf4;
                case 0x16:
                  pfVar1 = (float *)FUN_08a15fe8(uVar7,0,uVar4,local_854);
                  if (pfVar1 == (float *)0x0) {
                    pfVar1 = (float *)&DAT_08aa5220;
                  }
                  local_8f4 = pfVar1[3];
                  local_900 = *pfVar1;
                  local_8fc = pfVar1[1];
                  local_8f8 = pfVar1[2];
                  uVar13 = 4;
                  local_40 = 4;
                  goto LAB_08a1dec8;
                }
LAB_08a1deb8:
                if (uVar13 == 0) {
                  uVar13 = (uint)*(ushort *)(param_1 + 0x20);
                  iVar12 = iVar11;
                }
                else {
                  local_40 = uVar13 & 0xff;
LAB_08a1dec8:
                  puVar10 = (undefined4 *)FUN_08a12ee4(local_854,0,4,uVar13 * 4 + 1);
                  memcpy_jak(puVar10 + 1,&local_900,uVar13 * 4);
                  *puVar10 = 0;
                  uVar13 = (local_3c << 8) >> 0x18;
                  if ((uVar13 - 0x48 < 6) || (uVar13 == 0xe1)) {
                    uVar3 = 0x101;
                  }
                  else {
                    uVar3 = 0x100;
                    if ((((5 < uVar13 - 0x42) && (uVar13 != 0x4f)) &&
                        (uVar3 = 0x200, 6 < uVar13 - 0x82)) && (uVar3 = 0, uVar13 == 0x98)) {
                      uVar3 = 0x200;
                    }
                  }
                  *(ushort *)(iVar11 + 2) = *(ushort *)(iVar11 + 2) | uVar3 | 2;
                  *(char *)(iVar11 + 0xd) = (char)(local_3c >> 0x10);
                  *(char *)(iVar11 + 0xc) = (char)local_40;
                  *(undefined2 *)(iVar11 + 10) = 1;
                  *(undefined2 *)(iVar11 + 8) = 0;
                  *(short *)(iVar11 + 0xe) = (short)local_3c;
                  uVar13 = (uint)*(ushort *)(param_1 + 0x20);
                  *(undefined4 **)(iVar11 + 4) = puVar10;
                  iVar12 = iVar11;
                }
LAB_08a1dbf4:
                iVar14 = local_84c;
                if ((int)(uVar13 + 1) <= iVar6 + 1) goto LAB_08a1dc60;
LAB_08a1dc08:
                iVar6 = iVar6 + 1;
                iVar15 = iVar15 + 0x30;
              }
              FUN_08a1cbc0(iVar11,iVar12,0);
              uVar13 = (uint)*(ushort *)(param_1 + 0x20);
              iVar14 = local_84c;
              iVar12 = iVar11;
              if (iVar6 + 1 < (int)(uVar13 + 1)) goto LAB_08a1dc08;
            }
LAB_08a1dc60:
            iVar16 = iVar16 + 1;
            puVar18 = puVar18 + 1;
          } while (iVar16 < iVar14);
        }
        FUN_08a12fb4(auStack_8c0);
        return 1;
      }
    }
  }
  return 0;
}

