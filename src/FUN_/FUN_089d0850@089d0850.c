#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d0850(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x148) = 0;
  if ((*(ushort *)(param_1 + 0x72) & 0x800) != 0) {
    iVar2 = 0;
    if (*(char *)(param_1 + 0x50) < '\x01') {
      uVar3 = *(uint *)(param_1 + 0x48);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x148);
      while( true ) {
        iVar2 = iVar2 + 1;
        *(int *)(param_1 + 0x148) = iVar4 + 1;
        if (*(char *)(param_1 + 0x50) <= iVar2) break;
        iVar4 = *(int *)(param_1 + 0x148);
      }
      uVar3 = *(uint *)(param_1 + 0x48);
    }
    uVar1 = *(uint *)(param_1 + 0x44);
    if (uVar3 < *(uint *)(param_1 + 0x44)) {
      uVar1 = uVar3;
    }
    *(uint *)(param_1 + 300) = uVar1;
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 8));
  return;
}

