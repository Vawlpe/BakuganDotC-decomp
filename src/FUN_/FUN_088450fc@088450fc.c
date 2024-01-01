#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088450fc(int param_1)

{
  undefined auVar1 [12];
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  float fVar12;
  undefined4 in_V7C;
  undefined local_90 [16];
  int local_80 [6];
  undefined4 local_68;
  undefined4 local_64;
  float local_58;
  float local_54;
  float local_4c;
  int local_48;
  int local_44;
  
  puVar9 = local_90;
  puVar10 = local_90;
  iVar2 = FUN_0882c220(0xb);
  if (iVar2 == 1) {
    return;
  }
  iVar2 = FUN_0884b248();
  if ((iVar2 != 0) && (iVar2 = FUN_0884b268(), *(char *)(iVar2 + 0x55d) != '\0')) {
    return;
  }
  iVar2 = FUN_089c9b48(0x22,DAT_08ac58c8);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x64c);
  if (100 < iVar2) {
    if (iVar2 < 0x67) {
      if (iVar2 < 0x66) {
        *(undefined4 *)(param_1 + 0x650) = 0;
        *(undefined4 *)(param_1 + 0x654) = 0x3fc90fdb;
        *(int *)(param_1 + 0x64c) = *(int *)(param_1 + 0x64c) + 1;
      }
      fVar12 = *(float *)(param_1 + 0x654) + -0.1745329;
      *(float *)(param_1 + 0x654) = fVar12;
      if (fVar12 < 0.0) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = 1.570796;
        if (fVar12 <= 1.570796) {
          fVar8 = fVar12;
        }
      }
      *(float *)(param_1 + 0x654) = fVar8;
      uVar3 = vmul_s(fVar8,in_V7C);
      local_4c = (float)vsin_s(uVar3);
      iVar2 = 0;
      iVar6 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(float *)(*(int *)(*(int *)(param_1 + 0x50) + iVar6) + 0xbc) = local_4c;
        iVar6 = iVar6 + 4;
      } while (iVar2 < 2);
      *(float *)(param_1 + 0x8b4) = local_4c;
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 0xbc) = local_4c;
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3c0) + 0xbc) = local_4c * 0.6;
      if (0.0 < local_4c) {
        return;
      }
      *(undefined4 *)(param_1 + 0x64c) = 999;
      iVar2 = *(int *)(param_1 + 0x14);
    }
    else {
      if (iVar2 != 999) {
        return;
      }
      iVar2 = *(int *)(param_1 + 0x14);
    }
    *(uint *)(*(int *)(iVar2 + 0x3bc) + 0xd0) =
         *(uint *)(*(int *)(iVar2 + 0x3bc) + 0xd0) & 0xfffffffe;
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x3c0);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    iVar2 = *(int *)(param_1 + 0x68c);
    FUN_089f51b8(iVar2);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x64c) = 0;
    FUN_0882c2cc(0xb,1);
    return;
  }
  switch(iVar2) {
  case 1:
    if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
      *(int *)(param_1 + 0x64c) = *(int *)(param_1 + 0x64c) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x64c) = 999;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x4c) == 0) {
      local_44 = 0;
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar6 = FUN_089d7d74(0x80,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      iVar2 = local_44;
      if (iVar6 != 0) {
        FUN_089f4f54(iVar6,0);
        iVar2 = iVar6;
      }
      *(int *)(param_1 + 0x4c) = iVar2;
    }
    *(undefined *)(*(int *)(param_1 + 0x4c) + 4) = 1;
    if (*(int *)(param_1 + 0x50) == 0) {
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar5 = FUN_089d7d74(8,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x50) = uVar5;
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
    }
    FUN_0881a0c4(uVar3,*(undefined4 *)(param_1 + 0x50),8);
    iVar2 = 0;
    iVar6 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + iVar6) + 0xbc) = 0;
      iVar6 = iVar6 + 4;
    } while (iVar2 < 2);
    iVar2 = **(int **)(param_1 + 0x50);
    uVar3 = *(undefined4 *)(iVar2 + 0x6c);
    auVar1 = vadd_t(*(undefined (*) [12])(iVar2 + 0x60),ZEXT412(0xbf800000) << 0x40);
    *(int *)*(undefined (*) [12])(iVar2 + 0x60) = auVar1._0_4_;
    *(int *)(iVar2 + 100) = auVar1._4_4_;
    *(int *)(iVar2 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(iVar2 + 0x6c) = uVar3;
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x3c0);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3c0) + 0xbc) = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x3bc);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 0x60) = 0x43da0000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 100) = 0x43100000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 0x6c) = 0;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 0xbc) = 0;
    *(int *)(param_1 + 0x64c) = *(int *)(param_1 + 0x64c) + 1;
    goto LAB_08845414;
  case 3:
LAB_08845414:
    *(undefined4 *)(param_1 + 0x650) = 0xf;
    *(int *)(param_1 + 0x64c) = *(int *)(param_1 + 0x64c) + 1;
