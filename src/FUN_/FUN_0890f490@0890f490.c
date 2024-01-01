#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0890f490(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af48bc;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x54,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined *)(param_1 + 0x78) = *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c);
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  iVar3 = FUN_089edb80();
  *(undefined4 *)(iVar3 + 0x10) = 0x41200000;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0xf0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar4 != 0) {
    FUN_08817708(iVar4,0,&PTR_s_wd_font16_08ac1090);
    iVar3 = iVar4;
  }
  *(int *)(param_1 + 0x7c) = iVar3;
  *(undefined4 *)(iVar3 + 0xa0) = 0x41800000;
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0xa4) = 0x41800000;
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x94) = 0x41800000;
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x98) = 0x41800000;
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x9c) = 0xc0800000;
  *(undefined **)(*(int *)(param_1 + 0x7c) + 0xd8) = &DAT_08aaff9c;
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0xa8) = 0x3f400000;
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0xe0) = 0x43780000;
  strcpy(param_1 + 0x80,&DAT_08a9b5bc);
  strcpy(param_1 + 0xc0,&DAT_08a9b5bc);
  return param_1;
}

