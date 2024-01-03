#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884091c(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  float fVar12;
  int iVar13;
  int *piVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  undefined4 in_V7C;
  int local_160 [12];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_f0 [7];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8 [12];
  int local_98 [10];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  int local_54;
  int local_50;
  
  piVar5 = local_160;
  piVar20 = local_160;
  piVar10 = local_160;
  piVar11 = local_160;
  piVar14 = local_160;
  piVar18 = local_160;
  piVar19 = local_160;
  if (*(int *)(param_1 + 0x640) < 1) {
LAB_08840994:
    uVar7 = *(undefined4 *)(param_1 + 0x640);
  }
  else {
    iVar3 = FUN_088ff440();
    if (iVar3 == 0) {
      if ((*(byte *)(*(int *)(param_1 + 0xa88) + 5) & 0x40) != 0) {
        *(undefined *)(param_1 + 0xae6) = 1;
      }
      goto LAB_08840994;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x640);
  }
  switch(uVar7) {
  case 0:
    if (*(int *)(param_1 + 0x54) == 0) {
      local_50 = 0;
      FUN_089d8634();
      uVar7 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar6 = FUN_089d7d74(0x80,0,0);
      FUN_089d816c(uVar7);
      FUN_089d866c();
      iVar3 = local_50;
      if (iVar6 != 0) {
        FUN_089f4f54(iVar6,0);
        iVar3 = iVar6;
      }
      *(int *)(param_1 + 0x54) = iVar3;
    }
    *(undefined *)(*(int *)(param_1 + 0x54) + 4) = 1;
    if (*(int *)(param_1 + 0x58) == 0) {
      FUN_089d8634();
      uVar7 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar4 = FUN_089d7d74(700,0,0);
      FUN_089d816c(uVar7);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      uVar7 = *(undefined4 *)(param_1 + 0x54);
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0x54);
    }
    FUN_0881a0c4(uVar7,*(undefined4 *)(param_1 + 0x58),0x2e);
    FUN_089f4a90(0,0x40000000,*(undefined4 *)(*(int *)(param_1 + 0x58) + 0x158));
    pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + 8) + 0x68);
    iVar6 = 0;
    iVar3 = 0;
    *pfVar15 = *pfVar15 + 16.0;
    pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + 4) + 0x68);
    *pfVar15 = *pfVar15 + 16.0;
    do {
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3) + 0xbc) = 0;
      iVar3 = iVar3 + 4;
    } while (iVar6 < 0x5d);
    iVar6 = 0x53;
    iVar3 = 0x14c;
    do {
      iVar6 = iVar6 + 1;
      iVar16 = *(int *)(*(int *)(param_1 + 0x58) + iVar3);
      *(uint *)(iVar16 + 0xd0) = *(uint *)(iVar16 + 0xd0) & 0xfffffffe;
      iVar3 = iVar3 + 4;
    } while (iVar6 < 0x55);
    pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + 0x10) + 100);
    iVar6 = 0x13;
    *pfVar15 = *pfVar15 + 2.0;
    pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + 0x14) + 100);
    iVar3 = 0x4c;
    *pfVar15 = *pfVar15 + 2.0;
    do {
      iVar6 = iVar6 + 1;
      pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3) + 0x60);
      iVar3 = iVar3 + 4;
      *pfVar15 = *pfVar15 + 38.0;
    } while (iVar6 < 0x14);
    iVar6 = 0x46;
    iVar3 = 0x118;
    do {
      iVar6 = iVar6 + 1;
      pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3) + 0x60);
      iVar3 = iVar3 + 4;
      *pfVar15 = *pfVar15 + 16.0;
    } while (iVar6 < 0x4a);
    iVar6 = 0x2e;
    iVar3 = 0xb8;
    do {
      iVar6 = iVar6 + 1;
      iVar16 = *(int *)(*(int *)(param_1 + 0x58) + iVar3);
      *(uint *)(iVar16 + 0xd0) = *(uint *)(iVar16 + 0xd0) & 0xfffffffe;
      iVar3 = iVar3 + 4;
    } while (iVar6 < 0x31);
    iVar6 = 0x31;
    iVar3 = 0xc4;
    do {
      iVar6 = iVar6 + 1;
      iVar16 = *(int *)(*(int *)(param_1 + 0x58) + iVar3);
      *(uint *)(iVar16 + 0xd0) = *(uint *)(iVar16 + 0xd0) & 0xfffffffe;
      iVar3 = iVar3 + 4;
    } while (iVar6 < 0x37);
    iVar6 = 0x16;
    iVar3 = 0x58;
    do {
      iVar6 = iVar6 + 1;
      pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3) + 0x60);
      iVar3 = iVar3 + 4;
      *pfVar15 = *pfVar15 - 18.0;
    } while (iVar6 < 0x40);
    iVar6 = 0x46;
    iVar3 = 0x118;
    do {
      iVar6 = iVar6 + 1;
      pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3) + 0x60);
      iVar3 = iVar3 + 4;
      *pfVar15 = *pfVar15 - 18.0;
    } while (iVar6 < 0x4a);
    uVar7 = DONE_Get_DAT_08AAC9E0();
    uVar7 = FUN_0880dba8(uVar7);
    iVar3 = 0;
    switch(uVar7) {
    case 1:
      iVar3 = 0;
      break;
    case 2:
      iVar3 = 0x11;
      break;
    case 3:
      iVar3 = 0x14;
      break;
    case 4:
      iVar3 = 0x14;
      break;
    case 5:
      iVar3 = 10;
      break;
    case 6:
      iVar3 = 0x1c;
      break;
    case 0xc:
      iVar3 = 0x1c;
    }
    iVar16 = 0x70;
    iVar6 = 0x1c;
    do {
      iVar6 = iVar6 + 1;
      pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar16) + 0x60);
      iVar16 = iVar16 + 4;
      *pfVar15 = *pfVar15 - (float)iVar3;
    } while (iVar6 < 0x1f);
    iVar6 = 0xe;
    iVar3 = 0x38;
    do {
      pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3) + 0x60);
      *pfVar15 = *pfVar15 - 18.0;
      if (iVar6 == 0xe) {
        iVar16 = *(int *)(*(int *)(param_1 + 0x58) + iVar3);
        *(uint *)(iVar16 + 0xd0) = *(uint *)(iVar16 + 0xd0) & 0xfffffffe;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar6 < 0x14);
    iVar6 = 0x58;
    iVar3 = 0x160;
    do {
      pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3) + 0x60);
      *pfVar15 = *pfVar15 + 4.0;
      FUN_0882c4c8(0,0,0x43a40000,0x41800000,param_1,
                   *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar3));
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar6 < 0x5d);
    iVar6 = 7;
    iVar3 = 0x1c;
    do {
      pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3) + 0x60);
      iVar6 = iVar6 + 1;
      *pfVar15 = *pfVar15 + 8.0;
      iVar16 = *(int *)(*(int *)(param_1 + 0x58) + iVar3);
      iVar3 = iVar3 + 4;
      *(uint *)(iVar16 + 0xd0) = *(uint *)(iVar16 + 0xd0) & 0xfffffffe;
    } while (iVar6 < 0xe);
    iVar6 = 0x25;
    iVar3 = 0x94;
    do {
      iVar6 = iVar6 + 1;
      pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3) + 0x60);
      iVar3 = iVar3 + 4;
      *pfVar15 = *pfVar15 + 16.0;
    } while (iVar6 < 0x28);
    iVar6 = 0x37;
    iVar3 = 0xdc;
    do {
      iVar6 = iVar6 + 1;
      pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3) + 0x60);
      iVar3 = iVar3 + 4;
      *pfVar15 = *pfVar15 + 16.0;
    } while (iVar6 < 0x3a);
    iVar6 = 0x1c;
    iVar3 = 0x70;
    do {
      iVar6 = iVar6 + 1;
      pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3) + 0x60);
      iVar3 = iVar3 + 4;
      *pfVar15 = *pfVar15 + 10.0;
    } while (iVar6 < 0x1f);
    iVar3 = FUN_0883f6e4(param_1,0x1c);
    if (iVar3 < 1000) {
      if (99 < iVar3) {
        pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + 0x4c) + 0x60);
        *pfVar15 = *pfVar15 - 10.0;
        goto LAB_08840f90;
      }
      iVar3 = *(int *)(param_1 + 0x58);
    }
    else {
      pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + 0x4c) + 0x60);
      *pfVar15 = *pfVar15 - 20.0;
