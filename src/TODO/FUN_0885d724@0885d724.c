#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885d724(int param_1)

{
  undefined auVar1 [16];
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_1 + 0x6f8) != 0) {
    FUN_08860438(param_1);
  }
  switch(*(int *)(param_1 + 0x6f8)) {
  case 1:
    FUN_088706f0(param_1,0,0);
    *(undefined4 *)(*(int *)(param_1 + 0x168) + 0x14) = 0x207;
    *(int *)(param_1 + 0x6f8) = *(int *)(param_1 + 0x6f8) + 1;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x6fc) = 0;
    *(int *)(param_1 + 0x6f8) = *(int *)(param_1 + 0x6f8) + 1;
    goto LAB_0885d7f4;
  case 3:
LAB_0885d7f4:
    piVar3 = (int *)(param_1 + 0x6fc);
    if (*(int *)(param_1 + 0x6cc) == 0) {
      iVar2 = *piVar3;
    }
    else {
      FUN_08899478(*(int *)(param_1 + 0x6cc) + 0x1b0);
      FUN_088994e0(*(int *)(param_1 + 0x6cc) + 0x1b0);
      iVar2 = *piVar3;
    }
    *piVar3 = iVar2 + 1;
    if (1 < iVar2) {
      if (*(int *)(param_1 + 0x6cc) == 0) {
        iVar2 = *(int *)(param_1 + 0x6f8);
      }
      else {
        FUN_088994d8(*(int *)(param_1 + 0x6cc) + 0x1b0);
        iVar2 = *(int *)(param_1 + 0x6f8);
      }
      *(undefined4 *)(param_1 + 0x6fc) = 0;
      *(int *)(param_1 + 0x6f8) = iVar2 + 1;
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x6cc) != 0) {
      FUN_088994e0(*(int *)(param_1 + 0x6cc) + 0x1b0);
    }
    iVar2 = *(int *)(param_1 + 0x6fc);
    *(int *)(param_1 + 0x6fc) = iVar2 + 1;
    if (0xc < iVar2) {
      FUN_088994d8(*(int *)(param_1 + 0x6cc) + 0x1b0);
      *(undefined4 *)(param_1 + 0x6fc) = 0;
      *(undefined4 *)(param_1 + 0x6f8) = 10;
    }
    break;
  case 5:
    if (*(int *)(param_1 + 0x6cc) != 0) {
      FUN_08899534(*(int *)(param_1 + 0x6cc) + 0x1b0);
    }
    iVar2 = *(int *)(param_1 + 0x6fc);
    *(int *)(param_1 + 0x6fc) = iVar2 + 1;
    if (4 < iVar2) {
      *(undefined4 *)(param_1 + 0x6fc) = 0;
      *(undefined4 *)(param_1 + 0x6f8) = 10;
    }
    break;
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
    FUN_088706f0(param_1,0xf,0);
    *(undefined4 *)(param_1 + 0x3dc) = 0xbfc90fdb;
    *(int *)(param_1 + 0x6f8) = *(int *)(param_1 + 0x6f8) + 1;
    goto LAB_0885d92c;
  case 0xb:
LAB_0885d92c:
    local_30 = *(undefined4 *)*(undefined (*) [16])(param_1 + 0x6e0);
    uStack_2c = *(undefined4 *)(param_1 + 0x6e4);
    uStack_28 = *(undefined4 *)(param_1 + 0x6e8);
    uStack_24 = *(undefined4 *)(param_1 + 0x6ec);
    FUN_0885d078(param_1,&local_30);
    auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x20),*(undefined (*) [16])(param_1 + 0x6e0));
    uVar4 = vdot_t(auVar1._0_12_,auVar1._0_12_);
    fVar5 = (float)vsqrt_s(uVar4);
    if (fVar5 < 150.0) {
      *(undefined4 *)(param_1 + 0x6f8) = 0x14;
    }
    break;
  case 0x14:
    *(undefined4 *)(param_1 + 0x6fc) = 0;
    *(int *)(param_1 + 0x6f8) = *(int *)(param_1 + 0x6f8) + 1;
    goto LAB_0885d990;
  case 0x15:
LAB_0885d990:
    piVar3 = (int *)(param_1 + 0x6fc);
    if (*(int *)(param_1 + 0x6cc) == 0) {
      iVar2 = *piVar3;
    }
    else {
      if (*(int *)(param_1 + 0x6cc) == 0) {
        iVar2 = *(int *)(param_1 + 0x168);
      }
      else {
        FUN_088994d8(*(int *)(param_1 + 0x6cc) + 0x1b0);
        iVar2 = *(int *)(param_1 + 0x168);
      }
      *(undefined4 *)(iVar2 + 0x14) = 0;
      FUN_0886003c(0x3fc90fdb,param_1);
      iVar2 = *piVar3;
    }
    *piVar3 = iVar2 + 1;
    if (1 < iVar2) {
      *(undefined4 *)(param_1 + 0x6fc) = 0;
      *(undefined4 *)(param_1 + 0x6f8) = 100;
    }
    break;
  default:
    if (*(int *)(param_1 + 0x6f8) == 100) {
      FUN_088706f0(param_1,0,0);
      *(undefined4 *)(param_1 + 0x80) = in_V72;
      *(undefined4 *)(param_1 + 0x84) = in_V76;
      *(undefined4 *)(param_1 + 0x88) = in_V7A;
      *(undefined4 *)(param_1 + 0x8c) = in_V7E;
      *(undefined *)(param_1 + 0x701) = 1;
      *(undefined4 *)(param_1 + 0x6f8) = 0;
    }
  }
  return;
}

