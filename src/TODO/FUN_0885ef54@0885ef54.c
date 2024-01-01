#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0885ef54(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  
  FUN_089de2e4(param_1,(&PTR_DAT_08ab0308)[param_2],0);
  *(undefined **)(param_1 + 0x14) = &DAT_08af1fa4;
  *(undefined **)(param_1 + 0x274) = &DAT_08af5624;
  *(undefined **)(param_1 + 0x284) = &DAT_08af5564;
  *(undefined4 *)(param_1 + 0x280) = 2;
  *(undefined4 *)(param_1 + 0x270) = 4;
  *(undefined **)(param_1 + 0x2c4) = &DAT_08af55c4;
  *(undefined4 *)(param_1 + 0x2c0) = 3;
  FUN_0888670c(param_1 + 0x434);
  FUN_0885df0c(param_1);
  *(int *)(param_1 + 8) = param_2;
  iVar1 = DAT_08aba804 + 1;
  *(int *)(param_1 + 0xc) = DAT_08aba804;
  DAT_08aba804 = iVar1;
  iVar1 = FUN_08854c60();
  *(int *)(param_1 + 0x170) = iVar1;
  if (iVar1 != 0) {
    FUN_08854e60(*(undefined4 *)(param_1 + 0x170),param_1);
  }
  FUN_0885e168(param_1,param_2);
  iVar1 = DAT_08aba800 % 0xdf;
  DAT_08aba800 = DAT_08aba800 + 1;
  *(int *)(param_1 + 0x14c) = iVar1 + 0x20;
  iVar1 = *(int *)(param_1 + 0x4bc);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(iVar1 + 0x18);
  uVar2 = FUN_089ded60(param_1,"Bip01_Spine");
  *(undefined4 *)(param_1 + 0x3ac) = uVar2;
  uVar2 = FUN_08887cdc(param_1 + 0x434);
  *(undefined4 *)(param_1 + 0x594) = uVar2;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x4bc) + 0xdc);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (*(int *)(param_1 + 0x3ac) == 0) {
    uVar2 = FUN_089ded10(param_1,1);
    *(undefined4 *)(param_1 + 0x3ac) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x5ac) = *(undefined4 *)(&DAT_08abcf20 + param_2 * 4);
  *(undefined4 *)(param_1 + 0x5b0) = *(undefined4 *)(&DAT_08abcfac + param_2 * 4);
  *(undefined *)(param_1 + 0x658) = 0;
  *(undefined *)(param_1 + 0x5e8) = 0;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x70,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar1 = 0;
  if (iVar3 != 0) {
    FUN_08884848(iVar3,param_1);
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 0x168) = iVar1;
  FUN_089e0b98(param_1,*(undefined4 *)(param_1 + 0x14c));
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  FUN_0885e260(param_1);
  FUN_0885e388(param_1);
  FUN_089de8c4(param_1,8);
  if ((*(int *)(param_1 + 8) != 0) && (*(uint *)(param_1 + 8) < 0x21)) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x30,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar1 = 0;
    if (iVar3 != 0) {
      FUN_088853bc(iVar3,param_1);
      iVar1 = iVar3;
    }
    *(int *)(param_1 + 0x200) = iVar1;
    fVar4 = *(float *)(*(int *)(param_1 + 0x4bc) + 0xc) * 2.5;
    *(float *)(iVar1 + 0x10) = fVar4;
    *(float *)(iVar1 + 0x14) = fVar4;
    *(float *)(iVar1 + 0x18) = fVar4;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    FUN_0885e764(param_1);
  }
  FUN_0885ea0c(param_1);
  FUN_089d8984(param_1,DAT_08aba808);
  FUN_088706f0(param_1,0,0);
  iVar1 = FUN_0880d354();
  if ((iVar1 != 0) || ((*(int *)(DAT_08ac58c4 + 0x20) == 1 && (DAT_08abd488 == 10)))) {
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x1000;
  }
  return param_1;
}

