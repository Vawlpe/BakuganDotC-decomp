#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889790c(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = *(int *)(param_1 + 0x1a0);
  if (*(int *)(iVar3 + 0x140) == 3) {
    if (*(int *)(param_1 + 0x9a4) != -1) {
      iVar3 = (int)*(char *)(param_1 + 0x9e3);
      if ((*(uint *)(param_1 + 0x918) & 0x10000000) == 0) {
        iVar3 = 0;
        *(undefined *)(param_1 + 0x914) = 0;
      }
      iVar4 = FUN_089bed14(99);
      *(bool *)(param_1 + 0x914) = iVar4 < iVar3;
      if (*(char *)(param_1 + 0x914) != '\0') {
        FUN_088995a0(param_1 + 0x1b0);
      }
    }
    iVar3 = FUN_088936a0(param_1);
    if (iVar3 == 0) {
      return;
    }
    FUN_0888cfe4(param_1 + 0x2d8);
    FUN_0888cfe4(param_1 + 0x404);
    return;
  }
  if ((((*(uint *)(iVar3 + 0x144) & 0x30000000) != 0) || (*(int *)(iVar3 + 0x140) == 4)) ||
     (bVar2 = false, *(int *)(iVar3 + 0x140) == 5)) {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if ((*(uint *)(param_1 + 0x918) & 0x20000000) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    fVar6 = *(float *)(param_1 + 0x20) + 0.03333334;
    *(float *)(param_1 + 0x20) = fVar6;
    if (*(float *)(param_1 + 0x1c) <= fVar6) {
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x1c);
      *(undefined *)(param_1 + 0x24) = 1;
    }
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      return;
    }
    fVar7 = *(float *)(param_1 + 0x9ec);
    fVar6 = (float)FUN_089bedc4(*(float *)(param_1 + 0x9f0) - fVar7);
    fVar6 = fVar6 + fVar7;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(float *)(param_1 + 0x1c) = fVar6;
    *(bool *)(param_1 + 0x24) = fVar6 <= 0.0;
    cVar1 = *(char *)(param_1 + 0x9e0);
    iVar3 = FUN_089bed14(99);
    *(bool *)(param_1 + 0x4c) = iVar3 < cVar1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    return;
  }
  if (iVar3 < 2) {
    if (*(char *)(param_1 + 0x24) == '\0') {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x1a0);
  }
  else {
    if (2 < iVar3) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x1a0);
  }
  iVar4 = param_1 + 0x1b0;
  if (((*(uint *)(iVar3 + 0x144) & 0x40000) == 0) && (*(char *)(param_1 + 0x4c) != '\0')) {
    iVar3 = *(int *)(param_1 + 0x96c);
    bVar2 = false;
    if ((iVar3 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x54))
                          (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x50)), iVar3 != 0)) {
      uVar5 = *(undefined4 *)(param_1 + 0x96c);
      iVar3 = FUN_08892c98(param_1,uVar5);
      if (iVar3 == 0) {
        iVar3 = FUN_08892da8(param_1,uVar5);
        if (iVar3 == 0) {
          iVar3 = FUN_08892e2c(param_1,uVar5);
          if (iVar3 != 0) {
            bVar2 = true;
          }
        }
        else {
          bVar2 = true;
        }
      }
      else {
        bVar2 = true;
      }
    }
    if ((!bVar2) && (iVar3 = FUN_08892e90(param_1), iVar3 != 0)) {
      bVar2 = true;
    }
    if (bVar2) {
      iVar3 = FUN_088930c0(*(undefined4 *)(param_1 + 0xa18),param_1,0xc000);
      if (iVar3 == 0) {
        FUN_08899498(iVar4);
      }
      else {
        iVar3 = FUN_088930c0(*(undefined4 *)(param_1 + 0xa18),param_1,0x4000);
        if (iVar3 == 0) {
          FUN_088994b8(iVar4);
        }
      }
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x2cc) + 4);
      iVar3 = (**(code **)(iVar3 + 0x14))(*(int *)(param_1 + 0x2cc) + (int)*(short *)(iVar3 + 0x10))
      ;
      if (iVar3 < 1) {
        if (iVar3 < 0) goto LAB_08897d10;
        uVar5 = *(undefined4 *)(param_1 + 0xa18);
      }
      else {
        if (iVar3 < 2) {
          uVar5 = *(undefined4 *)(param_1 + 0xa18);
        }
        else {
          if (2 < iVar3) goto LAB_08897d10;
          iVar3 = FUN_088930c0(*(undefined4 *)(param_1 + 0xa18),param_1,0x8000);
          if (iVar3 == 0) {
            FUN_08899478(iVar4);
            goto LAB_08897d10;
          }
          uVar5 = *(undefined4 *)(param_1 + 0xa18);
        }
        iVar3 = FUN_088930c0(uVar5,param_1,0xc000);
        if (iVar3 == 0) {
          FUN_08899498(iVar4);
          goto LAB_08897d10;
        }
        iVar3 = FUN_088930c0(*(undefined4 *)(param_1 + 0xa18),param_1,0x4000);
        if (iVar3 == 0) {
          FUN_088994b8(iVar4);
          goto LAB_08897d10;
        }
        uVar5 = *(undefined4 *)(param_1 + 0xa18);
      }
      iVar3 = FUN_088930c0(uVar5,param_1,0);
      if (iVar3 == 0) {
        FUN_08899458(iVar4);
      }
    }
  }
LAB_08897d10:
  FUN_0889958c(iVar4);
  *(undefined *)(param_1 + 0x915) = 1;
  return;
}

