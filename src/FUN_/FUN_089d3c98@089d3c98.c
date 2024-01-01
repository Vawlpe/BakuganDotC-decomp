#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d3c98(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1 << (param_2 & 0x1f);
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = param_3;
    iVar1 = FUN_089d217c();
    if (iVar1 != 0) {
      uVar2 = FUN_089d21a4();
      iVar1 = FUN_089d2600(uVar2,param_3);
      if (iVar1 == 0) {
        uVar2 = FUN_089d21a4();
        FUN_089d23f0(uVar2,param_3);
        return;
      }
    }
  }
  else {
    if (param_2 == 1) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb;
      return;
    }
    if (param_2 == 2) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffd;
      return;
    }
    if ((param_2 != 3) && (param_2 == 4)) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff9;
    }
  }
  return;
}

