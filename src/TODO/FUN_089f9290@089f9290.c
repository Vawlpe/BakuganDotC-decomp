#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_089f9290(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_820 [512];
  
  piVar2 = local_820;
  piVar4 = local_820;
  iVar3 = 0;
  for (iVar1 = *(int *)(param_1 + 0x24); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    *(undefined4 *)((int)piVar2 + 4) = *(undefined4 *)(iVar1 + 0xe8);
    local_820[iVar3 * 2] = iVar1;
    iVar3 = iVar3 + 1;
    piVar2 = (int *)((int)piVar2 + 8);
  }
  if (0 < iVar3) {
    if (1 < iVar3) {
      FUN_089bf03c(local_820,iVar3);
    }
    iVar1 = 0;
    if (0 < iVar3) {
      do {
        param_2 = FUN_08a01b50(*piVar4,param_2,param_3,param_4,param_5);
        iVar1 = iVar1 + 1;
        piVar4 = piVar4 + 2;
      } while (iVar1 < iVar3);
    }
  }
  return param_2;
}

