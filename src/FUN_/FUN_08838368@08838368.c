#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08838368(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_08ac58c4 + 4);
  if (iVar1 < 6) {
    if (3 < iVar1) {
      if (iVar1 < 5) {
        FUN_08837cf8(param_1,0x16);
      }
      else {
        FUN_08837ed4(param_1,param_2,0x17);
      }
    }
  }
  else if (iVar1 == 0x24) {
    FUN_08837f24(param_1,param_2,0x18);
    FUN_088380c8(param_1,param_2,0x19);
    FUN_088381d8(param_1,param_2,0x1a);
  }
  return;
}

