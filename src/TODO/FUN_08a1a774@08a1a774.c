#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a1a774(undefined4 *param_1,short *param_2,int param_3)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined *ptr;
  float *pfVar4;
  undefined2 *puVar5;
  int *piVar6;
  ushort *puVar7;
  ushort uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  short *psVar11;
  ushort uVar12;
  ushort *puVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ushort *puVar19;
  int *piVar20;
  uint uVar21;
  uint *puVar22;
  short sVar23;
  uint uVar24;
  int *piVar25;
  int iVar26;
  int *piVar27;
  undefined4 *puVar28;
  uint *puVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint *puVar33;
  undefined2 uVar34;
  ushort *puVar35;
  uint *puVar36;
  float fVar37;
  undefined auStack_b0 [16];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  ushort *local_88;
  uint *local_84;
  ushort *local_80;
  int local_7c;
  undefined4 local_78;
  uint local_74;
  ushort *local_70;
  int local_6c;
  ushort *local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  int local_48;
  
  local_50 = 0;
  psVar11 = (short *)0x0;
  if (param_2 == (short *)0x0) {
LAB_08a1a820:
    iVar32 = 0;
  }
  else {
    puVar13 = (ushort *)(*(int *)(param_2 + 2) + (int)param_2);
    puVar2 = puVar13;
    if (-1 < *param_2) {
      puVar2 = (ushort *)((int)param_2 + *(int *)(param_2 + 4));
    }
    local_50 = 0;
    if (puVar2 < puVar13) {
      local_50 = 0;
      do {
        uVar1 = *puVar2;
        puVar2 = (ushort *)((int)puVar2 + *(int *)(puVar2 + 2));
        local_50 = local_50 + (uint)((uVar1 & 0x7fff) == 4);
      } while (puVar2 < puVar13);
    }
    iVar32 = 0;
    psVar11 = param_2;
    if (param_2 != (short *)0x0) {
      puVar13 = (ushort *)((int)param_2 + *(int *)(param_2 + 2));
      puVar2 = puVar13;
      if (-1 < *param_2) {
        puVar2 = (ushort *)((int)param_2 + *(int *)(param_2 + 4));
      }
      iVar32 = 0;
      if (puVar13 <= puVar2) goto LAB_08a1a820;
      do {
        uVar1 = *puVar2;
        puVar2 = (ushort *)((int)puVar2 + *(int *)(puVar2 + 2));
        iVar32 = iVar32 + (uint)((uVar1 & 0x7fff) == 5);
      } while (puVar2 < puVar13);
    }
  }
  iVar30 = 0;
  if (param_2 != (short *)0x0) {
    puVar2 = (ushort *)((int)psVar11 + *(int *)(param_2 + 2));
    if (-1 < *param_2) {
      puVar2 = (ushort *)((int)psVar11 + *(int *)(param_2 + 4));
    }
    iVar30 = 0;
    for (; puVar2 < (ushort *)((int)psVar11 + *(int *)(param_2 + 2));
        puVar2 = (ushort *)((int)puVar2 + *(int *)(puVar2 + 2))) {
      iVar30 = iVar30 + (uint)((*puVar2 & 0x7fff) == 8);
    }
  }
  iVar26 = 0;
  if (param_2 != (short *)0x0) {
    puVar2 = (ushort *)((int)psVar11 + *(int *)(param_2 + 2));
    if (-1 < *param_2) {
      puVar2 = (ushort *)((int)psVar11 + *(int *)(param_2 + 4));
    }
    iVar26 = 0;
    for (; puVar2 < (ushort *)((int)psVar11 + *(int *)(param_2 + 2));
        puVar2 = (ushort *)((int)puVar2 + *(int *)(puVar2 + 2))) {
      iVar26 = iVar26 + (uint)((*puVar2 & 0x7fff) == 10);
    }
  }
  if (param_2 != (short *)0x0) {
    puVar13 = (ushort *)((int)psVar11 + *(int *)(param_2 + 2));
    puVar2 = puVar13;
    if (-1 < *param_2) {
      puVar2 = (ushort *)((int)psVar11 + *(int *)(param_2 + 4));
    }
    iVar18 = 0;
    if (puVar2 < puVar13) {
      do {
        uVar1 = *puVar2;
        puVar2 = (ushort *)((int)puVar2 + *(int *)(puVar2 + 2));
        iVar18 = iVar18 + (uint)((uVar1 & 0x7fff) == 0xb);
      } while (puVar2 < puVar13);
      iVar31 = iVar18 + 1;
      uVar34 = (undefined2)iVar18;
      if (iVar18 != 0) goto LAB_08a1a8c8;
    }
  }
  iVar31 = 0;
  uVar34 = 0;
LAB_08a1a8c8:
  local_4c = param_1;
  local_48 = param_3;
  local_54 = FUN_08a14604(local_50,*param_1);
  local_58 = FUN_08a145e4(iVar32,*local_4c);
  local_5c = FUN_08a14584(iVar30,*local_4c);
  local_60 = FUN_08a14544(iVar26,*local_4c);
  local_64 = FUN_08a14524(iVar31,*local_4c);
  local_68 = (ushort *)(*(int *)(param_2 + 2) + (int)psVar11);
  *(short *)(local_48 + 0x18) = (short)local_50;
  *(short *)(local_48 + 0x1a) = (short)iVar32;
  *(short *)(local_48 + 0x1c) = (short)iVar30;
  *(short *)(local_48 + 0x1e) = (short)iVar26;
  *(undefined2 *)(local_48 + 0x20) = uVar34;
  *(int *)(local_48 + 4) = local_54;
  *(int *)(local_48 + 8) = local_58;
  sVar23 = *param_2;
  *(int *)(local_48 + 0xc) = local_5c;
  *(int *)(local_48 + 0x10) = local_60;
  *(int *)(local_48 + 0x14) = local_64;
  local_4c[1] = local_48;
  puVar2 = local_68;
  if (-1 < sVar23) {
    puVar2 = (ushort *)((int)psVar11 + *(int *)(param_2 + 4));
  }
  if (local_68 <= puVar2) {
LAB_08a1aa20:
    uVar3 = FUN_08a12ee4(*local_4c,0,4,local_50 << 1);
    *(undefined4 *)(local_48 + 0x48) = uVar3;
    FUN_08a1d6b8(local_48);
    FUN_08a1e34c(local_48);
    return;
  }
  uVar1 = *puVar2;
