#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088c93b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af2d4c;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x20) = in_V72;
  *(undefined4 *)(param_1 + 0x24) = in_V76;
  *(undefined4 *)(param_1 + 0x28) = in_V7A;
  *(undefined4 *)(param_1 + 0x2c) = in_V7E;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 100) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined *)(param_1 + 0x78) = 0;
  *(undefined *)(param_1 + 0x79) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x41700000;
  *(undefined4 *)(param_1 + 0x54) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined *)(param_1 + 0x7a) = 0;
  uVar1 = DAT_08b001bc;
  uVar4 = DAT_08b001b8;
  uVar2 = DAT_08b001b4;
  *(undefined4 *)(param_1 + 0x110) = DAT_08b001b0;
  *(undefined4 *)(param_1 + 0x114) = uVar2;
  *(undefined4 *)(param_1 + 0x118) = uVar4;
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  *(undefined4 *)(param_1 + 0x11c) = 0x3f19999a;
  *(undefined *)(param_1 + 0x120) = 0;
  *(undefined *)(param_1 + 0x14d) = 0;
  *(undefined *)(param_1 + 0x14e) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0x1e8) = 0;
  *(undefined *)(param_1 + 0x1e9) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(float *)(param_1 + 0x74) = DAT_08abea18 + 10.0;
  DAT_08abea18 = DAT_08abea18 + 0.01;
  *(undefined4 *)(param_1 + 0x1ec) = DAT_08abea20;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x100) = in_V72;
  *(undefined4 *)(param_1 + 0x104) = in_V76;
  *(undefined4 *)(param_1 + 0x108) = in_V7A;
  *(undefined4 *)(param_1 + 0x10c) = in_V7E;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar5 = 0;
  if (iVar3 != 0) {
    FUN_089f4f54(iVar3,0);
    iVar5 = iVar3;
  }
  *(int *)(param_1 + 0x208) = iVar5;
  *(undefined *)(iVar5 + 4) = 1;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar4 = FUN_089d7d74(0x24,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x20c) = uVar4;
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x208),uVar4,0x13);
  iVar3 = 0;
  iVar5 = 0;
  do {
    iVar3 = iVar3 + 1;
    iVar6 = *(int *)(*(int *)(param_1 + 0x20c) + iVar5);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar5 = iVar5 + 4;
  } while (iVar3 < 9);
  return param_1;
}

