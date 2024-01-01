#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a1d8b8(int param_1)

{
  float *pfVar1;
  undefined *ptr;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
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
    iVar15 = 0;
    uVar12 = (uint)*(ushort *)(param_1 + 0x20);
    iVar13 = uVar12 + 1;
    local_84c = 0;
    if (iVar13 != 0) {
      iVar11 = *(int *)(param_1 + 0x14);
      iVar14 = 0;
      do {
        uVar3 = (uint)*(ushort *)(iVar11 + 0xc);
        if (uVar3 != 0) {
          iVar10 = 0;
          iVar5 = *(int *)(iVar11 + 4);
          do {
            iVar5 = iVar5 + iVar10 * 0x10;
            uVar3 = 0x4b;
            if (1 < *(byte *)(iVar5 + 0xd) - 0x49) {
              uVar3 = (uint)*(byte *)(iVar5 + 0xd);
            }
            uVar3 = (uint)*(ushort *)(iVar5 + 0xe) | uVar3 << 0x10;
            if ((iVar10 < local_84c) &&
               (iVar8 = iVar10, (local_844[iVar10 + -1] & 0xffffff) == uVar3)) {
LAB_08a1d9f0:
              if (iVar8 < 0) goto LAB_08a1db88;
LAB_08a1d9f8:
              uVar2 = *(ushort *)(iVar5 + 2);
            }
            else {
              if (0 < local_84c) {
                iVar8 = 0;
                if (uVar3 == (local_848 & 0xffffff)) goto LAB_08a1d9f8;
                for (iVar8 = 1; local_84c != iVar8; iVar8 = iVar8 + 1) {
                  if (uVar3 == (local_844[iVar8 + -1] & 0xffffff)) goto LAB_08a1d9f0;
                }
              }
              iVar8 = -1;
LAB_08a1db88:
              if (local_84c < 0x200) {
                local_844[local_84c + -1] = uVar3;
                iVar8 = local_84c;
                local_84c = local_84c + 1;
              }
              if (iVar8 < 0) {
                return 0;
              }
              uVar2 = *(ushort *)(iVar5 + 2);
            }
            if ((uVar2 & 2) == 0) {
              *(char *)((int)local_844 + iVar8 * 4 + -1) =
                   *(char *)((int)local_844 + iVar8 * 4 + -1) + '\x01';
              uVar2 = *(ushort *)(iVar11 + 0xc);
            }
            else {
              uVar2 = *(ushort *)(iVar11 + 0xc);
            }
            uVar3 = (uint)uVar2;
            iVar10 = iVar10 + 1;
            if ((int)uVar3 <= iVar10) break;
            iVar5 = *(int *)(iVar11 + 4);
          } while( true );
        }
        iVar14 = iVar14 + 1;
        iVar15 = iVar15 + uVar3;
        iVar11 = iVar11 + 0x30;
      } while (iVar14 != iVar13);
    }
    puVar9 = &local_848;
    if (local_84c * iVar13 != iVar15) {
      if (0 < local_84c) {
        puVar4 = &local_848;
        iVar15 = 0;
        puVar9 = puVar4;
        do {
          iVar15 = iVar15 + 1;
          if (*(char *)((int)puVar4 + 3) != '\0') {
            *puVar9 = *puVar4;
            puVar9 = puVar9 + 1;
          }
          puVar4 = puVar4 + 1;
        } while (iVar15 < local_84c);
      }
      puVar17 = &local_848;
      local_84c = (int)puVar9 - (int)puVar17 >> 2;
      local_850 = param_1;
      if (iVar13 != 0) {
        iVar13 = 0;
        do {
          iVar13 = iVar13 + 1;
          FUN_08a1436c(local_84c,local_854);
          FUN_08a12d94(local_854,0,4,local_84c << 1);
          uVar12 = (uint)*(ushort *)(param_1 + 0x20);
        } while (iVar13 < (int)(uVar12 + 1));
      }
      if (0 < local_84c) {
        iVar13 = 0;
        puVar16 = puVar17;
        do {
          iVar15 = 0;
          switch(*(undefined *)((int)puVar16 + 2)) {
          case 0x42:
          case 0x4f:
          case 0x86:
            iVar15 = 4;
            break;
          case 0x43:
            iVar15 = 0x20;
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
            iVar15 = 0;
            break;
          case 0x47:
            iVar15 = 0x40;
            break;
          case 0x48:
          case 0x4c:
          case 0x4d:
          case 0xe1:
            iVar15 = 0xc;
            break;
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x82:
          case 0x84:
          case 0x85:
          case 0x98:
            iVar15 = 0x10;
            break;
          case 0x83:
            iVar15 = 0x14;
          }
          FUN_08a12d94(local_854,0,4,iVar15 + 4);
          iVar13 = iVar13 + 1;
          puVar16 = puVar16 + 1;
        } while (iVar13 < local_84c);
        uVar12 = (uint)*(ushort *)(param_1 + 0x20);
      }
      iVar13 = *(int *)(param_1 + 0x14) + uVar12 * 0x30;
      if (*(short *)(iVar13 + 0xc) != 0) {
        iVar14 = 0;
        iVar15 = *(int *)(iVar13 + 8);
        iVar11 = *(int *)(iVar13 + 4);
        do {
          FUN_08a17f48(0,0x3f800000,iVar11,iVar15,param_1);
          iVar14 = iVar14 + 1;
          iVar15 = iVar15 + 2;
          iVar11 = iVar11 + 0x10;
        } while (iVar14 < (int)(uint)*(ushort *)(iVar13 + 0xc));
      }
      iVar13 = FUN_08a136f0(auStack_8c0);
      if (iVar13 != 0) {
        uVar12 = (uint)*(ushort *)(param_1 + 0x20);
        if (uVar12 != 0xffffffff) {
          iVar13 = *(int *)(param_1 + 0x14);
          iVar11 = 0;
          iVar15 = FUN_08a14504(local_84c,local_854);
          ptr = (undefined *)FUN_08a12ee4(local_854,0,4,local_84c << 1);
          memset_jak(ptr,0,local_84c << 1);
          uVar12 = (uint)*(ushort *)(iVar13 + 0xc);
          iVar14 = 0;
          if (uVar12 == 0) goto LAB_08a1e264;
          iVar5 = *(int *)(iVar13 + 4);
          do {
            iVar8 = 0;
            iVar10 = 0;
            do {
              iVar10 = iVar5 + iVar10;
              if ((*(ushort *)(iVar10 + 2) & 2) == 0) {
                uVar3 = 0x4b;
                if (1 < *(byte *)(iVar10 + 0xd) - 0x49) {
                  uVar3 = (uint)*(byte *)(iVar10 + 0xd);
                }
                uVar3 = (uint)*(ushort *)(iVar10 + 0xe) | uVar3 << 0x10;
                if ((iVar8 < local_84c) &&
                   (iVar7 = iVar8, (local_844[iVar8 + -1] & 0xffffff) == uVar3)) {
LAB_08a1e194:
                  if (-1 < iVar7) {
LAB_08a1e19c:
                    FUN_08a1cbc0(iVar15 + iVar7 * 0x10,iVar10,0,local_854);
                    uVar12 = (uint)*(ushort *)(iVar13 + 0xc);
                    iVar5 = *(int *)(iVar13 + 4);
                  }
                }
                else if (0 < local_84c) {
                  iVar7 = 0;
                  if ((local_848 & 0xffffff) == uVar3) goto LAB_08a1e19c;
                  for (iVar7 = 1; local_84c != iVar7; iVar7 = iVar7 + 1) {
                    if ((local_844[iVar7 + -1] & 0xffffff) == uVar3) goto LAB_08a1e194;
                  }
                }
              }
              iVar8 = iVar8 + 1;
              iVar10 = iVar8 * 0x10;
            } while (iVar8 < (int)uVar12);
            while( true ) {
              FUN_08a146ac(iVar5);
              iVar14 = iVar14 + 1;
              thunk_FUN_08a13244(0,*(undefined4 *)(iVar13 + 8));
              *(int *)(iVar13 + 4) = iVar15;
              iVar11 = iVar11 + 0x30;
              *(short *)(iVar13 + 0xc) = (short)local_84c;
              uVar12 = (uint)*(ushort *)(param_1 + 0x20);
              *(undefined **)(iVar13 + 8) = ptr;
              if ((int)(uVar12 + 1) <= iVar14) goto LAB_08a1dbc4;
              iVar13 = *(int *)(param_1 + 0x14) + iVar11;
              iVar15 = FUN_08a14504(local_84c,local_854);
              ptr = (undefined *)FUN_08a12ee4(local_854,0,4,local_84c << 1);
              memset_jak(ptr,0,local_84c << 1);
              uVar12 = (uint)*(ushort *)(iVar13 + 0xc);
              if (uVar12 != 0) break;
LAB_08a1e264:
              iVar5 = *(int *)(iVar13 + 4);
            }
            iVar5 = *(int *)(iVar13 + 4);
          } while( true );
        }
LAB_08a1dbc4:
        iVar15 = 0;
        iVar13 = local_84c;
        if (0 < local_84c) {
          do {
            if (uVar12 != 0xffffffff) {
              iVar11 = 0;
              iVar5 = 0;
              iVar14 = 0;
              while( true ) {
                iVar10 = *(int *)(*(int *)(param_1 + 0x14) + iVar14 + 4) + iVar15 * 0x10;
                if (*(int *)(iVar10 + 4) != 0) goto LAB_08a1dbf4;
                if (iVar11 != 0) break;
                local_3c = *puVar17;
                uVar3 = (local_3c << 8) >> 0x18;
                uVar6 = local_3c & 0xffff;
                if (0x16 < uVar3 - 0x82) {
                  if ((uVar6 + 1 & 0xffff0000) == 0) {
                    iVar11 = iVar10;
                    if (*(ushort *)(local_850 + 0x18) <= uVar6) goto LAB_08a1dbf4;
                    uVar6 = *(int *)(local_850 + 4) + uVar6 * 0xc0;
                  }
                  iVar11 = iVar10;
                  if (uVar6 != 0) {
                    if (uVar3 < 0x4c) {
                      puVar9 = (undefined4 *)(uVar6 + 0x60);
                      if (uVar3 < 0x49) {
                        if (uVar3 == 0x43) {
                          puVar9 = *(undefined4 **)(uVar6 + 0xc);
                          uVar12 = (uint)*(ushort *)(uVar6 + 0x1a);
                          if (puVar9 == (undefined4 *)0x0) {
                            puVar9 = (undefined4 *)&DAT_08aa55a0;
                            uVar12 = 8;
                          }
                          else if (uVar12 == 0) goto LAB_08a1deb8;
                        }
                        else {
                          if (uVar3 < 0x44) {
                            if (uVar3 == 0x42) {
                              uVar3 = *(uint *)(uVar6 + 0x24);
                              if ((int)uVar3 < 0) {
                                uVar12 = 1;
                                local_40 = 1;
                                local_900 = (float)(uVar3 & 1 | uVar3 >> 1);
                                local_900 = local_900 + local_900;
                              }
                              else {
                                uVar12 = 1;
                                local_40 = 1;
                                local_900 = (float)uVar3;
                              }
                              goto LAB_08a1dec8;
                            }
                            uVar12 = (uint)*(ushort *)(param_1 + 0x20);
                            goto LAB_08a1dbf4;
                          }
                          if (uVar3 == 0x47) {
                            puVar9 = *(undefined4 **)(uVar6 + 0x30);
                            uVar12 = 0x10;
                            if (puVar9 == (undefined4 *)0x0) {
                              puVar9 = &DAT_08aa5240;
                            }
                          }
                          else {
                            if (uVar3 != 0x48) {
                              uVar12 = (uint)*(ushort *)(param_1 + 0x20);
                              goto LAB_08a1dbf4;
                            }
                            puVar9 = (undefined4 *)(uVar6 + 0x50);
                            uVar12 = 3;
                          }
                        }
                      }
                      else {
                        uVar12 = 4;
                      }
LAB_08a1deb0:
                      memcpy_jak(&local_900,puVar9,uVar12 << 2);
                      goto LAB_08a1deb8;
                    }
                    if (uVar3 == 0x4f) {
                      local_900 = *(float *)(uVar6 + 0x28);
                      uVar12 = 1;
                      local_40 = 1;
                      goto LAB_08a1dec8;
                    }
                    if (uVar3 < 0x50) {
                      if (uVar3 < 0x4e) {
LAB_08a1dea4:
                        puVar9 = (undefined4 *)(uVar6 + 0x70);
                        uVar12 = 3;
                        goto LAB_08a1deb0;
                      }
                      uVar12 = (uint)*(ushort *)(param_1 + 0x20);
                    }
                    else {
                      if (uVar3 == 0xe1) goto LAB_08a1dea4;
                      uVar12 = (uint)*(ushort *)(param_1 + 0x20);
                    }
                  }
                  goto LAB_08a1dbf4;
                }
                if ((uVar6 + 1 & 0xffff0000) == 0) {
                  iVar11 = iVar10;
                  if (*(ushort *)(local_850 + 0x1c) <= uVar6) goto LAB_08a1dbf4;
                  uVar6 = *(int *)(local_850 + 0xc) + uVar6 * 0x10;
                }
                iVar11 = iVar10;
                if (uVar6 == 0) goto LAB_08a1dbf4;
                switch(uVar3 - 0x82) {
                case 0:
                  local_910[0] = FUN_08a15f24(uVar6);
                  uVar12 = 4;
                  FUN_08a13dd0(&local_900,local_910);
                  break;
                case 1:
                  local_910[0] = FUN_08a15eb0(uVar6);
                  local_8f0 = FUN_08a15f6c(uVar6);
                  uVar12 = 5;
                  FUN_08a13dd0(&local_900,local_910);
                  break;
                case 2:
                  local_910[0] = FUN_08a15dd0(uVar6);
                  uVar12 = 4;
                  FUN_08a13dd0(&local_900,local_910);
                  break;
                case 3:
                  local_910[0] = FUN_08a15eb0(uVar6);
                  uVar12 = 4;
                  FUN_08a13dd0(&local_900,local_910);
                  break;
                case 4:
                  local_900 = (float)FUN_08a15e18(uVar6);
                  uVar12 = 1;
                  local_40 = 1;
                  goto LAB_08a1dec8;
                case 5:
                case 6:
                  uVar12 = 1;
                  local_40 = 1;
                  local_900 = 0.0;
                  goto LAB_08a1dec8;
                default:
                  uVar12 = (uint)*(ushort *)(param_1 + 0x20);
                  goto LAB_08a1dbf4;
                case 0x16:
                  pfVar1 = (float *)FUN_08a15fe8(uVar6,0,uVar3,local_854);
                  if (pfVar1 == (float *)0x0) {
                    pfVar1 = (float *)&DAT_08aa5220;
                  }
                  local_8f4 = pfVar1[3];
                  local_900 = *pfVar1;
                  local_8fc = pfVar1[1];
                  local_8f8 = pfVar1[2];
                  uVar12 = 4;
                  local_40 = 4;
                  goto LAB_08a1dec8;
                }
LAB_08a1deb8:
                if (uVar12 == 0) {
                  uVar12 = (uint)*(ushort *)(param_1 + 0x20);
                  iVar11 = iVar10;
                }
                else {
                  local_40 = uVar12 & 0xff;
LAB_08a1dec8:
                  puVar9 = (undefined4 *)FUN_08a12ee4(local_854,0,4,uVar12 * 4 + 1);
                  memcpy_jak(puVar9 + 1,&local_900,uVar12 * 4);
                  *puVar9 = 0;
                  uVar12 = (local_3c << 8) >> 0x18;
                  if ((uVar12 - 0x48 < 6) || (uVar12 == 0xe1)) {
                    uVar2 = 0x101;
                  }
                  else {
                    uVar2 = 0x100;
                    if ((((5 < uVar12 - 0x42) && (uVar12 != 0x4f)) &&
                        (uVar2 = 0x200, 6 < uVar12 - 0x82)) && (uVar2 = 0, uVar12 == 0x98)) {
                      uVar2 = 0x200;
                    }
                  }
                  *(ushort *)(iVar10 + 2) = *(ushort *)(iVar10 + 2) | uVar2 | 2;
                  *(char *)(iVar10 + 0xd) = (char)(local_3c >> 0x10);
                  *(char *)(iVar10 + 0xc) = (char)local_40;
                  *(undefined2 *)(iVar10 + 10) = 1;
                  *(undefined2 *)(iVar10 + 8) = 0;
                  *(short *)(iVar10 + 0xe) = (short)local_3c;
                  uVar12 = (uint)*(ushort *)(param_1 + 0x20);
                  *(undefined4 **)(iVar10 + 4) = puVar9;
                  iVar11 = iVar10;
                }
LAB_08a1dbf4:
                iVar13 = local_84c;
                if ((int)(uVar12 + 1) <= iVar5 + 1) goto LAB_08a1dc60;
LAB_08a1dc08:
                iVar5 = iVar5 + 1;
                iVar14 = iVar14 + 0x30;
              }
              FUN_08a1cbc0(iVar10,iVar11,0);
              uVar12 = (uint)*(ushort *)(param_1 + 0x20);
              iVar13 = local_84c;
              iVar11 = iVar10;
              if (iVar5 + 1 < (int)(uVar12 + 1)) goto LAB_08a1dc08;
            }
LAB_08a1dc60:
            iVar15 = iVar15 + 1;
            puVar17 = puVar17 + 1;
          } while (iVar15 < iVar13);
        }
        FUN_08a12fb4(auStack_8c0);
        return 1;
      }
    }
  }
  return 0;
}

