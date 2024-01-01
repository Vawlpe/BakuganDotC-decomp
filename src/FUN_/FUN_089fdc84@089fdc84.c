#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089fdc84(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_089d8b38(param_1,0);
  *(undefined *)(param_1 + 0x26) = param_5;
  *(undefined **)(param_1 + 0x20) = &DAT_08af58fc;
  *(undefined *)(param_1 + 0x24) = 0;
  *(undefined *)(param_1 + 0x25) = 0;
  *(undefined *)(param_1 + 0x27) = *(undefined *)(param_1 + 0x26);
  *(undefined4 *)(param_1 + 0x1064) = param_2;
  uVar1 = FUN_089be500(param_2);
  *(undefined4 *)(param_1 + 0x106c) = uVar1;
  if ((param_4 & 0xfffffffe) == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x106c);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(param_4 == 1);
    param_4 = FUN_089d7d74(uVar3,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
  }
  *(uint *)(param_1 + 0x1068) = param_4;
  FUN_089be598(param_1 + 0x28,param_2,param_4,0);
  iVar4 = param_1 + 0x1078;
  iVar2 = 0;
  if (iVar4 != 0) {
    FUN_089bb5dc(iVar4,"Mutex_CODecode",1);
    iVar2 = iVar4;
  }
  *(int *)(param_1 + 0x1074) = iVar2;
  return param_1;
}

