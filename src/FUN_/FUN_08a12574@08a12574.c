#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a12574(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != 0) {
    FUN_08a12614(*(undefined4 *)(param_1 + 4),1);
    iVar5 = (uint)*(ushort *)(param_1 + 0x24) * (uint)*(ushort *)(param_1 + 0x26);
    iVar4 = 0;
    if (iVar5 < 1) {
      uVar3 = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x20);
      while( true ) {
        iVar1 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        thunk_FUN_08a1078c(1,*(undefined4 *)(iVar1 + iVar2));
        if (iVar5 == iVar4) break;
        iVar2 = *(int *)(param_1 + 0x20);
      }
      uVar3 = *(undefined4 *)(param_1 + 0x20);
    }
    thunk_FUN_08a1078c(0,uVar3);
    thunk_FUN_08a1078c(0,*(undefined4 *)(param_1 + 0x2c));
  }
  return param_1;
}

