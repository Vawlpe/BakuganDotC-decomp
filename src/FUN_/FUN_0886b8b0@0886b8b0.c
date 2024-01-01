#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0886b8b0(int param_1,int param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined auVar4 [12];
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined auVar3 [12];
  undefined auVar5 [12];
  
  uVar13 = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0x5b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5b8) = 0xffffffff;
  if ((*(uint *)(param_1 + 0x16c) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 0x16c) & 0x800) != 0) {
      uVar9 = 0x1f;
      iVar12 = FUN_088602ec(param_1,0);
      if (iVar12 != 0) {
        uVar9 = 0x21;
      }
      *(undefined4 *)(param_1 + 0x5b4) = uVar9;
      iVar12 = FUN_08860344(param_1);
      if (iVar12 != 0) {
        uVar9 = FUN_08860344(param_1);
        iVar12 = FUN_08864168(param_1,uVar9);
        iVar7 = FUN_08860344(param_1);
        auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x20),*(undefined (*) [16])(iVar7 + 0x20));
        uVar9 = vzero_s();
        auVar2._8_4_ = auVar1._8_4_;
        auVar2._4_4_ = uVar9;
        auVar2._0_4_ = auVar1._0_4_;
        auVar3._8_4_ = auVar1._8_4_;
        auVar3._4_4_ = uVar9;
        auVar3._0_4_ = auVar1._0_4_;
        uVar9 = vdot_t(auVar2,auVar3);
        fVar15 = (float)vsqrt_s(uVar9);
        if (iVar12 == 4) {
          *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + 10;
        }
        else if (iVar12 == 5) {
          if ((*(int *)(param_1 + 8) != 7) || (fVar15 <= 3000.0)) {
            *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + 0x14;
          }
        }
        else if ((*(int *)(param_1 + 8) == 7) && (3000.0 < fVar15)) {
          *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + 10;
        }
      }
      FUN_088706f0(param_1,8,0);
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x80000;
      goto LAB_0886be6c;
    }
    if (param_2 != 2) {
      uVar9 = 0x1e;
      if ((*(uint *)(param_1 + 0x16c) & 0x20000) == 0) {
        uVar11 = 0;
        if ((*(uint *)(param_1 + 0x16c) & 4) != 0) {
          uVar9 = 4;
          if ((*(uint *)(param_1 + 0x16c) & 0x10000) != 0) {
            uVar9 = 5;
          }
          *(undefined4 *)(param_1 + 0x5b8) = uVar9;
          FUN_088706f0(param_1,9,1);
          uVar11 = *(uint *)(param_1 + 0x144);
          goto LAB_0886be70;
        }
        iVar12 = FUN_08860344(param_1);
        if (iVar12 != 0) {
          iVar12 = FUN_08860344(param_1);
          fVar14 = *(float *)(iVar12 + 0x24);
          fVar15 = *(float *)(param_1 + 0x24);
          uVar11 = 0;
          uVar9 = FUN_08860344(param_1);
          iVar12 = FUN_088602ec(uVar9,1);
          if ((iVar12 != 0) && (uVar11 = 0, 60.0 < fVar14 - fVar15)) {
            uVar11 = 1;
          }
        }
        uVar8 = FUN_088602ec(param_1,1);
        if ((uVar8 | uVar11) == 0) {
          uVar11 = (uint)((*(uint *)(param_1 + 0x16c) & 0x10000) != 0);
        }
        else {
          uVar11 = 2;
          if ((*(uint *)(param_1 + 0x16c) & 0x10000) != 0) {
            uVar11 = 3;
          }
        }
        *(uint *)(param_1 + 0x5b8) = uVar11;
      }
      else {
        iVar12 = FUN_088602ec(param_1,1);
        if (iVar12 != 0) {
          uVar9 = 0x20;
        }
        *(undefined4 *)(param_1 + 0x5b4) = uVar9;
        iVar12 = FUN_08860344(param_1);
        if (iVar12 != 0) {
          uVar9 = FUN_08860344(param_1);
          iVar12 = FUN_08864168(param_1,uVar9);
          iVar7 = FUN_08860344(param_1);
          auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x20),*(undefined (*) [16])(iVar7 + 0x20))
          ;
          uVar9 = vzero_s();
          auVar4._8_4_ = auVar1._8_4_;
          auVar4._4_4_ = uVar9;
          auVar4._0_4_ = auVar1._0_4_;
          auVar5._8_4_ = auVar1._8_4_;
          auVar5._4_4_ = uVar9;
          auVar5._0_4_ = auVar1._0_4_;
          uVar9 = vdot_t(auVar4,auVar5);
          fVar15 = (float)vsqrt_s(uVar9);
          if (iVar12 == 4) {
            *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + 10;
          }
          else if (iVar12 == 5) {
            if ((*(int *)(param_1 + 8) != 2) || (fVar15 <= 3000.0)) {
              *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + 0x14;
            }
          }
          else if ((*(int *)(param_1 + 8) == 2) && (3000.0 < fVar15)) {
            *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + 10;
          }
        }
        FUN_088706f0(param_1,8,0);
      }
      goto LAB_0886be6c;
    }
    bVar6 = false;
    if ((*(uint *)(param_1 + 0x16c) & 0x20000) == 0) {
      uVar9 = 4;
      if ((*(uint *)(param_1 + 0x16c) & 0x10000) != 0) {
        uVar9 = 5;
      }
      *(undefined4 *)(param_1 + 0x5b8) = uVar9;
      FUN_088706f0(param_1,9,1);
      uVar11 = *(uint *)(param_1 + 0x144);
    }
    else {
      iVar12 = FUN_088608b0(param_1,7);
      if (iVar12 == 0) {
        iVar12 = FUN_088608b0(param_1,6);
        if (iVar12 == 0) {
          *(undefined4 *)(param_1 + 0x5b4) = 0x22;
          iVar12 = FUN_088629cc(param_1);
          if (iVar12 == 0) {
            *(undefined4 *)(param_1 + 0x5b4) = 0x20;
            bVar6 = true;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x5b4) = 0x24;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x5b4) = 0x23;
      }
      iVar12 = FUN_08860344(param_1);
      if (iVar12 != 0) {
        uVar9 = FUN_08860344(param_1);
        iVar12 = FUN_08864168(param_1,uVar9);
        if (iVar12 == 4) {
          *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + 10;
        }
        else if (iVar12 == 5) {
          *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + 0x14;
        }
      }
      iVar12 = FUN_088602ec(param_1,1);
      if (iVar12 == 0) {
        iVar12 = *(int *)(param_1 + 0x5b4);
      }
      else if (bVar6) {
        iVar12 = *(int *)(param_1 + 0x5b4);
      }
      else {
        *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + 3;
        iVar12 = *(int *)(param_1 + 0x5b4);
      }
      if ((*(int *)(*(int *)(param_1 + 0x5ac) + iVar12 * 4) == 0) || (bVar6)) {
        uVar9 = 0x1e;
        iVar12 = FUN_088602ec(param_1,1);
        if (iVar12 != 0) {
          uVar9 = 0x20;
        }
        *(undefined4 *)(param_1 + 0x5b4) = uVar9;
        iVar12 = FUN_08860344(param_1);
        if (iVar12 != 0) {
          uVar9 = FUN_08860344(param_1);
          iVar12 = FUN_08864168(param_1,uVar9);
          if (iVar12 == 4) {
            *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + 10;
          }
          else if (iVar12 == 5) {
            *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + 0x14;
          }
        }
        FUN_088706f0(param_1,8,0);
        uVar11 = *(uint *)(param_1 + 0x144);
      }
      else {
        FUN_088706f0(param_1,10,1);
        uVar11 = *(uint *)(param_1 + 0x144);
      }
    }
  }
  else {
    FUN_088706f0(param_1,0x11,0);
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x20;
LAB_0886be6c:
    uVar11 = *(uint *)(param_1 + 0x144);
  }
