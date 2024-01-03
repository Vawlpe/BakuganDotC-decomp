#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895143c(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 in_V7C;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  bVar1 = false;
  if (iVar2 < 2) {
    if (-1 < iVar2) {
      if (iVar2 < 1) {
        *(undefined4 *)(param_1 + 0x88) = 0;
        *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0xbc) = 0;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xbc) = 0;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0xbc) = 0;
        *(undefined4 *)(param_1 + 0x98) = 0xfa;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      iVar2 = FUN_0895137c(param_1);
      if ((iVar2 == 0) &&
         (iVar2 = *(int *)(param_1 + 0x98) + -1, *(int *)(param_1 + 0x98) = iVar2, -1 < iVar2))
      goto LAB_08951858;
      fVar5 = *(float *)(param_1 + 0x88) + 0.03490658;
      *(float *)(param_1 + 0x88) = fVar5;
      if (1.570796 < fVar5) {
        *(undefined4 *)(param_1 + 0x88) = 0x3fc90fdb;
        fVar5 = 1.570796;
      }
      uVar6 = vmul_s(fVar5,in_V7C);
      fVar5 = (float)vsin_s(uVar6);
      bVar1 = (*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) != 0;
      if (bVar1) {
        fVar5 = 1.0;
      }
      *(float *)(**(int **)(param_1 + 0x1c) + 0xbc) = fVar5;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xbc) = fVar5;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0xbc) = fVar5;
      if (fVar5 < 1.0) goto LAB_08951858;
      *(undefined4 *)(param_1 + 0x88) = 0x3fc90fdb;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
LAB_089515c0:
      iVar2 = FUN_0895137c(param_1);
      if (iVar2 != 0) {
        if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) == 0) {
          if (WeirdBuff != 0) {
            if (*(short *)(WeirdBuff + 2) == 0) {
              iVar2 = *(int *)(param_1 + 0x94) + 1;
              *(int *)(param_1 + 0x94) = iVar2;
              if (0x95f < iVar2) {
                *(undefined4 *)(param_1 + 0x28) = 5;
                *(undefined4 *)(param_1 + 0x2c) = 0;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x94) = 0;
            }
          }
        }
        else {
          bVar1 = true;
        }
        fVar5 = *(float *)(param_1 + 0x88) + 0.05235988;
        *(float *)(param_1 + 0x88) = fVar5;
        if (3.141593 < fVar5) {
          fVar5 = fVar5 - 3.141593;
          *(float *)(param_1 + 0x88) = fVar5;
        }
        uVar6 = vmul_s(fVar5,in_V7C);
        fVar5 = (float)vsin_s(uVar6);
        *(float *)(**(int **)(param_1 + 0x1c) + 0xbc) = fVar5 * 0.9 + 0.1;
      }
      if (bVar1) {
        FUN_089f4b64(0x3f800000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
        iVar2 = DONE_NotZero_DAT_08AC5874();
        if (iVar2 == 0) {
          piVar3 = *(int **)(param_1 + 0x1c);
        }
        else {
          uVar6 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar6,0,0,0);
          piVar3 = *(int **)(param_1 + 0x1c);
        }
        *(undefined4 *)(*piVar3 + 0xbc) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x88) = 0x3fc90fdb;
        *(undefined4 *)(param_1 + 0x98) = 5;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      goto LAB_08951858;
    }
  }
  else {
    if (iVar2 < 3) goto LAB_089515c0;
    if (iVar2 < 4) {
      piVar3 = *(int **)(param_1 + 0x1c);
      iVar2 = *(int *)(param_1 + 0x98) + -1;
      *(int *)(param_1 + 0x98) = iVar2;
      if (iVar2 < 0) {
        FUN_089f4b64(0,piVar3[1]);
        piVar3 = *(int **)(param_1 + 0x1c);
      }
      fVar5 = *(float *)(param_1 + 0x88) - 0.1745329;
      *(float *)(param_1 + 0x88) = fVar5;
      if (fVar5 < 0.0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = 1.570796;
        if (fVar5 <= 1.570796) {
          fVar4 = fVar5;
        }
      }
      *(float *)(param_1 + 0x88) = fVar4;
      uVar6 = vmul_s(fVar4,in_V7C);
      fVar5 = (float)vsin_s(uVar6);
      *(float *)(*piVar3 + 0xbc) = fVar5;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xbc) = fVar5;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0xbc) = fVar5;
      if (0.05 <= fVar5) goto LAB_08951858;
      *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0xbc) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xbc) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0xbc) = 0;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
LAB_08951858:
  FUN_08951434(param_1);
  return;
}

