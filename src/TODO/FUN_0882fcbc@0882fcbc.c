#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0882fcbc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,0x1b);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  else if (5 < iVar2) {
    iVar2 = 5;
  }
  uVar1 = 0;
  if ((*(int *)(DAT_08ac58c4 + 0x20) == 2) && (2 < iVar2)) {
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0xa1c) = 1;
  }
  return uVar1;
}

