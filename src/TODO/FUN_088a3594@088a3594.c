#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a3594(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined auStack_a0 [128];
  int local_20;
  
  FUN_089de2e4(param_1,param_2,0xc00);
  *(undefined **)(param_1 + 0x14) = &DAT_08af24d4;
  FUN_089e02cc(param_1,"fz_crystal01_stand_01",&LAB_088a3560,0);
  FUN_089e0a70(param_1,&LAB_088a357c,0);
  *(undefined4 *)(param_1 + 0x140) = 0;
  strcpy(auStack_a0,param_2);
  puVar1 = (undefined *)strrchr(auStack_a0,0x2e);
  if (puVar1 != (undefined *)0x0) {
    *puVar1 = 0;
  }
  strcat(auStack_a0,"_col.ctc");
  iVar2 = FUN_089be054(DAT_08ac520c,auStack_a0);
  if (iVar2 != 0) {
    local_20 = 0;
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(400,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    iVar2 = local_20;
    if (iVar4 != 0) {
      FUN_0881a358(iVar4,2);
      iVar2 = iVar4;
    }
    *(int *)(param_1 + 0x140) = iVar2;
    uVar3 = FUN_089be054(DAT_08ac520c,auStack_a0);
    FUN_0881a484(iVar2,uVar3,9,param_1,0);
    *(undefined *)(*(int *)(param_1 + 0x140) + 0x104) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x144) = 1;
    *(int *)(*(int *)(param_1 + 0x140) + 0x138) = param_1;
    iVar2 = *(int *)(param_1 + 0x140);
    *(int *)(iVar2 + 0x110) = *(int *)(param_1 + 0x130) + 0x80;
    *(undefined *)(iVar2 + 0x10c) = 1;
    iVar2 = *(int *)(param_1 + 0x140);
    *(undefined4 *)(iVar2 + 0x148) = 0xffffffff;
    *(uint *)(iVar2 + 0x130) = *(uint *)(iVar2 + 0x130) | 1;
  }
  *(undefined *)(param_1 + 0xbc) = 1;
  FUN_0889d514(param_1);
  return param_1;
}