LAB_08840f90:
      iVar3 = *(int *)(param_1 + 0x58);
    }
    pfVar15 = (float *)(*(int *)(iVar3 + 0x44) + 0x60);
    *pfVar15 = *pfVar15 + 16.0;
    pfVar15 = (float *)(*(int *)(*(int *)(param_1 + 0x58) + 0x40) + 0x60);
    *pfVar15 = *pfVar15 + 16.0;
    *(undefined4 *)(param_1 + 0x6a0) = 0x43020000;
    *(undefined4 *)(param_1 + 0x8b4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x68c) + 0x70) = 0;
    iVar3 = *(int *)(param_1 + 0x688);
    FUN_089f51b8(iVar3);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    iVar3 = *(int *)(param_1 + 0x68c);
    FUN_089f51b8(iVar3);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x68c) + 0xe0) = 0x43f00000;
    FUN_08817a90(*(undefined4 *)(param_1 + 0x68c),1);
    iVar3 = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x68c) + 0xdc) = 0x3f19999a;
    iVar6 = 0;
    if (*(int *)(param_1 + 0x8a8) != 0) {
      local_54 = param_1 + 0x8c8;
      local_58 = param_1 + 0x8c4;
      uVar21 = 0;
      iVar16 = param_1 + 0x7a4;
      bVar2 = true;
      do {
        if (!bVar2) {
          iVar8 = *(int *)(param_1 + 0x68c);
          uVar22 = uVar21;
          goto LAB_088412f8;
        }
        uVar22 = (int)(uVar21 * 4) >> 2;
        switch(uVar21) {
        default:
          strcpy(iVar16,*(undefined4 *)(*(int *)(param_1 + 0x8a8) + 0xe4c));
          iVar6 = *(int *)(*(int *)(param_1 + 0x58) + 0x1c);
          iVar3 = (int)*(float *)(iVar6 + 0x60);
          iVar6 = (int)(*(float *)(iVar6 + 100) - 16.0);
          break;
        case 1:
          strcpy(iVar16,*(undefined4 *)(*(int *)(param_1 + 0x8a8) + 0xe40));
          iVar6 = *(int *)(*(int *)(param_1 + 0x58) + 0x1c);
          iVar3 = (int)*(float *)(iVar6 + 0x60);
          iVar6 = (int)*(float *)(iVar6 + 100);
          break;
        case 2:
          strcpy(iVar16,*(undefined4 *)(*(int *)(param_1 + 0x8a8) + 0xe30));
          iVar6 = *(int *)(*(int *)(param_1 + 0x58) + 0x20);
          iVar3 = (int)*(float *)(iVar6 + 0x60);
          iVar6 = (int)*(float *)(iVar6 + 100);
          break;
        case 3:
          strcpy(iVar16,*(undefined4 *)(*(int *)(param_1 + 0x8a8) + 0xe34));
          iVar6 = *(int *)(*(int *)(param_1 + 0x58) + 0x24);
          iVar3 = (int)*(float *)(iVar6 + 0x60);
          iVar6 = (int)*(float *)(iVar6 + 100);
          break;
        case 4:
          strcpy(iVar16,*(undefined4 *)(*(int *)(param_1 + 0x8a8) + 0xe50));
          iVar6 = *(int *)(*(int *)(param_1 + 0x58) + 0x28);
          iVar3 = (int)*(float *)(iVar6 + 0x60);
          iVar6 = (int)(*(float *)(iVar6 + 100) + 2.0);
          break;
        case 5:
          strcpy(iVar16,*(undefined4 *)(*(int *)(param_1 + 0x8a8) + 0xe3c));
          iVar6 = *(int *)(*(int *)(param_1 + 0x58) + 0x2c);
          iVar3 = (int)*(float *)(iVar6 + 0x60);
          iVar6 = (int)*(float *)(iVar6 + 100);
          break;
        case 6:
          strcpy(iVar16,*(undefined4 *)(*(int *)(param_1 + 0x8a8) + 0xe44));
          iVar6 = *(int *)(*(int *)(param_1 + 0x58) + 0x34);
          iVar3 = (int)*(float *)(iVar6 + 0x60);
          iVar6 = (int)*(float *)(iVar6 + 100);
          break;
        case 7:
          strcpy(iVar16,*(undefined4 *)(*(int *)(param_1 + 0x8a8) + 0xe48));
          iVar3 = *(int *)(*(int *)(param_1 + 0x58) + 0x38);
          iVar6 = (int)*(float *)(iVar3 + 100);
          iVar3 = (int)(*(float *)(iVar3 + 0x60) + 15.0);
          uVar7 = DONE_Get_DAT_08AAC9E0();
          uVar7 = FUN_0880dba8(uVar7);
          switch(uVar7) {
          case 1:
            iVar8 = *(int *)(param_1 + 0x68c);
            goto LAB_088412f8;
          case 2:
            iVar3 = iVar3 + -0x11;
            break;
          case 3:
            iVar3 = iVar3 + -0x14;
            break;
          case 4:
            iVar3 = iVar3 + -0x14;
            break;
          case 5:
            iVar3 = iVar3 + -10;
            break;
          case 6:
            iVar3 = iVar3 + -0x1c;
            break;
          case 7:
          case 8:
          case 9:
          case 10:
          case 0xb:
            break;
          case 0xc:
            iVar3 = iVar3 + -0x1c;
            break;
          default:
            iVar8 = *(int *)(param_1 + 0x68c);
            goto LAB_088412f8;
          }
        }
        iVar8 = *(int *)(param_1 + 0x68c);
LAB_088412f8:
        local_130 = 0x3dcccccd;
        local_12c = 0x3dcccccd;
        local_128 = 0x3dcccccd;
        local_124 = 0x3f800000;
        *(undefined4 *)(iVar8 + 0xc0) = 0x3dcccccd;
        *(undefined4 *)(iVar8 + 0xc4) = 0x3dcccccd;
        *(undefined4 *)(iVar8 + 200) = 0x3dcccccd;
        *(undefined4 *)(iVar8 + 0xcc) = 0x3f800000;
        FUN_088184e8(0,*(undefined4 *)(param_1 + 0x68c),iVar16,local_54,local_58,0);
        iVar8 = 0;
        do {
          iVar17 = 0;
          iVar9 = 0;
          if (iVar8 < 2) {
            if (-1 < iVar8) {
              iVar17 = 1;
              if (iVar8 < 1) {
                iVar17 = 1;
                iVar9 = 1;
              }
              else {
                iVar9 = -1;
              }
              goto LAB_088413a0;
            }
            iVar13 = *(int *)(param_1 + 0x68c);
          }
          else {
            if (iVar8 < 3) {
              iVar17 = -1;
              iVar9 = -1;
            }
            else {
              if (3 < iVar8) {
                iVar13 = *(int *)(param_1 + 0x68c);
                goto LAB_088413a4;
              }
              iVar17 = -1;
              iVar9 = 1;
            }
LAB_088413a0:
            iVar13 = *(int *)(param_1 + 0x68c);
          }
LAB_088413a4:
          (**(code **)(*(int *)(iVar13 + 0x74) + 0x14))
                    ((float)(iVar17 + iVar3),(float)(iVar9 + iVar6 + -1),0,
                     iVar13 + *(short *)(*(int *)(iVar13 + 0x74) + 0x10),iVar16,0,0,0);
          iVar8 = iVar8 + 1;
        } while (iVar8 < 4);
        if ((uVar22 == 0) || (uVar22 == 4)) {
          iVar8 = *(int *)(param_1 + 0x68c);
          local_120 = 0x3f800000;
          local_11c = 0x3ecccccd;
          local_118 = 0x3e4ccccd;
          local_114 = 0x3f800000;
          *(undefined4 *)(iVar8 + 0xc0) = 0x3f800000;
          *(undefined4 *)(iVar8 + 0xc4) = 0x3ecccccd;
          *(undefined4 *)(iVar8 + 200) = 0x3e4ccccd;
          *(undefined4 *)(iVar8 + 0xcc) = 0x3f800000;
          iVar8 = *(int *)(param_1 + 0x68c);
        }
        else if (uVar22 == 5) {
          iVar8 = *(int *)(param_1 + 0x68c);
          local_110 = 0x3f800000;
          local_10c = 0x3e48b439;
          local_108 = 0x3e48b439;
          local_104 = 0x3f800000;
          *(undefined4 *)(iVar8 + 0xc0) = 0x3f800000;
          *(undefined4 *)(iVar8 + 0xc4) = 0x3e48b439;
          *(undefined4 *)(iVar8 + 200) = 0x3e48b439;
          *(undefined4 *)(iVar8 + 0xcc) = 0x3f800000;
          iVar8 = *(int *)(param_1 + 0x68c);
        }
        else {
          iVar8 = *(int *)(param_1 + 0x68c);
          local_100 = 0x3ecccccd;
          local_fc = 0x3f4ccccd;
          local_f8 = 0x3f800000;
          local_f4 = 0x3f800000;
          *(undefined4 *)(iVar8 + 0xc0) = 0x3ecccccd;
          *(undefined4 *)(iVar8 + 0xc4) = 0x3f4ccccd;
          *(undefined4 *)(iVar8 + 200) = 0x3f800000;
          *(undefined4 *)(iVar8 + 0xcc) = 0x3f800000;
          iVar8 = *(int *)(param_1 + 0x68c);
        }
        (**(code **)(*(int *)(iVar8 + 0x74) + 0x14))
                  ((float)iVar3,(float)(iVar6 + -1),0,
                   iVar8 + *(short *)(*(int *)(iVar8 + 0x74) + 0x10),iVar16,0,0,0);
        uVar21 = uVar22 + 1;
        bVar2 = uVar21 < 8;
      } while ((int)uVar21 < 8);
    }
    FUN_088401e8(param_1);
    memcpy_jak(local_160,&DAT_08aba6f4,0x30);
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x58) + *piVar5 * 4) + 0xd8) = 1;
      piVar5 = piVar5 + 1;
    } while (iVar3 < 0xc);
    iVar3 = FUN_0883f6e4(param_1,0x1c);
    if (iVar3 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x58) + 0x48);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
      iVar3 = *(int *)(*(int *)(param_1 + 0x58) + 0x4c);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x58) + 0x48);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    }
    local_f0[0] = 0x46;
    local_f0[1] = 0x47;
    local_f0[2] = 0x49;
    iVar3 = 0;
    do {
      iVar16 = *(int *)(*(int *)(param_1 + 0x58) + *(int *)((int)piVar20 + 0x70) * 4);
      iVar6 = FUN_0883fb40(param_1,iVar3);
      if (iVar6 < 2) {
        if (-1 < iVar6) {
          if (iVar6 < 1) {
            uVar7 = FUN_089f7720("hyouka_moji_02_s");
            *(undefined4 *)(iVar16 + 0xd4) = uVar7;
          }
          else {
            uVar7 = FUN_089f7720("hyouka_moji_02_a");
            *(undefined4 *)(iVar16 + 0xd4) = uVar7;
          }
        }
      }
      else if (iVar6 < 3) {
        uVar7 = FUN_089f7720("hyouka_moji_02_b");
        *(undefined4 *)(iVar16 + 0xd4) = uVar7;
      }
      else if (iVar6 < 4) {
        uVar7 = FUN_089f7720("hyouka_moji_02_c");
        *(undefined4 *)(iVar16 + 0xd4) = uVar7;
      }
      iVar3 = iVar3 + 1;
      piVar20 = (int *)((int)piVar20 + 4);
    } while (iVar3 < 3);
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x14);
    iVar3 = FUN_0883fb40(param_1,3);
    FUN_089f4bf4((float)iVar3,uVar7);
    *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x640) + 1;
    break;
  case 1:
    break;
  default:
    goto switchD_088430ac_caseD_2;
  case 10:
    goto LAB_088416e4;
  case 0xb:
    goto LAB_088417d4;
  case 0x14:
    goto LAB_088419f0;
  case 0x15:
    goto LAB_08841a3c;
  case 0x1e:
    goto LAB_08841b5c;
  case 0x28:
    goto LAB_08841bb0;
  case 0x29:
    goto LAB_08841bec;
  case 0x32:
    goto LAB_08841d64;
  case 0x33:
    goto LAB_08841dec;
  case 0x3c:
    goto LAB_08841ee8;
  case 0x3d:
    goto LAB_08841fb0;
  case 0x3e:
    goto switchD_088409b4_caseD_3e;
  case 0x3f:
    cVar1 = *(char *)(param_1 + 0xae6);
    goto LAB_088421a8;
  case 0x40:
    goto switchD_088409b4_caseD_40;
  case 0x41:
    goto switchD_088409b4_caseD_41;
  case 0x42:
    goto switchD_088409b4_caseD_42;
  case 0x46:
    cVar1 = *(char *)(param_1 + 0xae6);
    goto LAB_0884231c;
  case 0x50:
    goto switchD_088409b4_caseD_50;
  case 0x5a:
    *(undefined4 *)(param_1 + 0x648) = 0x3fc90fdb;
    *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x640) + 1;
    goto LAB_088423b4;
  case 0x5b:
