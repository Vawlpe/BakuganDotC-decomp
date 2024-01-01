#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088ab2d0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_089de2e4(param_1,(&PTR_DAT_08a8fe48)[param_2 * 3],0x200);
  *(undefined **)(param_1 + 0x14) = &DAT_08af2904;
  *(int *)(param_1 + 0x218) = param_2;
  uVar1 = FUN_088a94b4(param_2);
  *(undefined4 *)(param_1 + 0x208) = uVar1;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  FUN_088aa3dc(param_1);
  FUN_088aad68(param_1,param_3);
  FUN_088aa39c(param_1);
  iVar2 = FUN_0889da6c();
  if (iVar2 != 0) {
    FUN_0889db18(param_1);
  }
  return param_1;
}

