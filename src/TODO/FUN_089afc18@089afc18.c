#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089afc18(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af516c;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x30,0,0);
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
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *DAT_08ac5934 = 0;
  DAT_08ac5934[1] = 0;
  DAT_08ac5934[2] = 0;
  DAT_08ac5934[3] = 0x3f800000;
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  iVar3 = FUN_0881b22c();
  if (iVar3 != 0) {
    uVar1 = _DONE_GetPtr_DAT_08AB0300();
    FUN_0881bbd8(uVar1);
  }
  iVar3 = _DONE_NotZero_DAT_08AAC9E0();
  if (iVar3 != 0) {
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880d808(uVar1,0x7eff);
  }
  FUN_0880d308();
  memset_jak((undefined *)(param_1 + 0x9b0),0,0xc);
  DAT_08ac0e70 = 1;
  return param_1;
}

