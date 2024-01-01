#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089c30a0(int param_1)

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
    FUN_089bb5dc(iVar2,"COSoundBGM",1);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 4) = iVar3;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined *)(param_1 + 0x14) = 1;
  *(undefined *)(param_1 + 0x15) = 0;
  *(undefined *)(param_1 + 0x16) = 0;
  *(undefined *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined *)(param_1 + 0x18) = 0;
  *(undefined *)(param_1 + 0x19) = 0;
  memset_jak(param_1 + 0x2c,0,0x80);
  FUN_089c323c(param_1,1);
  *(undefined *)(param_1 + 0x1a) = 1;
  *(undefined *)(param_1 + 0x1b) = 0;
  *(undefined *)(param_1 + 0x1c) = 0;
  *(undefined *)(param_1 + 0x1d) = 1;
  *(undefined *)(param_1 + 0xc4) = 0;
  *(undefined *)(param_1 + 0xc5) = 0;
  *(undefined *)(param_1 + 0xc6) = 1;
  *(undefined *)(param_1 + 199) = 0;
  *(undefined *)(param_1 + 200) = 0;
  *(undefined *)(param_1 + 0xc9) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  return param_1;
}