LAB_0886be70:
  *(uint *)(param_1 + 0x144) = uVar11 | 0x400000;
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffffffb;
  *(undefined4 *)(param_1 + 0x5c4) = 0;
  *(undefined4 *)(param_1 + 0x5c8) = 0;
  *(undefined *)(param_1 + 0x5e0) = 0;
  *(undefined *)(param_1 + 0x5e2) = 0;
  *(undefined *)(param_1 + 0x5e3) = 0;
  uVar10 = 1;
  if ((*(uint *)(param_1 + 0x16c) & 0x10000) != 0) {
    uVar10 = 2;
  }
  *(undefined *)(param_1 + 0x5d8) = uVar10;
  *(undefined4 *)(param_1 + 0x5d4) = 1;
  *(undefined4 *)(param_1 + 0x5c0) = 0;
  *(undefined *)(param_1 + 0x5e4) = 0;
  *(undefined *)(param_1 + 0x610) = 0;
  uVar9 = FUN_08860344(param_1);
  *(undefined4 *)(param_1 + 0x3b8) = uVar9;
  if (*(int *)(param_1 + 0x140) != 10) {
    uVar13 = 0;
  }
  *(undefined4 *)(param_1 + 0x174) = uVar13;
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  if (*(int *)(param_1 + 0x5b8) == -1) {
    if (*(int *)(param_1 + 0x140) != 0x11) {
      FUN_0886ab40(param_1,0);
    }
  }
  else {
    FUN_0886acd4(param_1,0);
    if (*(int *)(param_1 + 0x5b8) == 0) {
      iVar12 = *(int *)(param_1 + 0x14);
    }
    else {
      if (*(int *)(param_1 + 0x5b8) != 1) goto LAB_0886bf6c;
      iVar12 = *(int *)(param_1 + 0x14);
    }
    (**(code **)(iVar12 + 0x34))
              (*(undefined4 *)(*(int *)(param_1 + 0x4bc) + 0x7c),param_1 + *(short *)(iVar12 + 0x30)
              );
  }
LAB_0886bf6c:
  FUN_0886b464(param_1);
  return;
}

