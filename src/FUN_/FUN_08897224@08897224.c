#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08897224(int param_1)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  
  uVar7 = *(uint *)(param_1 + 0x23c);
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  if ((uVar7 & 0x10010) != 0) {
    if ((uVar7 & 0x20800) == 0) {
      *(uint *)(param_1 + 0x1cc) = *(uint *)(param_1 + 0x1cc) | uVar7 & 0x10010;
    }
    else {
      *(uint *)(param_1 + 0x1cc) = *(uint *)(param_1 + 0x1cc) | uVar7 & 0x206;
    }
  }
  iVar5 = FUN_08860188(*(undefined4 *)(param_1 + 0x1a0));
  *(int *)(param_1 + 0x1a0) = iVar5;
  if (iVar5 == 0) {
    return;
  }
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x168) + 0xc) != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_1 + 0x1a0);
  if (*(char *)(param_1 + 0x938) != '\0') {
    iVar5 = *(int *)(param_1 + 0x1a0);
    uVar10 = *(undefined4 *)(iVar5 + 0x24);
    uVar3 = *(undefined4 *)(iVar5 + 0x28);
    uVar4 = *(undefined4 *)(iVar5 + 0x2c);
    *(undefined4 *)(param_1 + 0x990) = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(param_1 + 0x994) = uVar10;
    *(undefined4 *)(param_1 + 0x998) = uVar3;
    *(undefined4 *)(param_1 + 0x99c) = uVar4;
    iVar5 = *(int *)(param_1 + 0x1a0);
    uVar10 = *(undefined4 *)(iVar5 + 0x24);
    uVar3 = *(undefined4 *)(iVar5 + 0x28);
    uVar4 = *(undefined4 *)(iVar5 + 0x2c);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(param_1 + 0x144) = uVar10;
    *(undefined4 *)(param_1 + 0x148) = uVar3;
    *(undefined4 *)(param_1 + 0x14c) = uVar4;
    *(undefined4 *)(param_1 + 0x93c) = 0x40000000;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined *)(param_1 + 0x944) = 0;
    *(undefined *)(param_1 + 0x938) = 0;
  }
  iVar5 = FUN_08860188(*(undefined4 *)(param_1 + 0x96c));
  *(int *)(param_1 + 0x96c) = iVar5;
  if (iVar5 != 0) {
    if ((*(byte *)(*(int *)(param_1 + 0x96c) + 0x4c1) |
        *(char *)(*(int *)(param_1 + 0x96c) + 0x574) != '\0') != 0) {
      FUN_0888f248(param_1,0);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x168) + 0x1c) = 0;
      FUN_0888cfe4(param_1 + 0x404);
      iVar5 = *(int *)(param_1 + 0x1a0);
      goto LAB_088973a0;
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x96c) + 0x14);
    iVar5 = (**(code **)(iVar5 + 0x54))(*(int *)(param_1 + 0x96c) + (int)*(short *)(iVar5 + 0x50));
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x1a0);
      goto LAB_088973a0;
    }
    if (*(char *)(*(int *)(param_1 + 0x96c) + 0x476) != '\0') {
      FUN_0888f248(param_1,0);
    }
  }
  iVar5 = *(int *)(param_1 + 0x1a0);
