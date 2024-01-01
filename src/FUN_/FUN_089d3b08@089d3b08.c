#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d3b08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x38,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089bb5dc(iVar2,"COPSPNet",2);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x30) = iVar3;
  FUN_089d4980(param_1);
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined *)(param_1 + 0x1c) = 0;
  *(undefined *)(param_1 + 0x1d) = 0;
  *(undefined *)(param_1 + 0x1e) = 0;
  *(undefined *)(param_1 + 0x1f) = 0;
  FUN_089d4a08(param_1,0);
  FUN_089d4aa0(param_1,0);
  strcpy(DAT_08ac598c + 0x1f0,&DAT_08aa20a8);
  *(undefined *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x18) = 3;
  DAT_08ac5994 = 0;
  *(undefined *)(param_1 + 0x21) = 0;
  *(undefined *)(param_1 + 0x58) = 0;
  *(undefined *)(param_1 + 0x59) = 0;
  return param_1;
}

