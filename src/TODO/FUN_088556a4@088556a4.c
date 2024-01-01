#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088556a4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined auStack_50 [64];
  
  *(int *)(param_1 + 0x934) = param_2;
  *(undefined4 *)(param_1 + 0x938) = param_3;
  if (param_2 == 2) {
    *(undefined *)(param_1 + 0xa3d) = 1;
  }
  *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(&DAT_08a673a8 + *(int *)(param_1 + 0x938) * 4);
  iVar2 = *(int *)(param_1 + 0x938) * 0x30;
  local_60 = *(undefined4 *)(&DAT_08a67160 + iVar2);
  uStack_5c = *(undefined4 *)(&DAT_08a67164 + iVar2);
  uStack_58 = *(undefined4 *)(&DAT_08a67168 + iVar2);
  uStack_54 = *(undefined4 *)(&DAT_08a6716c + iVar2);
  FUN_089e0460(param_1,&local_60,0);
  FUN_089b4c84(auStack_50,"fz_crystal01_in_%02d_modulate",
               *(undefined4 *)(&DAT_08a67180 + *(int *)(param_1 + 0x938) * 0x30));
  uVar1 = FUN_089f7720(auStack_50);
  FUN_089df83c(param_1,"mat_context00",uVar1);
  FUN_089df83c(param_1,"mat_context01",uVar1);
  iVar3 = 0;
  iVar2 = param_1;
  do {
    *(undefined4 *)(iVar2 + 0x7f0) = 0;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 3);
  iVar2 = FUN_0889da6c();
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0x3d8f5c29;
    *(undefined4 *)(param_1 + 100) = 0x3ca3d70a;
    *(undefined4 *)(param_1 + 0x68) = 0x3e2e147b;
    *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x70) = 0x3e19999a;
    *(undefined4 *)(param_1 + 0x74) = 0x3e4ccccd;
    *(undefined4 *)(param_1 + 0x78) = 0x3e4ccccd;
    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  }
  return;
}

