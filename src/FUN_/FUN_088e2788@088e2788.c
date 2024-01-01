#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e2788(int param_1,int param_2,char param_3)

{
  undefined auVar1 [12];
  int iVar2;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  if ((param_2 != 7) || (iVar2 = FUN_088e1490(param_1), iVar2 != 0)) {
    if (*(int *)(param_1 + 0x140) == 0xb) {
      if (*(int *)(param_1 + 0x4f0) == 0) {
        iVar2 = *(int *)(param_1 + 0x4f4);
      }
      else {
        FUN_089f5124(*(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x214));
        *(undefined4 *)(param_1 + 0x4f0) = 0;
        iVar2 = *(int *)(param_1 + 0x4f4);
      }
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x4f8);
      }
      else {
        FUN_089f5124(*(undefined4 *)(*(int *)(param_1 + 0x4f4) + 0x214));
        *(undefined4 *)(param_1 + 0x4f4) = 0;
        iVar2 = *(int *)(param_1 + 0x4f8);
      }
      if (iVar2 != 0) {
        FUN_089f5124(*(undefined4 *)(*(int *)(param_1 + 0x4f8) + 0x214));
        *(undefined4 *)(param_1 + 0x4f8) = 0;
      }
    }
    *(int *)(param_1 + 0x140) = param_2;
    if (param_3 == '\0') {
      *(undefined4 *)(param_1 + 0x2d0) = 0;
      *(undefined4 *)(param_1 + 0x2d4) = 0;
      *(undefined4 *)(param_1 + 0x2d8) = 0;
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      *(undefined4 *)(param_1 + 0x2e4) = 0;
      *(undefined4 *)(param_1 + 0x2e8) = 0;
      *(undefined4 *)(param_1 + 0x2f0) = in_V72;
      *(undefined4 *)(param_1 + 0x2f4) = in_V76;
      *(undefined4 *)(param_1 + 0x2f8) = in_V7A;
      *(undefined4 *)(param_1 + 0x2fc) = in_V7E;
      *(undefined4 *)(param_1 + 0x300) = in_V72;
      *(undefined4 *)(param_1 + 0x304) = in_V76;
      *(undefined4 *)(param_1 + 0x308) = in_V7A;
      *(undefined4 *)(param_1 + 0x30c) = in_V7E;
      *(undefined4 *)(param_1 + 0x31c) = 0;
      *(undefined4 *)(param_1 + 0x310) = 0;
      (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
      *(undefined4 *)(param_1 + 0x328) = 0;
      *(undefined4 *)(param_1 + 0x324) = 0;
      *(undefined4 *)(param_1 + 0x338) = 0;
      *(undefined4 *)(param_1 + 0x334) = 3;
      *(undefined *)(param_1 + 0x4aa) = 0;
      *(undefined4 *)(param_1 + 0x520) = in_V72;
      *(undefined4 *)(param_1 + 0x524) = in_V76;
      *(undefined4 *)(param_1 + 0x528) = in_V7A;
      *(undefined4 *)(param_1 + 0x52c) = in_V7E;
    }
    switch(*(undefined4 *)(param_1 + 0x140)) {
    case 0:
      *(undefined4 *)(param_1 + 0x510) = 0;
      FUN_088def24(0x3e4ccccd,param_1,0,1,0);
      break;
    case 1:
      FUN_088def24(0x3e4ccccd,param_1,1,1,0);
      break;
    case 7:
      auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),0x3f4ccccd);
      *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar1._0_4_;
      *(int *)(param_1 + 0x88) = auVar1._8_4_;
      FUN_088def24(0x3f000000,param_1,8,0,0);
      break;
    case 8:
      FUN_088df48c(param_1);
    default:
      *(undefined4 *)(param_1 + 0x80) = in_V72;
      *(undefined4 *)(param_1 + 0x84) = in_V76;
      *(undefined4 *)(param_1 + 0x88) = in_V7A;
      *(undefined4 *)(param_1 + 0x8c) = in_V7E;
      FUN_088def24(0x3e4ccccd,param_1,0,1,0);
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x80) = in_V72;
      *(undefined4 *)(param_1 + 0x84) = in_V76;
      *(undefined4 *)(param_1 + 0x88) = in_V7A;
      *(undefined4 *)(param_1 + 0x8c) = in_V7E;
      FUN_088def24(0x3e4ccccd,param_1,0,1,0);
      break;
    case 0xc:
      *(undefined4 *)(param_1 + 0x80) = in_V72;
      *(undefined4 *)(param_1 + 0x84) = in_V76;
      *(undefined4 *)(param_1 + 0x88) = in_V7A;
      *(undefined4 *)(param_1 + 0x8c) = in_V7E;
      FUN_088def24(0x3e4ccccd,param_1,0,1,0);
    }
  }
  return;
}

