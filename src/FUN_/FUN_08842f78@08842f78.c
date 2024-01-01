#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08842f78(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  float fVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int unaff_s4;
  float fVar13;
  undefined4 in_V7C;
  undefined auStack_140 [64];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0 [4];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0 [16];
  int local_70 [6];
  float local_58;
  float local_54;
  int local_4c;
  
  puVar6 = auStack_140;
  puVar7 = auStack_140;
  puVar9 = auStack_140;
  iVar2 = FUN_0880d354();
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x640);
  }
  else {
    iVar2 = FUN_089cf8ec(0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x640);
    }
    else {
      FUN_089d0d38();
      iVar2 = *(int *)(param_1 + 0x640);
    }
  }
  if (iVar2 < 1) {
    iVar2 = *(int *)(param_1 + 0x640);
  }
  else {
    iVar2 = FUN_088ff440();
    if (iVar2 == 0) {
      if ((*(byte *)(*(int *)(param_1 + 0xa88) + 5) & 0x40) != 0) {
        *(undefined *)(param_1 + 0xae7) = 1;
      }
      iVar2 = *(int *)(param_1 + 0x640);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x640);
    }
  }
  if (iVar2 < 0x1e) {
    if (iVar2 < 10) {
      if (iVar2 != 0) goto switchD_088430ac_caseD_b;
      if (*(int *)(param_1 + 0x5c) == 0) {
        local_4c = 0;
        FUN_089d8634();
        uVar3 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar4 = FUN_089d7d74(0x80,0,0);
        FUN_089d816c(uVar3);
        FUN_089d866c();
        iVar2 = local_4c;
        if (iVar4 != 0) {
          FUN_089f4f54(iVar4,0);
          iVar2 = iVar4;
        }
        *(int *)(param_1 + 0x5c) = iVar2;
      }
      *(undefined *)(*(int *)(param_1 + 0x5c) + 4) = 1;
      if (*(int *)(param_1 + 0x60) == 0) {
        FUN_089d8634();
        uVar3 = FUN_089d81a4();
        FUN_089d816c(1);
        uVar5 = FUN_089d7d74(0x308,0,0);
        FUN_089d816c(uVar3);
        FUN_089d866c();
        *(undefined4 *)(param_1 + 0x60) = uVar5;
        uVar3 = *(undefined4 *)(param_1 + 0x5c);
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x5c);
      }
      FUN_0881a0c4(uVar3,*(undefined4 *)(param_1 + 0x60),0x25);
      FUN_0884254c(param_1,1);
      iVar2 = 0;
      iVar4 = 0;
      do {
        iVar10 = 0;
        iVar11 = iVar4 << 2;
        do {
          iVar12 = *(int *)(*(int *)(param_1 + 0x60) + iVar11 + 0xf4);
          local_e0 = 0x3e99999a;
          local_dc = 0x3f666666;
          local_d8 = 0x3f400000;
          local_d4 = 0;
          *(undefined4 *)(iVar12 + 0xb0) = 0x3e99999a;
          *(undefined4 *)(iVar12 + 0xb4) = 0x3f666666;
          *(undefined4 *)(iVar12 + 0xb8) = 0x3f400000;
          *(undefined4 *)(iVar12 + 0xbc) = 0;
          iVar10 = iVar10 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar10 < 3);
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar2 < 4);
      iVar4 = 0;
      iVar2 = 0;
      do {
        uVar3 = FUN_0880cc48();
        iVar10 = FUN_0880d0ac(uVar3,iVar4 + 3);
        if (0 < iVar10) {
          iVar2 = iVar2 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      iVar4 = FUN_0884b248();
      if (iVar4 != 0) {
        uVar3 = FUN_0884b268();
        FUN_0884e4b4(uVar3);
      }
      iVar4 = 0;
      do {
        FUN_08840680(param_1,iVar4,0xfffffc19);
        FUN_08842654(param_1,*(undefined4 *)(param_1 + 0x60),iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x10);
      uVar3 = FUN_0880cc48();
      iVar4 = FUN_0880d0ac(uVar3,7);
      if (iVar4 != 0) {
        FUN_08842720(param_1);
      }
      if (iVar2 < 3) {
        if (iVar2 < 2) {
LAB_088434cc:
          iVar4 = 0x16;
          iVar2 = 0x58;
          do {
            iVar4 = iVar4 + 1;
            iVar10 = *(int *)(*(int *)(param_1 + 0x60) + iVar2);
            *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
            iVar2 = iVar2 + 4;
          } while (iVar4 < 0x18);
        }
        else {
          FUN_088427d8(param_1,2,0);
          FUN_088427d8(param_1,3,0);
          FUN_088428b4(0x42840000,0,param_1,0);
          FUN_088428b4(0x432a0000,0,param_1,1);
          FUN_0884254c(param_1,0);
          iVar4 = 0x12;
          iVar2 = 0x48;
          do {
            iVar4 = iVar4 + 1;
            iVar10 = *(int *)(*(int *)(param_1 + 0x60) + iVar2);
            *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
            iVar2 = iVar2 + 4;
          } while (iVar4 < 0x16);
          local_d0[0] = 0x28;
          local_d0[1] = 0x52;
          local_d0[2] = 0x53;
          local_d0[3] = 0x54;
          local_c0 = 0x2c;
          local_bc = 0x5e;
          local_b8 = 0x5f;
          local_b4 = 0x60;
          iVar2 = 0;
          do {
            iVar4 = *(int *)(*(int *)(param_1 + 0x60) + *(int *)(puVar6 + 0x70) * 4);
            iVar2 = iVar2 + 1;
            *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
            puVar6 = puVar6 + 4;
          } while (iVar2 < 8);
        }
      }
      else {
        if (3 < iVar2) goto LAB_088434cc;
        FUN_088427d8(param_1,3,0);
        uVar3 = 0x42600000;
        FUN_088428b4(0x42600000,0,param_1,0);
        FUN_088428b4(uVar3,0,param_1,1);
        FUN_088428b4(uVar3,0,param_1,2);
        FUN_0884254c(param_1,0);
        iVar4 = 0x16;
        iVar2 = 0x58;
        do {
          iVar4 = iVar4 + 1;
          iVar10 = *(int *)(*(int *)(param_1 + 0x60) + iVar2);
          *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
          iVar2 = iVar2 + 4;
        } while (iVar4 < 0x18);
      }
      iVar2 = 0;
      do {
        FUN_088428b4(0,0xc3880000,param_1,iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      FUN_089f4a90(0,0x40000000,*(undefined4 *)(*(int *)(param_1 + 0x60) + 0x1b8));
      iVar4 = 0;
      iVar2 = 0;
      do {
        iVar10 = FUN_0882d020(iVar4);
        if (iVar10 != 0) {
          if (*(int *)(iVar10 + 8) == 0) {
            iVar10 = *(int *)(param_1 + 0x60);
          }
          else {
            if (*(uint *)(iVar10 + 8) < 0x15) {
              uVar3 = FUN_0882d020(iVar4);
              iVar11 = FUN_08845e7c(uVar3);
              if (iVar11 == 0) {
                FUN_089b4c84(auStack_140,"arena_com_pho_%03d",*(undefined4 *)(iVar10 + 8));
                iVar11 = *(int *)(param_1 + 0x60);
              }
              else {
                uVar3 = FUN_08845e7c(iVar10);
                FUN_089b4c84(auStack_140,"arena_com_pho_%03d_%02d",*(undefined4 *)(iVar10 + 8),uVar3
                            );
                iVar11 = *(int *)(param_1 + 0x60);
              }
              iVar11 = *(int *)(iVar11 + iVar2 + 0x60);
              uVar3 = FUN_089f7720(auStack_140);
              *(undefined4 *)(iVar11 + 0xd4) = uVar3;
              FUN_0882c4c8(0,0,0x42e00000,0x43080000,param_1,
                           *(undefined4 *)(*(int *)(param_1 + 0x60) + iVar2 + 0x60));
              iVar10 = *(int *)(iVar10 + 8) + -1;
              fVar13 = (float)iVar10;
              if (iVar10 < 0) {
                fVar13 = fVar13 + 4.294967e+09;
              }
              FUN_089f4bf4(fVar13,*(undefined4 *)(*(int *)(param_1 + 0x60) + iVar2 + 0x1a8));
              goto LAB_08843688;
            }
            iVar10 = *(int *)(param_1 + 0x60);
          }
          iVar10 = *(int *)(iVar10 + iVar2 + 0x60);
          *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
          iVar10 = *(int *)(*(int *)(param_1 + 0x60) + iVar2 + 0x1a8);
          *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
        }
LAB_08843688:
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar4 < 4);
      uVar3 = FUN_0880cc48();
      iVar2 = FUN_0880d0ac(uVar3,7);
      if (iVar2 < 1) {
        if (-1 < iVar2) {
          iVar2 = FUN_0884b248();
          if (iVar2 != 0) {
            iVar4 = 0;
            iVar2 = 0;
            do {
              uVar3 = FUN_0884b268();
              iVar10 = FUN_0884e0f8(uVar3,iVar4);
              if (iVar10 == 1) {
                iVar10 = *(int *)(*(int *)(param_1 + 0x60) + iVar2 + 0x10);
                *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
              }
              else if (iVar10 == 2) {
                iVar10 = *(int *)(*(int *)(param_1 + 0x60) + iVar2 + 0xc);
                *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
              }
              else if (iVar10 == 4) {
                iVar10 = *(int *)(*(int *)(param_1 + 0x60) + iVar2 + 0xc);
                *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
                FUN_089f4bf4(0x3f800000,*(undefined4 *)(*(int *)(param_1 + 0x60) + iVar2 + 0x10));
              }
              iVar4 = iVar4 + 1;
              iVar2 = iVar2 + 8;
            } while (iVar4 < 4);
          }
          memcpy_jak(local_b0,&DAT_08aba6b4,0x40);
          iVar2 = 0;
          do {
            iVar4 = *(int *)(*(int *)(param_1 + 0x60) + *(int *)(puVar7 + 0x90) * 4);
            iVar2 = iVar2 + 1;
            *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
            puVar7 = puVar7 + 4;
          } while (iVar2 < 0x10);
          iVar4 = 0;
          iVar2 = 0;
          do {
            FUN_089f4bf4(0x40000000,*(undefined4 *)(*(int *)(param_1 + 0x60) + iVar2 + 0x84));
            iVar4 = iVar4 + 1;
            iVar2 = iVar2 + 0x10;
          } while (iVar4 < 4);
        }
      }
      else if (iVar2 < 3) {
        iVar2 = FUN_0884b248();
        iVar4 = 0;
        if (iVar2 != 0) {
          iVar2 = 0;
          do {
            uVar3 = FUN_0880cc48();
            iVar10 = FUN_0880d0ac(uVar3,iVar2 + 3);
            if (0 < iVar10) {
              iVar4 = iVar4 + 1;
            }
            iVar2 = iVar2 + 1;
            iVar10 = 0;
          } while (iVar2 < 4);
          iVar2 = 0;
          do {
            uVar3 = FUN_0884b268();
            iVar11 = FUN_0884d134(uVar3,iVar10);
            if (iVar11 == 0) {
              iVar2 = iVar2 + 1;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < 4);
          uVar3 = FUN_0880cc48();
          iVar10 = FUN_0880d0ac(uVar3,7);
          if (iVar10 == 1) {
            iVar11 = 0;
            iVar10 = 0;
            do {
              FUN_089f4bf4(0x40400000,*(undefined4 *)(*(int *)(param_1 + 0x60) + iVar10 + 0x80));
              iVar11 = iVar11 + 1;
              iVar10 = iVar10 + 0x10;
            } while (iVar11 < 4);
          }
          iVar11 = 0;
          iVar10 = 0;
          do {
            uVar3 = FUN_0884b268();
            iVar12 = FUN_0884d134(uVar3,iVar11);
            if (iVar12 == 0) {
              if (iVar4 == iVar2) {
                iVar12 = *(int *)(*(int *)(param_1 + 0x60) + iVar10 + 0xc);
                *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffffe;
                FUN_089f4bf4(0x3f800000,*(undefined4 *)(*(int *)(param_1 + 0x60) + iVar10 + 0x10));
              }
              else {
                iVar12 = *(int *)(*(int *)(param_1 + 0x60) + iVar10 + 0x10);
                *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffffe;
              }
            }
            else {
              iVar12 = *(int *)(*(int *)(param_1 + 0x60) + iVar10 + 0xc);
              *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffffe;
            }
            iVar11 = iVar11 + 1;
            iVar10 = iVar10 + 8;
          } while (iVar11 < 4);
        }
      }
      local_100 = 0;
      local_fc = 0;
      local_f8 = 0x40000000;
      local_f4 = 0x3f800000;
      local_f0 = 0x40400000;
      local_ec = 0x40a00000;
      local_e8 = 0x40800000;
      local_e4 = 0x40c00000;
      iVar2 = FUN_0883a658(param_1);
      iVar10 = 0;
      iVar4 = 0;
      puVar6 = auStack_140 + (uint)(1 < iVar2) * 4;
      do {
        FUN_089f4a90(0,*(undefined4 *)(puVar6 + 0x40),
                     *(undefined4 *)(*(int *)(param_1 + 0x60) + iVar4 + 0x38));
        iVar10 = iVar10 + 1;
        iVar4 = iVar4 + 4;
        puVar6 = puVar6 + 8;
      } while (iVar10 < 4);
      iVar4 = 0;
      iVar2 = 0;
      do {
        iVar4 = iVar4 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x60) + iVar2) + 0xbc) = 0;
        iVar2 = iVar2 + 4;
      } while (iVar4 < 0x70);
      FUN_088429b0(param_1);
      *(undefined4 *)(param_1 + 0x640) = 10;
LAB_08843a60:
      if (*(char *)(param_1 + 0xae7) == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x3fc90fdb;
      }
      *(undefined4 *)(param_1 + 0x648) = uVar3;
      *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x640) + 1;
    }
    else {
      if (iVar2 < 0xb) goto LAB_08843a60;
      if (0xb < iVar2) goto switchD_088430ac_caseD_b;
    }
    *(float *)(param_1 + 0x648) = *(float *)(param_1 + 0x648) + 0.1745329;
    if (*(char *)(param_1 + 0xae7) != '\0') {
      *(undefined4 *)(param_1 + 0x648) = 0x3fc90fdb;
    }
    fVar13 = *(float *)(param_1 + 0x648);
    if (fVar13 < 0.0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = 1.570796;
      if (fVar13 <= 1.570796) {
        fVar8 = fVar13;
      }
    }
    *(float *)(param_1 + 0x648) = fVar8;
    uVar3 = vmul_s(fVar8,in_V7C);
    fVar13 = (float)vsin_s(uVar3);
    local_58 = fVar13;
    local_70[0] = 1;
    local_70[1] = 2;
    local_70[2] = 0x6e;
    local_70[3] = 0x6f;
    iVar2 = 0;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x60) + *(int *)(puVar9 + 0xd0) * 4);
      iVar2 = iVar2 + 1;
      *(float *)(iVar4 + 0xbc) = fVar13;
      puVar9 = puVar9 + 4;
    } while (iVar2 < 4);
    iVar10 = 0;
    iVar2 = 0;
    do {
      *(float *)(*(int *)(*(int *)(param_1 + 0x60) + iVar2 + 0x1c0) + 0xbc) = fVar13 * 0.4;
      iVar10 = iVar10 + 1;
      *(float *)(*(int *)(*(int *)(param_1 + 0x60) + iVar2 + 0x264) + 0xbc) = fVar13 * 0.4;
      iVar2 = iVar2 + 4;
    } while (iVar10 < 0x29);
    *(float *)(*(int *)(*(int *)(param_1 + 0x60) + 0x7c) + 0xbc) = fVar13 * 0.5;
    *(float *)(*(int *)(*(int *)(param_1 + 0x60) + 0x70) + 0xbc) = fVar13 * 0.5;
    uVar3 = FUN_0880cc48();
    iVar2 = FUN_0880d0ac(uVar3,7);
    if (iVar2 < 1) {
      if (-1 < iVar2) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x60) + 0x30);
      }
    }
    else if (iVar2 < 2) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x60) + 0x34);
    }
    else if (iVar2 < 3) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x60) + 0x2c);
    }
    if (iVar4 != 0) {
      *(float *)(iVar4 + 0xbc) = fVar13;
    }
    FUN_089f59e8(fVar13 * 0.2 + 0.8,0,*(undefined4 *)(param_1 + 0x5c),0);
    if (fVar13 < 1.0) goto switchD_088430ac_caseD_b;
    FUN_089f59e8(0x3f800000,0,*(undefined4 *)(param_1 + 0x5c),0);
    *(undefined4 *)(param_1 + 0x640) = 0x1e;
