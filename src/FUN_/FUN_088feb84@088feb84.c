#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088feb84(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af45fc;
  FUN_089bd9b4(param_1 + 0x10);
  FUN_089bd9b4(param_1 + 0x54);
  FUN_089bd9b4(param_1 + 0x98);
  FUN_088fdc34(param_1 + 0x100);
  *(undefined4 *)(DAT_08ac5934 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  *(undefined4 *)(param_1 + 0x660) = 0;
  *(undefined4 *)(param_1 + 0x684) = 0;
  *(undefined4 *)(param_1 + 0x688) = 0;
  *(undefined4 *)(param_1 + 0x68c) = 0;
  DAT_08abff80 = 0;
  *(undefined4 *)(param_1 + 0x670) = 0;
  *(undefined4 *)(param_1 + 0x674) = 0;
  *(undefined4 *)(param_1 + 0x678) = 0;
  *(undefined4 *)(param_1 + 0x67c) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined *)(param_1 + 0x758) = 0;
  DAT_08abff85 = 0;
  DAT_08abff84 = 0;
  *(undefined4 *)(param_1 + 0x654) = 0;
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  *(undefined *)(param_1 + 0x759) = 0;
  *(undefined4 *)(param_1 + 0x664) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x668) = 0;
  *(undefined4 *)(param_1 + 0x690) = 0;
  *(undefined4 *)(param_1 + 0x694) = 0;
  *(undefined4 *)(param_1 + 0x760) = in_V72;
  *(undefined4 *)(param_1 + 0x764) = in_V76;
  *(undefined4 *)(param_1 + 0x768) = in_V7A;
  *(undefined4 *)(param_1 + 0x76c) = in_V7E;
  *(undefined4 *)(param_1 + 0x770) = in_V72;
  *(undefined4 *)(param_1 + 0x774) = in_V76;
  *(undefined4 *)(param_1 + 0x778) = in_V7A;
  *(undefined4 *)(param_1 + 0x77c) = in_V7E;
  *(undefined4 *)(param_1 + 0x77c) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x784) = 0;
  *(undefined4 *)(param_1 + 0x780) = 0;
  iVar2 = DAT_08ac5928;
  DAT_08b00fe0 = in_V72;
  DAT_08b00fe4 = in_V76;
  DAT_08b00fe8 = in_V7A;
  DAT_08b00fec = in_V7E;
  *(int *)(param_1 + 0xdc) = DAT_08ac5928;
  *(undefined *)(iVar2 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x650) = 0;
  iVar2 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x500);
  do {
    *puVar1 = in_V72;
    puVar1[1] = in_V76;
    puVar1[2] = in_V7A;
    puVar1[3] = in_V7E;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (iVar2 < 0x15);
  *(undefined4 *)(param_1 + 0x654) = param_2;
  return param_1;
}

