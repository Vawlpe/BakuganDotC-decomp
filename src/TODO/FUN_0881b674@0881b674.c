#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881b674(int param_1,undefined *param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  int iVar5;
  
  FUN_0881b634(param_1,0x8000000);
  if (-1 < *(int *)(param_1 + 0x10)) {
    iVar5 = *(int *)(param_1 + 0xc0);
    if (iVar5 < 1) {
      if (iVar5 < 0) {
        return;
      }
    }
    else if (iVar5 != 6) {
      return;
    }
    memset_jak((undefined *)(param_1 + 0xc4),0,0x14);
    memset_jak((undefined *)(param_1 + 0xd8),0,5);
    uVar1 = param_2[1];
    iVar5 = param_1 + *(int *)(param_1 + 0x10) * 5;
    uVar2 = param_2[2];
    uVar4 = param_2[4];
    *(undefined *)(iVar5 + 0xc4) = *param_2;
    uVar3 = param_2[3];
    *(undefined *)(iVar5 + 0xc5) = uVar1;
    *(undefined *)(iVar5 + 0xc6) = uVar2;
    *(undefined *)(iVar5 + 199) = uVar3;
    *(undefined *)(iVar5 + 200) = uVar4;
    *(undefined4 *)(param_1 + 0xc0) = 1;
  }
  return;
}

