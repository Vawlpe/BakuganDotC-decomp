#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08893fe4(int param_1,int *param_2,short param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  
  iVar6 = (int)param_3;
  if ((*(char *)(param_2 + 3) == '\0') &&
     (fVar7 = (float)param_2[2], param_2[2] = (int)(fVar7 + 0.03333334),
     (float)param_2[1] <= fVar7 + 0.03333334)) {
    param_2[2] = param_2[1];
    *(undefined *)(param_2 + 3) = 1;
  }
  switch(*param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    *(undefined4 *)(param_1 + 0x23c) = 0;
    *param_2 = *param_2 + 1;
    break;
  case 1:
    fVar7 = (float)FUN_08887d20(*(int *)(param_1 + 0x1a0) + 0x434);
    if (1000.0 <= fVar7) {
      bVar1 = false;
      if ((*(uint *)(param_1 + 0x918) & 0x200) != 0) {
        switch(*(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x140)) {
        case 0:
        case 1:
        case 0xc:
        case 0xd:
          bVar1 = true;
          break;
        case 0x13:
          bVar1 = true;
        }
      }
      if (bVar1) {
        *param_2 = *param_2 + 1;
        param_2[1] = 0x3dcccccd;
        param_2[2] = 0;
        *(undefined *)(param_2 + 3) = 0;
      }
      else {
        bVar1 = false;
        if ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x144) & 0x400000) == 0) {
          bVar2 = false;
          if ((*(int *)(*(int *)(param_1 + 0x1a0) + 0x140) == 8) ||
             (*(int *)(*(int *)(param_1 + 0x1a0) + 0x140) == 10)) {
            bVar2 = true;
          }
          if (((!bVar2) && ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x16c) & 0xc00) == 0)) &&
             ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x144) & 0x100) == 0)) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          *(undefined *)((int)param_2 + 0x1d) = 1;
          *param_2 = 5;
        }
      }
    }
    break;
  case 2:
    FUN_0888f354(param_1,iVar6,0);
    if (*(char *)(param_2 + 3) != '\0') {
      iVar6 = FUN_088930c0(*(undefined4 *)(param_1 + 0xa18),param_1,iVar6);
      if ((iVar6 == 0) || (iVar6 = FUN_0888ef80(param_1,iVar6), iVar6 == 0)) {
        *param_2 = 5;
      }
      else {
        *(undefined *)(param_1 + 0xa25) = 0;
        *(undefined *)(param_1 + 0xa24) = 0;
        *param_2 = *param_2 + 1;
      }
    }
    break;
  case 3:
    iVar3 = FUN_088930c0(*(undefined4 *)(param_1 + 0xa18),param_1,iVar6);
    if (iVar3 != 0) {
      *(undefined *)(param_1 + 0xa25) = 0x1e;
    }
    if (*(char *)(param_1 + 0xa25) == '\0') {
      *(undefined *)(param_1 + 0xa24) = 0;
    }
    else {
      *(char *)(param_1 + 0xa25) = *(char *)(param_1 + 0xa25) + -1;
      *(undefined *)(param_1 + 0xa24) = 1;
    }
    iVar4 = FUN_0888efc8(param_1);
    if ((iVar4 == 0) || (iVar3 != 3)) {
      uVar5 = 1;
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x4bc) + 2) == '\x01') {
        if (*(char *)(param_1 + 0xa24) == '\0') {
          if ((param_2[4] & 1U) == 0) {
            *param_2 = 5;
          }
          else {
            param_2[2] = 0;
            param_2[1] = 0x3e4ccccd;
            *(undefined *)(param_2 + 3) = 0;
            *param_2 = 4;
          }
        }
        else {
          FUN_088994e0(param_1 + 0x1b0);
          param_2[4] = param_2[4] | 1;
          FUN_0888f354(param_1,iVar6,0);
          fVar7 = (float)FUN_08887d20(*(int *)(param_1 + 0x1a0) + 0x434);
          if (fVar7 <= 0.0) {
            *param_2 = 5;
          }
        }
      }
      else if ((iVar3 == 0) || (iVar3 = FUN_0888ef80(param_1,iVar3), iVar3 == 0)) {
        *param_2 = 5;
      }
      else {
        if ((int)*(char *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x4bc) + 1) == uVar5) {
          uVar5 = (uint)(*(float *)(*(int *)(param_1 + 0x1a0) + 0x84) <= 0.0);
        }
        if (uVar5 != 0) {
          FUN_088994e0(param_1 + 0x1b0);
        }
        FUN_0888f354(param_1,iVar6,0);
        fVar7 = (float)FUN_08887d20(*(int *)(param_1 + 0x1a0) + 0x434);
        if (fVar7 <= 0.0) {
          *(undefined *)((int)param_2 + 0x1d) = 1;
        }
        if (*(char *)((int)param_2 + 0x1d) != '\0') {
          *param_2 = 5;
        }
      }
    }
    else {
      *param_2 = 5;
    }
    break;
  case 4:
    FUN_088994e0(param_1 + 0x1b0);
    FUN_0888f354(param_1,iVar6,0);
    if (*(char *)(param_2 + 3) != '\0') {
      *param_2 = 5;
    }
    break;
  case 5:
    bVar1 = false;
    if ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x144) & 0x400000) == 0) {
      bVar2 = false;
      if ((*(int *)(*(int *)(param_1 + 0x1a0) + 0x140) == 8) ||
         (*(int *)(*(int *)(param_1 + 0x1a0) + 0x140) == 10)) {
        bVar2 = true;
      }
      if (((!bVar2) && ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x16c) & 0xc00) == 0)) &&
         ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x144) & 0x100) == 0)) {
        bVar1 = true;
      }
    }
    if (!bVar1) {
      return;
    }
    *param_2 = *param_2 + 1;
    goto LAB_08894530;
  case 6:
LAB_08894530:
    *(undefined *)(param_2 + 7) = 1;
  }
  return;
}

