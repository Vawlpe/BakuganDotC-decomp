#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08894c40(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined auVar3 [12];
  
  bVar6 = true;
  uVar11 = 0;
  fVar12 = (float)atan2f(*(float *)(param_1 + 0x9b8) - *(float *)(*(int *)(param_1 + 0x1a0) + 0x28),
                         *(float *)*(undefined (*) [16])(param_1 + 0x9b0) -
                         *(float *)(*(int *)(param_1 + 0x1a0) + 0x20));
  if (3.141593 < fVar12) {
    fVar12 = fVar12 - 6.283185;
  }
  else if (fVar12 <= -3.141593) {
    fVar12 = fVar12 + 6.283185;
  }
  switch(*(undefined4 *)(param_1 + 0x2f8)) {
  case 0:
    break;
  case 1:
    *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
    *(undefined *)(param_1 + 0x400) = 1;
    goto LAB_08894d54;
  case 2:
LAB_08894d54:
    bVar5 = false;
    if ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x144) & 0x400000) == 0) {
      bVar4 = false;
      if ((*(int *)(*(int *)(param_1 + 0x1a0) + 0x140) == 8) ||
         (*(int *)(*(int *)(param_1 + 0x1a0) + 0x140) == 10)) {
        bVar4 = true;
      }
      if (((!bVar4) && ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x16c) & 0xc00) == 0)) &&
         ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x144) & 0x100) == 0)) {
        bVar5 = true;
      }
    }
    if (!bVar5) {
      return;
    }
    *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
LAB_08894e2c:
    iVar10 = *(int *)(param_1 + 0x2e0);
    *(int *)(param_1 + 0x2e0) = iVar10 + 1;
    if (iVar10 < 2) {
      bVar6 = false;
    }
    else {
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
    }