LAB_088423b4:
    fVar23 = *(float *)(param_1 + 0x648) + -0.1745329;
    *(float *)(param_1 + 0x648) = fVar23;
    if (fVar23 < 0.0) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = 1.570796;
      if (fVar23 <= 1.570796) {
        fVar12 = fVar23;
      }
    }
    *(float *)(param_1 + 0x648) = fVar12;
    uVar7 = vmul_s(fVar12,in_V7C);
    local_5c = (float)vsin_s(uVar7);
    *(float *)(*(int *)(param_1 + 0x54) + 0x70) = local_5c;
    *(float *)(*(int *)(param_1 + 0x68c) + 0x70) = local_5c;
    if (local_5c <= 0.0) {
      *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x640) = 100;
LAB_08842468:
      iVar3 = *(int *)(param_1 + 0x68c);
      FUN_089f51b8(iVar3);
      *(undefined4 *)(iVar3 + 0x84) = 0;
      piVar5 = (int *)DONE_Get_DAT_08AAC9E0();
      iVar6 = FUN_0883f58c(param_1);
      iVar6 = *(int *)(*piVar5 + 0x464) + iVar6;
      iVar3 = 9999999;
      if ((iVar6 < 10000000) && (iVar3 = iVar6, iVar6 < 0)) {
        iVar3 = 0;
      }
      *(int *)(*piVar5 + 0x464) = iVar3;
      if (*(int *)(param_1 + 0xa90) != 0) {
        uVar7 = *(undefined4 *)(param_1 + 0xa90);
        FUN_089d8634(10);
        FUN_089d7fd8(uVar7,0,0);
        FUN_089d866c();
        *(undefined4 *)(param_1 + 0xa90) = 0;
      }
      FUN_0882c2cc(10,1);
      *(undefined *)(param_1 + 0xae5) = 1;
      *(undefined4 *)(param_1 + 0x640) = 999;
    }
    goto switchD_088430ac_caseD_2;
  case 100:
    goto LAB_08842468;
  }
  *(undefined4 *)(param_1 + 0x640) = 10;
