#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a14624(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_80 [112];
  
  FUN_08a12a64(auStack_80);
  FUN_08a12d94(auStack_80,0,0x10,param_1 * 0x30);
  iVar1 = FUN_08a136f0(auStack_80);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_08a13420(auStack_80,0,0x10,0x30,param_1,&LAB_08a142b0);
    FUN_08a12fb4(auStack_80);
  }
  return uVar2;
}