switchD_088451bc_caseD_4:
    iVar2 = *(int *)(param_1 + 0x650) + -1;
    *(int *)(param_1 + 0x650) = iVar2;
    if (iVar2 < 1) {
      *(undefined4 *)(param_1 + 0x64c) = 10;
    }
    break;
  case 4:
    goto switchD_088451bc_caseD_4;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    break;
  case 10:
    iVar11 = param_1 + 0x7a4;
    iVar2 = 0x68;
    iVar6 = 0x28;
    strcpy(iVar11,*(undefined4 *)(*(int *)(param_1 + 0x8a8) + *(int *)(param_1 + 0x658) * 4));
    iVar4 = *(int *)(param_1 + 0x68c);
    FUN_089f51b8(iVar4);
    *(undefined4 *)(iVar4 + 0x84) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x68c) + 0xe0) = 0x43c80000;
    FUN_08817a90(*(undefined4 *)(param_1 + 0x68c),1);
    *(undefined4 *)(*(int *)(param_1 + 0x68c) + 0xdc) = 0x3f19999a;
    FUN_088184e8(0,*(undefined4 *)(param_1 + 0x68c),iVar11,param_1 + 0x8c8,param_1 + 0x8c4,0);
    iVar4 = (int)((400.0 - *(float *)(param_1 + 0x8c4)) * 0.5);
    if (-1 < iVar4) {
      iVar6 = iVar4 + 0x28;
    }
    if (*(float *)(param_1 + 0x8c8) < 17.0) {
      iVar2 = 0x70;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x68c) + 0x74);
    (**(code **)(iVar4 + 0x14))
              ((float)iVar6,(float)iVar2,0,*(int *)(param_1 + 0x68c) + (int)*(short *)(iVar4 + 0x10)
               ,iVar11,0,0,0);
    *(undefined4 *)(param_1 + 0x8b4) = 0;
    *(undefined4 *)(param_1 + 0x654) = 0;
    *(int *)(param_1 + 0x64c) = *(int *)(param_1 + 0x64c) + 1;
    iVar2 = 0x2a7b;
    if (*(int *)(&DAT_08a656ac + (*(int *)(param_1 + 0x658) + -0x5e) * 4) != -1) {
      iVar2 = *(int *)(&DAT_08a656ac + (*(int *)(param_1 + 0x658) + -0x5e) * 4);
    }
    FUN_089c2fbc(iVar2);
    fVar12 = *(float *)(param_1 + 0x654);
    goto LAB_088455dc;
  case 0xb:
    fVar12 = *(float *)(param_1 + 0x654);
LAB_088455dc:
    fVar8 = 0.0;
    fVar12 = fVar12 + 0.08726646;
    *(float *)(param_1 + 0x654) = fVar12;
    if (fVar12 < 0.0) {
      *(undefined4 *)(param_1 + 0x654) = 0;
    }
    else {
      if (1.570796 < fVar12) {
        fVar12 = 1.570796;
      }
      *(float *)(param_1 + 0x654) = fVar12;
      fVar8 = fVar12;
    }
    uVar3 = vmul_s(fVar8,in_V7C);
    fVar12 = (float)vsin_s(uVar3);
    local_58 = fVar12;
    *(float *)(param_1 + 0x8b4) = fVar12;
    local_80[0] = 0;
    local_80[1] = 1;
    iVar2 = 0;
    do {
      iVar6 = *(int *)(*(int *)(param_1 + 0x50) + *(int *)(puVar9 + 0x10) * 4);
      *(float *)(iVar6 + 0xbc) = fVar12;
      fVar8 = (float)FUN_089f4944(iVar6);
      iVar2 = iVar2 + 1;
      puVar9 = puVar9 + 4;
      *(float *)(iVar6 + 0x60) = (float)(0xf0 - (int)fVar8 / 2);
    } while (iVar2 < 2);
    *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3c0) + 0xbc) = fVar12 * 0.6;
    *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 0xbc) = fVar12;
    if (1.0 <= fVar12) {
      *(undefined4 *)(param_1 + 0x64c) = 100;
    }
    break;
  case 0x14:
    *(undefined4 *)(param_1 + 0x654) = 0;
    *(int *)(param_1 + 0x64c) = *(int *)(param_1 + 0x64c) + 1;
    goto LAB_08845724;
  case 0x15:
