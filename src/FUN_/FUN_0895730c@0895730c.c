#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895730c(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = param_1 + 0x5200;
  iVar2 = param_1;
  do {
    memset_jak(iVar1,0,0x28);
    *(undefined4 *)(iVar2 + 0x5200) = 0;
    *(undefined4 *)(iVar2 + 0x520c) = 100;
    *(undefined4 *)(iVar2 + 0x5210) = 0;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x28;
    iVar1 = iVar1 + 0x28;
  } while (iVar3 < 4);
  if (param_2 == '\0') {
    FUN_089572b4(param_1);
    *(byte *)(param_1 + 0x4ce1) = *(byte *)(param_1 + 0x4ce1) | 6;
  }
  return;
}

