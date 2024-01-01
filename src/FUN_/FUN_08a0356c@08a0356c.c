#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a0356c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_08af11dc + 0xc) + 0x10;
  *param_2 = *(int *)(DAT_08af11dc + 4) + *(int *)(DAT_08af11dc + 0xc);
  iVar2 = *(int *)(DAT_08af11dc + 4);
  *(int *)(DAT_08af11dc + 0xc) = iVar1 + param_1;
  *(int *)*param_2 = DAT_08af11e0;
  *(int *)(*param_2 + 8) = iVar2 + iVar1;
  DAT_08af11e0 = *param_2;
  *(int *)(DAT_08af11e0 + 4) = param_1;
  *(undefined *)(*param_2 + 0xc) = 0;
  return;
}

