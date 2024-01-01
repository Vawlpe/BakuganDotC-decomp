#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089ee4b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_t1;
  undefined4 in_t2;
  undefined4 in_t3;
  int iVar4;
  undefined4 param_9;
  
  iVar4 = -1;
  if ((((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x1c) < 0x20)) &&
      (iVar1 = FUN_089f7850(param_2), iVar1 != 0)) &&
     (iVar1 = FUN_08819f54(*(undefined4 *)(param_1 + 0x10),iVar1,in_t1,in_t2,in_t3,param_9),
     iVar1 != 0)) {
    piVar3 = *(int **)(param_1 + 0x14);
    iVar2 = 0;
    do {
      if (*piVar3 == 0) {
        *piVar3 = iVar1;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        iVar4 = iVar2;
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 0x20);
    if (iVar4 < 0) {
      FUN_089f5124(*(undefined4 *)(param_1 + 0x10),iVar1);
    }
  }
  return iVar4;
}

