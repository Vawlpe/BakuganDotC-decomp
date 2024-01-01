#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a6380(int param_1)

{
  int iVar1;
  float fVar2;
  
  *(float *)(param_1 + 0x240) = *(float *)(param_1 + 0x240) + 0.1;
  *(float *)(param_1 + 0x244) = *(float *)(param_1 + 0x244) - 0.1;
  *(float *)(param_1 + 0x248) = *(float *)(param_1 + 0x248) - 0.1;
  *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x250) + 0.05;
  *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x254) - 0.05;
  *(float *)(param_1 + 600) = *(float *)(param_1 + 600) - 0.05;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x250);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x254);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 600);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x25c);
  FUN_089e0460(param_1,param_1 + 0x240,0);
  switch(*(undefined4 *)(param_1 + 0x1fc)) {
  case 0:
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
    break;
  case 1:
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    iVar1 = *(int *)(param_1 + 0x14);
    goto LAB_088a657c;
  case 10:
    goto LAB_088a6468;
  case 0xb:
    goto LAB_088a64d0;
  case 0xc:
    goto switchD_088a6434_caseD_c;
  case 0xd:
    goto LAB_088a6528;
  case 0x14:
    goto LAB_088a6540;
  default:
    iVar1 = *(int *)(param_1 + 0x14);
LAB_088a657c:
    (**(code **)(iVar1 + 0x5c))(param_1 + *(short *)(iVar1 + 0x58));
    return;
  }
  *(undefined4 *)(param_1 + 0x1fc) = 10;
LAB_088a6468:
  iVar1 = *(int *)(param_1 + 0x328);
  if (iVar1 < 2) {
    if (iVar1 < 0) {
      iVar1 = *(int *)(param_1 + 0x1fc);
    }
    else {
      FUN_08823f5c(DAT_08abd5b0,*(int *)(param_1 + 0x328) + 0x57,param_1 + 0x20);
      iVar1 = *(int *)(param_1 + 0x1fc);
    }
  }
  else {
    if (iVar1 < 3) {
      FUN_08823f5c(DAT_08abd5b0,0x143,param_1 + 0x20);
    }
    iVar1 = *(int *)(param_1 + 0x1fc);
  }
  *(int *)(param_1 + 0x1fc) = iVar1 + 1;
LAB_088a64d0:
  *(undefined4 *)(param_1 + 0x324) = 3;
  *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
switchD_088a6434_caseD_c:
  iVar1 = *(int *)(param_1 + 0x324) + -1;
  *(int *)(param_1 + 0x324) = iVar1;
  if (iVar1 < 1) {
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
LAB_088a6528:
    *(undefined4 *)(param_1 + 0x1fc) = 0x14;
LAB_088a6540:
    fVar2 = *(float *)(param_1 + 0x228) - 0.07;
    *(float *)(param_1 + 0x228) = fVar2;
    if (fVar2 <= 0.0) {
      FUN_088246f4(DAT_08abd5b0,0xffffffff,param_1);
      *(undefined4 *)(param_1 + 0x1fc) = 999;
    }
  }
  return;
}