LAB_08a1a9b0:
  piVar27 = (int *)(puVar2 + 4);
  if (-1 < (short)uVar1) {
    piVar27 = (int *)((uint)puVar2[1] + (int)puVar2);
  }
  switch(uVar1 & 0x7fff) {
  case 4:
    iVar30 = local_54 + 0xc0;
    if (puVar2 == (ushort *)0x0) {
LAB_08a1ab90:
      uVar21 = 0;
      uVar34 = 0;
      iVar32 = 1;
    }
    else {
      puVar19 = (ushort *)(*(int *)(puVar2 + 2) + (int)puVar2);
      puVar13 = puVar19;
      if (-1 < (short)uVar1) {
        puVar13 = (ushort *)(*(int *)(puVar2 + 4) + (int)puVar2);
      }
      uVar21 = 0;
      if (puVar19 <= puVar13) goto LAB_08a1ab90;
      do {
        uVar1 = *puVar13;
        puVar13 = (ushort *)((int)puVar13 + *(int *)(puVar13 + 2));
        uVar21 = uVar21 + ((uVar1 & 0x7fff) == 0x4e);
      } while (puVar13 < puVar19);
      iVar32 = 1 << (uVar21 & 0x1f);
      uVar34 = (undefined2)uVar21;
    }
    puVar33 = (uint *)FUN_08a12ee4(*local_4c,0,4,uVar21 << 2);
    *(int *)(local_54 + 0x24) = iVar32 + -1;
    *(undefined2 *)(local_54 + 0x18) = uVar34;
    iVar32 = *(int *)(puVar2 + 2);
    uVar1 = *puVar2;
    *(uint **)(local_54 + 8) = puVar33;
    puVar19 = (ushort *)(iVar32 + (int)puVar2);
    puVar13 = puVar19;
    if (-1 < (short)uVar1) {
      puVar13 = (ushort *)(*(int *)(puVar2 + 4) + (int)puVar2);
    }
    puVar36 = (uint *)0x0;
    for (; puVar13 < puVar19; puVar13 = (ushort *)(iVar32 + (int)puVar13)) {
      uVar1 = *puVar13;
      while( true ) {
        while( true ) {
          puVar29 = (uint *)(puVar13 + 4);
          if (-1 < (short)uVar1) {
            puVar29 = (uint *)((uint)puVar13[1] + (int)puVar13);
          }
          uVar1 = uVar1 & 0x7fff;
          if (uVar1 != 0x48) break;
          FUN_08a13ea0(local_54 + 0x50,puVar29);
          puVar13 = (ushort *)(*(int *)(puVar13 + 2) + (int)puVar13);
          if (puVar19 <= puVar13) goto LAB_08a1ac74;
          uVar1 = *puVar13;
        }
        puVar22 = puVar36;
        if (uVar1 < 0x49) break;
        if (uVar1 == 0x4d) {
          FUN_08a13ea0(local_54 + 0x70,puVar29);
          puVar13 = (ushort *)(*(int *)(puVar13 + 2) + (int)puVar13);
          *(ushort *)(local_54 + 0x42) = *(ushort *)(local_54 + 0x42) | 0x20;
          if (puVar19 <= puVar13) goto LAB_08a1ac74;
          uVar1 = *puVar13;
        }
        else {
          if (uVar1 < 0x4e) {
            if (uVar1 == 0x4a) {
              FUN_08a13ea0(auStack_b0,puVar29);
              FUN_08a13d88(local_54 + 0x60,auStack_b0);
              iVar32 = *(int *)(puVar13 + 2);
            }
            else if (uVar1 < 0x4a) {
              FUN_08a13ea0(auStack_b0,puVar29);
              FUN_08a13d40(local_54 + 0x60,auStack_b0);
              iVar32 = *(int *)(puVar13 + 2);
            }
            else if (uVar1 == 0x4b) {
              FUN_08a13f88(local_54 + 0x60);
              iVar32 = *(int *)(puVar13 + 2);
            }
            else if (uVar1 == 0x4c) {
              FUN_08a13ea0(local_54 + 0x70,puVar29);
              iVar32 = *(int *)(puVar13 + 2);
            }
            else {
              iVar32 = *(int *)(puVar13 + 2);
            }
            goto LAB_08a1ac60;
          }
          if (uVar1 == 0x4f) {
            *(uint *)(local_54 + 0x28) = *puVar29;
            *(uint *)(local_54 + 0x20) = *(uint *)(local_54 + 0x20) | 0x40000;
LAB_08a1ac5c:
            iVar32 = *(int *)(puVar13 + 2);
            puVar36 = puVar22;
          }
          else {
            if (uVar1 < 0x4f) {
              *puVar33 = *puVar29 & 0xfff;
              puVar33 = puVar33 + 1;
              goto LAB_08a1ac5c;
            }
            if (uVar1 == 0xe1) {
              FUN_08a13ea0(local_54 + 0x70,puVar29);
              *(ushort *)(local_54 + 0x42) = *(ushort *)(local_54 + 0x42) | 0x40;
              goto LAB_08a1ac5c;
            }
            if (uVar1 == 0xe2) {
              if (*puVar29 == 0) {
                *(ushort *)(local_54 + 0x1e) = (ushort)(puVar29[1] != 0);
                goto LAB_08a1ac5c;
              }
              iVar32 = *(int *)(puVar13 + 2);
            }
            else {
              iVar32 = *(int *)(puVar13 + 2);
            }
          }
LAB_08a1ac60:
          puVar13 = (ushort *)(iVar32 + (int)puVar13);
          if (puVar19 <= puVar13) goto LAB_08a1ac74;
          uVar1 = *puVar13;
        }
      }
      if (uVar1 != 0x43) {
        if (uVar1 < 0x44) {
          if (uVar1 == 0x41) {
            *(ushort *)(local_54 + 0x40) = (ushort)*puVar29 & 0xfff;
          }
          else if (uVar1 < 0x42) {
            if (uVar1 == 0x14) {
              iVar32 = FUN_08a12ee4(*local_4c,0,0x10,0x20);
              FUN_08a13ea0(iVar32,puVar29);
              FUN_08a13ea0(iVar32 + 0x10,puVar29 + 3);
              *(int *)(local_54 + 0x34) = iVar32;
            }
          }
          else {
            *(uint *)(local_54 + 0x24) = *puVar29;
          }
        }
        else {
          puVar22 = puVar29;
          if (uVar1 != 0x45) {
            if (uVar1 < 0x45) {
              puVar7 = (ushort *)FUN_08a12ee4(*local_4c,0,4,*puVar29 << 1);
              uVar21 = *puVar29;
              *(ushort **)(local_54 + 0x10) = puVar7;
              *(short *)(local_54 + 0x1c) = (short)uVar21;
              puVar22 = puVar36;
              if (0 < (int)uVar21) {
                iVar32 = 0;
                do {
                  iVar32 = iVar32 + 1;
                  *puVar7 = (ushort)puVar29[1] & 0xfff;
                  puVar29 = puVar29 + 1;
                  puVar7 = puVar7 + 1;
                } while (iVar32 < (int)uVar21);
                iVar32 = *(int *)(puVar13 + 2);
                goto LAB_08a1ac60;
              }
            }
            else if (uVar1 == 0x46) {
              uVar3 = FUN_08a12ee4(*local_4c,0,0x10,0x10);
              FUN_08a13ea0(uVar3,puVar29);
              *(undefined4 *)(local_54 + 0x38) = uVar3;
              *(ushort *)(local_54 + 0x42) = *(ushort *)(local_54 + 0x42) | 0x80;
              puVar22 = puVar36;
            }
            else {
              if (uVar1 != 0x47) {
                iVar32 = *(int *)(puVar13 + 2);
                goto LAB_08a1ac60;
              }
              uVar3 = FUN_08a12ee4(*local_4c,0,0x40,0x40);
              FUN_08a13ee8(uVar3,puVar29);
              *(undefined4 *)(local_54 + 0x30) = uVar3;
              *(ushort *)(local_54 + 0x42) = *(ushort *)(local_54 + 0x42) | 0x10;
              puVar22 = puVar36;
            }
          }
        }
        goto LAB_08a1ac5c;
      }
      uVar3 = FUN_08a12ee4(*local_4c,0,0x10,*puVar29 << 2);
      memcpy_jak(uVar3,puVar29 + 1,*puVar29 << 2);
      *(short *)(local_54 + 0x1a) = (short)*puVar29;
      *(uint *)(local_54 + 0x20) = *(uint *)(local_54 + 0x20) | 0x40000;
      iVar32 = *(int *)(puVar13 + 2);
      *(undefined4 *)(local_54 + 0xc) = uVar3;
    }
LAB_08a1ac74:
    if (*(ushort *)(local_54 + 0x1c) == 0) {
      *(uint *)(local_54 + 0x20) = *(uint *)(local_54 + 0x20) | 0x10000;
      iVar32 = *(int *)(puVar2 + 2);
      local_54 = iVar30;
    }
    else {
      iVar32 = FUN_08a12ee4(*local_4c,0,0x40,(uint)*(ushort *)(local_54 + 0x1c) << 6);
      *(int *)(local_54 + 0x14) = iVar32;
      if (*(short *)(local_54 + 0x1c) != 0) {
        if (puVar36 == (uint *)0x0) {
          iVar26 = 0;
          do {
            iVar26 = iVar26 + 1;
            FUN_08a13c2c(0,0,0,0x3f800000,0x3f800000,0x3f800000,iVar32);
            iVar32 = iVar32 + 0x40;
          } while (iVar26 < (int)(uint)*(ushort *)(local_54 + 0x1c));
        }
        else {
          iVar26 = 0;
          puVar33 = puVar36 + 1;
          do {
            if (iVar26 < (int)*puVar36) {
              FUN_08a13ee8(iVar32,puVar33);
            }
            else {
              FUN_08a13c2c(0,0,0,0x3f800000,0x3f800000,0x3f800000,iVar32);
            }
            iVar26 = iVar26 + 1;
            puVar33 = puVar33 + 0x10;
            iVar32 = iVar32 + 0x40;
          } while (iVar26 < (int)(uint)*(ushort *)(local_54 + 0x1c));
        }
      }
      *(uint *)(local_54 + 0x20) = *(uint *)(local_54 + 0x20) | 0x20000;
      iVar32 = *(int *)(puVar2 + 2);
      local_54 = iVar30;
    }
    break;
  case 5:
    local_90 = local_58 + 0x10;
    if (puVar2 == (ushort *)0x0) {
LAB_08a1acd8:
      iVar32 = 0;
      uVar34 = 0;
    }
    else {
      puVar19 = (ushort *)(*(int *)(puVar2 + 2) + (int)puVar2);
      puVar13 = puVar19;
      if (-1 < (short)uVar1) {
        puVar13 = (ushort *)(*(int *)(puVar2 + 4) + (int)puVar2);
      }
      iVar32 = 0;
      if (puVar19 <= puVar13) goto LAB_08a1acd8;
      do {
        uVar1 = *puVar13;
        puVar13 = (ushort *)((int)puVar13 + *(int *)(puVar13 + 2));
        iVar32 = iVar32 + (uint)((uVar1 & 0x7fff) == 6);
      } while (puVar13 < puVar19);
      uVar34 = (undefined2)iVar32;
    }
    local_a0 = FUN_08a145c4(iVar32,*local_4c);
    iVar32 = *(int *)(puVar2 + 2);
    *(undefined2 *)(local_58 + 8) = uVar34;
    local_70 = (ushort *)(iVar32 + (int)puVar2);
    uVar1 = *puVar2;
    *(int *)(local_58 + 4) = local_a0;
    local_4c[2] = puVar2;
    puVar13 = local_70;
    if (-1 < (short)uVar1) {
      puVar13 = (ushort *)(*(int *)(puVar2 + 4) + (int)puVar2);
    }
    if (puVar13 < local_70) {
      uVar1 = *puVar13;
      do {
        if ((uVar1 & 0x7fff) == 6) {
          iVar32 = *(int *)(puVar13 + 2);
          puVar7 = (ushort *)(iVar32 + (int)puVar13);
          local_6c = local_a0 + 0x30;
          puVar19 = puVar7;
          if (-1 < (short)uVar1) {
            puVar19 = (ushort *)((int)puVar13 + *(int *)(puVar13 + 4));
          }
          if (puVar7 <= puVar19) goto LAB_08a1b194;
          iVar32 = 0;
          iVar30 = 0;
          local_78 = 0;
          local_74 = 0xffffffff;
          uVar1 = *puVar19;
LAB_08a1b210:
          while( true ) {
            puVar33 = (uint *)(puVar19 + 4);
            if (-1 < (short)uVar1) {
              puVar33 = (uint *)((uint)puVar19[1] + (int)puVar19);
            }
            uVar1 = uVar1 & 0x7fff;
            if (uVar1 != 0x66) break;
LAB_08a1b610:
            local_74 = *puVar33 & 0xfff;
            if (uVar1 == 0x66) {
              iVar26 = puVar33[2] * puVar33[3];
              iVar32 = iVar32 + puVar33[3];
            }
            else {
              iVar26 = puVar33[2] * puVar33[3];
              iVar32 = iVar32 + 1;
            }
            iVar30 = iVar30 + iVar26;
            puVar19 = (ushort *)(*(int *)(puVar19 + 2) + (int)puVar19);
            if (puVar7 <= puVar19) goto LAB_08a1b26c;
            uVar1 = *puVar19;
          }
          if (uVar1 < 0x67) {
            if (uVar1 != 0x61) {
              if (uVar1 < 0x62) {
                if (uVar1 == 0x16) {
                  local_78 = 8;
                }
              }
              else if (uVar1 == 0x62) {
                puVar5 = (undefined2 *)FUN_08a12ee4(*local_4c,0,4,*puVar33 << 1);
                uVar21 = *puVar33;
                *(undefined2 **)(local_a0 + 0x10) = puVar5;
                *(short *)(local_a0 + 0x14) = (short)uVar21;
                if ((int)uVar21 < 1) {
                  *(uint *)(local_a0 + 0x28) = *(uint *)(local_a0 + 0x28) | 0x20000;
                }
                else {
                  iVar26 = 0;
                  do {
                    iVar26 = iVar26 + 1;
                    *puVar5 = (short)puVar33[1];
                    puVar33 = puVar33 + 1;
                    puVar5 = puVar5 + 1;
                  } while (iVar26 < (int)uVar21);
                  *(uint *)(local_a0 + 0x28) = *(uint *)(local_a0 + 0x28) | 0x20000;
                }
              }
              else {
                if (uVar1 != 99) {
                  iVar26 = *(int *)(puVar19 + 2);
                  goto LAB_08a1b25c;
                }
                uVar3 = FUN_08a12ee4(*local_4c,0,0x10,0x10);
                FUN_08a13bf0(*puVar33,puVar33[1],uVar3);
                *(undefined4 *)(local_a0 + 8) = uVar3;
                *(uint *)(local_a0 + 0x28) = *(uint *)(local_a0 + 0x28) | 0x80000;
              }
              goto LAB_08a1b258;
            }
            *(uint *)(local_a0 + 0x20) = *puVar33 & 0xfff;
            puVar19 = (ushort *)(*(int *)(puVar19 + 2) + (int)puVar19);
            if (puVar7 <= puVar19) goto LAB_08a1b26c;
            uVar1 = *puVar19;
            goto LAB_08a1b210;
          }
          if (uVar1 != 0x6b) {
            if (uVar1 < 0x6c) {
              if ((uVar1 == 0x68) || (uVar1 == 0x6a)) goto LAB_08a1b610;
              iVar26 = *(int *)(puVar19 + 2);
            }
            else {
              if (uVar1 == 0x6c) {
                uVar21 = 0x10000 << (puVar33[1] & 0x1f);
                *(uint *)(local_a0 + 0x2c) =
                     (uint)*(ushort *)(local_a0 + 0x2c) |
                     (uVar21 | uVar21 - 1) & -(0x10000 << (*puVar33 & 0x1f)) & 0xffff0000;
              }
              else {
                if (uVar1 != 0x81) {
                  iVar26 = *(int *)(puVar19 + 2);
                  goto LAB_08a1b25c;
                }
                uVar1 = (ushort)(1 << (*puVar33 & 0x1f));
                uVar8 = ~uVar1;
                uVar12 = uVar1 | *(ushort *)(local_a0 + 0x16);
                if (puVar33[1] == 0) {
                  uVar1 = 0;
                }
                *(ushort *)(local_a0 + 0x16) = uVar12;
                *(ushort *)(local_a0 + 0x18) = uVar8 & *(ushort *)(local_a0 + 0x18) | uVar1;
                *(uint *)(local_a0 + 0x28) = *(uint *)(local_a0 + 0x28) | 0xffff;
              }
LAB_08a1b258:
              iVar26 = *(int *)(puVar19 + 2);
            }
LAB_08a1b25c:
            puVar19 = (ushort *)(iVar26 + (int)puVar19);
            if (puVar7 <= puVar19) goto LAB_08a1b26c;
            uVar1 = *puVar19;
            goto LAB_08a1b210;
          }
          uVar21 = *(uint *)(local_a0 + 0x2c) & 0xffff0000;
          *(uint *)(local_a0 + 0x2c) = uVar21;
          *(uint *)(local_a0 + 0x2c) = uVar21 | *(ushort *)puVar33;
          puVar19 = (ushort *)(*(int *)(puVar19 + 2) + (int)puVar19);
          if (puVar19 < puVar7) {
            uVar1 = *puVar19;
            goto LAB_08a1b210;
          }
LAB_08a1b26c:
          if (iVar32 < 1) {
            iVar32 = *(int *)(puVar13 + 2);
            goto LAB_08a1b194;
          }
          local_4c[0xe] = local_74;
          local_4c[0x10] = iVar30;
          local_4c[0x11] = local_78;
          local_4c[0xf] = iVar32;
          local_7c = FUN_08a145a4(1,*local_4c);
          psVar11 = (short *)local_4c[2];
          *(int *)(local_a0 + 4) = local_7c;
          iVar32 = local_4c[0xe];
          iVar26 = local_4c[0x10];
          iVar30 = local_4c[0x11];
          if (psVar11 != (short *)0x0) {
            puVar19 = (ushort *)(*(int *)(psVar11 + 2) + (int)psVar11);
            if (-1 < *psVar11) {
              puVar19 = (ushort *)((int)psVar11 + *(int *)(psVar11 + 4));
            }
            for (; puVar19 < (ushort *)(*(int *)(psVar11 + 2) + (int)psVar11);
                puVar19 = (ushort *)((int)puVar19 + iVar18)) {
              if ((*puVar19 & 0x7fff) == 7) {
                iVar32 = iVar32 + -1;
                if (iVar32 == -1) goto LAB_08a1b334;
                iVar18 = *(int *)(puVar19 + 2);
              }
              else {
                iVar18 = *(int *)(puVar19 + 2);
              }
            }
          }
          puVar19 = (ushort *)0x0;
LAB_08a1b334:
          puVar33 = (uint *)(puVar19 + 4);
          if (-1 < (short)*puVar19) {
            puVar33 = (uint *)((uint)puVar19[1] + (int)puVar19);
          }
          local_80 = puVar19 + 4;
          if (-1 < (short)*puVar19) {
            local_80 = (ushort *)(*(int *)(puVar19 + 6) + (int)puVar19);
          }
          uVar21 = *puVar33;
          iVar32 = 4;
          if (iVar30 != 0) {
            iVar32 = 10;
          }
          local_8c = ((int)uVar21 >> 0x18) * (((uVar21 << 0xb) >> 0x1d) + 1);
          iVar32 = iVar32 + local_4c[0xf];
          puVar33 = (uint *)FUN_08a12ee4(*local_4c,1,4,iVar32 * 4);
          local_84 = (uint *)FUN_08a12ee4(*local_4c,1,4,iVar30 * 0xc);
          uVar16 = FUN_08a12ee4(*local_4c,1,4,local_8c * iVar26);
          *(short *)(local_7c + 0xc) = (short)iVar32;
          *(short *)(local_7c + 0x1e) = (short)iVar26;
          *(uint **)(local_7c + 8) = puVar33;
          *(uint *)(local_7c + 0x14) = uVar16;
          *(uint **)(local_7c + 0x10) = local_84;
          *(uint *)(local_7c + 0x18) = uVar21 & 0xffefff;
          *(short *)(local_7c + 0x1c) = (short)local_8c;
          if (0 < iVar30) {
            puVar33[5] = (uint)(puVar33 + iVar32 + -1) & 0xffffff | 0x9000000;
            puVar33[1] = ((uint)((int)local_84 << 4) >> 0x1c) << 0x10 | 0x10000000;
            puVar33[2] = (uint)local_84 & 0xffffff | 0x1000000;
            puVar33[3] = 0x7000008;
            puVar33[4] = ((uint)((int)(puVar33 + iVar32 + -1) * 0x10) >> 0x1c) << 0x10 | 0x10000000;
            *puVar33 = 0x12000180;
            puVar33 = puVar33 + 6;
          }
          puVar33[1] = ((uVar16 << 4) >> 0x1c) << 0x10 | 0x10000000;
          puVar36 = puVar33 + 3;
          *puVar33 = uVar21 & 0xffefff | 0x12000000;
          puVar33[2] = uVar16 & 0xffffff | 0x1000000;
          local_88 = (ushort *)((int)puVar13 + *(int *)(puVar13 + 2));
          puVar19 = local_88;
          if (-1 < (short)*puVar13) {
            puVar19 = (ushort *)((int)puVar13 + *(int *)(puVar13 + 4));
          }
          if (puVar19 < local_88) {
            uVar1 = *puVar19;
            do {
              puVar33 = (uint *)(puVar19 + 4);
              if (-1 < (short)uVar1) {
                puVar33 = (uint *)((uint)puVar19[1] + (int)puVar19);
              }
              uVar1 = uVar1 & 0x7fff;
              puVar29 = puVar36;
              if (uVar1 == 0x66) {
                uVar21 = puVar33[1];
                if (0 < (int)puVar33[3]) {
                  iVar32 = 0;
                  do {
                    iVar32 = iVar32 + 1;
                    *puVar29 = puVar33[2] | (uVar21 & 0xf) << 0x10 | 0x4000000;
                    puVar29 = puVar29 + 1;
                  } while (iVar32 < (int)puVar33[3]);
                  goto LAB_08a1b554;
                }
LAB_08a1b900:
                iVar32 = *(int *)(puVar19 + 2);
                puVar36 = puVar29;
              }
              else {
                if (0x66 < uVar1) {
                  if (uVar1 == 0x68) {
                    *puVar36 = ((puVar33[1] << 0x10) >> 0x1e) << 0x12 |
                               ((puVar33[1] << 0x12) >> 0x1e) << 0x10 | puVar33[3] << 8 | puVar33[2]
                               | 0x6000000;
                    puVar29 = puVar36 + 1;
                  }
                  else if (uVar1 == 0x6a) {
                    *puVar36 = puVar33[3] << 8 | puVar33[2] | 0x5000000;
                    puVar29 = puVar36 + 1;
                  }
LAB_08a1b554:
                  if (puVar36 < puVar29) {
                    uVar21 = *puVar33 & 0xfff;
                    if (uVar21 == local_4c[0xe]) {
                      uVar21 = puVar33[2];
                    }
                    else {
                      psVar11 = (short *)local_4c[2];
                      if (psVar11 != (short *)0x0) {
                        uVar24 = uVar21;
                        puVar7 = (ushort *)(*(int *)(psVar11 + 2) + (int)psVar11);
                        if (-1 < *psVar11) {
                          puVar7 = (ushort *)((int)psVar11 + *(int *)(psVar11 + 4));
                        }
                        for (; puVar7 < (ushort *)(*(int *)(psVar11 + 2) + (int)psVar11);
                            puVar7 = (ushort *)((int)puVar7 + iVar32)) {
                          if ((*puVar7 & 0x7fff) == 7) {
                            uVar24 = uVar24 - 1;
                            if (uVar24 == 0xffffffff) goto LAB_08a1bd20;
                            iVar32 = *(int *)(puVar7 + 2);
                          }
                          else {
                            iVar32 = *(int *)(puVar7 + 2);
                          }
                        }
                      }
                      puVar7 = (ushort *)0x0;
LAB_08a1bd20:
                      local_80 = puVar7 + 4;
                      if (-1 < (short)*puVar7) {
                        local_80 = (ushort *)(*(int *)(puVar7 + 6) + (int)puVar7);
                      }
                      local_4c[0xe] = uVar21;
                      uVar21 = puVar33[2];
                    }
                    iVar32 = uVar21 * puVar33[3];
                    if ((puVar33[1] & 0x100) == 0) {
                      iVar30 = local_8c;
                      if (iVar32 < 1) goto LAB_08a1b900;
                    }
                    else {
                      iVar30 = local_8c * iVar32;
                      iVar32 = 1;
                    }
                    iVar26 = 0;
                    uVar21 = uVar16;
                    do {
                      puVar36 = puVar33 + 4;
                      iVar26 = iVar26 + 1;
                      uVar16 = uVar21 + iVar30;
                      puVar33 = (uint *)((int)puVar33 + 2);
                      memcpy_jak(uVar21,(ushort *)
                                        ((int)local_80 + local_8c * (uint)*(ushort *)puVar36),iVar30
                                );
                      uVar21 = uVar16;
                    } while (iVar32 != iVar26);
                  }
                  goto LAB_08a1b900;
                }
                if (uVar1 != 0x16) goto LAB_08a1b554;
                if (*puVar33 != 8) goto LAB_08a1b900;
                puVar22 = puVar33 + 1;
                puVar29 = local_84;
                do {
                  uVar21 = puVar22[1];
                  uVar24 = puVar22[2];
                  uVar17 = puVar22[3];
                  *puVar29 = *puVar22;
                  puVar22 = puVar22 + 4;
                  puVar29[1] = uVar21;
                  puVar29[2] = uVar24;
                  puVar29[3] = uVar17;
                  puVar29 = puVar29 + 4;
                } while (puVar22 != puVar33 + 0x19);
                iVar32 = *(int *)(puVar19 + 2);
              }
              puVar19 = (ushort *)(iVar32 + (int)puVar19);
              if (local_88 <= puVar19) break;
              uVar1 = *puVar19;
            } while( true );
          }
          uVar3 = *(undefined4 *)(local_7c + 8);
          *puVar36 = 0xb000000;
          *(undefined4 *)(local_a0 + 0x24) = uVar3;
          FUN_08a13120(1,uVar3);
          puVar13 = (ushort *)(*(int *)(puVar13 + 2) + (int)puVar13);
          if (local_70 <= puVar13) goto LAB_08a1b958;
        }
        else {
          iVar32 = *(int *)(puVar13 + 2);
          local_6c = local_a0;
LAB_08a1b194:
          puVar13 = (ushort *)(iVar32 + (int)puVar13);
          if (local_70 <= puVar13) goto LAB_08a1b958;
        }
        uVar1 = *puVar13;
        local_a0 = local_6c;
      } while( true );
    }
    local_58 = local_90;
    break;
  case 6:
  case 7:
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
switchD_08a1a9ec_caseD_6:
    iVar32 = *(int *)(puVar2 + 2);
    break;
  case 8:
    FUN_08a19a44(local_4c,puVar2);
    uVar3 = local_4c[5];
    uVar10 = *local_4c;
    *(ushort *)(local_5c + 2) = (ushort)local_4c[4] | *(ushort *)(local_5c + 2);
    iVar32 = FUN_08a14564(uVar3,uVar10);
    uVar21 = local_4c[4];
    uVar3 = local_4c[5];
    local_94 = local_5c + 0x10;
    *(int *)(local_5c + 8) = iVar32;
    *(short *)(local_5c + 0xc) = (short)uVar3;
    if ((uVar21 & 0x1000) == 0) {
      iVar30 = iVar32;
      iVar32 = 0;
    }
    else {
      *(undefined4 *)(iVar32 + 0x2c) = local_4c[6];
      sVar23 = *(short *)(local_4c + 0xd);
      *(short *)(iVar32 + 0x16) = (short)local_4c[0xc];
      *(short *)(iVar32 + 0x14) = sVar23;
      if (sVar23 != 0) {
        *(uint *)(iVar32 + 0x20) = *(uint *)(iVar32 + 0x20) | 0xffff;
      }
      iVar30 = iVar32 + 0x40;
    }
    puVar19 = (ushort *)(*(int *)(puVar2 + 2) + (int)puVar2);
    puVar13 = puVar19;
    if (-1 < (short)*puVar2) {
      puVar13 = (ushort *)(*(int *)(puVar2 + 4) + (int)puVar2);
    }
    if (puVar13 < puVar19) {
      uVar1 = *puVar13;
LAB_08a1adfc:
      iVar26 = *(int *)(puVar13 + 2);
      if ((uVar1 & 0x7fff) == 9) {
        uVar3 = local_4c[0xd];
        puVar35 = (ushort *)(iVar26 + (int)puVar13);
        *(short *)(iVar30 + 0x16) = (short)local_4c[0xc];
        *(short *)(iVar30 + 0x14) = (short)uVar3;
        puVar7 = puVar35;
        if (-1 < (short)*puVar13) {
          puVar7 = (ushort *)((int)puVar13 + *(int *)(puVar13 + 4));
        }
        if (puVar7 < puVar35) {
          uVar1 = *puVar7;
          do {
            puVar33 = (uint *)(puVar7 + 4);
            if (-1 < (short)uVar1) {
              puVar33 = (uint *)((uint)puVar7[1] + (int)puVar7);
            }
            switch(uVar1 & 0x7fff) {
            case 0x91:
              *(uint *)(iVar30 + 0x24) = *puVar33 & 0xfff;
              break;
            case 0x92:
              *(short *)(iVar30 + 8) = (short)*puVar33;
              break;
            case 0x93:
              break;
            case 0x94:
              *(char *)(iVar30 + 0x10) = (char)*puVar33;
              *(char *)(iVar30 + 0x11) = (char)puVar33[1];
              *(char *)(iVar30 + 0x12) = (char)puVar33[2];
              if (*puVar33 == 0) {
                if (puVar33[1] == 6) {
                  if (puVar33[2] != 7) {
                    *(uint *)(iVar30 + 0x20) = *(uint *)(iVar30 + 0x20) | 0x200000;
                  }
                  break;
                }
                uVar21 = *(uint *)(iVar30 + 0x20);
              }
              else {
                uVar21 = *(uint *)(iVar30 + 0x20);
              }
              *(uint *)(iVar30 + 0x20) = uVar21 | 0x200000;
              break;
            case 0x95:
              uVar21 = *puVar33;
              *(ushort *)(iVar30 + 0x14) = *(ushort *)(iVar30 + 0x14) | 0xc00;
              if (uVar21 == 0) {
                *(ushort *)(iVar30 + 0x16) = *(ushort *)(iVar30 + 0x16) | 0x400;
              }
              if (puVar33[1] == 1) {
                *(ushort *)(iVar30 + 0x16) = *(ushort *)(iVar30 + 0x16) | 0x800;
                break;
              }
              iVar26 = *(int *)(puVar7 + 2);
              goto LAB_08a1b8b0;
            case 0x96:
              uVar21 = *puVar33;
              *(ushort *)(iVar30 + 0x14) = *(ushort *)(iVar30 + 0x14) | 0x3000;
              if (0 < (int)uVar21) {
                *(ushort *)(iVar30 + 0x16) = *(ushort *)(iVar30 + 0x16) | 0x1000;
              }
              if (3 < (int)puVar33[1]) {
                *(ushort *)(iVar30 + 0x16) = *(ushort *)(iVar30 + 0x16) | 0x2000;
                break;
              }
              iVar26 = *(int *)(puVar7 + 2);
              goto LAB_08a1b8b0;
            case 0x97:
              uVar21 = *puVar33;
              *(ushort *)(iVar30 + 0x14) = *(ushort *)(iVar30 + 0x14) | 0xc000;
              if (uVar21 == 0) {
                *(ushort *)(iVar30 + 0x16) = *(ushort *)(iVar30 + 0x16) | 0x4000;
              }
              if (puVar33[1] == 0) {
                *(ushort *)(iVar30 + 0x16) = *(ushort *)(iVar30 + 0x16) | 0x8000;
                break;
              }
              iVar26 = *(int *)(puVar7 + 2);
              goto LAB_08a1b8b0;
            case 0x98:
              pfVar4 = (float *)FUN_08a12ee4(*local_4c,0,0x10,0x10);
              FUN_08a13fb0(pfVar4,puVar33);
              fVar37 = *pfVar4;
              *(float **)(iVar30 + 0x28) = pfVar4;
              if (fVar37 == 0.0) {
                if (pfVar4[1] == 0.0) {
                  if (pfVar4[2] == 1.0) {
                    if (pfVar4[3] == 1.0) {
                      iVar26 = *(int *)(puVar7 + 2);
                      goto LAB_08a1b8b0;
                    }
                    goto LAB_08a1ba04;
                  }
                  uVar21 = *(uint *)(iVar30 + 0x20);
                }
                else {
                  uVar21 = *(uint *)(iVar30 + 0x20);
                }
              }
              else {
LAB_08a1ba04:
                uVar21 = *(uint *)(iVar30 + 0x20);
              }
              *(uint *)(iVar30 + 0x20) = uVar21 | 0x800000;
              break;
            case 0x99:
              uVar24 = *(uint *)(iVar30 + 0x20);
              uVar16 = *puVar33;
              *(uint *)(iVar30 + 0x20) = uVar24 | 0x1000000;
              uVar21 = *puVar33;
              *(short *)(iVar30 + 10) = (short)uVar16;
              if ((uVar21 & 0xf00) != 0) {
                *(uint *)(iVar30 + 0x20) = uVar24 | 0x3000000;
              }
              break;
            case 0x9a:
              uVar3 = FUN_08a12ee4(*local_4c,0,0x40,0x40);
              FUN_08a13ee8(uVar3,puVar33);
              *(undefined4 *)(iVar30 + 0xc) = uVar3;
              *(uint *)(iVar30 + 0x20) = *(uint *)(iVar30 + 0x20) | 0x3000000;
              break;
            default:
              iVar26 = *(int *)(puVar7 + 2);
              goto LAB_08a1b8b0;
            }
            iVar26 = *(int *)(puVar7 + 2);
LAB_08a1b8b0:
            puVar7 = (ushort *)(iVar26 + (int)puVar7);
            if (puVar35 <= puVar7) goto code_r0x08a1b8c0;
            uVar1 = *puVar7;
          } while( true );
        }
        sVar23 = *(short *)(iVar30 + 8);
        goto LAB_08a1b8c4;
      }
      goto LAB_08a1ade8;
    }
LAB_08a1bdd4:
    uVar21 = local_4c[4];
    if ((uVar21 & 0x2000) != 0) {
      uVar15 = local_4c[8];
      uVar10 = local_4c[0xc];
      uVar3 = local_4c[0xd];
      *(undefined *)(iVar30 + 0x11) = 1;
      *(undefined4 *)(iVar30 + 0x38) = uVar15;
      *(uint *)(iVar30 + 0x20) = *(uint *)(iVar30 + 0x20) | 0x20ffff;
      uVar21 = local_4c[4];
      *(undefined2 *)(iVar30 + 8) = 0x84;
      *(ushort *)(iVar30 + 0x14) = (ushort)uVar3 | 1;
      *(ushort *)(iVar30 + 0x16) = (ushort)uVar10 & 0xfffe;
      iVar30 = iVar30 + 0x40;
    }
    if ((uVar21 & 0x4000) != 0) {
      uVar3 = local_4c[0xd];
      uVar10 = local_4c[0xc];
      *(uint *)(iVar30 + 0x20) = *(uint *)(iVar30 + 0x20) | 0xffff;
      *(undefined2 *)(iVar30 + 8) = 0x86;
      *(ushort *)(iVar30 + 0x14) = (ushort)uVar3 | 1;
      *(ushort *)(iVar30 + 0x16) = (ushort)uVar10 & 0xfffe;
    }
    if (iVar32 == 0) {
      iVar32 = *(int *)(puVar2 + 2);
      local_5c = local_94;
    }
    else {
      local_5c = local_94;
      uVar10 = local_4c[10];
      *(undefined4 *)(iVar32 + 0x38) = local_4c[9];
      uVar3 = local_4c[7];
      *(undefined4 *)(iVar32 + 0x3c) = uVar10;
      *(undefined4 *)(iVar32 + 0x30) = uVar3;
      iVar32 = *(int *)(puVar2 + 2);
    }
    break;
  case 10:
    puVar19 = (ushort *)(*(int *)(puVar2 + 2) + (int)puVar2);
    iVar30 = local_60 + 0x10;
    puVar13 = puVar19;
    if (-1 < (short)uVar1) {
      puVar13 = (ushort *)(*(int *)(puVar2 + 4) + (int)puVar2);
    }
    puVar14 = (undefined4 *)0x0;
    if (puVar13 < puVar19) {
      puVar28 = (undefined4 *)0x0;
      uVar3 = 0;
      do {
        uVar1 = *puVar13;
        while( true ) {
          puVar9 = (undefined4 *)(puVar13 + 4);
          if (-1 < (short)uVar1) {
            puVar9 = (undefined4 *)((uint)puVar13[1] + (int)puVar13);
          }
          if ((uVar1 & 0x7fff) != 0x12) break;
          puVar13 = (ushort *)(*(int *)(puVar13 + 2) + (int)puVar13);
          puVar14 = puVar9;
          if (puVar19 <= puVar13) goto LAB_08a1af28;
          uVar1 = *puVar13;
        }
        if ((uVar1 & 0x7fff) == 0x13) {
          uVar3 = *puVar9;
          puVar28 = puVar9 + 1;
        }
        puVar13 = (ushort *)(*(int *)(puVar13 + 2) + (int)puVar13);
      } while (puVar13 < puVar19);
LAB_08a1af28:
      if (puVar28 != (undefined4 *)0x0) {
        uVar10 = FUN_08a1254c();
        iVar32 = FUN_08a25fbc(uVar10,puVar28,uVar3,0);
        if (iVar32 == 0) {
          FUN_08a12888(uVar10);
        }
        else {
          *(undefined4 *)(local_60 + 4) = uVar10;
          FUN_08a13bc0(puVar14,uVar10);
        }
      }
    }
    if (*(int *)(local_60 + 4) == 0) {
      uVar3 = FUN_08a13b68(puVar14);
      uVar3 = FUN_08a25914(uVar3,2);
      iVar32 = *(int *)(puVar2 + 2);
      *(undefined4 *)(local_60 + 4) = uVar3;
      local_60 = iVar30;
    }
    else {
      iVar32 = *(int *)(puVar2 + 2);
      local_60 = iVar30;
    }
    break;
  case 0xb:
    local_9c = local_64 + 0x30;
    if (puVar2 == (ushort *)0x0) {
LAB_08a1afb8:
      iVar32 = 0;
      uVar34 = 0;
    }
    else {
      puVar19 = (ushort *)(*(int *)(puVar2 + 2) + (int)puVar2);
      puVar13 = puVar19;
      if (-1 < (short)uVar1) {
        puVar13 = (ushort *)(*(int *)(puVar2 + 4) + (int)puVar2);
      }
      iVar32 = 0;
      if (puVar19 <= puVar13) goto LAB_08a1afb8;
      do {
        uVar1 = *puVar13;
        puVar13 = (ushort *)((int)puVar13 + *(int *)(puVar13 + 2));
        iVar32 = iVar32 + (uint)((uVar1 & 0x7fff) == 0xb3);
      } while (puVar13 < puVar19);
      uVar34 = (undefined2)iVar32;
    }
    iVar30 = FUN_08a14504(iVar32,*local_4c);
    ptr = (undefined *)FUN_08a12ee4(*local_4c,0,4,iVar32 << 1);
    memset_jak(ptr,0,iVar32 << 1);
    *(undefined2 *)(local_64 + 0xc) = uVar34;
    iVar32 = *(int *)(puVar2 + 2);
    uVar1 = *puVar2;
    *(undefined **)(local_64 + 8) = ptr;
    puVar19 = (ushort *)(iVar32 + (int)puVar2);
    *(int *)(local_64 + 4) = iVar30;
    local_4c[3] = puVar2;
    puVar13 = puVar19;
    if (-1 < (short)uVar1) {
      puVar13 = (ushort *)(*(int *)(puVar2 + 4) + (int)puVar2);
    }
    if (puVar13 < puVar19) {
      uVar1 = *puVar13;
LAB_08a1b118:
      puVar14 = (undefined4 *)(puVar13 + 4);
      if (-1 < (short)uVar1) {
        puVar14 = (undefined4 *)((uint)puVar13[1] + (int)puVar13);
      }
      uVar8 = uVar1 & 0x7fff;
      if (uVar8 == 0xb2) {
        *(undefined4 *)(local_64 + 0x18) = *puVar14;
LAB_08a1b100:
        iVar32 = *(int *)(puVar13 + 2);
LAB_08a1b104:
        puVar13 = (ushort *)(iVar32 + (int)puVar13);
        if (puVar19 <= puVar13) goto LAB_08a1b17c;
        uVar1 = *puVar13;
        goto LAB_08a1b118;
      }
      if (uVar8 < 0xb3) {
        if (uVar8 == 0xb1) {
          *(undefined4 *)(local_64 + 0x10) = *puVar14;
          *(undefined4 *)(local_64 + 0x14) = puVar14[1];
        }
        goto LAB_08a1b100;
      }
      if (uVar8 == 0xb3) {
        local_98 = iVar30 + 0x10;
        puVar14 = (undefined4 *)(puVar13 + 4);
        if (-1 < (short)uVar1) {
          puVar14 = (undefined4 *)((uint)puVar13[1] + (int)puVar13);
        }
        psVar11 = (short *)local_4c[3];
        uVar21 = puVar14[3] & 0xfff;
        if (psVar11 != (short *)0x0) {
          puVar7 = (ushort *)(*(int *)(psVar11 + 2) + (int)psVar11);
          if (-1 < *psVar11) {
            puVar7 = (ushort *)((int)psVar11 + *(int *)(psVar11 + 4));
          }
          for (; puVar7 < (ushort *)(*(int *)(psVar11 + 2) + (int)psVar11);
              puVar7 = (ushort *)((int)puVar7 + iVar32)) {
            if ((*puVar7 & 0x7fff) == 0xc) {
              uVar21 = uVar21 - 1;
              if (uVar21 == 0xffffffff) goto LAB_08a1c128;
              iVar32 = *(int *)(puVar7 + 2);
            }
            else {
              iVar32 = *(int *)(puVar7 + 2);
            }
          }
        }
        puVar7 = (ushort *)0x0;
LAB_08a1c128:
        uVar1 = *puVar7;
        puVar33 = (uint *)(puVar7 + 4);
        if (-1 < (short)uVar1) {
          puVar33 = (uint *)((uint)puVar7[1] + (int)puVar7);
        }
        puVar35 = puVar7 + 4;
        if (-1 < (short)uVar1) {
          puVar35 = (ushort *)(*(int *)(puVar7 + 6) + (int)puVar7);
        }
        iVar32 = 0;
        if (-1 < (short)uVar1) {
          iVar32 = *(int *)(puVar7 + 4) - *(int *)(puVar7 + 6);
        }
        uVar3 = FUN_08a12ee4(*local_4c,0,4,iVar32);
        memcpy_jak(uVar3,puVar35,iVar32);
        iVar32 = puVar14[1];
        uVar21 = *puVar33;
        if ((iVar32 - 0x48U < 6) || (iVar32 == 0xe1)) {
          uVar1 = (uVar21 & 0xf) != 3 | 0x100;
          if ((uVar21 & 0xff00) != 0) {
            uVar1 = 0x100;
          }
        }
        else {
          uVar1 = 0x100;
          if ((((5 < iVar32 - 0x42U) && (iVar32 != 0x4f)) && (uVar1 = 0x200, 6 < iVar32 - 0x82U)) &&
             (uVar1 = 0, iVar32 == 0x98)) {
            uVar1 = 0x200;
          }
        }
        uVar16 = puVar33[2];
        *(char *)(iVar30 + 0xc) = (char)puVar33[1];
        uVar10 = puVar14[1];
        *(ushort *)(iVar30 + 2) = *(ushort *)(iVar30 + 2) | uVar1;
        *(char *)(iVar30 + 0xd) = (char)uVar10;
        uVar10 = *puVar14;
        *(undefined4 *)(iVar30 + 4) = uVar3;
        *(ushort *)(iVar30 + 0xe) = (ushort)uVar10 & 0xfff;
        *(short *)(iVar30 + 8) = (short)uVar21;
        *(short *)(iVar30 + 10) = (short)uVar16;
        iVar30 = local_98;
        goto LAB_08a1b100;
      }
      if (uVar8 != 0xb4) {
        iVar32 = *(int *)(puVar13 + 2);
        goto LAB_08a1b104;
      }
      *(short *)(local_64 + 0xe) = (short)*puVar14;
      puVar13 = (ushort *)(*(int *)(puVar13 + 2) + (int)puVar13);
      if (puVar13 < puVar19) {
        uVar1 = *puVar13;
        goto LAB_08a1b118;
      }
LAB_08a1b17c:
      iVar32 = *(int *)(puVar2 + 2);
      local_64 = local_9c;
    }
    else {
      local_64 = local_9c;
    }
    break;
  case 0x14:
    iVar30 = FUN_08a12ee4(*local_4c,0,0x10,0x20);
    FUN_08a13ea0(iVar30,piVar27);
    FUN_08a13ea0(iVar30 + 0x10,piVar27 + 3);
    iVar32 = *(int *)(puVar2 + 2);
    *(int *)(local_48 + 0x38) = iVar30;
    break;
  case 0x15:
    if (*piVar27 == 3) {
      FUN_08a13fb0(local_48 + 0x70,piVar27 + 1);
      iVar32 = *(int *)(puVar2 + 2);
    }
    else if (*piVar27 == 0x180) {
      FUN_08a13ec0(local_48 + 0x60,piVar27 + 1);
      iVar32 = *(int *)(puVar2 + 2);
    }
    else {
      iVar32 = *(int *)(puVar2 + 2);
    }
    break;
  case 0x16:
    if (*piVar27 != 8) goto switchD_08a1a9ec_caseD_6;
    piVar6 = (int *)FUN_08a12ee4(*local_4c,1,4,0x60);
    piVar20 = piVar27 + 1;
    piVar25 = piVar6;
    do {
      iVar32 = piVar20[1];
      iVar30 = piVar20[2];
      iVar26 = piVar20[3];
      *piVar25 = *piVar20;
      piVar20 = piVar20 + 4;
      piVar25[1] = iVar32;
      piVar25[2] = iVar30;
      piVar25[3] = iVar26;
      piVar25 = piVar25 + 4;
    } while (piVar20 != piVar27 + 0x19);
    iVar32 = *(int *)(puVar2 + 2);
    *(int **)(local_48 + 0x3c) = piVar6;
    break;
  default:
    iVar32 = *(int *)(puVar2 + 2);
  }
  goto LAB_08a1aa08;
