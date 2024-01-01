#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08876be8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xb0) + 0x14);
  uVar1 = (**(code **)(iVar2 + 0xa4))(*(int *)(param_1 + 0xb0) + (int)*(short *)(iVar2 + 0xa0));
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  if ((int)(((((int)(char)(&DAT_08a68306)[param_2 * 4] & 0xf0U) >> 4 ^ 8) - 8) * 0x1000000) >> 0x18
      == 0) {
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x15c);
  }
  else {
    iVar2 = FUN_08860188(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x3b8));
    if (iVar2 == 0) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x15c);
    }
    else {
      uVar1 = *(undefined4 *)(iVar2 + 0xc);
    }
    *(undefined4 *)(param_1 + 0xb4) = uVar1;
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined *)(param_1 + 0x114) = 0;
  *(undefined *)(param_1 + 0x115) = 0;
  *(undefined *)(param_1 + 0x116) = 0;
  *(undefined *)(param_1 + 0x117) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xe8) = 0;
  *(undefined *)(param_1 + 0xf1) = 0;
  *(undefined4 *)(param_1 + 0xa0) = in_V72;
  *(undefined4 *)(param_1 + 0xa4) = in_V76;
  *(undefined4 *)(param_1 + 0xa8) = in_V7A;
  *(undefined4 *)(param_1 + 0xac) = in_V7E;
  FUN_0888c034(param_1 + 0x118,param_2);
  return;
}