LAB_088973a0:
  if ((*(byte *)(iVar5 + 0x4c1) | *(char *)(iVar5 + 0x574) != '\0') == 0) {
    if ((((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x144) & 0x30000000) != 0) ||
        (*(int *)(*(int *)(param_1 + 0x1a0) + 0x140) == 4)) ||
       (bVar1 = false, *(int *)(*(int *)(param_1 + 0x1a0) + 0x140) == 5)) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar5 = *(int *)(param_1 + 0x96c);
    }
    else {
      iVar5 = FUN_08899374(param_1 + 0x1b0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 0x96c);
      }
      else {
        if ((*(uint *)(param_1 + 0x9d4) & 0x4000) == 0) {
          uVar7 = *(uint *)(param_1 + 0x91c);
          if (uVar7 < 5) {
            if ((uVar7 == 0) || (uVar7 == 4)) {
              fVar11 = *(float *)(param_1 + 0x2a4);
              if (*(int *)(param_1 + 0x96c) == 0) {
                fVar9 = *(float *)(*(int *)(param_1 + 0x1a0) + 0x34);
              }
              else {
                fVar9 = (float)FUN_088904b4(param_1,*(undefined4 *)(param_1 + 0x1a0),
                                            *(undefined4 *)(param_1 + 0x96c));
                fVar9 = *(float *)(*(int *)(param_1 + 0x1a0) + 0x34) + fVar9;
              }
              fVar11 = fVar11 + fVar9;
              if (3.141593 < fVar11) {
                fVar11 = fVar11 - 6.283185;
              }
              else if (fVar11 <= -3.141593) {
                fVar11 = fVar11 + 6.283185;
              }
              *(float *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x168) + 4) = fVar11;
            }
            else {
              fVar11 = (float)atan2f(*(float *)(param_1 + 0x9b8) -
                                     *(float *)(*(int *)(param_1 + 0x1a0) + 0x28),
                                     *(float *)(param_1 + 0x9b0) -
                                     *(float *)(*(int *)(param_1 + 0x1a0) + 0x20));
              if (3.141593 < fVar11) {
                fVar11 = fVar11 - 6.283185;
              }
              else if (fVar11 <= -3.141593) {
                fVar11 = fVar11 + 6.283185;
              }
              *(float *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x168) + 4) = fVar11;
            }
          }
        }
        else {
          fVar11 = (float)atan2f(*(float *)(param_1 + 0x9c8) -
                                 *(float *)(*(int *)(param_1 + 0x1a0) + 0x28),
                                 *(float *)(param_1 + 0x9c0) -
                                 *(float *)(*(int *)(param_1 + 0x1a0) + 0x20));
          if (3.141593 < fVar11) {
            fVar11 = fVar11 - 6.283185;
          }
          else if (fVar11 <= -3.141593) {
            fVar11 = fVar11 + 6.283185;
          }
          *(float *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x168) + 4) = fVar11;
        }
        iVar5 = *(int *)(param_1 + 0x96c);
      }
    }
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x980) = 0;
    }
    else {
      if (*(int *)(*(int *)(param_1 + 0x96c) + 0x140) == 0) {
        fVar11 = *(float *)(param_1 + 0x980) + 1.0;
      }
      else {
        fVar11 = 0.0;
      }
      *(float *)(param_1 + 0x980) = fVar11;
    }
    auVar2 = vsub_q(*(undefined (*) [16])(param_1 + 0x990),
                    *(undefined (*) [16])(*(int *)(param_1 + 0x1a0) + 0x20));
    uVar10 = vdot_t(auVar2._0_12_,auVar2._0_12_);
    fVar11 = (float)vsqrt_s(uVar10);
    *(float *)(param_1 + 0x9a0) = *(float *)(param_1 + 0x9a0) + fVar11;
    FUN_0889324c(param_1);
    if (*(char *)(param_1 + 0x944) == '\0') {
      if ((*(char *)(param_1 + 0x944) == '\0') &&
         (fVar11 = *(float *)(param_1 + 0x940) + 0.03333334, *(float *)(param_1 + 0x940) = fVar11,
         *(float *)(param_1 + 0x93c) <= fVar11)) {
        *(undefined4 *)(param_1 + 0x940) = *(undefined4 *)(param_1 + 0x93c);
        *(undefined *)(param_1 + 0x944) = 1;
      }
      if (*(char *)(param_1 + 0x944) == '\0') {
        iVar5 = *(int *)(param_1 + 0x1a0);
      }
      else {
        FUN_0888cfe4(param_1 + 0x404);
        iVar5 = *(int *)(param_1 + 0x1a0);
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x1a0);
    }
    uVar10 = 0xffffffff;
    if (*(int *)(iVar5 + 0x3b4) != 0) {
      uVar10 = *(undefined4 *)(*(int *)(iVar5 + 0x3b4) + 8);
    }
    uVar7 = *(uint *)(param_1 + 0x9d4);
    *(uint *)(param_1 + 0x9d4) = uVar7 & 0xfffffff7;
    *(uint *)(param_1 + 0x9d4) = uVar7 & 0xffffffe7;
    *(undefined4 *)(param_1 + 0x9a4) = uVar10;
    *(uint *)(param_1 + 0x9d4) = uVar7 & 0xfffffbe7;
    *(uint *)(param_1 + 0x9d4) = uVar7 & 0xfffff3e7;
    *(uint *)(param_1 + 0x9d4) = uVar7 & 0xffff73e7;
    iVar5 = *(int *)(param_1 + 0x948) + -1;
    *(uint *)(param_1 + 0x9d4) = uVar7 & 0xfffe73e7;
    *(uint *)(param_1 + 0x9d4) = uVar7 & 0xfffe73a7;
    *(undefined *)(param_1 + 0xa14) = 0;
    *(int *)(param_1 + 0x948) = iVar5;
    if ((float)iVar5 <= 0.0) {
      *(undefined4 *)(param_1 + 0x948) = 0;
    }
    *(short *)(param_1 + 0xa26) = *(short *)(param_1 + 0xa26) + -1;
    if (*(short *)(param_1 + 0xa26) < 1) {
      *(undefined2 *)(param_1 + 0xa26) = 0;
    }
    if (DAT_08abd100 == '\0') {
      if ((*(char *)(param_1 + 0xa28) == '\0') &&
         (uVar8 = DAT_08b0087c & 3, uVar7 = FUN_088635cc(*(undefined4 *)(param_1 + 0x1a0)),
         uVar8 != (uVar7 & 3))) {
        cVar6 = *(char *)(param_1 + 0x914);
      }
      else {
        FUN_0888f11c(param_1);
        *(undefined *)(param_1 + 0xa28) = 0;
        cVar6 = *(char *)(param_1 + 0x914);
      }
    }
    else {
      FUN_0888f11c(param_1);
      cVar6 = *(char *)(param_1 + 0x914);
    }
    bVar1 = true;
    if (cVar6 != '\0') {
      iVar5 = FUN_08871108(*(undefined4 *)(param_1 + 0x1a0));
      bVar1 = iVar5 == 0;
    }
    if (bVar1) {
      iVar5 = FUN_0888df84(param_1);
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 0x1a0);
      }
      else {
        *(undefined *)(param_1 + 0x914) = 0;
        *(undefined *)(param_1 + 0x915) = 0;
        iVar5 = *(int *)(param_1 + 0x1a0);
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x1a0);
    }
    uVar10 = *(undefined4 *)(iVar5 + 0x24);
    uVar3 = *(undefined4 *)(iVar5 + 0x28);
    uVar4 = *(undefined4 *)(iVar5 + 0x2c);
    *(undefined4 *)*(undefined (*) [16])(param_1 + 0x990) = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(param_1 + 0x994) = uVar10;
    *(undefined4 *)(param_1 + 0x998) = uVar3;
    *(undefined4 *)(param_1 + 0x99c) = uVar4;
    FUN_088993bc(param_1 + 0x1b0);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x168) + 0x1c) = 0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x168);
    *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | *(uint *)(param_1 + 0x1cc);
    return;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x168) + 0x1c) = 0;
  return;
}