LAB_088416e4:
  iVar6 = 0;
  iVar3 = 0x10;
  do {
    switch(iVar6) {
    case 0:
    case 3:
    case 6:
    case 9:
    case 0xc:
      FUN_08840680(param_1,iVar3,0xfffffc19);
      break;
    case 1:
    case 2:
    case 4:
    case 5:
    case 7:
    case 8:
    case 10:
    case 0xb:
      FUN_08840680(param_1,iVar3,0xfffffc19);
      break;
    case 0xd:
      FUN_08840680(param_1,iVar3,0);
      break;
    case 0xe:
      iVar6 = DONE_NotZero_DAT_08AAC9E0();
      if (iVar6 != 0) {
        piVar5 = (int *)DONE_Get_DAT_08AAC9E0();
        FUN_08840680(param_1,iVar3,*(undefined4 *)(*piVar5 + 0x464));
      }
    }
    iVar16 = iVar3 + 1;
    iVar6 = iVar3 + -0xf;
    iVar3 = iVar16;
  } while (iVar16 < 0x1f);
  *(undefined4 *)(param_1 + 0x644) = 0;
  if (*(char *)(param_1 + 0xae6) == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x3fc90fdb;
  }
  *(undefined4 *)(param_1 + 0x648) = uVar7;
  *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x640) + 1;