LAB_08843cac:
    *(undefined4 *)(param_1 + 0x648) = 0;
    *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x640) + 1;
LAB_08843cc4:
    *(float *)(param_1 + 0x648) = *(float *)(param_1 + 0x648) + 0.08726646;
    if (*(char *)(param_1 + 0xae7) != '\0') {
      *(undefined4 *)(param_1 + 0x648) = 0x3fc90fdb;
    }
    fVar13 = *(float *)(param_1 + 0x648);
    if (fVar13 < 0.0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = 1.570796;
      if (fVar13 <= 1.570796) {
        fVar8 = fVar13;
      }
    }
    *(float *)(param_1 + 0x648) = fVar8;
    uVar3 = vmul_s(fVar8,in_V7C);
    fVar8 = (float)vsin_s(uVar3);
    local_54 = fVar8;
    FUN_08842c9c(fVar8,param_1);
    iVar2 = 0;
    fVar13 = (1.0 - fVar8) * -272.0;
    do {
      FUN_088428b4(0,fVar13,param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    if (1.0 <= fVar8) {
      FUN_089c879c(0,1);
      iVar2 = FUN_0883a8e0(param_1);
      if (iVar2 != -1) {
        FUN_089c8734(1,iVar2,0,0);
      }
      FUN_08842c9c(0x3f800000,param_1);
      iVar2 = 0;
      do {
        FUN_088428b4(0,0,param_1,iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x640) = 0x3c;
      if (*(char *)(param_1 + 0xae7) != '\0') {
        *(undefined *)(param_1 + 0xae7) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
      }
      iVar2 = FUN_0880d354();
      if (iVar2 == 1) {
        *(undefined4 *)(param_1 + 0x644) = 0x96;
      }
    }
    goto switchD_088430ac_caseD_b;
  }
  if (iVar2 < 0x3c) {
    if (iVar2 < 0x1f) goto LAB_08843cac;
    if (0x1f < iVar2) goto switchD_088430ac_caseD_b;
    goto LAB_08843cc4;
  }
                    // WARNING (jumptable): Sanity check requires truncation of jumptable
                    // WARNING: Could not find normalized switch variable to match jumptable
  switch(iVar2) {
  case 0:
    *(undefined4 *)(unaff_s4 + 0x648) = 0x3fc90fdb;
    *(int *)(unaff_s4 + 0x640) = *(int *)(unaff_s4 + 0x640) + 1;
    break;
  case 1:
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    goto switchD_088430ac_caseD_2;
  case 10:
    goto LAB_08842468;
  default:
    if (iVar2 < 0x65) {
      FUN_0882c2cc(10,1);
    }
  case -0x452e541f:
switchD_088430ac_caseD_b:
    FUN_08842d78(param_1);
    return;
  }
  fVar13 = *(float *)(unaff_s4 + 0x648) + -0.1745329;
  *(float *)(unaff_s4 + 0x648) = fVar13;
  if (fVar13 < 0.0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = 1.570796;
    if (fVar13 <= 1.570796) {
      fVar8 = fVar13;
    }
  }
  *(float *)(unaff_s4 + 0x648) = fVar8;
  uVar3 = vmul_s(fVar8,in_V7C);
  fVar13 = (float)vsin_s(uVar3);
  *(float *)(*(int *)(unaff_s4 + 0x54) + 0x70) = fVar13;
  *(float *)(*(int *)(unaff_s4 + 0x68c) + 0x70) = fVar13;
  if (fVar13 <= 0.0) {
    *(undefined4 *)(*(int *)(unaff_s4 + 0x54) + 0x70) = 0;
    *(undefined4 *)(unaff_s4 + 0x640) = 100;
LAB_08842468:
    iVar2 = *(int *)(unaff_s4 + 0x68c);
    FUN_089f51b8(iVar2);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    piVar1 = (int *)FUN_0880cc48();
    iVar4 = FUN_0883f58c();
    iVar4 = *(int *)(*piVar1 + 0x464) + iVar4;
    iVar2 = 9999999;
    if ((iVar4 < 10000000) && (iVar2 = iVar4, iVar4 < 0)) {
      iVar2 = 0;
    }
    *(int *)(*piVar1 + 0x464) = iVar2;
    if (*(int *)(unaff_s4 + 0xa90) != 0) {
      uVar3 = *(undefined4 *)(unaff_s4 + 0xa90);
      FUN_089d8634(10);
      FUN_089d7fd8(uVar3,0,0);
      FUN_089d866c();
      *(undefined4 *)(unaff_s4 + 0xa90) = 0;
    }
    FUN_0882c2cc(10,1);
    *(undefined *)(unaff_s4 + 0xae5) = 1;
    *(undefined4 *)(unaff_s4 + 0x640) = 999;
  }
switchD_088430ac_caseD_2:
  FUN_0884071c();
  return;
}