LAB_08894e64:
    iVar10 = FUN_08893050(fVar12,*(undefined4 *)(param_1 + 0xa18),param_1);
    if (bVar6) {
      if (iVar10 == 0) {
        iVar10 = *(int *)(param_1 + 0x1a0);
      }
      else {
        iVar8 = FUN_0888efc8(param_1);
        if ((iVar8 == 0) || (iVar10 != 3)) {
          iVar8 = FUN_0888f028(0x44098000,param_1);
          if (iVar8 == 0) {
            iVar8 = FUN_08893220(param_1,iVar10);
            if (iVar8 != 0) {
              iVar8 = *(int *)(*(int *)(param_1 + 0x2cc) + 4);
              iVar8 = (**(code **)(iVar8 + 0x1c))
                                (*(int *)(param_1 + 0x2cc) + (int)*(short *)(iVar8 + 0x18));
              iVar9 = FUN_089bed14(99);
              if (iVar9 < iVar8) {
                uVar14 = 7;
                goto LAB_08894f58;
              }
            }
            uVar14 = 8;
            iVar10 = FUN_0888ef80(param_1,iVar10);
            if (iVar10 != 0) {
              uVar14 = 6;
            }
          }
          else {
            uVar14 = 9;
            iVar10 = FUN_0888ef80(param_1,iVar10);
            if (iVar10 != 0) {
              uVar14 = 6;
            }
          }
LAB_08894f58:
          *(undefined4 *)(param_1 + 0x2f8) = uVar14;
          goto LAB_08894f68;
        }
        *(undefined4 *)(param_1 + 0x2f8) = 9;
        FUN_0888cfe4(param_1 + 0x404);
        iVar10 = *(int *)(param_1 + 0x1a0);
      }
    }
    else {
LAB_08894f68:
      iVar10 = *(int *)(param_1 + 0x1a0);
    }
    auVar1 = vsub_q(*(undefined (*) [16])(iVar10 + 0x20),*(undefined (*) [16])(param_1 + 0x9b0));
    uVar14 = vzero_s();
    auVar2._8_4_ = auVar1._8_4_;
    auVar2._4_4_ = uVar14;
    auVar2._0_4_ = auVar1._0_4_;
    auVar3._8_4_ = auVar1._8_4_;
    auVar3._4_4_ = uVar14;
    auVar3._0_4_ = auVar1._0_4_;
    uVar14 = vdot_t(auVar2,auVar3);
    fVar15 = (float)vsqrt_s(uVar14);
    if (fVar15 <= 100.0) {
      *(undefined4 *)(param_1 + 0x2f8) = 9;
    }
    else {
      if (500.0 < fVar15) {
        if (*(char *)(param_1 + 0x2f1) == '\0') {
          fVar15 = 10.0;
        }
        else {
          fVar15 = 70.0;
        }
        iVar10 = -1;
        if (*(int *)(param_1 + 0x1a0) != 0) {
          iVar10 = *(int *)(*(int *)(param_1 + 0x1a0) + 8);
        }
        if (((0x14 < iVar10 && iVar10 < 0x21) || (!bVar6)) ||
           (fVar13 = (float)FUN_08887d20(*(int *)(param_1 + 0x1a0) + 0x434),
           fVar13 * 0.001 * 100.0 < fVar15)) {
          *(undefined *)(param_1 + 0x2f1) = 1;
        }
        else {
          uVar11 = 1;
          *(undefined *)(param_1 + 0x2f1) = 0;
        }
      }
      sVar7 = FUN_0888f728(fVar12,param_1);
      FUN_0888f354(param_1,(int)sVar7,uVar11);
    }
    break;
  case 3:
    goto LAB_08894e2c;
  case 4:
    goto LAB_08894e64;
  case 5:
    goto LAB_08894f68;
  case 6:
    *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) | 0x2000;
    uVar11 = FUN_0888f728(fVar12,param_1);
    FUN_08893fe4(param_1,param_1 + 0x3e0,uVar11);
    if (*(char *)(param_1 + 0x3fc) != '\0') {
      *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) & 0xffffdfff;
      uVar11 = 4;
      if (*(char *)(param_1 + 0x3fd) != '\0') {
        uVar11 = 8;
      }
      *(undefined4 *)(param_1 + 0x2f8) = uVar11;
      *(undefined4 *)(param_1 + 0x3e0) = 0;
      *(undefined4 *)(param_1 + 0x3e4) = 0;
      *(undefined4 *)(param_1 + 1000) = 0;
      *(undefined *)(param_1 + 0x3ec) = 1;
      *(undefined4 *)(param_1 + 0x3f0) = 0;
      *(undefined4 *)(param_1 + 0x3f4) = 0;
      *(undefined4 *)(param_1 + 0x3f8) = 0;
      *(undefined *)(param_1 + 0x3fc) = 0;
      *(undefined *)(param_1 + 0x3fd) = 0;
    }
    break;
  case 7:
    iVar10 = FUN_0888f028(0x44bb8000,param_1);
    if (iVar10 == 0) {
      *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) | 0x1000;
      FUN_08897ee4(param_1,param_1 + 0x3e0,0);
      if (*(char *)(param_1 + 0x3fc) != '\0') {
        *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) & 0xffffefff;
        uVar11 = 4;
        if (*(char *)(param_1 + 0x3fd) != '\0') {
          uVar11 = 8;
        }
        *(undefined4 *)(param_1 + 0x2f8) = uVar11;
        *(undefined4 *)(param_1 + 0x3e0) = 0;
        *(undefined4 *)(param_1 + 0x3e4) = 0;
        *(undefined4 *)(param_1 + 1000) = 0;
        *(undefined *)(param_1 + 0x3ec) = 1;
        *(undefined4 *)(param_1 + 0x3f0) = 0;
        *(undefined4 *)(param_1 + 0x3f4) = 0;
        *(undefined4 *)(param_1 + 0x3f8) = 0;
        *(undefined *)(param_1 + 0x3fc) = 0;
        *(undefined *)(param_1 + 0x3fd) = 0;
      }
    }
    else {
      FUN_08897ec4(param_1,param_1 + 0x3e0);
      FUN_088601c8(*(undefined4 *)(param_1 + 0x1a0));
      *(undefined4 *)(param_1 + 0x2f8) = 9;
    }
    break;
  case 8:
    FUN_08894554(param_1,param_1 + 0x3e0);
    if (*(char *)(param_1 + 0x3fc) != '\0') {
      uVar11 = 4;
      if (*(char *)(param_1 + 0x3fd) != '\0') {
        uVar11 = 9;
      }
      *(undefined4 *)(param_1 + 0x2f8) = uVar11;
      *(undefined4 *)(param_1 + 0x3e0) = 0;
      *(undefined4 *)(param_1 + 0x3e4) = 0;
      *(undefined4 *)(param_1 + 1000) = 0;
      *(undefined *)(param_1 + 0x3ec) = 1;
      *(undefined4 *)(param_1 + 0x3f0) = 0;
      *(undefined4 *)(param_1 + 0x3f4) = 0;
      *(undefined4 *)(param_1 + 0x3f8) = 0;
      *(undefined *)(param_1 + 0x3fc) = 0;
      *(undefined *)(param_1 + 0x3fd) = 0;
    }
    break;
  default:
    FUN_08894c1c(param_1 + 0x2d8);
  }
  return;
}