LAB_088417d4:
  *(float *)(param_1 + 0x648) = *(float *)(param_1 + 0x648) + 0.1745329;
  if (*(char *)(param_1 + 0xae6) != '\0') {
    *(undefined4 *)(param_1 + 0x648) = 0x3fc90fdb;
  }
  fVar23 = *(float *)(param_1 + 0x648);
  if (fVar23 < 0.0) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = 1.570796;
    if (fVar23 <= 1.570796) {
      fVar12 = fVar23;
    }
  }
  *(float *)(param_1 + 0x648) = fVar12;
  uVar7 = vmul_s(fVar12,in_V7C);
  fVar23 = (float)vsin_s(uVar7);
  local_70 = fVar23;
  local_f0[3] = 0;
  local_f0[4] = 1;
  local_f0[5] = 2;
  local_f0[6] = 0x4a;
  local_d4 = 6;
  local_d0 = 0x56;
  local_cc = 0x57;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x58) + *(int *)((int)piVar10 + 0x7c) * 4) + 0xbc) =
         fVar23;
    piVar10 = (int *)((int)piVar10 + 4);
  } while (iVar3 < 7);
  iVar6 = 0;
  iVar3 = 0;
  do {
    *(float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3 + 0x174) + 0xbc) = fVar23 * 0.4;
    iVar6 = iVar6 + 1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3 + 0x218) + 0xbc) = fVar23 * 0.4;
    iVar3 = iVar3 + 4;
  } while (iVar6 < 0x29);
  *(float *)(*(int *)(*(int *)(param_1 + 0x58) + 0x154) + 0xbc) = fVar23 * 0.5;
  iVar6 = 0x4b;
  iVar3 = 300;
  *(float *)(*(int *)(*(int *)(param_1 + 0x58) + 0x148) + 0xbc) = fVar23 * 0.5;
  do {
    iVar6 = iVar6 + 1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3) + 0xbc) = fVar23;
    iVar3 = iVar3 + 4;
  } while (iVar6 < 0x52);
  FUN_089f59e8(fVar23 * 0.2 + 0.8,0,*(undefined4 *)(param_1 + 0x54),0);
  if (fVar23 < 1.0) goto switchD_088430ac_caseD_2;
  FUN_089f59e8(0x3f800000,0,*(undefined4 *)(param_1 + 0x54),0);
  *(undefined4 *)(param_1 + 0x640) = 0x14;
