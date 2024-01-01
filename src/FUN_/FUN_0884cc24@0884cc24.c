#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884cc24(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0880dfd4(0xffffffff);
  iVar2 = FUN_08900014(uVar1);
  *(int *)(iVar2 + 0xf0) = param_1 + 0x468;
  *(int *)(iVar2 + 0x4e0) = param_1 + 0x474;
  DAT_08ac601c = 0;
  return;
}

