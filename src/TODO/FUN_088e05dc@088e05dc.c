#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e05dc(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  *(undefined4 *)(param_1 + 0x140) = param_2;
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
  }
  switch(*(undefined4 *)(param_1 + 0x140)) {
  case 0:
    iVar1 = *(int *)(param_1 + 0x350);
    if ((iVar1 == 0) || (*(int *)(param_1 + 8) != 0x4d)) {
      FUN_088def24(0x3e4ccccd,param_1,0,1,0);
    }
    else {
      if (*(int *)(param_1 + 0x360) < 1) {
        *(undefined *)(iVar1 + 0x40) = 0;
      }
      else {
        *(undefined *)(iVar1 + 0x40) = 4;
      }
      FUN_088df254(param_1,0);
    }
    break;
  case 1:
    FUN_088def24(0x3e4ccccd,param_1,1,1,0);
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
  case 9:
    break;
  case 10:
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0x4d) {
      if (*(char *)(param_1 + 0x398) == '\0') {
        *(undefined *)(*(int *)(param_1 + 0x350) + 0x40) = 3;
      }
      else {
        *(undefined *)(*(int *)(param_1 + 0x350) + 0x40) = 2;
        *(undefined *)(param_1 + 0x398) = 0;
      }
    }
    else if ((iVar1 == 0x3b) || (iVar1 == 0x38)) {
      *(undefined *)(*(int *)(param_1 + 0x350) + 0x40) = 2;
    }
    FUN_088df254(param_1,0);
  }
  return;
}

