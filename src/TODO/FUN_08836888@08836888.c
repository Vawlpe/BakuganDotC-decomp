#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08836888(int param_1)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7E;
  int local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_30;
  float local_2c;
  
  piVar3 = local_50;
  piVar5 = local_50;
  if (*(int *)(param_1 + 0xb90) != 0) {
    piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
    iVar6 = *(int *)(param_1 + 0xb90);
    if ((*(char *)(*piVar1 + 0x6ab) == '\x01') && (iVar6 == 3)) {
      FUN_0882cd3c(param_1,0,0);
      iVar6 = *(int *)(param_1 + 0xb90);
    }
    local_50[0] = 0x87;
    local_50[1] = 0x89;
    local_50[2] = 0x9e;
    local_50[3] = 0xf7;
    local_40 = 0xf8;
    local_3c = 0xf9;
    local_38 = 0xfa;
    if (iVar6 < 3) {
      if (0 < iVar6) {
        iVar7 = *(int *)(param_1 + 0x14);
        if (iVar6 < 2) {
          iVar4 = 0x87;
          iVar6 = 0x21c;
          do {
            *(undefined4 *)(*(int *)(iVar7 + iVar6) + 0xbc) = 0;
            iVar7 = *(int *)(*(int *)(param_1 + 0x14) + iVar6);
            *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
            iVar7 = *(int *)(*(int *)(param_1 + 0x14) + iVar6);
            *(undefined4 *)(iVar7 + 0x90) = in_V72;
            *(undefined4 *)(iVar7 + 0x94) = in_V76;
            *(undefined4 *)(iVar7 + 0x98) = in_V7A;
            *(undefined4 *)(iVar7 + 0x9c) = in_V7E;
            iVar4 = iVar4 + 1;
            iVar6 = iVar6 + 4;
            iVar7 = *(int *)(param_1 + 0x14);
          } while (iVar4 < 0x8e);
          iVar4 = 0;
          *(uint *)(*(int *)(iVar7 + 0x21c) + 0xd0) = *(uint *)(*(int *)(iVar7 + 0x21c) + 0xd0) | 1;
          iVar7 = 0;
          iVar6 = *(int *)(param_1 + 0xb94);
          do {
            if (*(int *)((int)&DAT_08a64a64 + iVar7 + iVar6 * 0x18) != -1) {
              iVar8 = *(int *)(*(int *)(param_1 + 0x14) + iVar7 + 0x224);
              *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) | 1;
              iVar6 = FUN_08835bec(param_1,*(undefined4 *)
                                            ((int)&DAT_08a64a64 +
                                            iVar7 + *(int *)(param_1 + 0xb94) * 0x18));
              FUN_089f4a90(0,(float)iVar6,iVar8);
              *(undefined4 *)(iVar8 + 0x60) = 0x43b80000;
              iVar6 = *(int *)(param_1 + 0xb94);
            }
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar4 < 4);
          FUN_08835c64(0x43a00000,param_1,iVar6);
          *(undefined4 *)(param_1 + 0xba0) = 0;
          *(int *)(param_1 + 0xb90) = *(int *)(param_1 + 0xb90) + 1;
          if (*(int *)(param_1 + 0xb94) == 8) {
            iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x2d8);
            *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
          }
        }
        else {
          fVar9 = *(float *)(param_1 + 0xba0) + 0.1745329;
          if (fVar9 < 0.0) {
            fVar2 = 0.0;
          }
          else {
            fVar2 = 1.570796;
            if (fVar9 <= 1.570796) {
              fVar2 = fVar9;
            }
          }
          *(float *)(param_1 + 0xba0) = fVar2;
          uVar10 = vmul_s(fVar2,in_V7C);
          local_30 = (float)vsin_s(uVar10);
          iVar6 = 0;
          do {
            iVar4 = *piVar3;
            iVar6 = iVar6 + 1;
            piVar3 = piVar3 + 1;
            *(float *)(*(int *)(iVar7 + iVar4 * 4) + 0xbc) = local_30;
            iVar7 = *(int *)(param_1 + 0x14);
          } while (iVar6 < 7);
          *(float *)(*(int *)(iVar7 + 0x2d8) + 0xbc) = local_30;
          if (1.0 <= local_30) {
            *(int *)(param_1 + 0xb90) = *(int *)(param_1 + 0xb90) + 1;
          }
        }
      }
    }
    else if (iVar6 < 4) {
      if (*(char *)(param_1 + 0xb9c) == '\0') {
        *(int *)(param_1 + 0xb90) = iVar6 + 1;
      }
      else if (*(int *)(param_1 + 0xb94) == 8) {
        FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x2d8));
        if (*(char *)(param_1 + 0xc06) == '\0') {
          fVar9 = *(float *)(param_1 + 0xc08) - 0.1;
          *(float *)(param_1 + 0xc08) = fVar9;
          if (fVar9 <= 0.6) {
            *(undefined4 *)(param_1 + 0xc08) = 0x3f19999a;
            *(undefined *)(param_1 + 0xc06) = 1;
            fVar9 = 0.6;
          }
        }
        else {
          fVar9 = *(float *)(param_1 + 0xc08) + 0.1;
          *(float *)(param_1 + 0xc08) = fVar9;
          if (4.0 <= fVar9) {
            *(undefined *)(param_1 + 0xc06) = 0;
          }
        }
        if (0.9 <= fVar9) {
          fVar9 = 0.9;
        }
        FUN_089f4954(fVar9,fVar9,0,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x2d8),0);
      }
    }
    else if (iVar6 < 5) {
      fVar9 = *(float *)(param_1 + 0xba0) - 0.1745329;
      iVar6 = *(int *)(param_1 + 0x14);
      if (fVar9 < 0.0) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = 1.570796;
        if (fVar9 <= 1.570796) {
          fVar2 = fVar9;
        }
      }
      *(float *)(param_1 + 0xba0) = fVar2;
      uVar10 = vmul_s(fVar2,in_V7C);
      local_2c = (float)vsin_s(uVar10);
      iVar7 = 0;
      do {
        iVar4 = *piVar5;
        iVar7 = iVar7 + 1;
        piVar5 = piVar5 + 1;
        *(float *)(*(int *)(iVar6 + iVar4 * 4) + 0xbc) = local_2c;
        iVar6 = *(int *)(param_1 + 0x14);
      } while (iVar7 < 7);
      if (local_2c < 0.0) {
        *(undefined4 *)(param_1 + 0xb90) = 0;
      }
      *(float *)(*(int *)(iVar6 + 0x2d8) + 0xbc) = local_2c;
    }
  }
  return;
}

