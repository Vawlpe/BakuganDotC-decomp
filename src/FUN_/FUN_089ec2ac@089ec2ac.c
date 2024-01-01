#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089ec2ac(int param_1,undefined4 param_2,undefined param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = FUN_089ec3e0();
  if (iVar4 == 0) {
    FUN_089ed6a0(*(undefined4 *)(param_1 + 0x7c),0);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
    iVar4 = FUN_089ceba4(DAT_08ac5934);
    *(float *)(param_1 + 0x6c) = -(1.8 / (float)iVar4);
  }
  iVar4 = FUN_089eb248(*(undefined4 *)(param_1 + 0x74));
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined *)(param_1 + 0x59) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x5a) = param_3;
    *(undefined4 *)(param_1 + 0x70) = 0;
    **(float **)(param_1 + 0x74) = *(float *)(param_1 + 0x10) + 1.0;
    uVar3 = DAT_08b0019c;
    uVar2 = DAT_08b00198;
    uVar1 = DAT_08b00194;
    *(undefined4 *)(param_1 + 0x30) = DAT_08b00190;
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    uVar3 = DAT_08b001bc;
    uVar2 = DAT_08b001b8;
    uVar1 = DAT_08b001b4;
    *(undefined4 *)(param_1 + 0x40) = DAT_08b001b0;
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined *)(param_1 + 0x58) = 1;
    *(undefined *)(param_1 + 0x78) = 0;
  }
  return iVar4 != 0;
}

