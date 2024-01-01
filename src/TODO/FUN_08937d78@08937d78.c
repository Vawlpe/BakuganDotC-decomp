#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08937d78(int param_1,undefined param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af4b24;
  *(undefined *)(param_1 + 0x5ee) = param_2;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x94,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  FUN_08909df4(param_1,1);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  iVar3 = FUN_089edb58();
  if (iVar3 == 0) {
    FUN_089eda24(0);
    iVar3 = FUN_089edb80();
    *(undefined4 *)(iVar3 + 0x10) = 0x469c4000;
    iVar3 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined *)(param_1 + 0x5ed) = *(undefined *)(iVar3 + 0x3c);
  *(undefined *)(iVar3 + 0x3c) = 1;
  *(undefined *)(param_1 + 0x5ec) = 0;
  iVar4 = 0;
  iVar3 = param_1;
  do {
    *(undefined4 *)(iVar3 + 0x638) = 0;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 2);
  *(undefined4 *)(param_1 + 0x794) = 0;
  *(undefined4 *)(param_1 + 0x798) = 0;
  uVar1 = DAT_08ac5c90;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  *(undefined4 *)(param_1 + 0x79c) = uVar1;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  memset_jak((undefined *)(param_1 + 0x7a8),0,0x40);
  *(undefined4 *)(param_1 + 0x7e8) = 0;
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  uVar1 = FUN_0880d0ac(uVar1,0x14);
  *(undefined4 *)(param_1 + 0x7ec) = uVar1;
  if (*(char *)(param_1 + 0x5ee) == '\x01') {
    *(int *)(param_1 + 0x7ec) = *(int *)(param_1 + 0x7ec) + -1;
  }
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  *(undefined *)(param_1 + 0x7f8) = 0;
  *(undefined4 *)(param_1 + 0x7f4) = 0;
  iVar3 = FUN_089bfa40(500);
  if (iVar3 != 0) {
    FUN_089bf2f0(iVar3,1);
  }
  return param_1;
}

