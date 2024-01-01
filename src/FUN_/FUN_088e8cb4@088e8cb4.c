#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088e8cb4(int param_1,int param_2)

{
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_088e5a50();
  *(undefined **)(param_1 + 0x14) = &DAT_08af4024;
  *(undefined4 *)(param_1 + 0x404) = 0x43480000;
  FUN_088e8c68(param_1,1);
  if (param_2 < 0x4f) {
    if (0x4d < param_2) {
      *(undefined4 *)(param_1 + 0x410) = 0x3fa66666;
    }
  }
  else if (param_2 < 0x50) {
    *(undefined4 *)(param_1 + 0x410) = 0x3fb33333;
  }
  else if (param_2 < 0x51) {
    *(undefined4 *)(param_1 + 0x410) = 0x3fc00000;
  }
  FUN_089e0344(0,param_1,&DAT_08b001b0,0);
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x450) = 2;
  *(undefined4 *)(param_1 + 0x440) = in_V72;
  *(undefined4 *)(param_1 + 0x444) = in_V76;
  *(undefined4 *)(param_1 + 0x448) = in_V7A;
  *(undefined4 *)(param_1 + 0x44c) = in_V7E;
  *(undefined2 *)(param_1 + 0x430) = 0x2757;
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_1 + 0x34);
  return param_1;
}

