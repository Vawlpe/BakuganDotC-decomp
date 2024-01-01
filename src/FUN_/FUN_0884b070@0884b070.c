#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884b070(undefined (*param_1) [12])

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  uVar2 = *(undefined4 *)(DAT_08ac5c90 + 0x54);
  uVar3 = *(undefined4 *)(DAT_08ac5c90 + 0x58);
  uVar4 = *(undefined4 *)(DAT_08ac5c90 + 0x5c);
  *(undefined4 *)*param_1 = *(undefined4 *)(DAT_08ac5c90 + 0x50);
  *(undefined4 *)(*param_1 + 4) = uVar2;
  *(undefined4 *)(*param_1 + 8) = uVar3;
  *(undefined4 *)param_1[1] = uVar4;
  iVar5 = DAT_08ac5c90;
  *(undefined4 *)(DAT_08ac5c90 + 0x50) = in_V72;
  *(undefined4 *)(iVar5 + 0x54) = in_V76;
  *(undefined4 *)(iVar5 + 0x58) = in_V7A;
  *(undefined4 *)(iVar5 + 0x5c) = in_V7E;
  iVar5 = DAT_08ac5c90;
  uVar2 = *(undefined4 *)(DAT_08ac5c90 + 0x6c);
  auVar1 = vsub_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x60),*param_1);
  *(int *)*(undefined (*) [12])(DAT_08ac5c90 + 0x60) = auVar1._0_4_;
  *(int *)(iVar5 + 100) = auVar1._4_4_;
  *(int *)(iVar5 + 0x68) = auVar1._8_4_;
  *(undefined4 *)(iVar5 + 0x6c) = uVar2;
  FUN_089e2b14(DAT_08ac5c90,1);
  return;
}

