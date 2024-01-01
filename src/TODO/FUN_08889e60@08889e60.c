#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08889e60(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x8c) = param_2;
  if (param_2 < 2) {
    if (0 < param_2) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
    }
  }
  else if (param_2 < 3) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x24);
  }
  uVar1 = FUN_08889d78(param_1);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = FUN_08889e00(param_1);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  *(undefined *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x91) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_089d8dfc(param_1,&DAT_08b00890);
  uVar1 = FUN_089f7720("tairyoku_01_gauge");
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}

