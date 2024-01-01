#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08854110(int param_1)

{
  undefined auVar1 [12];
  bool bVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  if (0.005 < *(float *)(param_1 + 0x4fc)) {
    fVar6 = *(float *)(param_1 + 0x4fc) * 0.9;
  }
  else {
    fVar6 = 0.0;
  }
  *(float *)(param_1 + 0x4fc) = fVar6;
  FUN_0884bcc0(param_1);
  switch(*(undefined4 *)(param_1 + 0x448)) {
  case 0:
    iVar3 = FUN_089bf93c(0x6b,1);
    if (iVar3 != 0) {
      return;
    }
    DAT_08ac601c = 0;
    FUN_0890391c(*(undefined4 *)(DAT_08ac58c4 + 4),0);
    *(undefined4 *)(param_1 + 0x484) = 0;
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
    return;
  case 1:
    iVar3 = FUN_089bf93c(0x6b,1);
    if (iVar3 != 0) {
      return;
    }
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
  case 2:
    iVar3 = FUN_088b2cb4();
    if ((iVar3 == 0) || (*(int *)(DAT_08ac58c4 + 4) == 1)) {
      *(undefined4 *)(param_1 + 0x448) = 999;
    }
    else {
      *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
LAB_088542c0:
      fVar6 = -0.1;
      iVar5 = param_1 + 0x20;
      iVar3 = FUN_088b2fa4(0);
      auVar1 = vsub_t(*(undefined (*) [12])(*(int *)(*(int *)(iVar3 + 0x130) + 0x38) + 0x10),
                      **(undefined (**) [12])(*(int *)(iVar3 + 0x130) + 0x38));
      uVar8 = vdot_t(auVar1,auVar1);
      fVar7 = (float)vsqrt_s(uVar8);
      if (*(int *)(DAT_08ac58c4 + 4) == 10) {
        fVar4 = 0.65;
        fVar6 = -0.35;
      }
      else {
        fVar4 = 1.2;
      }
      FUN_08847e48(fVar7 * fVar4,auVar1._4_4_ * 0.5 * fVar6,0x42200000,iVar5,iVar3,1,0,0);
      switch(*(undefined4 *)(DAT_08ac58c4 + 4)) {
      case 2:
      case 4:
      case 9:
        *(undefined4 *)(param_1 + 0x414) = 0x40490fdb;
        break;
      case 3:
      case 5:
      case 6:
      case 7:
      case 8:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xf:
      case 0x10:
      case 0x11:
      default:
        *(undefined4 *)(param_1 + 0x414) = 0;
        break;
      case 0xe:
        *(undefined4 *)(param_1 + 0x414) = 0x3fc90fdb;
        *(undefined4 *)(param_1 + 0x418) = 0x437a0000;
        *(undefined4 *)(param_1 + 0x41c) = 0xc3480000;
        break;
      case 0x12:
        *(undefined4 *)(param_1 + 0x414) = 0x3fc90fdb;
      }
      FUN_08847334(iVar5);
      FUN_08847334(iVar5);
      *(undefined4 *)(param_1 + 0x484) = 0x3c;
      *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
    }
    break;
  case 3:
    goto LAB_088542c0;
  case 4:
    if (*(int *)(param_1 + 0x484) == 0x37) {
      FUN_089c2fbc(0x2a7c);
      iVar3 = *(int *)(param_1 + 0x484);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x484);
    }
    *(int *)(param_1 + 0x484) = iVar3 + -1;
    if ((0 < iVar3 + -1) && ((*(byte *)(*(int *)(param_1 + 0x43c) + 4) & 8) == 0)) {
      return;
    }
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
  case 5:
    bVar2 = false;
    iVar3 = FUN_088b2d34();
    if ((iVar3 != 0) && (*(int *)(DAT_08ac58c4 + 4) == 4)) {
      bVar2 = true;
    }
    if (bVar2) {
      *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
LAB_08854568:
      iVar3 = FUN_088b306c(0);
      auVar1 = vsub_t(*(undefined (*) [12])(*(int *)(*(int *)(iVar3 + 0x130) + 0x38) + 0x10),
                      **(undefined (**) [12])(*(int *)(iVar3 + 0x130) + 0x38));
      uVar8 = vdot_t(auVar1,auVar1);
      fVar6 = (float)vsqrt_s(uVar8);
      FUN_08847e48(fVar6 * 1.5,auVar1._4_4_ * 0.5 * -0.1,0x42200000,param_1 + 0x20,iVar3,1,0,0);
      FUN_08847334(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x484) = 0x3c;
      *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
    }
    else {
      iVar3 = FUN_089c9b48(0x22,DAT_08ac58c8);
      if (iVar3 != 0) {
        FUN_088474a0(param_1 + 0x20,0);
      }
      *(undefined4 *)(param_1 + 0x448) = 999;
    }
    break;
  case 6:
    goto LAB_08854568;
  case 7:
    iVar3 = *(int *)(param_1 + 0x484) + -1;
    *(int *)(param_1 + 0x484) = iVar3;
    if ((0 < iVar3) && ((*(byte *)(*(int *)(param_1 + 0x43c) + 4) & 8) == 0)) {
      return;
    }
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
  default:
    DAT_08ac601c = 1;
    *(undefined *)(param_1 + 0x55d) = 0;
    iVar3 = FUN_089c9b48(0x22,DAT_08ac58c8);
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0x532) = 1;
    }
    else {
      FUN_088474a0(param_1 + 0x20,0);
    }
    *(undefined4 *)(param_1 + 0x440) = 1;
    *(undefined4 *)(param_1 + 0x444) = 1;
    *(undefined4 *)(param_1 + 0x448) = 0;
  }
  return;
}

