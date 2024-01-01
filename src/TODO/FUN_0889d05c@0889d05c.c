#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0889d05c(float param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = FUN_089f5700(DAT_08ac5c68,param_2);
  *(uint *)(iVar4 + 0xdc) = param_4 & 0xffff;
  *(undefined4 *)(iVar4 + 0xe0) = 0;
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
  uVar3 = DAT_08b0019c;
  uVar2 = DAT_08b00198;
  uVar1 = DAT_08b00194;
  *(undefined4 *)(iVar4 + 0xb0) = DAT_08b00190;
  *(undefined4 *)(iVar4 + 0xb4) = uVar1;
  *(undefined4 *)(iVar4 + 0xb8) = uVar2;
  *(undefined4 *)(iVar4 + 0xbc) = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(iVar4 + 0x60) = *param_3;
  *(undefined4 *)(iVar4 + 100) = uVar1;
  *(undefined4 *)(iVar4 + 0x68) = uVar2;
  *(undefined4 *)(iVar4 + 0x6c) = uVar3;
  *(float *)(iVar4 + 0x70) = -param_1;
  *(float *)(iVar4 + 0x74) = -param_1;
  *(float *)(iVar4 + 0x78) = param_1;
  *(undefined4 *)(iVar4 + 0x7c) = 0;
  FUN_089f44e0(iVar4,1,0xb2);
  return iVar4;
}

