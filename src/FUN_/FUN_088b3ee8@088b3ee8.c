#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b3ee8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0884b248();
  if ((iVar1 != 0) && (iVar1 = FUN_089c9b48(5,DAT_08ac58c8), iVar1 != 0)) {
    *(float *)(param_4 + 0x34) = *(float *)(param_4 + 0x34) + 300.0;
    uVar2 = FUN_0884b268();
    FUN_0884dcb0(param_1,param_2,param_3,uVar2,param_4 + 0x30,0,2,param_4 + 0x40);
    *(undefined *)(param_4 + 0x88) = 1;
    *(undefined4 *)(param_4 + 0x80) = 100;
  }
  return;
}

