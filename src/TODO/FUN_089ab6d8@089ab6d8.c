#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ab6d8(int param_1)

{
  undefined uVar1;
  int *piVar2;
  
  piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
  uVar1 = FUN_089ab694(param_1,0,*(undefined *)(*piVar2 + 0x6a8));
  *(undefined *)(param_1 + 0xbb0) = uVar1;
  piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
  uVar1 = FUN_089ab694(param_1,0,*(undefined *)(*piVar2 + 0x6aa));
  *(undefined *)(param_1 + 0xbb1) = uVar1;
  piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
  uVar1 = FUN_089ab694(param_1,0,*(undefined *)(*piVar2 + 0x6a9));
  *(undefined *)(param_1 + 0xbb2) = uVar1;
  return;
}

