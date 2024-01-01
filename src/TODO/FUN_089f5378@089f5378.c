#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089f5378(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = 0;
  if (iVar2 <= *(int *)(param_1 + 0x14)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    bVar1 = 0 < iVar2;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 8) + 1;
    bVar1 = iVar3 < iVar2;
  }
  if (!bVar1) {
    iVar3 = 0;
  }
  if (iVar3 < iVar2) {
    iVar4 = *(int *)(param_1 + 8) + iVar3 * 0x160;
    do {
      iVar3 = iVar3 + 1;
      if ((*(uint *)(iVar4 + 0x124) & 2) == 0) {
        *(int *)(param_1 + 0x10) = iVar4;
        FUN_089d882c(iVar4,0);
        *(uint *)(*(int *)(param_1 + 0x10) + 0x124) =
             *(uint *)(*(int *)(param_1 + 0x10) + 0x124) | 2;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        return *(undefined4 *)(param_1 + 0x10);
      }
      iVar4 = iVar4 + 0x160;
    } while (iVar3 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 0;
}