LAB_088419f0:
  if (*(char *)(param_1 + 0xae6) == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x3fc90fdb;
  }
  *(undefined4 *)(param_1 + 0x648) = uVar7;
  *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x640) + 1;
LAB_08841a3c:
  *(float *)(param_1 + 0x648) = *(float *)(param_1 + 0x648) + 0.1396263;
  if (*(char *)(param_1 + 0xae6) != '\0') {
    *(undefined4 *)(param_1 + 0x648) = 0x3fc90fdb;
  }
  fVar23 = *(float *)(param_1 + 0x648);
  if (fVar23 < 0.0) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = 1.570796;
    if (fVar23 <= 1.570796) {
      fVar12 = fVar23;
    }
  }
  *(float *)(param_1 + 0x648) = fVar12;
  uVar7 = vmul_s(fVar12,in_V7C);
  local_6c = (float)vsin_s(uVar7);
  local_c8[0] = 0x14;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x58) + *(int *)((int)piVar11 + 0x98) * 4) + 0xbc) =
         local_6c;
    piVar11 = (int *)((int)piVar11 + 4);
  } while (iVar3 < 1);
  if (local_6c < 1.0) goto switchD_088430ac_caseD_2;
  *(undefined4 *)(param_1 + 0x640) = 0x1e;
LAB_08841b5c:
  if (*(char *)(param_1 + 0xae6) == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x3fc90fdb;
  }
  *(undefined4 *)(param_1 + 0x648) = uVar7;
  *(undefined4 *)(param_1 + 0x640) = 0x28;
LAB_08841bb0:
  *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x640) + 1;
LAB_08841bec:
  *(float *)(param_1 + 0x648) = *(float *)(param_1 + 0x648) + 0.08726646;
  if (*(char *)(param_1 + 0xae6) != '\0') {
    *(undefined4 *)(param_1 + 0x648) = 0x3fc90fdb;
  }
  fVar23 = *(float *)(param_1 + 0x648);
  if (fVar23 < 0.0) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = 1.570796;
    if (fVar23 <= 1.570796) {
      fVar12 = fVar23;
    }
  }
  *(float *)(param_1 + 0x648) = fVar12;
  uVar7 = vmul_s(fVar12,in_V7C);
  fVar23 = (float)vsin_s(uVar7);
  iVar6 = 7;
  iVar3 = 0x1c;
  do {
    if ((iVar6 != 0xd) && (iVar6 != 10)) {
      *(float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3) + 0xbc) = fVar23;
    }
    iVar6 = iVar6 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar6 < 0xf);
  *(float *)(*(int *)(param_1 + 0x68c) + 0x70) = fVar23;
  local_68 = fVar23;
  memcpy_jak(local_c8 + 1,&DAT_08aba724,0x2c);
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x58) + *(int *)((int)piVar14 + 0x9c) * 4) + 0xbc) =
         fVar23;
    piVar14 = (int *)((int)piVar14 + 4);
  } while (iVar3 < 0xb);
  iVar6 = 0x16;
  iVar3 = 0x58;
  do {
    iVar6 = iVar6 + 1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar3) + 0xbc) = fVar23;
    iVar3 = iVar3 + 4;
  } while (iVar6 < 0x40);
  if (fVar23 < 1.0) goto switchD_088430ac_caseD_2;
  *(undefined4 *)(param_1 + 0x640) = 0x32;