code_r0x08a1b8c0:
  sVar23 = *(short *)(iVar30 + 8);
LAB_08a1b8c4:
  switch(sVar23) {
  case 0x82:
    uVar1 = *(ushort *)(iVar30 + 0x14);
    *(undefined4 *)(iVar30 + 0x2c) = local_4c[6];
    local_4c[6] = 0;
    uVar21 = *(uint *)(iVar30 + 0x20);
    break;
  case 0x83:
    uVar3 = local_4c[7];
    uVar10 = local_4c[10];
    *(undefined *)(iVar30 + 0x12) = 1;
    *(undefined4 *)(iVar30 + 0x30) = uVar3;
    local_4c[7] = 0;
    uVar1 = *(ushort *)(iVar30 + 0x14);
    *(undefined4 *)(iVar30 + 0x3c) = uVar10;
    uVar21 = *(uint *)(iVar30 + 0x20) | 0x400000;
    *(uint *)(iVar30 + 0x20) = uVar21;
    break;
  case 0x84:
    uVar1 = *(ushort *)(iVar30 + 0x14) | 1;
    *(undefined4 *)(iVar30 + 0x38) = local_4c[8];
    *(undefined *)(iVar30 + 0x12) = 1;
    uVar8 = *(ushort *)(iVar30 + 0x16);
    local_4c[8] = 0;
    uVar21 = *(uint *)(iVar30 + 0x20);
    *(ushort *)(iVar30 + 0x14) = uVar1;
    *(ushort *)(iVar30 + 0x16) = uVar8 & 0xfffe;
    break;
  case 0x85:
    uVar1 = *(ushort *)(iVar30 + 0x14);
    uVar3 = local_4c[9];
    *(undefined *)(iVar30 + 0x12) = 1;
    *(undefined4 *)(iVar30 + 0x38) = uVar3;
    local_4c[9] = 0;
    uVar21 = *(uint *)(iVar30 + 0x20);
    break;
  case 0x86:
    FUN_08a13e64(0x3f800000,0x3f800000,0x3f800000,local_4c[0xb],iVar30 + 0x38);
    uVar21 = *(uint *)(iVar30 + 0x20) | 0x1000000;
    sVar23 = *(short *)(iVar30 + 8);
    uVar1 = *(ushort *)(iVar30 + 0x14) | 1;
    *(ushort *)(iVar30 + 0x14) = uVar1;
    *(ushort *)(iVar30 + 0x16) = *(ushort *)(iVar30 + 0x16) & 0xfffe;
    local_4c[0xb] = 0;
    *(uint *)(iVar30 + 0x20) = uVar21;
    break;
  default:
    uVar21 = *(uint *)(iVar30 + 0x20);
    uVar1 = *(ushort *)(iVar30 + 0x14);
  }
  if (uVar1 != 0) {
    uVar21 = uVar21 | 0xffff;
    *(uint *)(iVar30 + 0x20) = uVar21;
  }
  *(uint *)(iVar30 + 0x20) = uVar21 | 0x100000;
  if (sVar23 == 0x82) {
    iVar32 = iVar30;
  }
  iVar30 = iVar30 + 0x40;
  iVar26 = *(int *)(puVar13 + 2);
LAB_08a1ade8:
  puVar13 = (ushort *)(iVar26 + (int)puVar13);
  if (puVar19 <= puVar13) goto LAB_08a1bdd4;
  uVar1 = *puVar13;
  goto LAB_08a1adfc;
LAB_08a1b958:
  iVar32 = *(int *)(puVar2 + 2);
  local_58 = local_90;
LAB_08a1aa08:
  puVar2 = (ushort *)(iVar32 + (int)puVar2);
  if (local_68 <= puVar2) goto LAB_08a1aa20;
  uVar1 = *puVar2;
  goto LAB_08a1a9b0;
}

