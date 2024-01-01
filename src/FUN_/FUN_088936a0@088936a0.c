#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088936a0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  undefined4 local_40;
  int local_3c;
  uint *local_38;
  
  local_3c = param_1 + 0x530;
  iVar13 = 0;
  iVar17 = 0;
  if ((((*(uint *)(param_1 + 0x918) & 0x8000) == 0) || (*(int *)(param_1 + 0x54c) != 0)) ||
     (local_38 = *(uint **)(param_1 + 0x57c), local_38 == (uint *)0x0)) {
    return 0;
  }
  if (*(char *)(param_1 + 0x568) == '\0') {
    fVar18 = *(float *)(param_1 + 0x564) + 0.03333334;
    *(float *)(param_1 + 0x564) = fVar18;
    if (*(float *)(param_1 + 0x560) <= fVar18) {
      *(float *)(param_1 + 0x564) = *(float *)(param_1 + 0x560);
      *(undefined *)(param_1 + 0x568) = 1;
    }
  }
  uVar15 = local_38[1];
  uVar16 = 0;
  if (*local_38 != 0) {
    do {
      if ((*(uint *)(uVar15 + 0x44) & 1 << (*(uint *)(param_1 + 0x2c0) & 0x1f)) != 0) {
        bVar1 = *(byte *)(uVar15 + 2);
        if (bVar1 < 0x16) {
          if (bVar1 == 0xf) {
            uVar2 = *(ushort *)(uVar15 + 4);
LAB_08893828:
            iVar8 = *(int *)(param_1 + 0x1a4) + -1;
            fVar18 = (float)iVar8;
            if (iVar8 < 0) {
              fVar18 = fVar18 + 4.294967e+09;
            }
            uVar9 = (uint)*(byte *)(uVar15 + 0xc);
            uVar10 = uVar9 - 0xb;
            uVar14 = (uint)uVar2 +
                     ((int)((float)((uint)*(ushort *)(uVar15 + 6) - (uint)uVar2) *
                           fVar18 * 0.1111111) & 0xffffU) & 0xffff;
            iVar8 = iVar13;
            if (uVar10 < 5) {
              if (uVar9 == 0xb) {
                if ((*(char *)(local_3c + 0x38) != '\0') || (*(int *)(param_1 + 0x96c) == 0)) {
                  iVar13 = 0;
                  do {
                    iVar6 = param_1 + iVar13 * 8;
                    iVar12 = (int)*(short *)(iVar6 + 0x94e);
                    pcVar11 = *(code **)(iVar6 + 0x950);
                    if (((iVar12 != 0) || (*(short *)(iVar6 + 0x94c) != 0)) ||
                       (pcVar11 != (code *)0x0)) {
                      iVar6 = param_1 + *(short *)(iVar6 + 0x94c);
                      if (iVar12 != 0) {
                        psVar7 = (short *)(*(int *)(pcVar11 + iVar6) + iVar12 * 8);
                        iVar6 = iVar6 + *psVar7;
                        pcVar11 = *(code **)(psVar7 + 2);
                      }
                      iVar12 = (*pcVar11)(iVar6);
                      if (iVar12 != 0) {
                        iVar8 = FUN_088663a0(iVar12);
                        iVar12 = (**(code **)(*(int *)(iVar8 + 0x14) + 0x54))
                                           (iVar8 + *(short *)(*(int *)(iVar8 + 0x14) + 0x50));
                        if ((iVar12 == 0) || (iVar12 = FUN_0888efc8(param_1), iVar12 == 0)) {
                          iVar12 = FUN_089bed14(99);
                          if (iVar12 < (int)uVar14) {
                            if ((*(int *)(param_1 + 0x96c) != 0) &&
                               (*(int *)(*(int *)(param_1 + 0x96c) + 0xc) == *(int *)(iVar8 + 0xc)))
                            {
                              iVar8 = 0;
                            }
                            if (iVar8 != 0) {
                              iVar13 = *(int *)(param_1 + 0x96c);
                              goto LAB_08893e58;
                            }
                          }
                          else {
                            iVar8 = 0;
                          }
                        }
                        else {
                          iVar8 = 0;
                        }
                      }
                    }
                    iVar13 = (int)(char)((char)iVar13 + '\x01');
                  } while (iVar13 < 4);
                }
              }
              else if (uVar10 == 1) {
                piVar5 = (int *)FUN_088660c8();
                if ((piVar5 != (int *)0x0) && (iVar12 = *piVar5, iVar12 != 0)) {
                  iVar8 = *(int *)(param_1 + 0x1a0);
                  do {
                    if (*(int *)(iVar8 + 0xc) == *(int *)(iVar12 + 0xc)) {
                      iVar12 = *(int *)(iVar12 + 4);
                    }
                    else {
                      iVar8 = (**(code **)(*(int *)(iVar12 + 0x14) + 0x54))
                                        (iVar12 + *(short *)(*(int *)(iVar12 + 0x14) + 0x50));
                      if (iVar8 == 0) {
                        iVar12 = *(int *)(iVar12 + 4);
                      }
                      else {
                        iVar8 = FUN_0888e104(param_1,iVar12);
                        if (iVar8 == 0) {
                          iVar12 = *(int *)(iVar12 + 4);
                        }
                        else {
                          bVar3 = false;
                          if ((2 < *(int *)(iVar12 + 0x140)) &&
                             (bVar3 = false, *(int *)(iVar12 + 0x140) < 7)) {
                            bVar3 = true;
                          }
                          if (bVar3) {
                            iVar6 = FUN_089bed14(99);
                            iVar8 = iVar12;
                            if (iVar6 < (int)uVar14) break;
                            iVar12 = *(int *)(iVar12 + 4);
                          }
                          else {
                            iVar12 = *(int *)(iVar12 + 4);
                          }
                        }
                      }
                    }
                    iVar8 = iVar13;
                    if (iVar12 == 0) break;
                    iVar8 = *(int *)(param_1 + 0x1a0);
                  } while( true );
                }
              }
              else if (uVar10 == 2) {
                iVar12 = *(int *)(param_1 + 0x1a0);
                bVar1 = 0;
                if ((((*(uint *)(iVar12 + 0x144) & 0x30000000) == 0) &&
                    (*(int *)(iVar12 + 0x140) != 4)) && (*(int *)(iVar12 + 0x140) != 5)) {
                  iVar6 = *(int *)(iVar12 + 0x140);
                }
                else {
                  bVar1 = 1;
                  iVar6 = *(int *)(iVar12 + 0x140);
                }
                bVar4 = 0;
                if (iVar6 < 3) {
LAB_08893aac:
                  iVar6 = *(int *)(iVar12 + 0x140);
                }
                else {
                  if (iVar6 < 7) {
                    bVar4 = 1;
                    goto LAB_08893aac;
                  }
                  iVar6 = *(int *)(iVar12 + 0x140);
                }
                if ((((bool)(bVar1 | bVar4 | iVar6 == 3) || *(int *)(iVar12 + 0x140) == 3) &&
                    (piVar5 = (int *)FUN_088660c8(), piVar5 != (int *)0x0)) &&
                   (iVar12 = *piVar5, iVar12 != 0)) {
                  iVar8 = *(int *)(param_1 + 0x1a0);
                  do {
                    if (*(int *)(iVar8 + 0xc) == *(int *)(iVar12 + 0xc)) {
                      iVar12 = *(int *)(iVar12 + 4);
                    }
                    else {
                      iVar8 = (**(code **)(*(int *)(iVar12 + 0x14) + 0x54))
                                        (iVar12 + *(short *)(*(int *)(iVar12 + 0x14) + 0x50));
                      if (iVar8 == 0) {
                        iVar12 = *(int *)(iVar12 + 4);
                      }
                      else {
                        iVar6 = FUN_08860344(iVar12);
                        iVar8 = iVar12;
                        if (iVar6 == *(int *)(param_1 + 0x1a0)) break;
                        iVar12 = *(int *)(iVar12 + 4);
                      }
                    }
                    iVar8 = iVar13;
                    if (iVar12 == 0) break;
                    iVar8 = *(int *)(param_1 + 0x1a0);
                  } while( true );
                }
              }
              else if (uVar10 == 3) {
                piVar5 = (int *)FUN_088660c8();
                if ((piVar5 != (int *)0x0) && (iVar12 = *piVar5, iVar12 != 0)) {
                  iVar8 = *(int *)(param_1 + 0x1a0);
                  do {
                    if (*(int *)(iVar8 + 0xc) == *(int *)(iVar12 + 0xc)) {
                      iVar12 = *(int *)(iVar12 + 4);
                    }
                    else {
                      iVar8 = (**(code **)(*(int *)(iVar12 + 0x14) + 0x54))
                                        (iVar12 + *(short *)(*(int *)(iVar12 + 0x14) + 0x50));
                      if (iVar8 == 0) {
                        iVar12 = *(int *)(iVar12 + 4);
                      }
                      else {
                        iVar8 = FUN_08860344(iVar12);
                        if (iVar8 == 0) {
                          iVar12 = *(int *)(iVar12 + 4);
                        }
                        else {
                          iVar8 = FUN_08860344(iVar12);
                          iVar8 = (**(code **)(*(int *)(iVar8 + 0x14) + 0x5c))
                                            (iVar8 + *(short *)(*(int *)(iVar8 + 0x14) + 0x58));
                          if (iVar8 == 0) {
                            iVar12 = *(int *)(iVar12 + 4);
                          }
                          else {
                            bVar3 = (*(uint *)(iVar12 + 0x144) & 0x400000) != 0;
                            if ((*(int *)(iVar12 + 0x140) == 8) || (*(int *)(iVar12 + 0x140) == 10))
                            {
                              bVar3 = true;
                            }
                            if (bVar3) {
                              iVar6 = FUN_089bed14(99);
                              iVar8 = iVar12;
                              if (iVar6 < (int)uVar14) break;
                              iVar12 = *(int *)(iVar12 + 4);
                            }
                            else {
                              iVar12 = *(int *)(iVar12 + 4);
                            }
                          }
                        }
                      }
                    }
                    iVar8 = iVar13;
                    if (iVar12 == 0) break;
                    iVar8 = *(int *)(param_1 + 0x1a0);
                  } while( true );
                }
              }
              else {
                piVar5 = (int *)FUN_088660c8();
                if ((piVar5 != (int *)0x0) && (iVar12 = *piVar5, iVar12 != 0)) {
                  iVar6 = *(int *)(param_1 + 0x1a0);
                  do {
                    if (*(int *)(iVar6 + 0xc) == *(int *)(iVar12 + 0xc)) {
                      iVar12 = *(int *)(iVar12 + 4);
                    }
                    else {
                      iVar6 = (**(code **)(*(int *)(iVar12 + 0x14) + 0x54))
                                        (iVar12 + *(short *)(*(int *)(iVar12 + 0x14) + 0x50));
                      if (iVar6 == 0) {
                        iVar12 = *(int *)(iVar12 + 4);
                      }
                      else {
                        if ((*(uint *)(iVar12 + 0x144) & 0x100000) != 0) {
                          iVar8 = FUN_089bed14(99);
                          if (iVar8 < (int)uVar14) {
                            iVar13 = iVar12;
                          }
                          iVar8 = iVar13;
                          if (*(int *)(param_1 + 0x96c) != 0) {
                            if (*(int *)(*(int *)(param_1 + 0x96c) + 0xc) == *(int *)(iVar12 + 0xc))
                            {
                              iVar8 = 0;
                            }
                            else {
                              FUN_0888d008(param_1);
                            }
                          }
                          break;
                        }
                        iVar12 = *(int *)(iVar12 + 4);
                      }
                    }
                    if (iVar12 == 0) break;
                    iVar6 = *(int *)(param_1 + 0x1a0);
                  } while( true );
                }
              }
            }
            else {
              iVar12 = FUN_0889276c(*(undefined4 *)(uVar15 + 0x10),param_1,uVar9,
                                    *(undefined *)(uVar15 + 0x14));
              if (iVar12 != 0) {
                bVar1 = *(byte *)(uVar15 + 2);
                if (0x15 < bVar1) {
                  if (bVar1 < 0x17) {
                    local_40 = 0x16;
                    iVar13 = FUN_088932f8(param_1,&local_40);
                  }
                  else if (bVar1 < 0x18) {
                    local_40 = 1;
                    iVar13 = FUN_088932f8(param_1,&local_40);
                  }
                }
                if (iVar13 == 0) {
                  iVar8 = 0;
                }
                else {
                  iVar12 = FUN_089bed14(99);
                  iVar8 = iVar13;
                  if ((int)uVar14 <= iVar12) {
                    iVar8 = 0;
                  }
                }
              }
            }
            iVar13 = iVar8;
            if (iVar8 != 0) {
              iVar13 = *(int *)(param_1 + 0x96c);
LAB_08893e58:
              iVar12 = local_3c;
              iVar17 = 1;
              if ((iVar13 != 0) && (*(int *)(iVar13 + 0xc) == *(int *)(iVar8 + 0xc))) {
                iVar17 = 0;
              }
              iVar13 = iVar8;
              if (iVar17 != 0) {
                fVar18 = (float)FUN_088903e8(param_1,uVar15 + 0x30);
                *(undefined4 *)(iVar12 + 0x34) = 0;
                *(float *)(iVar12 + 0x30) = (float)(int)fVar18 * 0.03333334;
                *(bool *)(local_3c + 0x38) = (float)(int)fVar18 * 0.03333334 <= 0.0;
                FUN_0888f248(param_1,iVar8);
                *(undefined4 *)(param_1 + 0x970) = 0;
                FUN_0888f214(param_1);
                iVar13 = *(int *)(param_1 + 0x96c);
                goto LAB_08893f10;
              }
            }
          }
        }
        else if (bVar1 < 0x18) {
          uVar2 = *(ushort *)(uVar15 + 4);
          goto LAB_08893828;
        }
      }
      uVar16 = uVar16 + 1;
      uVar15 = uVar15 + 0x48;
    } while (uVar16 < *local_38);
  }
  iVar13 = *(int *)(param_1 + 0x96c);
LAB_08893f10:
  if (iVar13 != 0) {
    if ((*(byte *)(iVar13 + 0x4c1) | *(char *)(iVar13 + 0x574) != '\0') == 0) {
      iVar13 = (**(code **)(*(int *)(iVar13 + 0x14) + 0x54))
                         (iVar13 + *(short *)(*(int *)(iVar13 + 0x14) + 0x50));
      if ((iVar13 != 0) && (*(char *)(*(int *)(param_1 + 0x96c) + 0x476) != '\0')) {
        FUN_0888f248(param_1,0);
        FUN_0888f214(param_1);
        iVar17 = 0;
      }
    }
    else {
      FUN_0888f248(param_1,0);
      FUN_0888f214(param_1);
      iVar17 = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x168) + 0x1c) = 0;
      FUN_0888cfe4(param_1 + 0x404);
    }
  }
  return iVar17;
}

