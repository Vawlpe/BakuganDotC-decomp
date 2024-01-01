#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08847470(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x2a0) = param_2;
  iVar1 = *(int *)(param_2 + 8) * 0x1c;
  *(undefined **)(param_1 + 0x400) = &UNK_08a65cc0 + iVar1;
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(&DAT_08a65ccc + iVar1);
  return;
}

