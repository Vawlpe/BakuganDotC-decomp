#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0885cee0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_088998f0();
  *(undefined **)(param_1 + 0x14) = &DAT_08af1e1c;
  *(undefined *)(param_1 + 0x6f4) = 0;
  *(undefined4 *)(param_1 + 0x6d0) = in_V72;
  *(undefined4 *)(param_1 + 0x6d4) = in_V76;
  *(undefined4 *)(param_1 + 0x6d8) = in_V7A;
  *(undefined4 *)(param_1 + 0x6dc) = in_V7E;
  *(undefined4 *)(param_1 + 0x6f0) = 0;
  *(bool *)(param_1 + 0x6f5) = *(int *)(param_1 + 0x268) == 0;
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  *(undefined4 *)(param_1 + 0x6fc) = 0;
  *(undefined4 *)(param_1 + 0x6e0) = in_V72;
  *(undefined4 *)(param_1 + 0x6e4) = in_V76;
  *(undefined4 *)(param_1 + 0x6e8) = in_V7A;
  *(undefined4 *)(param_1 + 0x6ec) = in_V7E;
  if ((0 < param_2) && (param_2 < 0x15)) {
    iVar2 = *(int *)(param_1 + 8);
    iVar1 = FUN_0880cc48();
    if (*(int *)(iVar1 + 4) != 0) {
      *(int *)(*(int *)(iVar1 + 4) + 0xd8) = iVar2 * 4 + -4;
    }
    iVar1 = FUN_0880cc48();
    if (*(int *)(iVar1 + 4) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0xdc) = 0xff;
    }
    iVar1 = FUN_0880cc48();
    if (*(int *)(iVar1 + 4) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0xf8) = 0xff;
    }
    iVar1 = FUN_0880cc48();
    if (*(int *)(iVar1 + 4) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0xfc) = 0xff;
    }
    FUN_08886c94(param_1 + 0x434);
  }
  FUN_088892c8(param_1 + 0x434);
  *(undefined4 *)(*(int *)(param_1 + 0x168) + 0x14) = 0;
  *(undefined *)(param_1 + 0x700) = 0;
  *(undefined *)(param_1 + 0x701) = 0;
  return param_1;
}

