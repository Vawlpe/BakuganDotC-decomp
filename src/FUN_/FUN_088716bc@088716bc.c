#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088716bc(int param_1,char param_2,undefined param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != '\0') {
    FUN_088706f0(param_1,4,0);
  }
  uVar3 = 0xf5;
  if ((*(int *)(param_1 + 0x1b8) == 0x10000000) && (*(int *)(param_1 + 0x1bc) == 0)) {
    uVar3 = 0xf7;
  }
  FUN_088608d8(0,param_1,uVar3,0,0);
  FUN_08864cb4(param_1,param_3);
  FUN_08865154(param_1);
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  uVar2 = DAT_08b001ac;
  uVar1 = DAT_08b001a8;
  uVar3 = DAT_08b001a4;
  *(undefined4 *)(param_1 + 0x350) = DAT_08b001a0;
  *(undefined4 *)(param_1 + 0x354) = uVar3;
  *(undefined4 *)(param_1 + 0x358) = uVar1;
  *(undefined4 *)(param_1 + 0x35c) = uVar2;
  FUN_089e3260(0x41000000,0x3f4ccccd,DAT_08ac5c90,0xf);
  *(undefined4 *)(param_1 + 0x3cc) = 1;
  return;
}

