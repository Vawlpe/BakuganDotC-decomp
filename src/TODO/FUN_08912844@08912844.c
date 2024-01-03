#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08912844(int param_1)

{
  undefined4 uVar1;
  undefined *ptr;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af499c;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  ptr = (undefined *)FUN_089d7d74(4,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined **)(param_1 + 0x50) = ptr;
  memset_jak(ptr,0,4);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x19c,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  FUN_08909df4(param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x13dc) = 0;
  *(undefined4 *)(param_1 + 0x13e0) = 0;
  *(undefined4 *)(param_1 + 0x1680) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1684) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1688) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x168c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1690) = 0;
  *(undefined4 *)(param_1 + 0x1694) = 0;
  *(undefined4 *)(param_1 + 0x1698) = 0;
  *(undefined4 *)(param_1 + 0x169c) = 0;
  *(undefined4 *)(param_1 + 0x16a0) = 0;
  *(undefined4 *)(param_1 + 0x16a4) = 0;
  piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
  uVar1 = *(undefined4 *)(*piVar3 + 0x48c);
  *(undefined4 *)(param_1 + 0x16ac) = 0;
  *(undefined4 *)(param_1 + 0x16a8) = uVar1;
  *(undefined4 *)(param_1 + 0x16b0) = 0;
  iVar4 = FUN_089edb80();
  *(undefined4 *)(iVar4 + 0x10) = 0x469c4000;
  iVar4 = FUN_08818afc(1);
  *(int *)(param_1 + 0x13e4) = iVar4;
  *(undefined4 *)(iVar4 + 0xe0) = 0x43680000;
  *(undefined4 *)(*(int *)(param_1 + 0x13e4) + 0xa8) = 0x3f333333;
  *(undefined4 *)(*(int *)(param_1 + 0x13e4) + 0xdc) = 0x3ed70a3d;
  strcpy(param_1 + 0x13e8,&DAT_08a9bc58);
  return param_1;
}

