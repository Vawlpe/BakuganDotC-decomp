#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088998f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_0885ef54();
  *(undefined **)(param_1 + 0x14) = &DAT_08af21b4;
  *(undefined4 *)(param_1 + 0x268) = param_3;
  uVar1 = FUN_0888de58(param_1);
  *(undefined4 *)(param_1 + 0x6cc) = uVar1;
  FUN_08886820(param_1 + 0x434);
  *(undefined *)(param_1 + 0x674) = 0;
  *(undefined4 *)(param_1 + 0x57c) = 0;
  *(undefined4 *)(param_1 + 0x6a4) = 9999;
  *(undefined4 *)(param_1 + 0x6a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x670) = 0;
  *(undefined4 *)(param_1 + 0x678) = 0;
  *(undefined4 *)(param_1 + 0x680) = in_V72;
  *(undefined4 *)(param_1 + 0x684) = in_V76;
  *(undefined4 *)(param_1 + 0x688) = in_V7A;
  *(undefined4 *)(param_1 + 0x68c) = in_V7E;
  *(undefined4 *)(param_1 + 0x690) = in_V72;
  *(undefined4 *)(param_1 + 0x694) = in_V76;
  *(undefined4 *)(param_1 + 0x698) = in_V7A;
  *(undefined4 *)(param_1 + 0x69c) = in_V7E;
  *(undefined *)(param_1 + 0x6b0) = 1;
  *(undefined4 *)(param_1 + 0x6b8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c4) = 0;
  *(undefined *)(param_1 + 0x6bc) = 0;
  *(undefined4 *)(param_1 + 0x6c8) = 0;
  *(undefined4 *)(param_1 + 0x6b4) = 5;
  if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
    FUN_088625e8(param_1,5);
    if ((*(int *)(param_1 + 8) - 0x15U < 6) && (iVar2 = FUN_089c9b48(3,DAT_08ac58c8), iVar2 == 0)) {
      *(undefined4 *)(param_1 + 0x660) = 1;
    }
  }
  else {
    uVar1 = FUN_0880cc48(param_1);
    iVar2 = FUN_0880d0ac(uVar1,0x18);
    if (iVar2 < 1) {
      if (-1 < iVar2) {
        *(undefined4 *)(param_1 + 0x6b4) = 1;
      }
    }
    else if (iVar2 < 2) {
      *(undefined4 *)(param_1 + 0x6b4) = 5;
    }
    else if (iVar2 < 3) {
      *(undefined4 *)(param_1 + 0x6b4) = 10;
    }
  }
  return param_1;
}

