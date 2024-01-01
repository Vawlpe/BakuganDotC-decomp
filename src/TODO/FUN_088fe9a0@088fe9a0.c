#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fe9a0(undefined (*param_1) [12])

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = DAT_08ac5c90;
  uVar2 = *(undefined4 *)(*param_1 + 4);
  uVar3 = *(undefined4 *)(*param_1 + 8);
  uVar4 = *(undefined4 *)param_1[1];
  *(undefined4 *)(DAT_08ac5c90 + 0x50) = *(undefined4 *)*param_1;
  *(undefined4 *)(iVar5 + 0x54) = uVar2;
  *(undefined4 *)(iVar5 + 0x58) = uVar3;
  *(undefined4 *)(iVar5 + 0x5c) = uVar4;
  iVar5 = DAT_08ac5c90;
  uVar2 = *(undefined4 *)(DAT_08ac5c90 + 0x6c);
  auVar1 = vadd_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x60),*param_1);
  *(int *)*(undefined (*) [12])(DAT_08ac5c90 + 0x60) = auVar1._0_4_;
  *(int *)(iVar5 + 100) = auVar1._4_4_;
  *(int *)(iVar5 + 0x68) = auVar1._8_4_;
  *(undefined4 *)(iVar5 + 0x6c) = uVar2;
  FUN_089e2b14(DAT_08ac5c90,1);
  return;
}