LAB_08845724:
    fVar12 = *(float *)(param_1 + 0x654) + 0.08726646;
    *(float *)(param_1 + 0x654) = fVar12;
    if (fVar12 < 0.0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = 1.570796;
      if (fVar12 <= 1.570796) {
        fVar8 = fVar12;
      }
    }
    *(float *)(param_1 + 0x654) = fVar8;
    uVar3 = vmul_s(fVar8,in_V7C);
    local_54 = (float)vsin_s(uVar3);
    local_80[2] = 1;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(float *)(*(int *)(*(int *)(param_1 + 0x50) + *(int *)(puVar10 + 0x18) * 4) + 0xbc) =
           local_54;
      puVar10 = puVar10 + 4;
    } while (iVar2 < 1);
    if (1.0 <= local_54) {
      *(undefined4 *)(param_1 + 0x64c) = 100;
    }
    break;
  default:
    if (0x62 < iVar2) {
      if (iVar2 < 100) {
        iVar2 = param_1 + 0x7a4;
        if (*(int *)(param_1 + 0x4c) == 0) {
          local_48 = 0;
          FUN_089d8634();
          uVar3 = FUN_089d81a4();
          FUN_089d816c(1);
          iVar4 = FUN_089d7d74(0x80,0,0);
          FUN_089d816c(uVar3);
          FUN_089d866c();
          iVar6 = local_48;
          if (iVar4 != 0) {
            FUN_089f4f54(iVar4,0);
            iVar6 = iVar4;
          }
          *(int *)(param_1 + 0x4c) = iVar6;
        }
        *(undefined *)(*(int *)(param_1 + 0x4c) + 4) = 1;
        if (*(int *)(param_1 + 0x50) == 0) {
          FUN_089d8634();
          uVar3 = FUN_089d81a4();
          FUN_089d816c(1);
          uVar5 = FUN_089d7d74(8,0,0);
          FUN_089d816c(uVar3);
          FUN_089d866c();
          *(undefined4 *)(param_1 + 0x50) = uVar5;
          uVar3 = *(undefined4 *)(param_1 + 0x4c);
        }
        else {
          uVar3 = *(undefined4 *)(param_1 + 0x4c);
        }
        FUN_0881a0c4(uVar3,*(undefined4 *)(param_1 + 0x50),8);
        iVar6 = 0;
        iVar4 = 0;
        do {
          iVar6 = iVar6 + 1;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + iVar4) + 0xbc) = 0x3f800000;
          iVar4 = iVar4 + 4;
        } while (iVar6 < 2);
        iVar6 = **(int **)(param_1 + 0x50);
        local_80[4] = 0;
        local_80[5] = 0;
        local_68 = 0xbf800000;
        local_64 = 0;
        uVar3 = *(undefined4 *)(iVar6 + 0x6c);
        auVar1 = vadd_t(*(undefined (*) [12])(iVar6 + 0x60),ZEXT412(0xbf800000) << 0x40);
        *(int *)*(undefined (*) [12])(iVar6 + 0x60) = auVar1._0_4_;
        *(int *)(iVar6 + 100) = auVar1._4_4_;
        *(int *)(iVar6 + 0x68) = auVar1._8_4_;
        *(undefined4 *)(iVar6 + 0x6c) = uVar3;
        iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x3c0);
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3c0) + 0xbc) = 0x3f19999a;
        iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x3bc);
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 0x60) = 0x43da0000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 100) = 0x43100000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 0x6c) = 0;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 0xbc) = 0x3f800000;
        iVar6 = 0x68;
        iVar4 = 0x28;
        strcpy(iVar2,*(undefined4 *)(*(int *)(param_1 + 0x8a8) + *(int *)(param_1 + 0x658) * 4));
        iVar11 = *(int *)(param_1 + 0x68c);
        FUN_089f51b8(iVar11);
        *(undefined4 *)(iVar11 + 0x84) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x68c) + 0xe0) = 0x43c80000;
        FUN_08817a90(*(undefined4 *)(param_1 + 0x68c),1);
        *(undefined4 *)(*(int *)(param_1 + 0x68c) + 0xdc) = 0x3f19999a;
        FUN_088184e8(0,*(undefined4 *)(param_1 + 0x68c),iVar2,param_1 + 0x8c8,param_1 + 0x8c4,0);
        iVar11 = (int)((400.0 - *(float *)(param_1 + 0x8c4)) * 0.5);
        if (-1 < iVar11) {
          iVar4 = iVar11 + 0x28;
        }
        if (*(float *)(param_1 + 0x8c8) < 17.0) {
          iVar6 = 0x70;
        }
        iVar11 = *(int *)(*(int *)(param_1 + 0x68c) + 0x74);
        (**(code **)(iVar11 + 0x14))
                  ((float)iVar4,(float)iVar6,0,
                   *(int *)(param_1 + 0x68c) + (int)*(short *)(iVar11 + 0x10),iVar2,0,0,0);
        *(undefined4 *)(param_1 + 0x8b4) = 0x3f800000;
        *(int *)(param_1 + 0x64c) = *(int *)(param_1 + 0x64c) + 1;
        iVar2 = *(int *)(param_1 + 0xa88);
      }
      else {
        iVar2 = *(int *)(param_1 + 0xa88);
      }
      if ((*(byte *)(iVar2 + 5) & 0x40) == 0) {
        pfVar7 = (float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 0x6c);
        fVar12 = *pfVar7 + 1.0;
        *pfVar7 = fVar12;
        if (16.0 <= fVar12) {
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 0x6c) = 0;
        }
        FUN_089f4b64((float)(int)(*(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 0x6c) *
                                 0.125));
      }
      else {
        *(int *)(param_1 + 0x64c) = *(int *)(param_1 + 0x64c) + 1;
      }
    }
  }
  return;
}

