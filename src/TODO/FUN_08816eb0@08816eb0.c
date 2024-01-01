#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08816eb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  iVar1 = FUN_08816e58(param_1,param_1,0xffffffff);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x44) != '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
    }
    return uVar2;
  }
  return *(undefined4 *)(param_1 + 0x20);
}

