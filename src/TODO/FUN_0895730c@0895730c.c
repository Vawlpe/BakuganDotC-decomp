#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895730c(int param_1,char param_2)

{
  undefined *ptr;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  ptr = (undefined *)(param_1 + 0x5200);
  iVar1 = param_1;
  do {
    memset_jak(ptr,0,0x28);
    *(undefined4 *)(iVar1 + 0x5200) = 0;
    *(undefined4 *)(iVar1 + 0x520c) = 100;
    *(undefined4 *)(iVar1 + 0x5210) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x28;
    ptr = ptr + 0x28;
  } while (iVar2 < 4);
  if (param_2 == '\0') {
    FUN_089572b4(param_1);
    *(byte *)(param_1 + 0x4ce1) = *(byte *)(param_1 + 0x4ce1) | 6;
  }
  return;
}