LAB_08841d64:
  FUN_089c879c(0,1);
  iVar3 = FUN_0883a8e0(param_1);
  if (iVar3 != -1) {
    FUN_089c8734(1,iVar3,0,0);
  }
  if (*(char *)(param_1 + 0xae6) == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x3fc90fdb;
  }
  *(undefined4 *)(param_1 + 0x648) = uVar7;
  *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x640) + 1;
LAB_08841dec:
  *(float *)(param_1 + 0x648) = *(float *)(param_1 + 0x648) + 0.08726646;
  if (*(char *)(param_1 + 0xae6) != '\0') {
    *(undefined4 *)(param_1 + 0x648) = 0x3fc90fdb;
  }
  fVar23 = *(float *)(param_1 + 0x648);
  if (fVar23 < 0.0) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = 1.570796;
    if (fVar23 <= 1.570796) {
      fVar12 = fVar23;
    }
  }
  *(float *)(param_1 + 0x648) = fVar12;
  uVar7 = vmul_s(fVar12,in_V7C);
  local_64 = (float)vsin_s(uVar7);
  local_98[0] = 3;
  local_98[1] = 4;
  local_98[2] = 5;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x58) + *(int *)((int)piVar18 + 200) * 4) + 0xbc) =
         local_64;
    piVar18 = (int *)((int)piVar18 + 4);
  } while (iVar3 < 3);
  if (local_64 < 1.0) goto switchD_088430ac_caseD_2;
  *(undefined4 *)(param_1 + 0x640) = 0x3c;
LAB_08841ee8:
  if (*(char *)(param_1 + 0xae6) == '\0') {
    *(undefined4 *)(param_1 + 0x644) = 0;
    FUN_08840680(param_1,0x1d,0);
    piVar5 = (int *)DONE_Get_DAT_08AAC9E0();
    FUN_08840680(param_1,0x1e,*(undefined4 *)(*piVar5 + 0x464));
    *(undefined4 *)(param_1 + 0x648) = 0;
  }
  else {
    uVar7 = FUN_0883f6e4(param_1,0x1d);
    *(undefined4 *)(param_1 + 0x644) = uVar7;
    uVar7 = FUN_0883f6e4(param_1,0x1d);
    FUN_08840680(param_1,0x1d,uVar7);
    uVar7 = FUN_0883f6e4(param_1,0x1e);
    FUN_08840680(param_1,0x1e,uVar7);
    *(undefined4 *)(param_1 + 0x648) = 0x3fc90fdb;
  }
  *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x640) + 1;
LAB_08841fb0:
  fVar23 = 0.0;
  *(float *)(param_1 + 0x648) = *(float *)(param_1 + 0x648) + 0.08726646;
  if (*(char *)(param_1 + 0xae6) != '\0') {
    *(undefined4 *)(param_1 + 0x648) = 0x3fc90fdb;
  }
  fVar12 = *(float *)(param_1 + 0x648);
  if (fVar12 < 0.0) {
    *(undefined4 *)(param_1 + 0x648) = 0;
  }
  else {
    if (1.570796 < fVar12) {
      fVar12 = 1.570796;
    }
    *(float *)(param_1 + 0x648) = fVar12;
    fVar23 = fVar12;
  }
  uVar7 = vmul_s(fVar23,in_V7C);
  local_60 = (float)vsin_s(uVar7);
  local_98[3] = 0xd;
  local_98[4] = 0x15;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x58) + *(int *)((int)piVar19 + 0xd4) * 4) + 0xbc) =
         local_60;
    piVar19 = (int *)((int)piVar19 + 4);
  } while (iVar3 < 2);
  iVar3 = 0x40;
  iVar6 = 0x100;
  do {
    iVar3 = iVar3 + 1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x58) + iVar6) + 0xbc) = local_60;
    iVar6 = iVar6 + 4;
  } while (iVar3 < 0x46);
  if (local_60 < 1.0) goto switchD_088430ac_caseD_2;
  if (*(char *)(param_1 + 0xae6) == '\0') {
    *(undefined4 *)(param_1 + 0xac8) = 0xffffffff;
    uVar7 = DONE_Get_DAT_08AC5874();
    iVar3 = FUN_089c6914(uVar7,0x20012d);
    if (iVar3 == 0) {
      uVar7 = DONE_Get_DAT_08AC5874();
      uVar7 = FUN_089c6350(uVar7,9,0,0);
      *(undefined4 *)(param_1 + 0xac8) = uVar7;
      goto LAB_088420f0;
    }
    iVar3 = *(int *)(param_1 + 0x640);
  }
  else {
LAB_088420f0:
    iVar3 = *(int *)(param_1 + 0x640);
  }
  *(int *)(param_1 + 0x640) = iVar3 + 1;
