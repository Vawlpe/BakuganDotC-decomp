#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089a3a3c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *ptr;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af50fc;
  FUN_089e2910(param_1 + 0x6b0);
  iVar1 = FUN_0881b22c();
  if (iVar1 != 0) {
    uVar2 = DONE_GetPtr_DAT_08AB0300();
    FUN_0881bbd8(uVar2);
  }
  iVar1 = DONE_NotZero_DAT_08AAC9E0();
  if (iVar1 != 0) {
    uVar2 = DONE_Get_DAT_08AAC9E0();
    FUN_0880d808(uVar2,0x7eff);
  }
  FUN_0880d308();
  FUN_0880d360(0xffffffff);
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar3 = FUN_089d7d74(0x58,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  ptr = (undefined *)FUN_089d7d74(8,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  DAT_08ac0e60 = ptr;
  memset_jak(ptr,0,8);
  FUN_08909df4(param_1,1);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  iVar1 = FUN_089edb58();
  if (iVar1 == 0) {
    FUN_089eda24(0);
    iVar1 = FUN_089edb80();
    *(undefined4 *)(iVar1 + 0x10) = 0x469c4000;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *DAT_08ac5934 = 0;
  DAT_08ac5934[1] = 0;
  DAT_08ac5934[2] = 0;
  DAT_08ac5934[3] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  FUN_0890a560(param_1);
  memset_jak((undefined *)(param_1 + 0x68c),0,0x14);
  memset_jak((undefined *)(param_1 + 0x6a0),0,4);
  memset_jak((undefined *)(param_1 + 0x680),0,0xc);
  memset_jak((undefined *)(param_1 + 0xe30),0,0xc);
  *(undefined *)(param_1 + 0xe2c) = 0;
  FUN_088c2ae0();
  iVar1 = DONE_NotZero_DAT_08AAC9E0();
  if (iVar1 != 0) {
    uVar2 = DONE_Get_DAT_08AAC9E0(param_1);
    FUN_0880cd9c(uVar2,0x13,0);
    uVar2 = DONE_Get_DAT_08AAC9E0();
    FUN_0880d7a4(uVar2);
  }
  FUN_0890a598(param_1,0);
  *(undefined *)(param_1 + 0x9c0) = 0;
  *(undefined *)(param_1 + 0xe2d) = 0;
  FUN_089a3928();
  return param_1;
}