switchD_088409b4_caseD_3e:
  iVar3 = FUN_0883f6e4(param_1,0x1d);
  iVar6 = *(int *)(param_1 + 0x644) + 0x25;
  *(int *)(param_1 + 0x644) = iVar6;
  if (iVar6 < iVar3) {
    if (*(char *)(param_1 + 0xae6) == '\0') {
      FUN_08840680(param_1,0x1d,*(undefined4 *)(param_1 + 0x644));
      goto switchD_088430ac_caseD_2;
    }
    iVar6 = *(int *)(param_1 + 0xac8);
  }
  else {
    iVar6 = *(int *)(param_1 + 0xac8);
  }
  if (iVar6 == -1) {
LAB_08842164:
    iVar6 = *(int *)(param_1 + 0x640);
  }
  else {
    iVar6 = DONE_NotZero_DAT_08AC5874();
    if (iVar6 != 0) {
      uVar7 = DONE_Get_DAT_08AC5874();
      FUN_089c6588(uVar7,*(undefined4 *)(param_1 + 0xac8));
      goto LAB_08842164;
    }
    iVar6 = *(int *)(param_1 + 0x640);
  }
  *(int *)(param_1 + 0x640) = iVar6 + 1;
  FUN_08840680(param_1,0x1d,iVar3);
  cVar1 = *(char *)(param_1 + 0xae6);
LAB_088421a8:
  *(undefined4 *)(param_1 + 0x644) = 0xf;
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x644) = 0;
  }
  *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x640) + 1;
switchD_088409b4_caseD_40:
  iVar3 = *(int *)(param_1 + 0x644) + -1;
  *(int *)(param_1 + 0x644) = iVar3;
  if (-1 < iVar3) goto switchD_088430ac_caseD_2;
  *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x640) + 1;
switchD_088409b4_caseD_41:
  if (*(char *)(param_1 + 0xae6) == '\0') {
    piVar5 = (int *)DONE_Get_DAT_08AAC9E0(param_1);
    uVar7 = *(undefined4 *)(*piVar5 + 0x464);
    *(undefined4 *)(param_1 + 0x648) = 0;
    *(undefined4 *)(param_1 + 0x644) = uVar7;
    *(undefined4 *)(param_1 + 0xac8) = 0xffffffff;
    uVar7 = DONE_Get_DAT_08AC5874();
    iVar3 = FUN_089c6914(uVar7,0x20012d);
    if (iVar3 == 0) {
      uVar7 = DONE_Get_DAT_08AC5874();
      uVar7 = FUN_089c6350(uVar7,9,0,0);
      *(undefined4 *)(param_1 + 0xac8) = uVar7;
      goto LAB_08842268;
    }
    iVar3 = *(int *)(param_1 + 0x640);
  }
  else {
    uVar7 = FUN_0883f6e4(param_1,0x1e);
    *(undefined4 *)(param_1 + 0x644) = uVar7;
    *(undefined4 *)(param_1 + 0x648) = 0x3fc90fdb;
LAB_08842268:
    iVar3 = *(int *)(param_1 + 0x640);
  }
  *(int *)(param_1 + 0x640) = iVar3 + 1;
switchD_088409b4_caseD_42:
  iVar3 = FUN_0883f6e4(param_1,0x1e);
  iVar6 = *(int *)(param_1 + 0x644) + 0x25;
  *(int *)(param_1 + 0x644) = iVar6;
  if (iVar6 < iVar3) {
    if (*(char *)(param_1 + 0xae6) == '\0') {
      FUN_08840680(param_1,0x1e,*(undefined4 *)(param_1 + 0x644));
      goto switchD_088430ac_caseD_2;
    }
    iVar6 = *(int *)(param_1 + 0xac8);
  }
  else {
    iVar6 = *(int *)(param_1 + 0xac8);
  }
  if ((iVar6 != -1) && (iVar6 = DONE_NotZero_DAT_08AC5874(), iVar6 != 0)) {
    uVar7 = DONE_Get_DAT_08AC5874();
    FUN_089c6588(uVar7,*(undefined4 *)(param_1 + 0xac8));
  }
  *(undefined4 *)(param_1 + 0x640) = 0x46;
  FUN_08840680(param_1,0x1e,iVar3);
  cVar1 = *(char *)(param_1 + 0xae6);
LAB_0884231c:
  *(undefined4 *)(param_1 + 0x644) = 0;
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x644) = 1;
  }
  *(undefined4 *)(param_1 + 0x640) = 0x50;
switchD_088409b4_caseD_50:
  iVar3 = *(int *)(param_1 + 0x644) + -1;
  *(int *)(param_1 + 0x644) = iVar3;
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 0x644) = 0xffffffff;
    iVar3 = FUN_088ff440();
    if ((iVar3 == 0) && ((*(byte *)(*(int *)(param_1 + 0xa88) + 5) & 0x40) != 0)) {
      *(undefined4 *)(param_1 + 0x640) = 0x5a;
      *(undefined *)(param_1 + 0xae6) = 0;
    }
  }
switchD_088430ac_caseD_2:
  FUN_0884071c(param_1);
  return;
}

